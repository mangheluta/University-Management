
#ifndef FACULTATE_H_
#define FACULTATE_H_

#include <list>

#include "Profesor.h"
#include "Registru.h"
class Facultate {
private:
	list<Profesor*> profesori;
	Registru* registru;
	int anStudiu;
public:
	Facultate();

	Facultate(int anStudiu);

	virtual ~Facultate();

	void setRegistru(Registru* registru);

	Registru* getRegistru();

	void setProfesori(list<Profesor*> profesori);

	void setAnStudiu(int anStudiu);

	int getAnStudiu();
};

#endif /* FACULTATE_H_ */
