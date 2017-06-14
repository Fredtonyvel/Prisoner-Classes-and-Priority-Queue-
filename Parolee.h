#ifndef PAROLEE_H
#define PAROLEE_H

#include "Prisoner.h"
#include <iostream>
#include <string>

using namespace std;

//Derived class from base class Prisoner
class Parolee : public Prisoner 
{
public:
	Parolee();
	Parolee(int,int);
	//~Parolee();

	void setParole(int);
	int getParole();
	void display();

private:
	int parole;
};

#endif //PAROLEE_H