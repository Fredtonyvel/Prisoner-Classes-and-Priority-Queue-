#ifndef JAILED_H
#define JAILED_H

#include "Prisoner.h"
#include <iostream>
#include <string>

using namespace std;

//Derived class from base class Prisoner
class Jailed : public Prisoner
{
public:
	Jailed();
	Jailed(int, int, double);
	~Jailed();

	void setGoodTimeRate(double);
	double getGoodTimeRate();
	double calculateGoodTime();
	void display();

private:
	double timeRate;
};

#endif //JAILED_H