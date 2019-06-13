#include "DatePersoana.h"

#include <sstream>

DatePersoana::DatePersoana(string numeFisier) {
	this->numeFisier = numeFisier;

}

DatePersoana::~DatePersoana() {
	// TODO Auto-generated destructor stub
}


list<Persoana> DatePersoana::select(){
	ifstream fisier(numeFisier.c_str(), ios::in);
	list<Persoana> persoane;


	string line;

	while (getline(fisier, line)) {
		stringstream lineStream(line);

		int id;
		string nume;
		string prenume;
		lineStream >> id;
		lineStream >> nume;
		lineStream >> prenume;

		Persoana pers;
		pers.setId(id);
		pers.setNume(nume);
		pers.setPrenume(prenume);

		persoane.push_back(pers);
	}
	return persoane;
}


Persoana DatePersoana::selectID(int id){
		list<Persoana> persoane = select();
		for(list<Persoana>::iterator it = persoane.begin(); it != persoane.end(); it++){
			Persoana pers = *it;
			if(pers.getId() == id){
				return pers;
			}
		}
		// nu exista persoana cu id-ul 'id'
		throw -9999;

	}
