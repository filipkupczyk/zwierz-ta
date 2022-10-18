#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED
#include "Animal.h"
#include <iostream>
using namespace std;
class Dog : public Animal {
private:
	string breed;
	int levelOfGuideSkills;
	int levelOfTracingSkills;
public:
	Dog(string breed1, int levelOfTracingSkills, int levelOfGuidenceSkills1, int limbNr1, string name1);
	Dog(string name1, int limbs1);
	Dog();
	void setSkillLevel(int type, int value);
	int getSkillLevel(int type);
	void giveVoice();
	void info();
};
#endif
