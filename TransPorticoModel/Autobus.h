#pragma once
#include "Mantenimiento.h"

using namespace System;

public ref class Autobus {
private:
	int Codigo;
	String^ Placa;
	int CantAsientos;
	int CantPasajeros;
	int Capacidad;
	double X_Autobus;
	double Y_Autobus;
	double Velocidad;
	Mantenimiento^ ObjMantenimiento;

public:
	Autobus();
	Autobus(int Codigo, String^ Placa, int CantAsientos, int CantPasajeros, int Capacidad, double X_Autobus, double Y_Autobus, double Velocidad, Mantenimiento^ ObjMantenimiento);
};