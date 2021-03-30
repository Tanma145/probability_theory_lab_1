#pragma once
#include <valarray>
#include <random>
#include <ctime>
#include <algorithm>

//я сначала хотел реализовать возможность менять распределение, но забил, а эта функция осталассь лежать отдельно
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
    //точные парамеиры случайной величины
	//double (*const density)();
    double parameter;
	double mean;
	double variance;

    //параметры выборки
	std::valarray<double> sample;
    double (* inverse_probability)(double, double);
	double sample_mean;
	double sample_variance;
public:
    Random_Variable() {
        inverse_probability = task_inverse_probability;
        parameter = 0;
        mean = 0;
        variance = 0;
        sample_mean = 0;
        sample_variance = 0;
    }
    void set_parameter(double);
    void generate_sample(int);
    double get_sample(int);
    double get_sample_mean();
    double get_sample_variance();
};
void Random_Variable::set_parameter(double p) {
    parameter = p;
    variance = 2 / (p * p);
}

void Random_Variable::generate_sample(int size) {
    sample.resize(size);
    std::mt19937 gen(time(0));
    std::uniform_real_distribution<> urd(0, 1);

    for (int i = 0; i < size; i++) {
        sample[i] = inverse_probability(urd(gen), parameter);
    }
    sample_mean = sample.sum() / size;

    for (int i = 0; i < size; i++) {
        sample_variance += (sample[i] - sample_mean) * (sample[i] - sample_mean);
    }
    sample_variance /= (size - 1);

    std::vector<double> vec(size);
    for (int i = 0; i < size; i++) {
        vec[i] = sample[i];
    }
    std::sort(vec.begin(), vec.end());
    for (int i = 0; i < size; i++) {
        sample[i] = vec[i];
    }
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


