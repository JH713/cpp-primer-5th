#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

struct Sales_data {
	std::string isbn;
	unsigned	soldNum = 0;
	double		price = 0.0;
};

#endif