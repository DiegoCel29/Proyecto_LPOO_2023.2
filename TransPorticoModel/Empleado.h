#pragma once
#include "Persona.h"

public ref class Empleado:Persona{
private:
	double Sueldo;
	String^ IdPersonal;
	String^ EstadoContrato;

public:
	Empleado();
	Empleado(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, double Sueldo, String^ IdPersonal, String^ EstadoContrato);
};