#include <iostream>

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	// The for loop calculates the sum of all integers between -100 and 100 inclusively, so the final value of sum is 0.
	std::cout << "Sum: " << sum << std::endl;
	return (0);
}
