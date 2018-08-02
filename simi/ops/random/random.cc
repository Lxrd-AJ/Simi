#include <random>
#include <vector>
#include "simi/ops/random/random.h"

namespace simi{ namespace ops {
    int random_choice(std::vector<float> probs){
        std::default_random_engine generator;
        std::discrete_distribution<int> distribution(probs.begin(),probs.end());
        return distribution(generator);
    }

    double gaussian(float mean, float standard_deviation){
        std::default_random_engine generator;
        std::normal_distribution<double> distribution(mean,standard_deviation);
        return distribution(generator);
    }
}}