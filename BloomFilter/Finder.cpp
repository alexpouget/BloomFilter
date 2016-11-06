#include "Finder.h"

using namespace std;

Finder::Finder()
{
}

Finder::Finder(char* name)
{
	file = fopen(name, "r");
}


Finder::~Finder()
{
	fclose(file);
}

bool Finder::find(std::string search)
{
	string word;
	char car = 0;
	if (file != NULL) {
		while (car != EOF) {
			word = "";
			while (true) {
				car = fgetc(file);
				if (car == ' ' || car == EOF) {
					break;
				}
				word += car;
			}
			if (word.compare(search) == 0) {
				return true;
			}
		}
	}
	return false;
}
