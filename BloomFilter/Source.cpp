#include <iostream>
#include <fstream>
#include <string>
#include "Finder.h"
#include "Filter.h"

using namespace std;

int main() {

	Finder finder("test.txt");
	
	while (true) {
		cout << "entrez q pour quitter ou le mot rechercher : " << endl;
		string word = "";
		getline(cin, word);
		if (word.size() == 1 && word[0] == 'q') {
			break;
		}
		else if (finder.find(word) == 0) {
			cout << "le texte ne contient pas le mot " << word << endl;
		}
		else {
			cout << "le texte contient probablement le mot " << word << endl;
		}
	}
	
	return 0;
}