#include <iostream>

int	main()
{
	int n;

	n = "ten"; // error: assigning to 'int' from incompatible type 'const char [4]' - Type error
	c = '!'; // error: use of undeclared identifier 'c' - Declaration error
	std::cout << "I read " << n << " books" << c << std::endl // error: expected ';' after expression - Syntax error
	return (0);
}
