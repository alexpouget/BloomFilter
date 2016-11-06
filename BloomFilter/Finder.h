#pragma once
#include <fstream>

class Finder
{
public:
	Finder();
	Finder(char* name);
	~Finder();

	bool find(std::string search);
private:
	FILE* file;
};

