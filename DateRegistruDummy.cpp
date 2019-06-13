

#include "DateRegistruDummy.h"
#include "IDate.h"
#include "Registru.h"
#include "Nota.h"
#include "Materie.h"
#include "Student.h"
#include "Data.h"

DateRegistruDummy::DateRegistruDummy() {

	this->initializare(); // populam listele cu date de test

}

DateRegistruDummy::~DateRegistruDummy() {
	// TODO Auto-generated destructor stub
}

list<Materie*> DateRegistruDummy::getMateriiDinRegistri(){
		list<Materie*> materii;
		for(list<Registru>::iterator it = registrii.begin(); it != registrii.end(); it++){
			Registru reg = *it;
//			a.splice(a.end(), b);
			materii.splice(materii.end(), reg.getMateriiDinRegistru());

		}
		return materii;
	}

void DateRegistruDummy::initializare(){
	Registru reg1(1000);
	Registru reg2(1001);

	Nota n1(8);
	Nota n2(7);

	n1.setTipNota(RESTANTA);
	Data *data1 = new Data(2017, 12, 25);
	n1.setData(data1);
	n2.setTipNota(EXAMEN);
	Data *data2 = new Data(2018, 3, 1);
	n2.setData(data2);

	Materie* m1 = new Materie("C++ OOP", 5);
	Materie* m2 = new Materie("BAZE DE DATE", 6);

	Student* s1 = new Student(103, "Ionescu", "Ion");
	s1->setTipStudent(BUGET);
	n1.setMaterie(m1);
	n2.setMaterie(m1);

	n1.setStudent(s1);
	n2.setStudent(s1);

	Nota n4(10);
	n4.setStudent(s1);
	n4.setMaterie(m2);
	n4.setTipNota(EXAMEN);
	Data *data4 = new Data(2018, 10, 14);
	n4.setData(data4);

	reg1.getNote().push_back(n1);
	reg1.getNote().push_back(n2);
	reg1.getNote().push_back(n4);
	// ---- /reg1

	Nota n3(10);
	n3.setTipNota(RESTANTA);
	Student* s2 = new Student(309, "Georgescu", "George");
	s2->setTipStudent(TAXA);
	Materie* m3 = new Materie("SISTEME DE OPERARE", 2);
	n3.setMaterie(m3);
	n3.setStudent(s2);
	Data *data3 = new Data(2016, 10, 14);
	n3.setData(data3);

	reg2.getNote().push_back(n3);

	// ---- /reg2

	this->registrii.push_back(reg1);
	this->registrii.push_back(reg2);
}

void DateRegistruDummy::del(int idRegistru){
	throw 10; // eroare
}

void DateRegistruDummy::insert(Registru registruNou) {
	this->registrii.push_back(registruNou);

}

Registru DateRegistruDummy::selectID(int idRegistru){
	list<Registru> registrii = select();
	for (list<Registru>::iterator it = registrii.begin();
			it != registrii.end(); it++) {
		Registru registru = *it;
		if (registru.getId() == idRegistru) {
			return registru;
		}
	}
	// nu exista registrul (facultatea) cu id-ul 'id'
	throw -9999;
}

list<Registru> DateRegistruDummy::select(){
	return this->registrii;
}
