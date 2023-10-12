#include "World.h"
#include "Continent.h"
#include <iostream>
using namespace std;

int main() {
	cout << "Continent information: " << endl;
	World world;

	Continent* afrika = new Afrika("Afrika", 30, 32.00);
	afrika->Print();
	cout << endl << endl;

	Continent* northAmerika = new NorthAmerika("North Amerika", 23, 17.00);
	northAmerika->Print();
	cout << "------------------" << endl;

	Herbivore* herbivore1 = new Wildbeest(&world, afrika, "Wildbeest", 30, true);
	herbivore1->Print();
	cout << endl << endl;

	Herbivore* herbivore2 = new Bison(&world, northAmerika, "Bison", 150, true);
	herbivore2->Print();
	cout << "------------------" << endl;

	Carnivore* carnivore1 = new Wolf(&world, northAmerika, 75, "Wolf");
	carnivore1->Print();
	cout << endl << endl;

	Carnivore* carnivore2 = new Lion(&world, afrika, 100, "Lion");
	carnivore2->Print();
	cout << endl << endl;

	//all herbivores go to eat
	world.MealsHerbivores();
	herbivore1->Print();
	cout << endl << endl;
	herbivore2->Print();
	cout << "------------------" << endl;

	//all carnivores go to eat
	world.NutritionCarnivores();
	herbivore1->Print();
	cout << endl << endl;
	herbivore2->Print();
	cout << endl << endl;

	carnivore1->Print();
	cout << endl << endl;
	carnivore2->Print();
	cout << endl << endl;
}