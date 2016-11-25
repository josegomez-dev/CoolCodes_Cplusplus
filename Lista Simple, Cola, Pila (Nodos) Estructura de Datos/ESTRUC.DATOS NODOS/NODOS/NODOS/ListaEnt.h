#pragma once
#ifndef LISTAENT_H
#define LISTAENT_H
#include "NodoEnt.h"

class ListaEnt
{
private:
	int longitud;
	NodoEnt * cabeza;

public:
	ListaEnt(void);
	int getlongitud(void) const;
	void setLongitud(int l);
	NodoEnt * getCabeza(void) const;
	void setCabeza(NodoEnt * cabeza);

	void insertarEnt(int e);
	void insertarEntOrdenado(int e);
	int longitudLista(void);
	void mostrarLista(void);
	int buscarElemento(int e);
	bool eliminarElemento(int e);

};

#endif // !1
