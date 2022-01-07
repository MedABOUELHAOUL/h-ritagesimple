#pragma once
#include<iostream>
using namespace std;
class Animal
{
public: 
	Animal(string nom);
	void afficher() const;
	~Animal();


private: 
	string nom; 

};

