#ifndef NOTA_H_
#define NOTA_H_

#include "Materie.h"
#include "Student.h"
#include "Data.h"


enum TipNota {
	EXAMEN, RESTANTA
};

class Nota {
private:
	Materie* materie;
	Student* student;
	Data* data;
	int valoare;
	TipNota tipNota; // variabila tipNota paote fi TipNota.EXAMEN ori TipNota.RESTANTA
public:
	Nota();
	Nota(int valoare);
	virtual ~Nota();

	void setTipNota(const TipNota &tn);

	TipNota getTipNota();

	void setMaterie(Materie* mat);

	Materie* getMaterie();

	void setStudent(Student* student);

	Student* getStudent();


	void setData(Data* data);

	Data* getData();

	void setValoare(int valoare);

	int getValoare();

	friend ostream& operator << (ostream& out, const Nota& n){
		cout << "\t\t" << n.materie->getDenumire() << " | ";
					cout << " " << n.student->getNume() << " " << n.student->getPrenume() << " | ";
					switch (n.student->getTipStudent()) {
					case BUGET:
						cout << "BUGET | ";
						break;
					case TAXA:
						cout << "TAXA | ";
						break;
					}

					cout << " VAL: " << n.valoare << " ";
					switch (n.tipNota) {
					case EXAMEN:
						cout << " | EXAMEN | ";
						break;
					case RESTANTA:
						cout << " | RESTANTA | ";
						break;
					}

					cout << "DATA: " << *(n.data);
					cout << endl;
		return out;
	}
};

#endif /* NOTA_H_ */
