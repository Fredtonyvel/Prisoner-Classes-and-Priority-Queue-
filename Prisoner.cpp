#include "Prisoner.h"


//Constructors and Destructor definitions
Prisoner::Prisoner()
{
	id = "--";
	sentence = 0;
	timeServed = 0;
	lastName = "--";
	firstName = "--";
	/*timeRemain = 0;*/
}

Prisoner::Prisoner(string i, int s, int ts, string ln, string fn)
{
	id = i;
	sentence = s;
	timeServed = ts;
	lastName = ln;
	firstName = fn;
	/*timeRemain = tr;*/
}

Prisoner::~Prisoner()
{
	cout << "\nDestroying Prisoner..." << endl;
}


//Setters and Getter function definitions
void Prisoner::setId(string i) {id = i;}
string Prisoner::getId() {return id;}

void Prisoner::setSentence(int s){sentence = s;}
int Prisoner::getSentence() {return sentence;}

void Prisoner::setTimeServed(int ts) {timeServed = ts;}
int Prisoner::getTimeServed() {return timeServed;}

void Prisoner::setName(string ln, string fn)
{
	lastName = ln;
	firstName = fn;
}
string Prisoner::getName() {return lastName + " " + firstName;}


//Overloading the extraction operator
ostream& operator << (ostream &out, const Prisoner &p)
{
	cout << "Prisoner info:\n";
	out << "ID #: " << p.id << endl;
	out << "Sentence: " << p.sentence << endl;
	out << "Time served: " << p.timeServed << endl;
	out << "Name: " << p.lastName << " " << p.firstName << endl << endl;
	return out;
}

//Overloading the insertion operator
istream& operator >> (istream &in, Prisoner &p)
{
	in >> p.id;
	in >> p.sentence;
	in >> p.timeServed;
	in >> p.lastName;
	in >> p.firstName;
	return in;
}