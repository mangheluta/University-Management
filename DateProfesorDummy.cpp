
#include "DateProfesorDummy.h"

DateProfesorDummy::DateProfesorDummy() {

	this->initializare();
}

DateProfesorDummy::~DateProfesorDummy() {
}

list<Profesor*> DateProfesorDummy::select() {

	return this->profesori;
}

Profesor* DateProfesorDummy::selectID(int id) {
	list<Profesor*> profesori = select();
	for (list<Profesor*>::iterator it = profesori.begin();
			it != profesori.end(); it++) {
		Profesor *prof = *it;
		if (prof->getId() == id) {
			return prof;
		}
	}
	// nu exista profesorul cu id-ul 'id'
	throw -9999;
}

void DateProfesorDummy::insert(Profesor* pers) {
	throw -10;
}

void DateProfesorDummy::del(int id) {
	throw -10;
}

void DateProfesorDummy::adaugareMaterie(Materie* materie, int idProfesor) {
	for (list<Profesor*>::iterator it = profesori.begin();
			it != profesori.end(); it++) {
		Profesor* prof = *it;
		if (prof->getId() == idProfesor) {
			prof->addMaterie(materie);
			break;
		}
	}
}

void DateProfesorDummy::afisareProfesori() {
	for (list<Profesor*>::iterator it = profesori.begin();
			it != profesori.end(); it++) {
		Profesor *prof = *it;
		cout << *prof << endl;
	}
}

void DateProfesorDummy::initializare() {
	Profesor* p1 = new Profesor(100, "Marinescu", "Marin");
	Profesor* p2 = new Profesor(150, "Georgescu", "George");

	this->profesori.push_back(p1);
	this->profesori.push_back(p2);
}
