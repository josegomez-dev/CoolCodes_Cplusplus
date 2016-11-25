#pragma once
#ifndef PILAENT_H
#define PILAENT_H

#include "NodoEnt.h"

class PilaEnt
{
private: 
	int longitud;
	NodoEnt * tope;

public:
	PilaEnt(void);
	int getLongitud(void) const;
	NodoEnt * getTope(void) const;
	void setTope(NodoEnt *);
	bool push(int e);
	bool pop(void);
	void mostrar(void);
};

#endif // !PILAENT_H
