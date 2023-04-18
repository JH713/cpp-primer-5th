#include <iostream>
#include <string>

struct Sales_data {
	std::string isbn;
	unsigned	soldNum = 0;
	double		price = 0.0;
};

int main(void)
{
	Sales_data data;
	if (std::cin >> data.isbn >> data.soldNum >> data.price)
	{
		std::string isbn = data.isbn;
		unsigned cnt = 1;
		while (std::cin >> data.isbn >> data.soldNum >> data.price)
		{
			if (data.isbn == isbn)
				cnt++;
			else
			{
				std::cout << "ISBN: " << isbn << " 거래 횟수: " << cnt << std::endl;
				isbn = data.isbn;
				cnt = 1;
			}
		}
		std::cout << "ISBN: " << isbn << " 거래 횟수: " << cnt << std::endl;
	}
	else
	{
		std::cout << "입력된 데이터가 없습니다." << std::endl;
		return (-1);
	}
	return (0);
}
