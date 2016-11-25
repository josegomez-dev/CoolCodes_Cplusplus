#ifndef ANUNCIO_H
#define ANUNCIO_H

#include <string>
#include <iostream> 

using namespace std;

class Anuncio
{
private:
	string id;
	static long cantAnuncios;
	string nombre;
	string codigoEmpresa;
	int duracion;

public:
	Anuncio(void);
	Anuncio(string nom, string emp, int dur);

	void setId();
	string getId(void);

	void setNombre(string);
	string getNombre(void);

	void setCodigoEmpresa(string);
	string getCodigoEmpreas();

	void setDuracion(int);
	int getDuracion(void);

	string toString(void);
};

#endif


