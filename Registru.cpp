#include "Registru.h"

Registru::Registru() {
	// TODO Auto-generated constructor stub

}

Registru::~Registru() {
	// TODO Auto-generated destructor stub
}

Registru::Registru(int id) :
		id(id) {
}
;

list<Nota>& Registru::getNote() {
	return this->note;
}

void Registru::setId(int id) {
	this->id = id;
}

int Registru::getId() {
	return this->id;
}

list<Materie*> Registru::getMateriiDinRegistru() {
	list<Materie*> listaMaterii;
	for (list<Nota>::iterator it = note.begin(); it != note.end(); it++) {
		Nota nota = *it;
		Materie* materieAsociata = nota.getMaterie();
		listaMaterii.push_back(materieAsociata);
	}
	return listaMaterii;
}
