#ifndef CANAL_H
#define CANAL_H

#include <string>
#include <iostream> 

using namespace std;

class Canal
{
private:
	long id;
	static long cantCanales;
	string nombre;
	string telefono;
	double costoBase; // 10.21 $
	int tiempoTransMin; // 1min
	int tiempoTransMax; // 60min
	double costoXminuto; // 5.00 $
public:
	Canal(void);
	Canal(string, string);
	Canal(string, string, double, int, int, double);
	Canal(double pcostoBase = 10.21, int ptiempoTransMin = 1, int ptiempoTransMax = 60);
	void setId();
	long getId();
	void setNombre(string);
	string getNombre();
	void setTelefono(string);
	string getTelefono();
	void setCostoBase(double);
	double getCostoBase();
	void setTiempoTransMin(int);
	int getTiempoTransMin();
	void setTiempoTransMax(int);
	int getTiempoTransMax();
	void setCostoXMinuto(double);
	double getCostoXMinuto();
};

#endif