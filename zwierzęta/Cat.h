#ifndef CAT_H_INCLUDED
#define CAT_H_INCLUDED
#include <iostream>
#include "Animal.h"
using namespace std;
class Cat : public Animal {
	private:
		int levelOfMouseHunting;
		int mice[5];
	public:
		Cat(int limbs, string names);
		Cat();
		void initMice(int tab[5]);
		void initCat(int level, int limbs, string name, int tab[5]);
		void setLevelOfHunting(int value);
		int getLevelOfHunting();
		int getMice(int index);
		void giveVoice();
		void info();

};
#endif
