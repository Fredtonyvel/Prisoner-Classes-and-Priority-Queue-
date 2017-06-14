#include "Parolee.h"
#include <cmath>


Parolee::Parolee()
{
	parole = 0;
}

Parolee::Parolee(int s, int t)
{
	sentence = s;
	timeServed = t;
	timeRemain = sentence - timeServed;
}

void Parolee::setParole(int p)
{
	if((timeRemain) == 0)
		parole = floor(0.33 * p);
	else
		parole = 0;
}

int Parolee::getParole()
{
	return parole;
}

void Parolee::display()
{
	cout << "Parole term: " << getParole() << endl << endl;
}