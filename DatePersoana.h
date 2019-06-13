
#ifndef DATEPERSOANA_H_
#define DATEPERSOANA_H_

#include "Persoana.h"
#include "IDate.h"
#include <list>
#include <fstream>

using namespace std;

class DatePersoana : public  IDate<Persoana>  {
private:
	string numeFisier;
public:
	DatePersoana(string numeFisier);
	virtual ~DatePersoana();

	list<Persoana> select();

	Persoana selectID(int id);

	void insert(Persoana pers){

	}

	void del(int id){

	}
};

#endif /* DATEPERSOANA_H_ */
