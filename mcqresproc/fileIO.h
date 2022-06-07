#include <fstream>
#include <sstream>
#include "Candidate.h"

using namespace std;

vector<Candidate> loadOMRData(string fileName) {
	vector<Candidate> data;
	bool ifContinue = true;
	string dump;

	fstream dataFile;
	dataFile.open(fileName + ".csv", ios::in);

	//	Scan through column headings
	getline(dataFile, dump);
	dump.clear();

	//	Scan through data
	while (ifContinue) {
		string tempLine;
		string temp;
		string emptyLine;

		//	Initialise temporary variables
		string tempFirstName;
		string tempLastName;
		string tempClassId;
		int tempClassNum;
		vector<string> tempAnswer;

		getline(dataFile, tempLine);
		if (tempLine == "") { 
			ifContinue = false;
			break;
		}

		stringstream ss(tempLine);
		for (int i = 0; i < 48; ++i) {
			getline(ss, temp, ',');
			temp.erase(0, 1);
			temp.erase(size(temp) - 1, 1);
			if (i > 3) {
				if (i == 4) { tempFirstName = temp; }
				else if (i == 5) { tempLastName = temp; }
				else if (i == 6) { tempClassId = temp; }
				else if (i == 7) { tempClassNum = stoi(temp) + 1; }
				else {
					tempAnswer.push_back(temp);
				}
			}
		}
		tempAnswer[tempAnswer.size() - 1].erase(size(tempAnswer[tempAnswer.size() - 1]) - 1, 1);
		data.push_back(Candidate(tempFirstName, tempLastName, tempClassId, tempClassNum, tempAnswer));
		tempAnswer.clear();
	}

	return data;
}

vector<string> loadMS() {
	vector<string> ms;
	string temp;

	fstream msFile;
	msFile.open("ms.csv", ios::in);

	for (int i = 0; i < 39; ++i) {
		getline(msFile, temp, ',');
		ms.push_back(temp);
	}
	getline(msFile, temp, '\0');
	temp.erase(size(temp) - 1, 1);
	ms.push_back(temp);

	return ms;
}

