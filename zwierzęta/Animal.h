#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
using namespace std;
class Animal {
	private:
		int limbNr;
		string name;
		bool protectedAnimal = true;
	public:
		Animal(int limbNr1, string name1);
		Animal();
		void setlimbNr(int limbNr1);
		int getlimbNr();
		void setName(string name1);
		string getName();
		bool is_protected();
		void giveVoice();
		void info();
		void setProtection(bool protect);
};
#endif
