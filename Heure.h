#pragma once
class Heure
{
public:
	Heure(int h=0, int min=0, int sec=0);
	void print() const;
	int convertToSec() const;
	bool operator>(const Heure& H) const;
	~Heure();

private: 
	int heure; 
	int min;
	int sec;
};

