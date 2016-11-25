#include "stdafx.h"
#include "ListaAnuncios.h"

#include <iostream>
#include <string.h>

using namespace std;


ListaAnuncios::ListaAnuncios()
{
	this->setCabeza(NULL);
	this->setLongitud(0);
}

NodoAnuncio *& ListaAnuncios::getCabeza(void)
{
	return this->cabeza;
}

void ListaAnuncios::setCabeza(NodoAnuncio * cab)
{
	this->cabeza = cab;
}

int ListaAnuncios::getlongitud(void) const
{
	return this->longitud;
}

void ListaAnuncios::setLongitud(int l)
{
	this->longitud = l;
}

void ListaAnuncios::addItemToBegin(Anuncio * item)
{
	NodoAnuncio * aux = new NodoAnuncio(item);

	if (aux == NULL) {
		this->setCabeza(aux);
	}
	else {
		aux->setSig(cabeza);
		this->setCabeza(aux);

		longitud++;
	}
}

Anuncio *& ListaAnuncios::searchItem(Anuncio * item)
{
	Anuncio * a = new Anuncio();
	return a;
}

bool ListaAnuncios::deleteItem(Anuncio *item)
{
	NodoAnuncio *ant, *aux;

	int i;
	Anuncio * pos = searchItem(item);
	
	if (pos == NULL) {
		return false;
	}
	else {

	}

	return false;
}

string ListaAnuncios::toString(void)
{
	NodoAnuncio * aux = this->getCabeza();
	string s = "";
	while (aux != NULL) {
		s += aux->getInfo()->toString() + "\n";
		aux = aux->getSig();
	}
	return s;
}
