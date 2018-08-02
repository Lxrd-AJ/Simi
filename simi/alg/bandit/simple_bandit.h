#ifndef SIMPLE_BANDIT_H
#define SIMPLE_BANDIT_H

#include <functional>
#include <Eigen/Dense>

/**
 * @brief Simple bandit algorithm using sample average incremental updates and e-greedy action
 * selection
 * @param reward: Reward function returns the reward for a given action index 
 * @param k: number of armed-bandits
 */
namespace simi{ namespace alg{
    Eigen::VectorXd simple_bandit(const int k, const int num_steps, std::function<double(int)> reward, const float eps);
}}
#endif