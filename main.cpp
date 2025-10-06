#include <vector>
#include "print.cpp"


std::vector<int> add(const std::vector<int> &vec2, const std::vector<int> &vec1){
	std::vector<int> sum_v;

	if(vec1.size() == vec2.size()){
		sum_v.resize(vec1.size());

		for(size_t i = 0; i < vec1.size(); ++i){
			sum_v[i] = vec1[i] + vec2[i];
		}
	}else{
		std::cerr << "error: vectors have dirrent sizes\n";
	}

	return sum_v;
}


std::vector<std::vector<int>> add(const std::vector<std::vector<int>> &mat1, const std::vector<std::vector<int>> &mat2){
	std::vector<std::vector<int>> sum_v;

	if(mat1.size() == mat2.size()){
		sum_v.resize(mat1.size());
		
		for (size_t i = 0; i < mat1.size(); ++i) {
            if (mat1[i].size() == mat2[i].size()) {
                sum_v[i] = add(mat1[i], mat2[i]);
            } else {
                std::cerr << "error: rows have different sizes at index " << i << "\n";
            }
        }

	}else{
		std::cerr << "error: vectors have dirrent sizes\n";
	}

	return sum_v;
}


int main(){
	// std::string input = ""; // na potem -> dodac dynamiczne dodawanie macierzy

	std::vector<int> vec1 = {1, 2, 3};
	std::vector<int> vec2 = {4, 5, 6};
	std::vector<int> vec3 = {7, 8, 9};
	std::vector<std::vector<int>> mat = {vec1, vec2, vec3};
	std::vector<std::vector<int>> m = {vec1, vec2, vec3};

	// print(mat);
	// print({{1,2}, {3,4}, {5, 6}, {7, 8}});

	// std::cin >> input;
	// printf(" > %s\n", input.c_str());

	print(add({1, 2}, {3, 4}));
	print(add(vec1, vec2));
	print(add(mat, m));

	return 0;
}
