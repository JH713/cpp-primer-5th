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
	if (std:: cin >> data.isbn >> data.soldNum >> data.price)
	{
		std::string isbn = data.isbn;
		unsigned totalNum = data.soldNum;
		double totalRevenue = data.soldNum * data.price;
		std::cout << data.isbn << " " << data.soldNum << " "
				  << data.soldNum * data.price << " " << data.price << std::endl;
		while (std::cin >> data.isbn >> data.soldNum >> data.price)
		{
			if (data.isbn != isbn)
			{
				std::cout << "ISBN이 다릅니다." << std::endl;
				return (0);
			}
			std::cout << data.isbn << " " << data.soldNum << " "
					  << data.soldNum * data.price << " " << data.price << std::endl;
			totalNum += data.soldNum;
			totalRevenue += data.soldNum * data.price;
		}
		if (totalNum == 0)
		{
			std::cout << "팔린 책의 수가 0입니다." << std::endl;
			return (0);
		}
		std::cout << isbn << " " << totalNum << " " << totalRevenue << " " 
				  << totalRevenue / totalNum << std::endl;
	}
	else
	{
		std::cout << "입력된 데이터가 없습니다." << std::endl;
		return (-1);
	}
	return (0);
}
