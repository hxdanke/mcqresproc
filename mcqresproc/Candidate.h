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
	string className;
	vector<string> answers;
	int mark;

protected:
	//	Set
	void setFirstName(string a);
	void setLastName(string a);
	void setClassId(string a);
	void setClassNum(int a);
	void setClassName(string a, int b);
	void setAnswers(vector<string> a);

public:
	//	Get
	string getFirstName();
	string getLastName();
	string getClassId();
	int getClassNum();
	string getClassName();
	vector<string> getAnswers();
	int getMark();

	//	Set mark
	void setMark(int a);

	Candidate();
	Candidate(string a, string b, string c, int d, vector<string> e);

};