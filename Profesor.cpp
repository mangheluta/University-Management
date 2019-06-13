#include "Profesor.h"

Profesor::Profesor() {
	// TODO Auto-generated constructor stub

}

Profesor::~Profesor() {
	// TODO Auto-generated destructor stub
}

Profesor::Profesor(int id, string nume, string prenume) : Persoana(id, nume, prenume) {}

void Profesor::addMaterie(Materie* materie) {
	this->materii.push_back(materie);
}
