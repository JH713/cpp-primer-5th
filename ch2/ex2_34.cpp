#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;
	a = 42;
	std::cout << a << std::endl;
	b = 42;
	std::cout << b << std::endl;
	c = 42;
	std::cout << c << std::endl;
	// 아래부터 오류
	// d = 42;
	// std::cout << d << std::endl;
	// e = 42;
	// std::cout << e << std::endl;
	// g = 42
	// std::cout << a << std::endl;
}