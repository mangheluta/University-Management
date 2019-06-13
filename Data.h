#ifndef DATA_H_
#define DATA_H_

#include <iostream>
using namespace std;

class Data {
private:
	int an;
	int luna;
	int zi;
public:
	Data(int an, int luna, int zi);
	Data();
	virtual ~Data();

	friend ostream& operator << (ostream& out, Data& data){
		out << data.an << " " << data.luna << " " << data.zi;
		return out;
	}
};

#endif /* DATA_H_ */
