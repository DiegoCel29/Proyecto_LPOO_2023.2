#include "Autobus.h"

Autobus::Autobus() {

};

Autobus::Autobus(int Codigo, String^ Placa, int CantAsientos, int CantPasajeros, int Capacidad, double X_Autobus, double Y_Autobus, double Velocidad, Mantenimiento^ ObjMantenimiento) {
	this->Codigo = Codigo;
	this->Placa = Placa;
	this->CantAsientos = CantAsientos;
	this->CantPasajeros = CantPasajeros;
	this->Capacidad = Capacidad;
	this->X_Autobus = X_Autobus;
	this->Y_Autobus = Y_Autobus;
	this->Velocidad = Velocidad;
	this->ObjMantenimiento = ObjMantenimiento;
};