#include "stdafx.h"
#include "PilaEnt.h"
#include <iostream>

using namespace std;

PilaEnt::PilaEnt(void)
{
	longitud = 0;
	tope = NULL;
}

int PilaEnt::getLongitud(void) const
{
	return longitud;
}

NodoEnt * PilaEnt::getTope(void) const
{
	return tope;
}

void PilaEnt::setTope(NodoEnt * ptope)
{
	tope = ptope;
}

bool PilaEnt::push(int e)
{
	NodoEnt * nuevo = new NodoEnt(e);

	if (nuevo == NULL) {
		return false;
	}
	else {
		if (this == NULL) {
			tope = nuevo;
		}
		else {
			nuevo->setSig(tope);
			tope = nuevo;
		}
		longitud++;
		return true;
	}

}

bool PilaEnt::pop(void)
{
	NodoEnt * aux;
	if (!(this == NULL)) {
		aux = tope;
		tope = tope->getSig();
		
		longitud--;
		
		delete aux;
	
		return true;
	}
	else {
		return false;
	}
}

void PilaEnt::mostrar(void)
{
	NodoEnt * aux = tope;

	do {
		cout << aux->getInfo() << endl;
		aux = aux->getSig();
	} while (aux != NULL);

}

