#include "Empleado.h"

Empleado::Empleado() :Persona() {

};

Empleado::Empleado(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, double Sueldo, String^ IdPersonal, String^ EstadoContrato) :Persona(Codigo, Nombre, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono, Contrasena) {
	this->Sueldo = Sueldo;
	this->IdPersonal = IdPersonal;
	this->EstadoContrato = EstadoContrato;

};