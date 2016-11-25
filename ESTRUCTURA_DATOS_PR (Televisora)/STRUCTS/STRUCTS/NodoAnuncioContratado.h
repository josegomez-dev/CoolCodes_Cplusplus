#ifndef NODOANUNCIOCONTRATADO_H
#define NODOANUNCIOCONTRATADO_H

#include "AnuncioContratado.h"

class NodoAnuncioContratado
{
private:
	AnuncioContratado *info;
	NodoAnuncioContratado *sig;
public:
	NodoAnuncioContratado();
	NodoAnuncioContratado(AnuncioContratado *&an);

	AnuncioContratado *& getInfo(void);
	void setInfo(AnuncioContratado *&an);

	NodoAnuncioContratado *& getSig(void);
	void setSig(NodoAnuncioContratado *&n);
};

#endif // NODOANUNCIOCONTRATADO_H
