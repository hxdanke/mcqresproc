#include <iostream>
#include "fileIO.h"
#include "Candidate.h"
#include "marking.h"

using namespace std;

int main() {

	//	Prompt for user input of data file name
	cout << "File name (without.csv): ";
	string fileName;
	cin >> fileName;

	//	Load scanned data and mark scheme
	vector<Candidate> data = loadOMRData(fileName);
	vector<string> ms = loadMS();

	//	Marking
	for (int i = 0; i < data.size(); ++i) {
		data[i].setMark(marking(data[i].getAnswers(), ms));
	}

	//	Data output
	dataOutput(data);

	return 0;
}