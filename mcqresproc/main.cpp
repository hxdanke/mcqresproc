#include <iostream>
#include "fileIO.h"
#include "Candidate.h"
#include "marking.h"

using namespace std;

int main() {

	cout << "File name (without.csv): ";

	string fileName;
	cin >> fileName;

	vector<Candidate> data = loadOMRData(fileName);
	vector<string> ms = loadMS();

	//	Marking
	for (int i = 0; i < data.size(); ++i) {
		data[i].setMark(marking(data[i].getAnswers(), ms));
	}

	return 0;
}