#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item	item;
	int			cnt = 0;
	while (std::cin >> item)
		cnt++;
	std::cout << cnt << std::endl;
	return 0;
}