#include "Nota.h"
#include "Materie.h"
#include "Student.h"
#include "Data.h"

Nota::Nota() {
	// TODO Auto-generated constructor stub

}

Nota::~Nota() {
	// TODO Auto-generated destructor stub
}

Nota::Nota(int valoare) : valoare(valoare){};

void Nota::setTipNota(const TipNota &tn){
	this->tipNota = tn;
}

TipNota Nota::getTipNota(){
	return this->tipNota;
}

void Nota::setMaterie(Materie* mat){
	this->materie = mat;
}

Materie* Nota::getMaterie(){
	return this->materie;
}

void Nota::setStudent(Student* student){
	this->student = student;
}

Student* Nota::getStudent(){
	return this->student;
}


void Nota::setData(Data* data){
	this->data = data;
}

Data* Nota::getData(){
	return this->data;
}

void Nota::setValoare(int valoare){
	this->valoare = valoare;
}

int Nota::getValoare(){
	return this->valoare;
}
