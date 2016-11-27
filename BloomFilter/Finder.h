#pragma once
#include <fstream>
#include "Filter.h"

class Finder
{
public:
	Finder();
	Finder(char* name);
	~Finder();

	bool find(std::string search);
	int count();
private:
	char* fileName;
	Filter filter;
};

