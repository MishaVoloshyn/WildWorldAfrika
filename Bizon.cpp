#include "Bizon.h"
#include "Herbivore.h"
#include "Continent.h"
#include "World.h"
#include <iostream>
using namespace std;

Bizon::Bizon()
{
	weight = 0;
	isLife = false;
}
Bizon::Bizon(World* animal, Continent* cont, char* n, double w, bool life)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	animal->AddHerbivore(this);
	continent = cont;
	weight = w;
	isLife = life;
}
void Bizon::Print()
{
	cout << "Name: " << name << endl;
	cout << "Weight: " << weight << endl;
	cout << "Continent: " << GetContinent();
	cout << "Is alive? " << isLife << endl;
}
char* Bizon::GetContinent()
{
	return continent->GetContinent();
}
Bizon::~Bizon()
{
	delete continent;
}