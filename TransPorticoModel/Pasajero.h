#pragma once
#include "Persona.h"

using namespace System;

public ref class Pasajero:Persona{
private:
	String^ FechaNacimiento;
	double X_Pasajero;
	double Y_Pasajero;
	bool Registrado;

public:
	Pasajero();
	Pasajero(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ FechaNacimiento, double X_Pasajero, double Y_Pasajero, bool Registrado);
};

