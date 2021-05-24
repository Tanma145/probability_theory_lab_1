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

    double inverse_probability(double);
    double probability_density(double);
    double cumulative_distribution_function(double);
    double sample_cumulative_distribution_function(double) const;
    double CDF_difference();

    void set_parameter(double);
    void generate_sample(int);
    void add_sample(double);
    void check_n_sort();


    double get_mean();
    double get_variance();
    double get_median();

    double get_sample(int);
    double get_sample_size();
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
inline double Random_Variable::sample_cumulative_distribution_function(double x) const{
    if (x < sample[0])
        return 0;
    if (x >= sample[sample.size() - 1])
        return 1;
    int L = 0;
    int R = sample.size() - 1;
    int m = 0.5 * (R + L);

    while (!(sample[m] <= x && x <= sample[m + 1])) {
        m = (L + R) / 2;
        if (x < sample[m])
            R = m - 1;
        else
            L = m + 1;
    }
    return (m + 1) / (double) sample.size();
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

inline double Random_Variable::probability_density(double x){
    return 0.5 * parameter * exp(- parameter * abs(x));
}

inline double Random_Variable::CDF_difference(){
    double max = 0;
    int n = sample.size();
    for (int i = 0; i < n; i ++) {
        double a = i / (double) n - cumulative_distribution_function(sample[i] + 0.0000001);
        double b = cumulative_distribution_function(sample[i]) - (i - 1) / (double)n;
        if (a > max) max = a;
        if (b > max) max = b;
    }
    return max;
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
    if (sample.size() != 1) {
        for (int i = 0; i < size; i++) {
            double s = sample[i];
            sample_variance += (s - sample_mean) * (s - sample_mean);
        }
        sample_variance /= (size - 1);
    }

    std::sort(sample.begin(), sample.end());

    //медиана выборки
    if (size % 2 == 0) {
        sample_median = 0.5 * (sample[size / 2 - 1] + sample[size / 2]);
    }
    else {
        sample_median = sample[size / 2];
    }

    //размах выборки
    sample_range = sample[size - 1] - sample[0];
}

inline void Random_Variable::add_sample(double a){
    sample.push_back(a);
}

inline void Random_Variable::check_n_sort(){

    int size = sample.size();
    //генерируем выборку и сразу считаем среднее
    sample_mean = 0;
    for (int i = 0; i < size; i++) {
        sample_mean += sample[i];
    }
    sample_mean /= size;

    //дисперсия
    sample_variance = 0;
    if (sample.size() != 1) {
        for (int i = 0; i < size; i++) {
            double s = sample[i];
            sample_variance += (s - sample_mean) * (s - sample_mean);
        }
        sample_variance /= (size - 1);
    }

    std::sort(sample.begin(), sample.end());

    //медиана выборки
    if (size % 2 == 0) {
        sample_median = 0.5 * (sample[size / 2 - 1] + sample[size / 2]);
    }
    else {
        sample_median = sample[size / 2];
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
inline double Random_Variable::get_sample_size(){
    return sample.size();
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