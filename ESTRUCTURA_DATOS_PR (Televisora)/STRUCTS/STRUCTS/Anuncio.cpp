#include "stdafx.h"
#include "Anuncio.h"

long Anuncio::cantAnuncios = 0;

Anuncio::Anuncio(void)
{
	this->setId();
}

Anuncio::Anuncio(string nom, string emp, int dur)
{
	this->setId();
	this->setNombre(nom);
	this->setCodigoEmpresa(emp);
	this->setDuracion(dur);
}

void Anuncio::setId()
{
	this->id = std::to_string(++cantAnuncios);
}

string Anuncio::getId(void)
{
	return this->id;
}

void Anuncio::setNombre(string pnombre)
{
	this->nombre = pnombre;
}

string Anuncio::getNombre(void)
{
	return this->nombre;
}

void Anuncio::setCodigoEmpresa(string pcodigoEmpresa)
{
	this->codigoEmpresa = pcodigoEmpresa;
}

string Anuncio::getCodigoEmpreas()
{
	return this->codigoEmpresa;
}

void Anuncio::setDuracion(int pduracion)
{
	this->duracion = pduracion;
}

int Anuncio::getDuracion(void)
{
	return this->duracion;
}

string Anuncio::toString(void)
{
	string s =  "ID:	   " + this->getId()			    	   + "\n";
		   s += "NOMBRE:   " + this->getNombre()				   + "\n";
		   s += "DURACION: " + std::to_string(this->getDuracion()) + "min\n";
		   s += "EMPRESA:  " + this->getCodigoEmpreas()			   + "\n";
	return s;
}
