#include <iostream>

int main()
{
	int val = 50, sum = 0;

	while (val <= 100)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum: " << sum << std::endl;
	return (0);
}
