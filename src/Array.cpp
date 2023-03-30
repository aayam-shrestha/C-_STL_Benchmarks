//Array
#include <stdio.h>
#include <iostream>
#include <array>
#include<chrono>
#include<fstream>

//Append
int append(int length, std::array<int, 1000> arr) {
	int num;
	std::cout << "\nCalling Append\n" << std::endl;
	std::cout << "Please enter an integer to append to the aray" << std::endl;
	std::cin >> num;    

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	arr[length++] = num;

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Prepend
int prepend(int length, std::array<int, 1000> arr) {
	int input;
	std::cout << "\nCalling Prepend\n" << std::endl;
	std::cout << "Please enter any integer to prepend to the array ." << std::endl;
	std::cin >> input;     
	

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	length++;
	for (int i = length; i >= 1; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = input;

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove from end
int remove_from_end(int length, std::array<int, 1000> arr) {

	std::cout << "\nCalling Remove from end\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	arr[length - 1] = 0;

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	for (int i = 0; i < length-1; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove from beginning
int remove_from_beginning(int length, std::array<int, 1000> arr) {
	
	std::cout << "\nCalling Remove from beginning\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	for (int i = 0; i <= length; i++) {
		arr[i] = arr[i + 1];
	}

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	for (int i = 0; i < length - 1; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Empty
int empty(std::array<int, 1000> arr) {
	
	std::cout << "\nCalling empty\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	arr.fill(0);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Swap
int swap(int length, std::array<int, 1000> arr) {

	std::cout << "\nCalling swap\n" << std::endl;
	std::array<int,1000>::iterator it;

	std::array<int, 1000> new_arr;		//creating new array
	for (int i=0; i<1000; i++)
	{
		new_arr[i] = 1;
	}
	
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	arr.swap(new_arr);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Insert
int insert(int length, std::array<int, 1000> arr) {

	std::cout << "\nCalling insert\n" << std::endl;
	int input;
	int pos;
	std::cout << "Please enter an integer to insert" << std::endl;
	std::cin >> input;  
	std::cout << "Please enter the position where you want to insert it" << std::endl;
	std::cin >> pos;   

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	length++;
	for (int i = length; i >= pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos - 1] = input;

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove duplicates
int remove_duplicates(int length, std::array<int, 1000> arr) {

	std::cout << "\nCalling Remove Duplicate\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (arr[i] == arr[j]) {
				for (int k = j; k < length; k++) {
					arr[k] = arr[k + 1];
				}
			}
		}
	}

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Reverse
int reverse(int length, std::array<int, 1000> arr) {

	std::cout << "\nCalling Reverse\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	std::array<int, 1000> arr2;  //Creating another array
	int index = 0;
	for (int i = length - 1; i >= 0; i--) {
		arr2[index] = arr[i];
		index++;
	}
	for (int i = 0; i < length; i++) {
		arr[i] = arr2[i];
	}

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}


int main()
{
	int var1 = 5;

	std::ofstream my_file;				//declaring my_file (an object of type ofstream)
	std::string file_name = "array.csv"; //setting filename

	my_file.open(file_name.c_str());	//opening the file
	my_file << "Size of container , Append, Prepend, Remove from end, Remove from beginning, Empty, Insert, Remove duplicates, Reverse, Swap" << std::endl;

	for (int i = 100; i <= 1000; i += 100) {

		std::array<int, 1000> arr1;      //Initializing array
		for (int j = 0; j < i ; j++) {	//Populating Array
			arr1[j] = j+1;
		}

		my_file << i << ", " << append(i, arr1);		//Append
		my_file << ", " << prepend(i, arr1);			//Prepend
		my_file << ", " << remove_from_end(i, arr1);		//Remove from end
		my_file << ", " << remove_from_beginning(i, arr1);	//Remove from beginning
		my_file << ", " << empty(arr1);					//Empty
		my_file << ", " << insert(i, arr1);				//Insert
		my_file << ", " << remove_duplicates(i, arr1);	//Remove duplicates
		my_file << ", " << reverse(i, arr1);			//Reverse
		my_file << ", " << swap(i, arr1) << std::endl;	//Swap
	}
	return 0;
}