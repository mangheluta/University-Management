#include "DateStudent.h"

#include <sstream>

DateStudent::DateStudent(string numeFisier) {
	this->numeFisier = numeFisier;
}

DateStudent::~DateStudent() {
}


list<Student> DateStudent::select() {
	ifstream fisier(numeFisier.c_str(), ios::in);
	list<Student> studenti;

	string line;

	while (getline(fisier, line)) {
		stringstream lineStream(line);
		int id;
		string nume;
		string prenume;
		lineStream >> id;
		lineStream >> nume;
		lineStream >> prenume;

		Student stud;
		stud.setId(id);
		stud.setNume(nume);
		stud.setPrenume(prenume);

		studenti.push_back(stud);
	}

	return studenti;
}

Student DateStudent::selectID(int id) {
	list<Student> studenti = select();
	for (list<Student>::iterator it = studenti.begin(); it != studenti.end();
			it++) {
		Student student = *it;
		if (student.getId() == id) {
			return student;
		}
	}
	// nu exista studentul cu id-ul 'id'
	throw -9999;
}

void DateStudent::insert(Student stud) {
		throw -10;
	}

void DateStudent:: del(int id) {
		throw -10;
	}
