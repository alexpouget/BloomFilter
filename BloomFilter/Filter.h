#pragma once
#include <iostream>

class Filter
{
public:
	Filter();
	Filter(int, int);
	~Filter();

	void add(std::string);
	bool check(std::string);
private:
	double ERROR_RATE = 0.1;
	bool list[];
};

