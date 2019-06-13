#ifndef REGISTRU_H_
#define REGISTRU_H_

#include <string>
#include <list>
#include "Nota.h"

using namespace std;

class Registru {
private:
	int id; // id-ul facultatii
	list<Nota> note;
public:
	Registru();
	Registru(int id);
	virtual ~Registru();

	list<Nota>& getNote();

	void setId(int id);

	int getId();

	list<Materie*> getMateriiDinRegistru();

};

#endif /* REGISTRU_H_ */
