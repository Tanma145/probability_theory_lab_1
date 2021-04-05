#pragma once
#include <valarray>
#include <random>
#include <ctime>
#include <algorithm>
#include <Eigen/Dense>

//� ������� ����� ����������� ����������� ������ �������������, �� �����, � ��� ������� ��������� ������ ��������
double task_inverse_probability(double x, double lambda) {
    double a = lambda / 2;
    if (0 <= x && x <= 1) {
        if (x <= 0.5)
            return log(2 * x) / lambda;
        else
            return -log(2 - 2 * x) / lambda;
    }
    else
        throw 0;
}

class Random_Variable
{
private:
    //������������� ��������� ��������� ��������
	//double (*const density)();
    double parameter;
	double mean;
	double variance;
    double median;

    //��������� �������
	std::vector<double> sample;
    double (* inverse_probability)(double, double);
	double sample_mean;     //���������� �������
	double sample_variance; //���������� ���������
    double sample_median;     //���������� ���������
    double sample_range;    //���������� ���������
public:
    Random_Variable() {
        inverse_probability = task_inverse_probability;

        parameter = 1;
        mean = 0;
        variance = 2;
        median = 0;

        sample_mean = 0;
        sample_variance = 0;
        sample_median = 0;
        sample_range = 0;
    }
    void set_parameter(double);
    void generate_sample(int);


    double get_mean();
    double get_variance();
    double get_median();

    double get_sample(int);
    double get_sample_mean();
    double get_sample_variance();
    double get_sample_median();
    double get_sample_range();
};
void Random_Variable::set_parameter(double p) {
    parameter = p;
    variance = 2 / (p * p);
}

void Random_Variable::generate_sample(int size) {
    sample.resize(size);
    std::mt19937 gen(time(0));
    std::uniform_real_distribution<> urd(0, 1);

    //���������� ������� � ����� ������� �������
    sample_mean = 0;
    for (int i = 0; i < size; i++) {
        double rnd = inverse_probability(urd(gen), parameter);
        sample[i] = rnd;
        sample_mean += rnd;
    }
    sample_mean /= size;

    //���������
    sample_variance = 0;
    for (int i = 0; i < size; i++) {
        double s = sample[i];
        sample_variance += (s - sample_mean) * (s - sample_mean);
    }
    sample_variance /= (size - 1);

    std::sort(sample.begin(), sample.end());

    //������� �������
    if (size % 2) {
        sample_median = 0.5 * (sample[size / 2] + sample[size / 2 + 1]);
    }
    else {
        sample_median = sample[size / 2 + 1];
    }

    //������ �������
    sample_range = sample[size - 1] - sample[0];
}

double Random_Variable::get_mean() {
    return mean;
}
double Random_Variable::get_variance() {
    return variance;
}
double Random_Variable::get_median() {
    return median;
}

double Random_Variable::get_sample(int i)
{
    return sample[i];
}
double Random_Variable::get_sample_mean() {
    return sample_mean;
}
double Random_Variable::get_sample_variance() {
    return sample_variance;
}
double Random_Variable::get_sample_median() {
    return sample_median;
}
double Random_Variable::get_sample_range() {
    return sample_range;
}