#include "Heure.h"
#include<iostream>
Heure::Heure(int h, int min, int sec)
{
	this->heure = (h > 0 && h < 24) ? h : 0;
	this->min = (min > 0 && min < 60) ? min : 0;
	this->sec = (sec > 0 && sec < 60) ? sec : 0;
}

void Heure::print() const
{
	std::cout << this->heure << ":" << this->min << ":" << this->sec << std::endl;
}

int Heure::convertToSec() const
{
	int res = this->heure * 3600 + this->min * 60 + this->sec;
	return res;
}

bool Heure::operator>(const Heure& H) const
{
	return (this->convertToSec() > H.convertToSec());
}

Heure::~Heure()
{
	std::cout << "destructeur de la classe Heure" << std::endl;
}
