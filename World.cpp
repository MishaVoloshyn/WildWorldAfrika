#include "World.h"
#include "Herbivore.h"
#include "Continent.h"
#include "Carnivore.h"

#include <iostream>
using namespace std;

//counter
int World::count_herbivore = 0;
int World::count_carnivore = 0;


World::World() {
	carnivore = new Carnivore * [size];
	herbivore = new Herbivore * [size];
}
void World::AddCarnivore(Carnivore* carn) {
	if (count_carnivore < size) {
		carnivore[count_carnivore++] = carn;
	}
	else {
		cout << "Error" << endl;
	}

}
void World::AddHerbivore(Herbivore* herb) {
	if (count_herbivore < size) {
		herbivore[count_herbivore++] = herb;
	}
	else {
		cout << "Error" << endl;
	}
}
void World::MealsHerbivores()
{
	for (int i = 0; i < count_herbivore; i++)
	{
		herbivore[i]->EatGrass();
	}
}
void World::NutritionCarnivores()
{
	if (count_carnivore < count_herbivore) {
		for (int i = 0; i < count_carnivore; i++)
		{
			if (herbivore[i]->GetLife())
			{
				carnivore[i]->Eat(herbivore[i]);
			}
		}
	}
	else {
		for (int i = 0; i < count_herbivore; i++)
		{
			if (herbivore[i]->GetLife())
			{
				carnivore[i]->Eat(herbivore[i]);
			}
		}
	}
}
World::~World() {
	delete carnivore;
	delete herbivore;
}