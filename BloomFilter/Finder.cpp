#include "Finder.h"
#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

Finder::Finder()
{
}

Finder::Finder(char* name)
{
	fileName = name;
	filter = Filter(count());
	FILE* file = fopen(fileName, "r");
	char car = 0;
	if (file != NULL) {
		while (car != EOF) {
			string word = "";
			while (car != ' ' || car != EOF) {
				car = fgetc(file);
				if (car == ' ' || car == EOF) {
					break;
				}
				word += car;
			}
			if ((car == ' ' || car == EOF) && word.compare("") != 0) {
				filter.add(word);
			}
		}
	}
	fclose(file);

}


Finder::~Finder()
{
}

bool Finder::find(std::string search)
{
	if (filter.check(search) == 0) {
		return false;
	}
	string word;
	char car = 0;
	FILE* file = fopen(fileName, "r");
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
				fclose(file);
				return true;
			}
		}
	}
	fclose(file);
	return false;
}

int Finder::count()
{
	int count = 0;
	string word;
	char car = 0;
	FILE* file = fopen(fileName, "r");
	if (file != NULL) {
		while (car != EOF) {
			string word = "";
			while (car != ' ' || car != EOF) {
				car = fgetc(file);
				if (car == ' ' || car == EOF) {
					break;
				}
				word += car;
			}
			if ((car == ' ' || car == EOF) && word.compare("") != 0) {
				count++;
			}
		}
	}
	fclose(file);
	return count;
}
