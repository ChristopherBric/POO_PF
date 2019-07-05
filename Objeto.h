#ifndef UNTITLED1_OBJETO_H
#define UNTITLED1_OBJETO_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Objeto
{
protected:
	string nombre;
	string calificacion;
public:
	Objeto();
	~Objeto();
	void mostrar();
	int y;
	int x;
};

class Restaurant : public Objeto
{
private:
	string tipo_de_comida;
	string especialidad_del_dia;
public:
	~Restaurant();
	Restaurant(string nombre, int x, int y, string calificacion, string tipo_de_comida, string especialidad_del_dias);
	void mostrar_lo_demas();
};

class Hotel :public Objeto
{
private:
	string disponibilidad;
	int estrellas;
public:
	~Hotel();
	Hotel(string nombre, int x, int y, string calificacion, int estrellas, string disponibilidad);
	void mostrar_lo_demas();

};

class Museo : public Objeto
{
private:
	string exposicion_actual;
public:
	Museo(string nombre, int x, int y, string calificacion, string exposicion_actual);
	~Museo();
	void mostrar_lo_demas();
};

#endif //UNTITLED1_OBJETO_H
