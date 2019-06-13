#include "Persoana.h"

Persoana::Persoana() {
	// TODO Auto-generated constructor stub

}

Persoana::~Persoana() {
	// TODO Auto-generated destructor stub
}

int Persoana::getId(){
	return this->id;
}
void Persoana::setId(int id){
	this->id = id;
}
string Persoana::getNume(){
	return this->nume;
}
void Persoana::setNume(string nume){
	this->nume = nume;
}
string Persoana::getPrenume(){
	return this->prenume;
}
void Persoana::setPrenume(string prenume){
	this->prenume = prenume;
}

Persoana::Persoana(int id, string nume, string prenume) : id(id), nume(nume), prenume(prenume){};
