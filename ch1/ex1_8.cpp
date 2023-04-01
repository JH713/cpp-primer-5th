#include <iostream>

int main()
{
	std::cout << "/*";
	std::cout << "*/";
	// std::cout << /* "/*" */;
	// The << operator needs a right-hand operand. But there is no operand, because it is a comment.
	// So we need to add an operand.
	std::cout << /* "/*" */ "LIKE THIS";
	std::cout << /* "*/" /* "/*" */;
	std::cout << std::endl;
	return 0;
}
