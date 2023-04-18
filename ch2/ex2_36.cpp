#include <iostream>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a; // c는 int
	decltype((b)) d = a; //d는 int&
	++c;
	++d;
	std::cout << a << std::endl; // 4
	std::cout << b << std::endl; // 4
	std::cout << c << std::endl; // 4
	std::cout << d << std::endl; // 4
}