#include <iostream>

extern "C" long start(long, long, long);

int main(void) {

	start(1, 1, 0);

	// < 1 as 3rd = add 
	// = 1 as 3rd = sub
	std::cout << "Answer is: " << start(1, 1, 1);
	std::cin.get();
	return 0;
}