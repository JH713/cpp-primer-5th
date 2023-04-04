#include <iostream>

int main()
{
	int	val = 0, sum = 0;

	std::cout << "Enter numbers: " << std::endl;
	while(std::cin >> val)
		sum += val;
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}
