#ifndef RANDOM_CHOICE_H_
#define RANDOM_CHOICE_H_

#include <vector>

namespace simi{ namespace ops{
    
    /**
     * @brief Makes a random choice based on the supplied probabilties e.g if supplied vector<float> arr{ 0.5, 0.3, 0.2 }. It could return either 0,1,2 as its index starts 
     * from zero
     * 
     * @param probabilities 
     * @return int 
     */
    int random_choice(std::vector<float> probabilities);

    /**
     * @brief Samples from the normal distribution with supplied mean and standard 
     * deviation (sd)
     * 
     * @param mean 
     * @param sd 
     * @return double 
     */
    double gaussian(float mean, float sd);    
}} 

#endif