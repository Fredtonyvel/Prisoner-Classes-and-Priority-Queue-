#include "Parolee.h"
#include <cmath>


void Parolee::setParole(int p)
{
	if(timeRemain == 0)
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
	cout << "Parole term: " << getParole() << endl;
}