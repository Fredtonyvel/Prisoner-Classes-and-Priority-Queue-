#ifndef PAROLEE_H
#define PAROLEE_H

#include "Prisoner.h"
#include <iostream>
#include <string>

using namespace std;

//Derived class from base class Prisoner
class Parolee : public Prisoner 
{
	Parolee();
	~Parolee();
};

#endif //PAROLEE_H