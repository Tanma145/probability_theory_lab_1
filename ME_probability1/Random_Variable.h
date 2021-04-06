#pragma once
#include <valarray>
#include <random>
#include <ctime>
#include <algorithm>

class Random_Variable
{
private:
    //теоретические парамеиры случайной величины
	//double (*const density)();
    double parameter;
	double mean;
	double variance;
    double median;

    //параметры выборки
	std::vector<double> sample;
	double sample_mean;     //выборочное среднее
	double sample_variance; //выборочная дисперсия
    double sample_median;     //выборочная дисперсия
    double sample_range;    //выборочная дисперсия
public:
    Random_Variable() {
        parameter = 1;
        mean = 0;
        variance = 2;
        median = 0;

        sample_mean = 0;
        sample_variance = 0;
        sample_median = 0;
        sample_range = 0;
    }

    double cumulative_distribution_function(double);
    double sample_cumulative_distribution_function(double);
    double inverse_probability(double);

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
inline double Random_Variable::cumulative_distribution_function(double x)
{
    if (x <= 0)
        return 0.5 * exp(parameter * x);
    else
        return 1 - 0.5 * exp(-x * parameter);
}
inline double Random_Variable::sample_cumulative_distribution_function(double x){
    if (x < sample[0])
        return 0;
    if (x >= sample[sample.size() - 1])
        return 1;
    int n = sample.size() / 2;
    while (!(sample[n] <= x && x <= sample[n + 1])) {
        if (x < sample[n])
            n *= 0,5;
        else
            n +=  n / 2;
    }
    return (n + 1) / (double) sample.size();
}
inline double Random_Variable::inverse_probability(double x){
    double a = parameter / 2;
    if (0 <= x && x <= 1) {
        if (x <= 0.5)
            return log(2 * x) / parameter;
        else
            return -log(2 - 2 * x) / parameter;
    }
    else
        throw 0;
}

void Random_Variable::set_parameter(double p) {
    parameter = p;
    variance = 2 / (p * p);
}

void Random_Variable::generate_sample(int size) {
    sample.resize(size);
    std::mt19937 gen(time(0));
    std::uniform_real_distribution<> urd(0, 1);

    //генерируем выборку и сразу считаем среднее
    sample_mean = 0;
    for (int i = 0; i < size; i++) {
        double rnd = inverse_probability(urd(gen));
        sample[i] = rnd;
        sample_mean += rnd;
    }
    sample_mean /= size;

    //дисперсия
    sample_variance = 0;
    for (int i = 0; i < size; i++) {
        double s = sample[i];
        sample_variance += (s - sample_mean) * (s - sample_mean);
    }
    sample_variance /= (size - 1);

    std::sort(sample.begin(), sample.end());

    //медиана выборки
    if (size % 2) {
        sample_median = 0.5 * (sample[size / 2] + sample[size / 2 + 1]);
    }
    else {
        sample_median = sample[size / 2 + 1];
    }

    //размах выборки
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