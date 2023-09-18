#include "Pasajero.h"

Pasajero::Pasajero() : Persona() {

};

Pasajero::Pasajero(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ FechaNacimiento, double X_Pasajero, double Y_Pasajero, bool Registrado) :Persona(Codigo, Nombre, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono, Contrasena) {
	this->FechaNacimiento = FechaNacimiento;
	this->X_Pasajero = X_Pasajero;
	this->Y_Pasajero = Y_Pasajero;
	this->Registrado = Registrado;
};