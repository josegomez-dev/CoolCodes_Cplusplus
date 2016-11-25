#include "stdafx.h"
#include "AnuncioContratado.h"

long AnuncioContratado::cantAnunciosContratados = 0;


AnuncioContratado::AnuncioContratado()
{
	this->setId();
	this->setCosto(0.0);
}

AnuncioContratado::AnuncioContratado(double c)
{
	this->setId();
	this->setCosto(c);
}

AnuncioContratado::AnuncioContratado(Anuncio * an, double cost)
{
	setId();
	setCosto(cost);
	setAnuncio(an);
}

void AnuncioContratado::setId()
{
	this->id = std::to_string(++cantAnunciosContratados);
}

string AnuncioContratado::getId()
{
	return this->id;
}

void AnuncioContratado::setCantAnunciosContratados(long c)
{
	this->cantAnunciosContratados = c;
}

long AnuncioContratado::getCantAnunciosContratados()
{
	return this->cantAnunciosContratados;
}

void AnuncioContratado::setCosto(double costo)
{
	this->costo = costo;
}

double AnuncioContratado::getCosto()
{
	return this->costo;
}

void AnuncioContratado::setAnuncio(Anuncio *& an)
{
	this->anuncio = an;
}

Anuncio *& AnuncioContratado::getAnuncio()
{
	return this->anuncio;
}

string AnuncioContratado::toString(void)
{
	string s =  "ID:	  " + this->getId()    + "\n";
		   s += "COSTO:  " + std::to_string(this->getCosto()) + "$ \n";
		   if (this->getAnuncio() != NULL) {
			   s += "ANUNCIO: " + this->getAnuncio()->toString() + "\n";
		   }
	return s;
}

