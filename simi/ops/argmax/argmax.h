#ifndef ARGMAX_H_
#define ARGMAX_H_

#include <Eigen/Dense>

namespace simi{ namespace ops{
    
    int argmax(Eigen::VectorXd estimates);
}} // sim

#endif