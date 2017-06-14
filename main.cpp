#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <queue>
#include <map>
#include <iomanip>
#include <cstdlib>

#include "Prisoner.h"
#include "Jailed.h"
#include "Parolee.h"

int main()
{
	ifstream file("prisoner_data.csv");
	string id, sent, serv, last, first, line;
	int sentence, served;	
	
	vector<string> vid;
	vector<int> vsentence;
	vector<int> vserved;
	vector<string> vlast;
	vector<string> vfirst;
	int row = 0;

	getline(file, line); //To skip first line of the file

	//Reading data from file and storing each value
	//from each line into a vector
	while(getline(file, line))
	{
		stringstream text(line);

		//reading each value from line until we reach a comma
		getline(text, id, ',');
		vid.push_back(id);

		getline(text, sent, ',');
		istringstream(sent) >> sentence; //converting string to int
		vsentence.push_back(sentence);

		getline(text, serv, ',');
		istringstream(serv) >> served;
		vserved.push_back(served);

		getline(text, last, ',');
		vlast.push_back(last);

		getline(text, first, ',');
		vfirst.push_back(first);

		row++;		
	}

	//Test code to print vector
	/*cout << "Data read from file\n";
	int count = 0;
	for (vector<string>::iterator it = vfirst.begin(); it != vfirst.end(); it++)
	{
		cout << count << " -> " << *it << endl;
		count++;
	}*/

	file.close();

	Prisoner prisoner[row];
	Jailed * jail[row];
	Parolee * parole[row];

	for (int i = 0; i < row; i++)
	{
		prisoner[i].setId(vid[i]);
		prisoner[i].setSentence(vsentence[i]);
		prisoner[i].setTimeServed(vserved[i]);
		prisoner[i].setName(vlast[i], vfirst[i]);
		jail[i] = new Jailed(vsentence[i], vserved[i], 0.10);
		parole[i] = new Parolee(vsentence[i], vserved[i]);
		parole[i]->setParole(vsentence[i]);
	}

	for(int i = 0; i < row; i++)
	{
		cout << prisoner[i];
		jail[i]->display();
		parole[i]->display();
	}

	multimap<int, string> release;
	for (int i = 0; i < row; i++)
	{
		release.insert({prisoner[i].getTimeRemain(), prisoner[i].getName()});
	}

	cout << "The first six Prisoners to be released:" << endl;
	int i = 1;
	for (auto &x : release)
	{
		cout << i << " --> " << x.first << " : " << x.second << endl;
		i++;
	}

	return 0;
}