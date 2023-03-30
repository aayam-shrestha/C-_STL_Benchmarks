#include<iostream>
#include<fstream>
#include<list>
#include<chrono>

//Input number
int input_num()
{
	int num;
	//std::cout << "Please enter an integer: ";
	std::cin >> num;
	std::cout << std::endl;
	return num;
}

//Print list
void print_list(std::list<int> my_list)
{
	std::list<int> ::iterator it;
	std::cout << "The list is: ";
	for (it = my_list.begin(); it != my_list.end(); it++)
		std::cout << "\t" << *it;
	std::cout << "\n";
}

//Append
int append_list(std::list<int> my_list)
{
	std::cout << "\nCalling Append\n" << std::endl;
	std::cout << "Please enter an integer to append: ";
	int num = input_num();

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.push_back(num);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_list(my_list);
	std::cout << "\nThe runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Prepend
int prepend_list(std::list<int> my_list)
{
	std::cout << "\nCalling Prepend\n" << std::endl;
	std::cout << "Please enter an integer to prepend: ";
	int num = input_num();

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.push_front(num);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove from end
int remove_end_list(std::list<int> my_list)
{
	std::cout << "\nCalling remove from end\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.pop_back();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove from beginning
int remove_begin_list(std::list<int> my_list)
{
	std::cout << "\nCalling remove from beginning\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.pop_front();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Empty
int empty_list(std::list<int> my_list)
{
	std::cout << "\nCalling empty list function\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.clear();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Insert
int insert_list(std::list<int> my_list)
{
	std::cout << "\nCalling Insert\n" << std::endl;

	std::cout << "Please enter an integer to insert: ";
	int num = input_num();

	std::cout << "Please enter the position where you want to insert it: ";
	int pos = input_num();

	std::cout << "Please enter the number of integers you want to insert: ";
	int count = input_num();

	std::list<int>::iterator it;
	it = my_list.begin();

	for (int i = 0; i < pos; i++)
		++it;

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.insert(it, num, count);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_list(my_list);
	std::cout << "\nThe runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Reverse
int reverse_list(std::list<int> my_list)
{
	print_list(my_list);
	std::cout << "\nCalling reverse\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.reverse();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove duplicates
int rem_duplicates_list(std::list<int> my_list)
{
	print_list(my_list);
	std::cout << "\nCalling remove duplicates\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.unique();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Swap
int swap(std::list<int> my_list)
{
	int count = 0;
	std::cout << "\nCalling swap\n" << std::endl;
	std::list<int> ::iterator it = my_list.begin();
	for (it = my_list.begin(); it != my_list.end(); it++)
		count += 1;

	std::list<int> new_list(count, 10);

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.swap(new_list);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

int main()
{
	std::ofstream my_file;				//declaring my_file (an object of type ofstream)
	std::string file_name = "list.csv"; //setting filename

	my_file.open(file_name.c_str());	//opening the file
	my_file << "Size of container , Append, Prepend, Remove from end, Remove from beginning, Empty, Insert, Remove duplicates, Reverse, Swap" << std::endl;

	for (int i = 100; i <= 1000; i += 100)
	{
		std::list <int> my_list;
		std::list<int> list2;
		for (int j = 1; j <= i; j++)
			my_list.push_back(j);

		//Calling functions and writing the runtime to the .csv file
		
		my_file << i << ", " << append_list(my_list);		//Append
		my_file << ", " << prepend_list(my_list);		//Prepend
		my_file << ", " << remove_end_list(my_list);		//Remove from end
		my_file << ", " << remove_begin_list(my_list);	//Remove from beginning
		my_file << ", " << empty_list(my_list);		//Empty
		my_file << ", " << insert_list(my_list);			//Insert
		my_file << ", " << rem_duplicates_list(my_list);	//Remove duplicates
		my_file << ", " << reverse_list(my_list);	//Reverse
		my_file << ", " << swap(my_list) << std::endl;	//Swap
	}
}