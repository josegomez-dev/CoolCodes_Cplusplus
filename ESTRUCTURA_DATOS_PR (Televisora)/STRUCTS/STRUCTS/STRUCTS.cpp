// STRUCTS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ListaAnuncios.h"
#include "Anuncio.h"
#include "ListaAnunciosContratados.h"
#include "AnuncioContratado.h"

using namespace std;

ListaAnuncios *& chargeAnuncios(void);
ListaAnunciosContratados *& chargeAnunciosContratados(void);


int main()
{
	system("Color 4C");

	ListaAnunciosContratados * lst = chargeAnunciosContratados();
	cout << lst->toString() << endl;

	ListaAnuncios * lst2 = chargeAnuncios();
	cout << lst2->toString() << endl;


	cin.get();
    return 0;
}

ListaAnuncios *& chargeAnuncios(void) {
	ListaAnuncios * lst = new ListaAnuncios();
	Anuncio * a1 = new Anuncio("Somos Unidos", "001", 5);
	lst->addItemToBegin(a1);
	Anuncio * a2 = new Anuncio("PepsiMan", "002", 1);
	lst->addItemToBegin(a2);
	Anuncio * a3 = new Anuncio("Bonanza", "003", 4);
	lst->addItemToBegin(a3);
	return lst;
}

ListaAnunciosContratados *& chargeAnunciosContratados(void) {
	ListaAnunciosContratados * lst = new ListaAnunciosContratados();
	AnuncioContratado * a1 = new AnuncioContratado();
	lst->addItemToBegin(a1);
	AnuncioContratado * a2 = new AnuncioContratado(2500.26);
	lst->addItemToBegin(a2);
	AnuncioContratado * a3 = new AnuncioContratado(1500.0);
	lst->addItemToBegin(a3);
	return lst;
}

