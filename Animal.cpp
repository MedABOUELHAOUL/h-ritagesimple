#include "Animal.h"

Animal::Animal(string nom)
	: nom(nom)// initializer list
{ 
	std::cout << "constructeur de la classe Animal" << std::endl;
	//this->nom = nom;
}

void Animal::afficher() const
{
	std::cout << "afficher de la classe Animal" << std::endl;
	std::cout << " nom:"<<this->nom << std::endl;

}

Animal::~Animal()
{
	std::cout << "destructeur de la classe Animal" << std::endl;
}
