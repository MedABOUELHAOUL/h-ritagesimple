#include "Lion.h"

Lion::Lion(string n, string color)
	: Animal(n), color(color)
{
	std::cout << "constructeur de la classe Lion" << std::endl;

	//this->color = color;

}

void Lion::afficher() const
{
	std::cout << "afficher de la classe Lion" << std::endl;
	
	this->Animal::afficher();
	
	std::cout << "color :" << this->color << std::endl;
}

Lion::~Lion()
{
	std::cout << "destructeur de la classe Lion" << std::endl;

}
