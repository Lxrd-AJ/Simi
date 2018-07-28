#include <random>
#include <vector>
#include "simi/ops/random/random_choice.h"

namespace simi{ namespace alg {
    int random_choice(std::vector<float> probs){
        std::default_random_engine generator;
        std::discrete_distribution<int> distribution(probs.begin(),probs.end());
        return distribution(generator);
    }
}}