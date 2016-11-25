#include "stdafx.h"
#include "Canal.h"

long Canal::cantCanales = 0;

Canal::Canal()
{
	setId();
}

Canal::Canal(string pnombre, string ptelefono)
{
	setId();
	setNombre(pnombre);
	setTelefono(ptelefono);
}

Canal::Canal(string pnombre, string ptelefono, double pcostoBase, int ptiempoTransMin, int ptiempoTransMax, double pcostoXMinuto)
{
	setId();
	setNombre(pnombre);
	setTelefono(ptelefono);
	setCostoBase(pcostoBase);
	setTiempoTransMin(ptiempoTransMin);
	setTiempoTransMax(ptiempoTransMax);
	setCostoBase(pcostoBase);
}
Canal::Canal(double pcostoBase, int ptiempoTransMin, int ptiempoTransMax)
{
	setId();
	//setNombre("Unknown");
	//setTelefono(???);
	setCostoBase(pcostoBase);
	setTiempoTransMin(ptiempoTransMin);
	setTiempoTransMax(ptiempoTransMax);
}

void Canal::setId()
{
	id = ++cantCanales;
}

long Canal::getId()
{
	return id;
}

void Canal::setNombre(string pnombre)
{
	nombre = pnombre;
}

string Canal::getNombre()
{
	return nombre;
}

void Canal::setTelefono(string ptelefono)
{
	telefono = ptelefono;
}

string Canal::getTelefono()
{
	return telefono;
}

void Canal::setCostoBase(double pcostoBase)
{
	costoBase = pcostoBase;
}

double Canal::getCostoBase()
{
	return costoBase;
}

void Canal::setTiempoTransMin(int ptiempoTransMin)
{
	tiempoTransMin = ptiempoTransMin;
}

int Canal::getTiempoTransMin()
{
	return tiempoTransMin;
}

void Canal::setTiempoTransMax(int ptiempoTransMax)
{
	tiempoTransMax = ptiempoTransMax;
}

int Canal::getTiempoTransMax()
{
	return tiempoTransMax;
}

void Canal::setCostoXMinuto(double pcostoXMinuto)
{
	costoXminuto = pcostoXMinuto;
}

double Canal::getCostoXMinuto()
{
	return costoXminuto;
}
