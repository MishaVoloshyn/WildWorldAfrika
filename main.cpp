#include "World.h"
#include "Continent.h"
#include "Carnivore.h"
#include "Herbivore.h"
#include "Africa.h"
#include "Bizon.h"
#include "SouthAmerica.h"
#include "Lion.h"
#include "Wolf.h"
#include <iostream>

using namespace std;

int main() {
	cout << "Continent information: " << endl;
	World World;

	Continent* afrika = new Afrika("Afrika", 30, 32.00);
	afrika->Print();
	cout << endl << endl;

	Continent* northAmerika = new SouthAmerika("SouthAmerika", 23, 17.00);
	northAmerika->Print();
	cout << "------------------" << endl;

	Herbivore* herbivore2 = new Bizon(&World, northAmerika, "Bison", 150, true);
	herbivore2->Print();
	cout << "------------------" << endl;

	Carnivore* carnivore1 = new Wolf(&World, northAmerika, 75, "Wolf");
	carnivore1->Print();
	cout << endl << endl;

	Carnivore* carnivore2 = new Lion(&World, afrika, 100, "Lion");
	carnivore2->Print();
	cout << endl << endl;

	//all herbivores go to eat
	World.MealsHerbivores();
	herbivore1->Print();
	cout << endl << endl;
	herbivore2->Print();
	cout << "------------------" << endl;

	//all carnivores go to eat
	World.NutritionCarnivores();
	herbivore1->Print();
	cout << endl << endl;
	herbivore2->Print();
	cout << endl << endl;

	carnivore1->Print();
	cout << endl << endl;
	carnivore2->Print();
	cout << endl << endl;
}