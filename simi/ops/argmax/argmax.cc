#include "simi/ops/argmax/argmax.h"
#include <Eigen/Dense>

namespace simi{ namespace ops {
    int argmax(Eigen::VectorXd estimates){
        int index;
        double max = estimates.maxCoeff(&index);
        return index;
    }
}}