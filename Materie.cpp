#include "Materie.h"

Materie::Materie() {
	// TODO Auto-generated constructor stub

}

Materie::~Materie() {
	// TODO Auto-generated destructor stub
}

Materie::Materie(std::string denumire, int credite) : denumire(denumire), credite(credite){};

void Materie::setDenumire(string denumire){
		this->denumire = denumire;
	}

string Materie::getDenumire(){
	return this->denumire;
}
