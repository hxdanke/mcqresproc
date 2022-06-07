#pragma once
#include <vector>
#include <string>

using namespace std;

class Candidate
{

private:
	//	Variables
	string firstName;
	string lastName;
	string classId;
	int classNum;
	vector<string> answers;

protected:
	//	Set
	void setFirstName(string a);
	void setLastName(string a);
	void setClassId(string a);
	void setClassNum(int a);
	void setAnswers(vector<string> a);

public:
	//	Get
	string getFirstName();
	string getLastName();
	string getClassId();
	int getClassNum();
	vector<string> getAnswers();

	Candidate();
	Candidate(string a, string b, string c, int d, vector<string> e);

};

