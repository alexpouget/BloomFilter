#include "Filter.h"
#include <math.h>

Filter::Filter()
{
}

Filter::Filter(int num, int nb_hash)
{
	int res = -((num*(log(ERROR_RATE))) / pow(log(2), 2));
	list[res];
}


Filter::~Filter()
{
}

void Filter::add(std::string)
{
}

bool Filter::check(std::string)
{
	return false;
}
