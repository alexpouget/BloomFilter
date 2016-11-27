#pragma once
#include <iostream>
#include <string>

class HashFunction
{
public:
	HashFunction();
	HashFunction(int _size);
	~HashFunction();
	int valueLetters(std::string word);
	int hash(std::string word);
private:
	int a;
	int b;
	int size;
};


