#pragma once

#ifndef COLAENT_H
#define COLAENT_H
#include "NodoEnt.h"

class ColaEnt {

private:

	int longitud;
	NodoEnt * frente;
	NodoEnt * final;

public:

	ColaEnt(void);
	int getLongitud(void);
	void insertarElem(int e);
	bool eliminarElem();
	void listar();
};

#endif
