#ifndef JAILED_H
#define JAILED_H

#include "Prisoner.h"
#include <iostream>
#include <string>

using namespace std;

//Derived class from base class Prisoner
class Jailed : public Prisoner
{
	Jailed();
	~Jailed();
};

#endif //JAILED_H