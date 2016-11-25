#include "stdafx.h"
#include "NodoAnuncio.h"
#include "Anuncio.h"

NodoAnuncio::NodoAnuncio(Anuncio *& a)
{
	this->info = a;
	this->sig = NULL;
}

Anuncio *& NodoAnuncio::getInfo(void)
{
	return this->info;
}

void NodoAnuncio::setInfo(Anuncio *&a)
{
	this->info = a;
}

NodoAnuncio *& NodoAnuncio::getSig(void)
{
	return this->sig;
}

void NodoAnuncio::setSig(NodoAnuncio *&n)
{
	this->sig = n;
}



