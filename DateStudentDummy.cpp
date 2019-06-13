#include "DateStudentDummy.h"



DateStudentDummy::DateStudentDummy() {
	Student* st1 = new Student(304, "Student1", "St1");
	Student* st2 = new Student(305, "Student2", "St2");
	Student* st3 = new Student(306, "Student3", "St3");
	this->studenti.push_back(st1);
	this->studenti.push_back(st2);
	this->studenti.push_back(st3);
}

DateStudentDummy::~DateStudentDummy() {
}

void DateStudentDummy::insert(Student* pers) {
	this->studenti.push_back(pers);
}

void DateStudentDummy::del(int id) {
	throw -10;
}

list<Student*> DateStudentDummy::select() {
	return this->studenti;
}

Student* DateStudentDummy::selectID(int id) {
	list<Student*> studenti = select();
	for (list<Student*>::iterator it = studenti.begin(); it != studenti.end();
			it++) {
		Student* student = *it;
		if (student->getId() == id) {
			return student;
		}
	}
	// nu exista studentul cu id-ul 'id'
	throw -9999;
}

