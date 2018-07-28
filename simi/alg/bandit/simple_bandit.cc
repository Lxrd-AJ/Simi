#include "simi/alg/bandit/simple_bandit.h"
#include "simi/ops/argmax/argmax.h"
#include "simi/ops/random/random.h"
#include <Eigen/Dense>
#include <array>
#include <vector>
#include <functional>

namespace simi{ namespace alg {

    Eigen::VectorXd simple_bandit(const int k,const int num_steps,std::function<double(int)> reward, const float eps){
        Eigen::VectorXd q_est = Eigen::VectorXd::Constant(k,0);
        std::array<int,k> num;
        num.fill(0); 

        for(size_t i = 0; i < num_steps; ++i){
            int choice = ops::random_choice(std::vector<float>(eps, 1-eps));
            int action;
            if(choice == 0){ //choose random action with probability epsilon 
                std::vector<float> probs(k,0.5);
                action = ops::random_choice(probs);
            }else{ //choose action with probability 1 - epsilon
                action = ops::argmax(q_est);
            }
            double r = reward(action);
            num[action] += 1; //static_cast<double>(fValue);
            q_est(action) = q_est(action) + ((1/num[action]) * (r - q_est(action)));
        }

        return q_est;
    }
}}