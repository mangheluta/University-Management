#ifndef DATEPROFESOR_H_
#define DATEPROFESOR_H_

#include "Profesor.h"
#include "IDate.h"
#include <list>
#include <fstream>

using namespace std;

class DateProfesor : public IDate <Profesor> {
private:
	string numeFisier;

public:
	DateProfesor(string numeFisier);

	virtual ~DateProfesor();

	list<Profesor> select();

	Profesor selectID(int id);

	void insert(Profesor pers);

	void del(int id);
};

#endif /* DATEPROFESOR_H_ */
