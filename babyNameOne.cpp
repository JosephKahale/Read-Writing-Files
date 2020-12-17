//Joseph Kahale
//CSIS 137
//Homework #7a

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	ofstream outputFile;
	string babyNames;
	outputFile.open("babyNames.txt");
	cout << "BABY NAME LOGGER:\n"
		<< "Enter Baby Names, otherwise enter 'N'\n";
	do {
		cout << "Please enter Baby Name: \n";
		getline(cin, babyNames);
		if (babyNames != "N") {
			outputFile << babyNames << endl;
		}

	} while (babyNames != "N");
	
	outputFile.close();
	return 0;
}