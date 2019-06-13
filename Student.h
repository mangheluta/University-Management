
#ifndef STUDENT_H_
#define STUDENT_H_

#include "Persoana.h"

enum TipStudent {
	BUGET, TAXA
};

class Student: public Persoana {
private:
	TipStudent tipStudent;
public:
	Student();
	Student(int id, string nume, string prenume);
	virtual ~Student();
	void setTipStudent(const TipStudent &ts);
	TipStudent getTipStudent();
};

#endif /* STUDENT_H_ */
