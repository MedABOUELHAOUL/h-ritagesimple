#pragma once
#include "Animal.h"
class Lion :  public Animal
{
public: 
	Lion(string n, string color);
	void afficher() const; // masquage
	~Lion();
private: 
	string color;
};

