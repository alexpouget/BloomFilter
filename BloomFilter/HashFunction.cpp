#include "HashFunction.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

HashFunction::HashFunction()
{
	
}

HashFunction::HashFunction(int _size)
{
	a = rand();
	b = rand();
	size = _size;
}

HashFunction::~HashFunction()
{
}

int HashFunction::valueLetters(string word)
{
	int count = 0;
	for (int i = 0; i < word.size(); i++) {
		count += (int) word[i];
	}
	return count;
}

int HashFunction::hash(std::string word)
{
	int i = valueLetters(word);
	return (a + b * i) % size;
	
}
