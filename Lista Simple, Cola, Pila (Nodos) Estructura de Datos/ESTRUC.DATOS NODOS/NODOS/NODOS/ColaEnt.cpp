#include "stdafx.h"
#include "ColaEnt.h"


#include <stddef.h>

#include "ColaEnt.h"
#include "NodoEnt.h"
#include <iostream>

using namespace std;

ColaEnt::ColaEnt(void) {

	longitud = 0;
	frente = NULL;
	final = NULL;
}

int ColaEnt::getLongitud(void) {

	return longitud;

}

void ColaEnt::insertarElem(int pElem) {

	NodoEnt * nuevo = new NodoEnt(pElem);
	if (frente == NULL) {

		frente = nuevo;
		final = nuevo;
	}
	else {
		final->setSig(nuevo);
		final = nuevo;
	}
	longitud++;
}

bool ColaEnt::eliminarElem()
{
	NodoEnt * nuevo = new NodoEnt();
	bool r = false;

	if (frente) {
		nuevo = frente;
		frente = nuevo->getSig();
		delete(nuevo);
		r = true;
		longitud--;
	}

	return r;
}

void ColaEnt::listar()
{
	NodoEnt * nuevo = new NodoEnt();

	if (!final)
	{
		cout << "No hay datos en la cola" << endl;
		return;
	}
	else {

		nuevo = frente;

		while (nuevo)
		{
			cout << nuevo->getInfo() << endl;
			nuevo = nuevo->getSig();
		}
	}
}