#pragma once
#include <iostream>
using namespace std;

class Wolf : public Carnivore
{
private:
	Continent* continent;
public:
	Wolf();
	Wolf(World* animal, Continent* cont, char* n, int p);
	void Print();
	virtual void EatHerbivore(Herbivore* obj);
	~Wolf();
};
