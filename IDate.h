
#ifndef IDATE_H_
#define IDATE_H_

#include <list>

using namespace std;

template <class T>
class IDate {
public:

	virtual list<T> select() = 0;
	virtual T selectID(int id) = 0;
	virtual void insert(T elementNou) = 0;
	virtual void del(int id) = 0;

};

#endif /* IDATE_H_ */
