#ifndef LISTAANUNCIOCONTRATADO_H
#define LISTAANUNCIOCONTRATADO_H

#include "NodoAnuncioContratado.h"
#include "AnuncioContratado.h"

class ListaAnunciosContratados
{
private:
	NodoAnuncioContratado * cabeza;
	int longitud;
public:
	ListaAnunciosContratados(void);

	NodoAnuncioContratado*& getCabeza(void);
	void setCabeza(NodoAnuncioContratado * cab);

	int getlongitud(void) const;
	void setLongitud(int l);

	void addItemToBegin(AnuncioContratado *&item);
	//AnuncioContratado *& searchItem(AnuncioContratado *&item);
	//bool deleteItem(AnuncioContratado *&item);
	string toString(void);
};

#endif
