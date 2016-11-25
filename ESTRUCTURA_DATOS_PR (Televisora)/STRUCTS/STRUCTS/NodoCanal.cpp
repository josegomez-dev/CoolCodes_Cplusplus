#include "stdafx.h"
#include "NodoCanal.h"

NodoCanal::NodoCanal()
{
	this->info = NULL;
	this->sig = NULL;
}

NodoCanal::NodoCanal(Canal  * c)
{
	this->info = c;
	this->sig = NULL;
}

NodoCanal *& NodoCanal::getAnt(void)
{
	return this->ant;
}

void NodoCanal::setAnt(NodoCanal *&pant)
{
	this->ant = pant;
}

NodoCanal *& NodoCanal::getSig(void)
{
	return this->sig;
}

void NodoCanal::setSig(NodoCanal *&psig)
{
	this->sig = psig;
}

Canal * NodoCanal::getInfo(void)
{
	return this->info;
}

void NodoCanal::setInfo(Canal  c)
{
	this->info = &c;
}

