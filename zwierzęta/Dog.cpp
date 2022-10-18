#include <iostream>
#include "Dog.h"

Dog::Dog(string breed1, int guide, int tracking, int limbs, string name) :Animal(limbs, name) {
	breed = breed1;
	levelOfGuideSkills = guide;
	levelOfTracingSkills = tracking;
}
Dog::Dog(string name1, int limbs ) :Animal(limbs, name1) {
}
Dog::Dog() {
}
void Dog::setSkillLevel(int type, int value) {
	if (type == 0 && value >= 1 && value <= 10)
		levelOfGuideSkills = value;
	else if (type == 1 && value >= 1 && value <= 10)
		levelOfTracingSkills = value;
}
int Dog::getSkillLevel(int type) {
	if (type == 0)
		return levelOfGuideSkills;
	else if (type == 1)
		return levelOfTracingSkills;
}
void Dog::giveVoice() {
	cout << "Hau, Hau" << endl;
}
void Dog::info() {
	Animal::info();
	cout << "Rasa: " << breed << endl << "Poziom przewodzenia: " << levelOfGuideSkills << endl << "Poziom tropienia: " << levelOfTracingSkills << endl;
}