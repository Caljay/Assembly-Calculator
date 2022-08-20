#include <iostream>

extern "C" long start(long, long, long);

void welcome() {

	std::cout << "Welcome to the Assembly Calculator!" << std::endl;

}
void NewEq(void) {

	std::cout << "Please choose an operation; Type sign/operation: " << std::endl;

}

void calculation(void) {
	char inputOperations;
	int finalOp;
	std::cin >> inputOperations;


	//0 - Add
	//1 - Sub
	//2 - Multi
	//3 Divide
	switch (inputOperations)
	{
	case '+':
		finalOp = 0;
		break;
	case '-':
		finalOp = 1;
		break;
	case '*':
		finalOp = 2;
		break;
	case '/':
		finalOp = 3;
		break;

	default:
		finalOp = -1;
		break;
	}


	int num1, num2;
	std::cout << std::endl << "Now Enter First Number" << std::endl;
	std::cin >> num1;
	std::cout << std::endl << "Now Enter Second Number" << std::endl;
	std::cin >> num2;


	std::cout << "Answer is: " << start(num1, num2, finalOp);
	std::cin.get();
	std::cin.get();
}





int main(void) {

	welcome();

	while (1)
	{
		NewEq();
		calculation();
	}

	start(0, 0,0);
	std::cin.get();


	return 0;
}