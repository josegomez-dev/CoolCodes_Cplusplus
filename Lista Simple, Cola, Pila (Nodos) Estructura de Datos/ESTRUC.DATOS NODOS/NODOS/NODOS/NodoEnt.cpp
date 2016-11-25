#include "stdafx.h"
#include "NodoEnt.h"


NodoEnt::NodoEnt(int x)
{
	info = x;
	sig = NULL;
}

void NodoEnt::setInfo(int px) {
	info = px;
}

int NodoEnt::getInfo(void) {
	return info;
}

NodoEnt * NodoEnt::getSig(void) {
	return sig;
}

void NodoEnt::setSig(NodoEnt * psig) {
	sig = psig;
}