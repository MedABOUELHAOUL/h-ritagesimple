#include "DateH.h"

DateH::DateH(int h, int min, int sec, int j, int m, int a)
    :Heure(h,min,sec)
{
    this->annee = (a > 1900) ? a : 1900;
    this->mois = (m>0 && m<13) ? m : 1;
    this->jour = (j > 0 && j <= this->maxDays()) ? j : 1;
}

int DateH::maxDays() const
{
    int maxjour;

    if (this->mois == 2) {
        maxjour = (this->isbis()) ? 29 : 28;
    }
    else {
       
    maxjour = ((this->mois > 7 && this->mois % 2 == 1)
            || (this->mois < 7 && this->mois % 2 == 0)) ? 30 : 31;

    }
    return maxjour;
}

bool DateH::isbis() const
{
    /*if (this->annee % 4 == 0) {
        return true;
    }

    return false;*/
    return (this->annee % 4 == 0);
}

void DateH::print() const
{
    this->Heure::print();  //demasquage
    std::cout << this->jour << "/" << this->mois << "/" << this->annee << std::endl;
}

int DateH::convertToDays() const
{
    int res; 
    if (this->isbis()) {
        res = this->annee * 366 + this->mois * this->maxDays() + this->jour;
    }
    else
        res = this->annee * 365 + this->mois * this->maxDays() + this->jour;

    return res;
}

bool DateH::operator>(const DateH& D) const
{
    if (this->convertToDays() > D.convertToDays()) {
        return true;
    }
    else if (this->convertToDays() == D.convertToDays()) {

        return this->Heure::operator>(D);
    }
    return false ;
}

DateH::~DateH()
{
    std::cout << "destructeur de la classe DateH" << std::endl;
}
