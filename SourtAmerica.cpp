#include "SouthAmerica.h"
#include <iostream>
using namespace std;

void SouthAmerika::Print() {
	cout << "Continent: " << name << endl;
	cout << "Square: " << square << endl;
	cout << "temperature: " << temperature << endl;
}
char* SouthAmerika::GetContinent() {
	return name;
}
SouthAmerika::~SouthAmerika() {
	delete herbivore;
	delete carnivore;
}
