#ifndef NODOANUNCIO_H
#define NODOANUNCIO_H

#include "Anuncio.h"

class NodoAnuncio
{
private:
	Anuncio *info;

	NodoAnuncio *sig;
public:
	//NodoAnuncio();
	NodoAnuncio(Anuncio *&a);

	Anuncio *& getInfo(void);
	void setInfo(Anuncio *&a);

	NodoAnuncio *& getSig(void);
	void setSig(NodoAnuncio *&n);
};

#endif