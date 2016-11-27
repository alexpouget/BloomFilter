#include <iostream>
#include <fstream>
#include <string>
#include "Finder.h"
#include "Filter.h"

using namespace std;

int main() {

	Finder finder("test.txt");
	cout << finder.find("bonjour") << endl;
	

	system("PAUSE");
	return 0;
}