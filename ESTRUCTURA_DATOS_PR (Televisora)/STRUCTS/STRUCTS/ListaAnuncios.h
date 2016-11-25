#ifndef LISTAANUNCIOS_H
#define LISTAANUNCIOS_H

#include "NodoAnuncio.h"
#include "Anuncio.h"

class ListaAnuncios
{
private:
	NodoAnuncio * cabeza;
	int longitud;

public:
	ListaAnuncios(void);

	NodoAnuncio*& getCabeza(void);
	void setCabeza(NodoAnuncio * cab);

	int getlongitud(void) const;
	void setLongitud(int l);
	
	void addItemToBegin(Anuncio *item);
	//void addItemToAsc(Anuncio *item);
	Anuncio*& searchItem(Anuncio *item);
	bool deleteItem(Anuncio * item);
	string toString(void);
};

#endif // !LISTAANUNCIOS_H
