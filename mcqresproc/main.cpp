#include <iostream>
#include "fileIO.h"
#include "Candidate.h"

using namespace std;

int main() {

	cout << "File name (without.csv): ";

	string fileName;
	cin >> fileName;

	vector<Candidate> data = readData(fileName);
	cout << "Data loaded";

	return 0;
}