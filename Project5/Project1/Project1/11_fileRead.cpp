#include<iostream>
#include<fstream>


int main() {

	std::string fp = "SEOS0230.20n";

	std::string line;

	std::ifstream input_file(fp);
	if (!input_file.is_open()) {
		std::cout << "error";
		return EXIT_FAILURE;
	}

	return 0;
}