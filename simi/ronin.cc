#include "simi/ronin.h"
#include <ctime>
#include <iostream>

namespace simi {
	void print_localtime() {
		std::time_t result = std::time(nullptr);
		std::cout << std::asctime(std::localtime(&result));
		std::cout << std::endl << "Thank you!" << std::endl;
	}

	std::string hello_greet(const std::string message){
		return message;
	}
}