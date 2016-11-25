#ifndef ANUNCIOCONTRATADO_H
#define ANUNCIOCONTRATADO_H

#include "Anuncio.h"
#include <string>
#include <iostream> 

using namespace std;

class AnuncioContratado
{
private: 
	string id;
	long static cantAnunciosContratados;
	double costo;
	Anuncio * anuncio;

public:
	AnuncioContratado();
	AnuncioContratado(double c);
	AnuncioContratado(Anuncio * an, double cost = 0.0);

	void setId();
	string getId();
	
	void setCantAnunciosContratados(long);
	long getCantAnunciosContratados();

	void setCosto(double);
	double getCosto();

	void setAnuncio(Anuncio *&);
	Anuncio *& getAnuncio();

	string toString(void);

};


#endif // !ANUNCIOCONTRATADO_H
