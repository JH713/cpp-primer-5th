#include <iostream>

int main()
{
	int a = 7;
	int b = 13;
	int *p = &a;
	std::cout << *p << std::endl; // 7
	p = &b; // changing the value of a pointer
	std::cout << *p << std::endl; // 13
	*p = 91; //changing the value to which the poiner points
	std::cout << b << std::endl; // 91
	return 0;
}