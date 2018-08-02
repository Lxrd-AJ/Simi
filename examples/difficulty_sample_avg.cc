#include "simi/ronin.h"
#include <iostream>
#include <fstream>
#include <string>
#include <functional>
#include <Eigen/Dense>

#include "simi/ops/random/random.h"

using namespace simi;

int main(int argc, char** argv) {
	std::string who = "world";
	if (argc > 1) {
	who = argv[1];
	}
	simi::print_localtime();

	std::ifstream file("data/test_data.txt");
	std::string message{ 
		std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>()
	};
	std::cout << "Contents of file:\n" << message << std::endl;


    int k = 10; //10 armed bandit
    //Set the true action values
    Eigen::VectorXd q_true(k); 
    for(size_t i = 0; i < k; ++i)
        q_true[i] = ops::gaussian(0,0.01);
    double avg_true_reward = q_true.mean();

    std::cout << "Average True Reward = " << avg_true_reward << std::endl;

    std::function<void(int,int)> stepper = [&](int step, int action){
        q_true = q_true.array() + ops::gaussian(0,0.01);
    };


	return 0;
}