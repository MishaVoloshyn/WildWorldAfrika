#pragma once
#include "Continent.h"

class SouthAmerika : public Continent
{
private:
	Herbivore* herbivore;
	Carnivore* carnivore;
public:
	SouthAmerika() = default;
	SouthAmerika(const char* n, int t, double s) :Continent(n, t, s) {}
	virtual void Print();
	char* GetContinent();
	~SouthAmerika();
};