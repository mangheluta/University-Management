#ifndef MATERIE_H_
#define MATERIE_H_

#include <string>
//#include <stdlib.h>

using namespace std;

class Materie {
private:
	std::string denumire;
	int credite;
public:
	Materie();
	Materie(std::string denumire, int credite);
	virtual ~Materie();

	void setDenumire(string denumire);

	string getDenumire();

	friend ostream& operator <<(ostream& out, Materie& mat) {
		out <<  mat.denumire ;
		out << string(" ");
//		out << string(itoa(mat.credite));
		return out;
	}

};

#endif /* MATERIE_H_ */
