#include <iostream>
#include <string>
#include <chrono>
#include <iomanip>


using namespace std;



int main(void) {
	
	//char input_char;
	//printf("Enter a alphabet： ");
	//scanf_s(" %c", &input_char);
	
	//std::string a(100000, input_char);

	std::string a(100000, 'a');

	std::chrono::system_clock::time_point start_copy =std::chrono::system_clock::now();
	std::string b = a; 

	std::chrono::system_clock::time_point end_copy =std::chrono::system_clock::now();

	std::chrono::microseconds copy_ =std::chrono::duration_cast<std::chrono::microseconds>(end_copy - start_copy);


	std::chrono::high_resolution_clock::time_point start_move = std::chrono::high_resolution_clock::now();
	std::string c = std::move(a); 
	std::chrono::high_resolution_clock::time_point end_move = std::chrono::high_resolution_clock::now();

	std::chrono::microseconds move_ = std::chrono::duration_cast<std::chrono::microseconds>(end_move - start_move);



	printf("100,000 alphabet comparison (Copy vs Move):\n");
	std::cout << "Copy time: " << copy_.count() << " μs" << std::endl;
	std::cout << "Copy time: " << move_.count() << " μs" << std::endl;
	//std::cout << "Move time: " << move_duration.count() << " μs" << std::endl;
	//printf("Copy time: %µs\n", copy_duration);
	//printf("Move time: %lld microseconds\n", move_duration);

	return 0;

}