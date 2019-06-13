#ifndef DATESTUDENT_H_
#define DATESTUDENT_H_

#include "Student.h"
#include "IDate.h"
#include <list>
#include <fstream>

using namespace std;


class DateStudent: public IDate<Student> {
private:
	string numeFisier;

public:
	DateStudent(string numeFisier);

	virtual ~DateStudent();

	list<Student> select();

	Student selectID(int id);

	void insert(Student stud);

	void del(int id);
};

#endif /* DATESTUDENT_H_ */
