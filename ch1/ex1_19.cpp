#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;

	std::cout << "두 개의 숫자를 입력하세요: " << std::endl;
	std::cin >> v1 >> v2;
	if (v1 > v2)
		std::cout << "범위가 올바르지 않습니다." << std::endl;
	else
	{
		while (v1 <= v2)
		{
			std::cout << v1 << std::endl;
			++v1;
		}
	}
	return (0);
}