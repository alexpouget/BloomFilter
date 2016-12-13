#include "Filter.h"
#include <math.h>

Filter::Filter()
{
}

Filter::Filter(int num)
{
	//calcul size
	int res = -((num*(log(ERROR_RATE))) / pow(log(2.0), 2));
	for (int i = 0; i < res; i++) {
		list.push_back(false);
	}
	//calcul nbHash
	int nb_hash = log(2.0)*res / num;
	
	for (int i = 0; i < nb_hash; i++) {
		hashList.push_back(HashFunction(res));
	}
}


Filter::~Filter()
{
}

void Filter::add(std::string word)
{
	for each (HashFunction h in hashList)
	{
		list[h.hash(word)] = true;
	}
}

bool Filter::check(std::string word)
{

	for each (HashFunction h in hashList)
	{
		if (list[h.hash(word)] == false ) {
			return false;
		}
	}
	return true;
}
