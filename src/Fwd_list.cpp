#include<iostream>
#include<fstream>
#include<forward_list>	
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

//Print forward list
void print_fwd_list(std::forward_list<int> my_list)
{
	std::forward_list<int> ::iterator it;
	std::cout << "The list is: ";
	for (it = my_list.begin(); it != my_list.end(); it++)
		std::cout << "\t" << *it;
	std::cout << "\n";
}

//Append
int append(std::forward_list<int> my_list)
{
	std::cout << "\nCalling append\n" << std::endl;
	std::cout << "Please enter an integer to insert: ";
	int num = input_num();

	std::cout << "Please enter the number of integers you want to insert: ";
	int count = input_num();

	std::forward_list<int> ::iterator it;
	std::forward_list<int> ::iterator ptr = my_list.before_begin();

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	for (it = my_list.begin(); it != my_list.end(); ++it)
		++ptr;
	my_list.insert_after(ptr, count, num);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_fwd_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Prepend
int prepend(std::forward_list<int> my_list)
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

	print_fwd_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove from beginning
int remove_begin(std::forward_list<int> my_list)
{
	std::cout << "\nCalling remove from beginning\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.pop_front();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_fwd_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove from end
int remove_end(std::forward_list<int> my_list)
{
	std::cout << "\nCalling remove from end\n" << std::endl;

	std::forward_list<int> ::iterator it = my_list.begin();
	std::forward_list<int> ::iterator ptr = my_list.before_begin();

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	for (it++; it != my_list.end(); ++it)
		++ptr;
	my_list.erase_after(ptr);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_fwd_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Insert
int insert(std::forward_list<int> my_list)
{
	std::cout << "\nCalling insert\n" << std::endl;
	std::cout << "Please enter an integer to insert: ";
	int num = input_num();

	std::cout << "Please enter the position where you want to insert it: ";
	int pos = input_num();

	std::cout << "Please enter the number of integers you want to insert: ";
	int count = input_num();

	std::forward_list<int> ::iterator it = my_list.before_begin();

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < pos; i++)
		it++;
	my_list.insert_after(it, count, num);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_fwd_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Empty
int empty(std::forward_list<int> my_list)
{
	std::cout << "\nCalling empty list function\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.clear();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_fwd_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Reverse
int reverse(std::forward_list<int> my_list)
{
	print_fwd_list(my_list);
	std::cout << "\nCalling reverse\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.reverse();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_fwd_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Remove duplicates
int rem_duplicates(std::forward_list<int> my_list)
{
	print_fwd_list(my_list);
	std::cout << "\nCalling remove duplicates\n" << std::endl;
	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.unique();

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_fwd_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

//Swap
int swap(std::forward_list<int> my_list)
{
	int count = 0;
	std::cout << "\nCalling swap\n" << std::endl;
	std::forward_list<int> ::iterator it = my_list.begin();
	for (it = my_list.begin(); it != my_list.end(); it++)
		count += 1;

	std::forward_list<int> new_list(count, 10);

	//Start timing
	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

	my_list.swap(new_list);

	//Stop timing
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();

	//Calculate runtime of function
	std::chrono::microseconds runtime = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

	print_fwd_list(my_list);
	std::cout << "The runtime is " << runtime.count() << " microseconds" << std::endl;
	return runtime.count();
}

int main()
{
	std::ofstream my_file;				//declaring my_file (an object of type ofstream)
	std::string file_name = "fwd_list.csv"; //setting filename

	my_file.open(file_name.c_str());	//opening the file
	my_file << "Size of container , Append, Prepend, Remove from end, Remove from beginning, Empty, Insert, Remove duplicates, Reverse, Swap" << std::endl;

	for (int i = 100; i <= 1000; i += 100)
	{
		std::forward_list <int> my_list;
		for (int j = i; j > 0; j--)			//Populating container
			my_list.push_front(j);

		//Calling functions and writing the runtime to the .csv file

		my_file << i << ", " << append(my_list);		//Append
		my_file << ", " << prepend(my_list);		//Prepend
		my_file << ", " << remove_end(my_list);		//Remove from end
		my_file << ", " << remove_begin(my_list);	//Remove from beginning
		my_file << ", " << empty(my_list);		//Empty
		my_file << ", " << insert(my_list);			//Insert
		my_file << ", " << rem_duplicates(my_list);	//Remove duplicates
		my_file << ", " << reverse(my_list);	//Reverse
		my_file << ", " << swap(my_list) << std::endl;	//Swap
	}
}