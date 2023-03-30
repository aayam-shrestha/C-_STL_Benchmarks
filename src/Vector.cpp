//Vector
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include<fstream>
#include<chrono>

//Print vector
void print_vector(std::vector <int> vec) {
	std::vector <int>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

//Append
int append(std::vector <int> vec) {
	int input;
	std::cout << "\nCalling Append\n" << std::endl;
	std::cout << "Please enter an integer to append to the vector." << std::endl;
	std::cin >> input;   

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	vec.push_back(input);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_vector(vec);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Prepend
int prepend(std::vector <int> vec) {
	int input, count;
	std::cout << "\nCalling Prepend\n" << std::endl;
	std::cout << "Please enter an integer to prepend to the vector" << std::endl;
	std::cin >> input; 
	std::cout << "Please enter the number of integers to prepend to the vector" << std::endl;
	std::cin >> count;

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	vec.insert(vec.begin(), count, input);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_vector(vec);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove
int remove_from_end(std::vector <int> vec) {
	std::cout << "\nCalling Remove\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	vec.pop_back();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_vector(vec);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove from beginning
int remove_from_beginning(std::vector <int> vec) {
	
	std::cout << "\nCalling Remove from beginning\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	vec.erase(vec.begin());

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_vector(vec);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();

}

//Swap
int swap(std::vector <int> vec) {

	std::cout << "\nCalling Swap\n" << std::endl;
	std::vector<int> new_vec;

	for (int i = 0; i<vec.size(); i++)		//Creating new vector of equal size
	{
		new_vec.push_back(0);
	}

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	vec.swap(new_vec);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_vector(vec);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Empty
int empty(std::vector <int> vec) {
	std::cout << "\nCalling Empty\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	vec.clear();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_vector(vec);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Insert
int insert(std::vector <int> vec) {
	int pos;
	int input;
	int count;
	std::cout << "\nCalling Insert\n" << std::endl;
	std::cout << "Please enter an integer to insert: " << std::endl;
	std::cin >> input;     
	std::cout << "Please enter the position where you want to insert it: " << std::endl;
	std::cin >> pos; 
	std::cout << "Please enter the number of elements to insert:" << std::endl;
	std::cin >> count;
	
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	vec.insert(vec.begin() + (pos - 1), count, input);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_vector(vec);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove duplicates
int remove_duplicates(std::vector <int> vec) {

	std::cout << "\nCalling Remove duplicates\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < vec.size(); i++) {

		for (int j = i + 1; j < vec.size(); j++) {
			if (vec[j] == vec[i]) {
				vec.erase(vec.begin() + j);
			}
		}

	}

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_vector(vec);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Reverse
int reverse(std::vector <int> vec) {
	std::cout << "\nCalling Reverse\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	std::reverse(vec.begin(), vec.end());
	
	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_vector(vec);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();

}

int main()
{
	std::vector <int> vec1; //initializing vector

	std::ofstream my_file;				//declaring my_file (an object of type ofstream)
	std::string file_name = "vector.csv"; //setting filename

	my_file.open(file_name.c_str());	//opening the file
	my_file << "Size of container , Append, Prepend, Remove from end, Remove from beginning, Empty, Insert, Remove duplicates, Reverse, Swap" << std::endl;

	for (int i = 100; i <= 1000; i += 100) {
		std::vector <int> vec1;		//Initializing vector

		for (int j = 0; j < i; j++) {	//Populating vector
			vec1.push_back(j + 1);
		}

		my_file << i << ", " << append(vec1);		//Append
		my_file << ", " << prepend(vec1);			//Prepend
		my_file << ", " << remove_from_end(vec1);		//Remove from end
		my_file << ", " << remove_from_beginning(vec1);	//Remove from beginning
		my_file << ", " << empty(vec1);					//Empty
		my_file << ", " << insert(vec1);				//Insert
		my_file << ", " << remove_duplicates(vec1);	//Remove duplicates
		my_file << ", " << reverse(vec1);			//Reverse
		my_file << ", " << swap(vec1) << std::endl;	//Swap
	}
	return 0;
}