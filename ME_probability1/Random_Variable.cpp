#include "Random_Variable.h"
/*
void Random_Variable::set_parameter(double p){
    parameter = p;
    variance = 2 / (p * p);
}

void Random_Variable::generate_sample(int size){
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

double Random_Variable::get_sample_mean(){
    return sample_mean;
}

double Random_Variable::get_sample_variance(){
    return sample_variance;
}
*/
