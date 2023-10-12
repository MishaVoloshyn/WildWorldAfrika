#pragma once
#include "Bizon.h"
#include "Continent.h"
#include "World.h"

class Bizon : public Herbivore
{
private:
	Continent* continent;
public:
	Bizon();
	Bizon(World* animal, Continent* cont, char* n, double w, bool life);
	void Print();
	char* GetContinent();
	~Bizon();
};
