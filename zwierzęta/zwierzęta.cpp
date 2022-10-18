#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include <array>
using namespace std;

int howManyProtectedAnimals(Animal tab[]){
	int counter = 0;
	cout << sizeof(tab);
	for (int i = 0; i < 2; i++) {
		if (tab[i].is_protected())
			counter++;
	}
	return counter;
}
/*int howManyProtectedAnimals(Animal tab[]) {
	int counter = 0;
	for (int i = 0; i < sizeof(tab)/sizeof(Animal); i++) {
		if (tab[i].is_protected())
			counter++;
	}
	return counter;
	}
*/
void howManyTrackerDog(Dog tab[]) {
	for (int i = 0; i < 2; i++) {
		if (tab[i].getSkillLevel(0) < tab[i].getSkillLevel(1))
			tab[i].info();
	}
}
void howManyCats(Cat tab[]) {
	int counter;
	for (int i = 0; i < 2; i++) {
		counter = 0;
		for (int j = 0; j < 5; j++) {
			counter = counter + tab[i].getMice(j);
		}
		cout << "ilosc myszy upolowanych przez koty: " << counter << endl;
	}
}
int main()
{
	srand(time(NULL));
	Cat kot;
	Dog pies;
	kot.setProtection(true);
	pies.setProtection(false);
	Animal animals[] = {kot, pies};
	//cout << sizeof(animals)/sizeof(Animal);
	int liczenie = howManyProtectedAnimals(animals);
	cout << "Liczba chronionych zwierzat: " << liczenie << endl;

	Dog psy[2];
	Dog pies1("Zbyszek",2, 4, 4, "Owczarek"), pies2("Czarek", 3, 2, 4, "Husky");
	psy[0] = pies1;
	psy[1] = pies2;
	howManyTrackerDog(psy);

	Cat koty[2];
	int tab[5];
	Cat kot1, kot2;
	kot1.initCat(2, 4, "Mariusz", tab);
	kot2.initCat(3, 4, "Zbyszek", tab);
	koty[0] = kot1;
	koty[1] = kot2;
	howManyCats(koty);


}
