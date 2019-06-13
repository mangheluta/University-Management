

#include "Facultate.h"

Facultate::Facultate() {
	// TODO Auto-generated constructor stub

}

Facultate::~Facultate() {
	// TODO Auto-generated destructor stub
}

Facultate::Facultate(int anStudiu) : anStudiu(anStudiu) {
}


void Facultate::setRegistru(Registru* registru) {
	this->registru = registru;
}
Registru* Facultate::getRegistru() {
	return this->registru;
}

void Facultate::setProfesori(list<Profesor*> profesori) {
	this->profesori = profesori;
}

void Facultate::setAnStudiu(int anStudiu) {
	this->anStudiu = anStudiu;
}
int Facultate::getAnStudiu() {
	return this->anStudiu;
}
