//Joseph Kahale
//CSIS 137
//Homework #7b

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	ifstream inputFile;
	string fileName;
	string babyName;
	cout << "Enter the name of the file: \n";
	getline(cin, fileName);
	inputFile.open(fileName);
	if (inputFile.fail()) {
		cout << "The file cound not be opened\n";
	}
	else {
		getline(inputFile, babyName);
		while (!inputFile.fail()) {
			cout << babyName << endl;		
			getline(inputFile, babyName);

		}
	}
	inputFile.close();
	return 0;
}
