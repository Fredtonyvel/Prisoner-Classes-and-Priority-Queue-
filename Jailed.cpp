#include "Jailed.h"
#include <cmath>

Jailed::Jailed()
{
	timeRate = 0.0;
}

Jailed::Jailed(int s, int t, double r)
{
	sentence = s;
	timeServed = t;
	timeRate = r;
}

void Jailed::setGoodTimeRate(double r)
{
	timeRate = r;
}

double Jailed::getGoodTimeRate()
{
	return timeRate;
}

double Jailed::calculateGoodTime()
{
	return floor(timeServed * timeRate);
}

void Jailed::display()
{
	Prisoner::display();
	cout << "Good time: " << calculateGoodTime() << endl << endl;
}