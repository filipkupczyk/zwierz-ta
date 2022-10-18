#include "Cat.h"
#include <iostream>

Cat::Cat(int limbs, string names) : Animal(limbs, names) {
}
Cat::Cat() {
}
void Cat::initMice(int tab[5]) {
	int myszy = rand() % 10 + 1;
	for (int i = 0; i < 5; i++) {
		tab[i] = myszy;
		mice[i] = tab[i];
	}
}
void Cat::initCat(int level, int limbs, string name, int tab[5]) {
	initMice(tab);
	levelOfMouseHunting = level;
}
void Cat::setLevelOfHunting(int value) {
	if (value > 0 && value <= 10)
		levelOfMouseHunting = value;
}
int Cat::getLevelOfHunting(){
	if (levelOfMouseHunting > 0 && levelOfMouseHunting <= 10)
		return levelOfMouseHunting;
	else
		return 0;
}
int Cat::getMice(int index) {
	if (index > 0 && index <= 5)
		return mice[index];
}
void Cat::giveVoice() {
	cout << "Miau, miau" << endl;
}
void Cat::info() {
	Animal::info();
	cout << "poziom ³owienia: " << levelOfMouseHunting << endl << "liczba myszy w ostatnie 5 lat: ";
	for (int i = 0; i < 5; i++)
		cout << "rok " << i <<": " << mice[i];
}