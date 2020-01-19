#pragma once
#include <string>
using namespace std;
class Candidate
{
private:
	int CODE;
	float mathMARK, literatureMARK, englishMARK;
	string Name, DayofBirth;

public:
	Candidate(void);
	~Candidate(void);

	void InputInfor();
	float GPA();
	void OutputInfor();
};


