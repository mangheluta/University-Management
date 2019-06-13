

#ifndef DATEPROFESORDUMMY_H_
#define DATEPROFESORDUMMY_H_

#include "Profesor.h"
#include "IDate.h"
#include <list>
//#include <fstream>

class DateProfesorDummy: public IDate<Profesor*> {
private:
	list<Profesor*> profesori; // 'DB'
public:
	DateProfesorDummy();

	virtual ~DateProfesorDummy();

	list<Profesor*> select();

	Profesor* selectID(int id);

	void insert(Profesor* pers);

	void del(int id);

	void adaugareMaterie(Materie* materie, int idProfesor);

	void afisareProfesori();

	void initializare();

};

#endif /* DATEPROFESORDUMMY_H_ */
