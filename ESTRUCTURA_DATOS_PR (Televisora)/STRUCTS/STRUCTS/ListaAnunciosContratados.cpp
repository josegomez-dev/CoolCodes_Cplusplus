#include "stdafx.h"
#include "ListaAnunciosContratados.h"


ListaAnunciosContratados::ListaAnunciosContratados()
{
	this->setCabeza(NULL);
	this->setLongitud(0);
}

NodoAnuncioContratado *& ListaAnunciosContratados::getCabeza(void)
{
	return this->cabeza;
}

void ListaAnunciosContratados::setCabeza(NodoAnuncioContratado * cab)
{
	this->cabeza = cab;
}

int ListaAnunciosContratados::getlongitud(void) const
{
	return this->longitud;
}

void ListaAnunciosContratados::setLongitud(int l)
{
	this->longitud = l;
}

void ListaAnunciosContratados::addItemToBegin(AnuncioContratado *& item)
{
	NodoAnuncioContratado * aux = new NodoAnuncioContratado(item);

	if (aux == NULL) {
		this->setCabeza(aux);
	}
	else {
		aux->setSig(cabeza);
		this->setCabeza(aux);

		longitud++;
	}
}

string ListaAnunciosContratados::toString(void)
{
	NodoAnuncioContratado * aux = this->getCabeza();
	string resul = "";
	while (aux != NULL) {
		resul += aux->getInfo()->toString() + "\n";
		aux = aux->getSig();
	}
	return resul;
}

