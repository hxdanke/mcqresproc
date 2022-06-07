#include "Candidate.h"

//	Set
void Candidate::setFirstName(string a) { this->firstName = a; }
void Candidate::setLastName(string a) { this->lastName = a; }
void Candidate::setClassId(string a) { this->classId= a; }
void Candidate::setClassNum(int a) { this->classNum = a; }
void Candidate::setAnswers(vector<string> a) { this->answers = a; }

//	Get
string Candidate::getFirstName() { return this->firstName; }
string Candidate::getLastName() { return this->lastName; }
string Candidate::getClassId() { return this->classId; }
int Candidate::getClassNum() { return this->classNum; }
vector<string> Candidate::getAnswers() { return this->answers; }

//	Constructors
Candidate::Candidate() {
	setFirstName("");
	setLastName("");
	setClassId("");
	setClassNum(0);
	setAnswers(vector<string> (40,""));
}

Candidate::Candidate(string a, string b, string c, int d, vector<string> e) {
	setFirstName(a);
	setLastName(b);
	setClassId(c);
	setClassNum(d);
	setAnswers(e);
}