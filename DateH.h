#pragma once
#include "Heure.h"
#include <iostream>
using  namespace std;
class DateH : public Heure
{
public: 
	DateH(int h, int min, int sec, int j, int m, int a);
	int maxDays() const;
	bool isbis() const;
	void print() const;
	int convertToDays() const;
	bool operator>(const DateH& H) const;
	~DateH(); 
private: 
	int jour; 
	int mois; 
	int annee;
};

