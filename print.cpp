#include <iostream>

void print(const std::vector<int> &vec){
	std::cout << "[ ";
	for(auto x : vec){
		std::cout << x << " ";
	}
	std::cout << "]\n";
}

void print(const std::vector<std::vector<int>> & mat){
	std::cout << "[\n";

	for(const auto  & row : mat){
		printf("  ");
		print(row);
	}

	std::cout << "]\n";
}