
#include "Student.h"

Student::Student() {
	// TODO Auto-generated constructor stub

}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

Student::Student(int id, string nume, string prenume) : Persoana(id, nume, prenume) {
}

void Student::setTipStudent(const TipStudent &ts){
	this->tipStudent = ts;
}

TipStudent Student::getTipStudent(){
	return this -> tipStudent;
}
