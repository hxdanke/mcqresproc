#include "fileIO.h"
#include <fstream>
#include <sstream>
#include "Candidate.h"

using namespace std;

vector<Candidate> readData(string fileName) {
	vector<Candidate> data;
	string temp;

	fstream dataFile;
	dataFile.open(fileName + ".csv", ios::in);

	//	Scan through column headings
	getline(dataFile, temp);
	getline(dataFile, temp);

	//	Scan through data
	temp = "init";
	while (temp != "") {

	}

	return data;
}