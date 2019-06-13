#ifndef DATESTUDENT_H_
#define DATESTUDENT_H_

#include "Student.h"
#include "IDate.h"
#include <list>

using namespace std;

class DateStudentDummy : public IDate <Student*> {
private:
	list<Student*> studenti;

public:
	DateStudentDummy();

	virtual ~DateStudentDummy();

	list<Student*> select();

	Student* selectID(int id);

	void insert(Student* student);

	void del(int id);
};

#endif /* DATESTUDENT_H_ */
