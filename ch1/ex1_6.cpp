#include <iostream>

int main()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 ;
		  // << " and " << v2 ;
		  // << " is " << v1 + v2 << std::endl;
		  // The << operator takes two operands. 
		  // The left operand is missing, so we need to fix it. We can fix it as follows.
	std::cout << " and " << v2 ;
	std::cout << " is " << v1 + v2 << std::endl;
	return 0;
}
