
#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "Persoana.h"
#include "Materie.h"
#include <list>

class Profesor : public Persoana{
private:
	list<Materie*> materii;
public:
	Profesor();
	Profesor(int id, string nume, string prenume);

	void addMaterie(Materie* materie);

	virtual ~Profesor();

	friend ostream& operator<<(ostream& out, Profesor& prof){
		out << "PROFESORUL: [" << prof.id << "]: "<< prof.nume << " " << prof.prenume<< endl;
		if(prof.materii.size() > 0){
			for(list<Materie*>::iterator it = prof.materii.begin(); it != prof.materii.end(); it++){
				Materie* mat = *it;
//				out <<"---exista o materie---"<<endl;
				out << "\t\t" << *mat << endl;
				// out << *mat << endl;
			}
		}
		return out;
	}
};

#endif /* PROFESOR_H_ */
