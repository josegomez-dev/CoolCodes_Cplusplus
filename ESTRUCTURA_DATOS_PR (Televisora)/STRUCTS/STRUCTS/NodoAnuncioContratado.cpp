#include "stdafx.h"
#include "NodoAnuncioContratado.h"


NodoAnuncioContratado::NodoAnuncioContratado()
{
	this->info = NULL;
	this->sig = NULL;
}

NodoAnuncioContratado::NodoAnuncioContratado(AnuncioContratado *& an)
{
	this->info = an;
	this->sig = NULL;
}

AnuncioContratado *& NodoAnuncioContratado::getInfo(void)
{
	return this->info;
}

void NodoAnuncioContratado::setInfo(AnuncioContratado *& an)
{
	this->info = an;
}

NodoAnuncioContratado *& NodoAnuncioContratado::getSig(void)
{
	return this->sig;
}

void NodoAnuncioContratado::setSig(NodoAnuncioContratado *& n)
{
	this->sig = n;
}

