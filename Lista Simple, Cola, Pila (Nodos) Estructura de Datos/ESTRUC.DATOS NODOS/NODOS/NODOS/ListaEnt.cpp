#include "stdafx.h"
#include "ListaEnt.h"
#include <iostream>

using namespace std;

ListaEnt::ListaEnt(void)
{
	cabeza = NULL;
	longitud = 0;
}

int ListaEnt::getlongitud(void) const{
	return longitud;
}

void ListaEnt::setLongitud(int pl) {
	longitud = pl;
}

NodoEnt * ListaEnt::getCabeza() const{
	return cabeza;
}

void ListaEnt::setCabeza(NodoEnt * pcabeza){
	cabeza = pcabeza;
}

int ListaEnt::longitudLista(void) {
	return longitud;
}

void ListaEnt::insertarEnt(int e) {
	NodoEnt * nuevo;
	nuevo = new NodoEnt(e);

	if (cabeza == NULL) {
		cabeza = nuevo;
	}
	else {
		nuevo->setSig(cabeza);
		cabeza = nuevo;
		
		longitud++;
	}
}

void ListaEnt::insertarEntOrdenado(int e)
{
	NodoEnt * aux = new NodoEnt(e);
	
	if (cabeza == NULL) {
		cabeza = aux;
	}
	else {
		if (aux->getInfo() < cabeza->getInfo()) {
			aux->setSig(cabeza);
			cabeza = aux;
		}
		else {
			NodoEnt * ant = NULL;
			NodoEnt * act = NULL;

			ant = cabeza;
			act = cabeza->getSig();

			while ((act != NULL) && (act->getInfo() < aux->getInfo())) {
				ant = ant->getSig();
				act = act->getSig();
			}
			aux->setSig(act);
			ant->setSig(aux);
		}
	}
	longitud++;
}

void ListaEnt::mostrarLista(void) {
	NodoEnt * aux = cabeza;
	
	do{
		cout << aux->getInfo() << endl;
		aux = aux->getSig();
	} while (aux != NULL);

}

int ListaEnt::buscarElemento(int e) {
	
	NodoEnt * aux;
	int pos;

	for (aux = cabeza, pos = 0; aux != NULL; aux = aux->getSig(), pos++ ) {
		if (aux->getInfo() == e) {
			return pos;
		}
	}
	if (aux == 0) {
		pos = -1;
	}

	return pos;
}

bool ListaEnt::eliminarElemento(int e)
{
	NodoEnt * ant, * aux;

	int i, pos = buscarElemento(e);

	if (pos == -1) {
		return false;
	}
	else {
		for (i = 0, ant = 0, aux=cabeza; i<pos; i++) {
			ant = aux;
			aux = aux->getSig();
		}
		if (ant != 0) {
			ant->setSig(aux->getSig());
		}
		else {
			cabeza = aux->getSig();
		}
		delete aux;
		longitud--;

		return true;
	}
		
	return false;
}
