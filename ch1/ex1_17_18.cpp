#include <iostream>

int main()
{
	int currVal = 0,  val = 0;
	if (std::cin >> currVal)
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if (val == currVal)
				++cnt;
			else
			{
				std::cout << currVal << " occurs "
						  << cnt << " times" << std:: endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs "
				  << cnt << " times" << std::endl;
	}
	return 0;
}

/*
 * input value가 모두 같으면 마지막에 EOF를 만났을 때만 결과가 출력된다.
 * 중복된 값이 없는 경우는 처음을 제외하고 값을 입력할 때마다 결과를 출력한다.
 */
