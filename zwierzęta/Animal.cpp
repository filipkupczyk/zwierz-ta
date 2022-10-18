#include<iostream>
#include "Animal.h"
using namespace std;
Animal::Animal(int limbNr1, string name1) {
	limbNr = limbNr1;
	name = name1;
}
Animal::Animal() {
}
void Animal::setlimbNr(int limbNr1) {
	limbNr = limbNr1;
}
int Animal::getlimbNr() {
	return limbNr;
}
void Animal::setName(string name1) {
	name = name1;
}
string Animal::getName() {
	return name;
}
bool Animal::is_protected() {
	if (protectedAnimal == true)
		return true;
	else
		return false;
}
void Animal::setProtection(bool protect) {
	protectedAnimal = protect;
}
void Animal::giveVoice() {
	string hau = "hau, hau";
	string miau = "miau, miau";
	string chrum = "chrum, chrum";
	string pii = "pii";
}
void Animal::info() {
	cout << "Nazwa: " << name << endl << "Liczba konczyn: " << limbNr << endl;
}