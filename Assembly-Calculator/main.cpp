#include <iostream>

extern "C" long start(long, long, long);

int main(void) {

	start(1, 1, 0);

	// < 1 as 3rd = add 
	// = 1 as 3rd = sub

	std::cout << "Welcome to the Assembly Calculator!" << std::endl << "Please choose an operations 0 for addition 1 for subtration" << std::endl;
	int inputOperations = 0;
	std::cin >> inputOperations;


	int num1, num2;
	std::cout << std::endl << "Now Enter First Number" << std::endl;
	std::cin >> num1; 
	std::cout << std::endl << "Now Enter SecondNumber Number" << std::endl;
	std::cin >> num2;


	

	std::cout << "Answer is: " << start(num1, num2, inputOperations);
	std::cin.get();
	return 0;
}