#include <iostream>
#include <list>
#include <vector>

#include "DateProfesorDummy.h"
#include "DateRegistruDummy.h"
#include "DateStudentDummy.h"
#include "DateProfesor.h"
#include "Facultate.h"
#include "Materie.h"
#include "Nota.h"
#include "Persoana.h"
#include "Profesor.h"
#include "Registru.h"
#include "Student.h"

using namespace std;

int main(int argc, char **argv) {

	DateStudentDummy dateStud;
	list<Student*> studenti = dateStud.select();

	for (list<Student*>::iterator it = studenti.begin(); it != studenti.end();
			it++) {
		cout << "STUDENT: " << *(*it) << endl;
	}

	cout << "=========================================" << endl;

	DateProfesor dateProfi("profesori.txt");
	list<Profesor> profi = dateProfi.select();

	for (list<Profesor>::iterator it = profi.begin(); it != profi.end(); it++) {
		Profesor prof = *it;
		cout << "PROFESOR: ";
		cout << prof;
		cout << endl;
	}

	cout << "=========================================" << endl;


	try {
		int id = 2;
		Profesor profx = dateProfi.selectID(id);
		cout << "PROFESORUL CU ID-UL " << id << " este: " << profx << endl;
	} catch (int nrEroare) {
		cout << "EROARE NR: " << nrEroare << endl;
	}


	cout << "=========================================" << endl;

	try {
		int id = 304;
		Student* stud = dateStud.selectID(id);
		cout << "STUDENT CU ID-UL " << id << " este: " << *stud << endl;
	} catch (int nrEroare) {
		cout << "EROARE NR: " << nrEroare << endl;
	}

	cout << "========================================" << endl;

	DateRegistruDummy dateRegistrii;

	vector<Registru*> registriiVector;


	list<Registru> facultati = dateRegistrii.select();
	for (list<Registru>::iterator it = facultati.begin(); it != facultati.end();
			it++) {
		Registru reg = *it;
		registriiVector.push_back(&reg);
		cout << endl << "REGISTRU / FACULTATE: " << reg.getId() << endl << endl;

		cout << "NOTE:" << endl;
		list<Nota> note = reg.getNote();
		cout << "NR NOTE: " << note.size() << endl;
		for (list<Nota>::iterator itN = note.begin(); itN != note.end();
				itN++) {
			Nota n = *itN;
			cout << n << endl;

		}
	}

	cout << "========================================" << endl; // materii care au fost adaugate registrilor
	list<Materie*> materii = dateRegistrii.getMateriiDinRegistri();
	vector<Materie*>vectorMaterii;

	for (list<Materie*>::iterator it = materii.begin(); it != materii.end();
			it++) {
		cout << *(*it) << endl;
		vectorMaterii.push_back(*it);
	}


	cout << "========================================" << endl;
	DateProfesorDummy dateProfesori;

	dateProfesori.adaugareMaterie(vectorMaterii[0], 100);
	dateProfesori.adaugareMaterie(vectorMaterii[2], 150);
	dateProfesori.adaugareMaterie(vectorMaterii[3], 150);



	list<Profesor*> profesori = dateProfesori.select();
	for (list<Profesor*>::iterator it = profesori.begin();
			it != profesori.end(); it++) {
		Profesor* prof = *it;
		cout << *prof << endl;
	}

	cout << "========================================" << endl;
	Facultate facultate;
	facultate.setProfesori(profesori);

	facultate.setRegistru(registriiVector[0]);


	return 0;

}
