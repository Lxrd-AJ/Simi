#include "simi/ronin.h"
#include <iostream>
#include <fstream>
#include <string>

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

	return 0;
}
