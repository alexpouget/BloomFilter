#include <iostream>
#include <fstream>
#include <string>
#include "Finder.h"

using namespace std;

int main() {

	Finder finder("test.txt");
	cout << finder.find("vroom") << endl;

	system("PAUSE");
	return 0;
}