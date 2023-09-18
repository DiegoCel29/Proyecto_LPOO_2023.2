#include "Persona.h"

Persona::Persona() {

};

Persona::Persona(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena) {
	this->Codigo = Codigo;
	this->Nombre = Nombre;
	this->ApellidoPat = ApellidoPat;
	this->ApellidoMat = ApellidoMat;
	this->DNI = DNI;
	this->Edad = Edad;
	this->Genero = Genero;
	this->Telefono = Telefono;
	this->Contrasena = Contrasena;
};