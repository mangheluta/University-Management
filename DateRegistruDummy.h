
#ifndef DATEREGISTRUDUMMY_H_
#define DATEREGISTRUDUMMY_H_

#include <list>
#include "IDate.h"
#include "Registru.h"
#include "Nota.h"
#include "Materie.h"
#include "Student.h"

class DateRegistruDummy: public IDate<Registru> {

private:
	// 'baza de date'
	list<Registru> registrii;

public:
	DateRegistruDummy();
	virtual ~DateRegistruDummy();

	void initializare();

	list<Registru> select();

	Registru selectID(int idRegistru);

	void del(int idRegistru);

	// SQLite implement
	void insert(Registru registruNou);

	list<Materie*> getMateriiDinRegistri();

};

#endif /* DATEREGISTRUDUMMY_H_ */
