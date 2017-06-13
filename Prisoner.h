#ifndef PRISONER_H
#define PRISONER_H

#include <iostream>
#include <string>

using namespace std;

//Base class
class Prisoner
{
public:
	//Constructors and Destructors
	Prisoner();
	Prisoner(string, int, int, string, string);
	~Prisoner();

	//Public member setter and getter functions
	void setId(string);
	string getId();

	void setSentence(int);
	int getSentence();

	void setTimeServed(int);
	int getTimeServed();

	void setName(string, string);
	string getName();

	//Public member functions
	void credit();
	void debit();
	int getTimeRemain();
	int reSentence();

	//Stream extraction and insertion operator overloading
	friend ostream& operator << (ostream &out, const Prisoner &p);
	friend istream& operator >> (istream &in, Prisoner &p);

private:
	string lastName;
	string firstName;
	string id;
	int sentence;
	int timeServed;
	int timeRemain;

};

#endif //PRISONER_H