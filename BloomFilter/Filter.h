#pragma once
#include <iostream>
#include "HashFunction.h"
#include <vector>

class Filter
{
public:
	Filter();
	Filter(int);
	~Filter();

	void add(std::string);
	bool check(std::string);
private:
	double ERROR_RATE = 0.1;
	std::vector<bool> list;
	std::vector<HashFunction> hashList;
};

