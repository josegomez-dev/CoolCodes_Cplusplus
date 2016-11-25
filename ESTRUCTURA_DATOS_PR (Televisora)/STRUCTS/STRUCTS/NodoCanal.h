#include "Canal.h"

class NodoCanal
{
private:
	Canal *info;

	NodoCanal *ant;
	NodoCanal *sig;
public:
	NodoCanal(void);
	NodoCanal(Canal  * nd);

	Canal * getInfo(void);
	void setInfo(Canal c);

	NodoCanal *& getAnt(void);
	void setAnt(NodoCanal *&);

	NodoCanal *& getSig(void);
	void setSig(NodoCanal *&);
};

