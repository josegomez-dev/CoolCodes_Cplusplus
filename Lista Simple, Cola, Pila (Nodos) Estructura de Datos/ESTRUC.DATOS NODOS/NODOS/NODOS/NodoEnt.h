#pragma once
#ifndef NODOENT_H
#define NODOENT_H

class NodoEnt
{

private:
	int info;
	NodoEnt * sig;

public:
	NodoEnt(int x = 0);
	int getInfo(void);
	void setInfo(int x);

	NodoEnt * getSig(void);
	void setSig(NodoEnt *);
	void mostrarNodo(void);

};

#endif