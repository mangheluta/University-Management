#include "DateProfesor.h"

#include <sstream>

DateProfesor::DateProfesor(string numeFisier) {
	this->numeFisier = numeFisier;
}

DateProfesor::~DateProfesor() {
}

void DateProfesor::insert(Profesor pers) {
	throw -10;
}

void DateProfesor::del(int id) {
	throw -10;
}

list<Profesor> DateProfesor::select() {
	ifstream fisier(numeFisier.c_str(), ios::in);
	list<Profesor> profesori;

	string line;

	while (getline(fisier, line)) {
		stringstream lineStream(line);

		int id;
		string nume;
		string prenume;

		lineStream >> id;
		lineStream >> nume;
		lineStream >> prenume;


		Profesor prof;
		prof.setId(id);
		prof.setNume(nume);
		prof.setPrenume(prenume);

		profesori.push_back(prof);

	}

	return profesori;
}

Profesor DateProfesor::selectID(int id) {
	list<Profesor> profesori = select();
	for (list<Profesor>::iterator it = profesori.begin(); it != profesori.end();
			it++) {
		Profesor prof = *it;
		if (prof.getId() == id) {
			return prof;
		}
	}
	// nu exista profesorul cu id-ul 'id'
	throw -9999;
}

