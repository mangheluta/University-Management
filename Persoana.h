
#ifndef PERSOANA_H_
#define PERSOANA_H_

#include <string>
#include <iostream>
using namespace std;

class Persoana {
protected:
	int id;
	string nume;
	string prenume;
public:
	Persoana();
	Persoana(int id, string nume, string prenume);
	virtual ~Persoana();

	int getId();
	void setId(int id);
	string getNume();
	void setNume(string nume);
	string getPrenume();
	void setPrenume(string prenume);

	friend ostream& operator << (ostream& out, Persoana& pers){
		out << pers.id << " " << pers.nume << " " << pers.prenume;
		return out;
	}

};

#endif /* PERSOANA_H_ */
