#include <iostream>
#include <vector>


void print_v(std::vector<int> vec){
	for(auto i : vec){
		printf("%d ", vec[i-1]);
	}
}


void print_m(std::vector<std::vector<int>> mat){
	printf("[\n");
	for(int i = 0; i < mat.size(); i++){
		for(int j = 0; j < mat[i].size(); j++){
			printf(" %d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("]\n");
}

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


int main(){
	// std::string input = ""; // na potem -> dodac dynamiczne dodawanie macierzy

	std::vector<int> vec1 = {1, 2, 3};
	std::vector<int> vec2 = {4, 5, 6};
	std::vector<int> vec3 = {7, 8, 9};
	std::vector<std::vector<int>> mat = {vec1, vec2, vec3};

	// std::vector<int> v1 = {1, 2};
	// std::vector<int> v2 = {3, 4};
	// std::vector<std::vector<int>> m = {v1, v2};

	// print_m(mat);
	// print_m(m);
	// print_m({{1, 2, 3}, {4, 5, 6}});

	// print(v1);
	// print(v2);
	// print(m);
	// print(vec1);
	// print(vec2);
	print(mat);
	print({{1,2}, {3,4}});

	// std::cin >> input;
	// printf(" > %s\n", input.c_str());

	return 0;
}
