#include "Pasajero.h"

using namespace TransPorticoModel;

Pasajero::Pasajero() : Persona() {

};

Pasajero::Pasajero(String^ DNI, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ FechaNacimiento) :Persona(Codigo, DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, "Pasajero") {
	this->FechaNacimiento = FechaNacimiento;

};

String^ Pasajero::get_DNI() {
	return this->DNI;
}

void Pasajero::set_DNI(String^ DNI) {
	this->DNI = DNI;
}

String^ Pasajero::get_Nombre() {
	return this->Nombres;
}

void Pasajero::set_Nombre(String^ Nombre) {
	this->Nombres = Nombre;
}
String^ Pasajero::get_ApellidoPat() {
	return this->ApellidoPat;
}

void Pasajero::set_ApellidoPat(String^ ApellidoPat) {
	this->ApellidoPat = ApellidoPat;
}

String^ Pasajero::get_ApellidoMat() {
	return this->ApellidoMat;
}

void Pasajero::set_ApellidoMat(String^ ApellidoMat) {
	this->ApellidoMat = ApellidoMat;
}
int Pasajero::get_Edad() {
	return this->Edad;
}

void Pasajero::set_Edad(int Edad) {
	this->Edad = Edad;
}
String^ Pasajero::get_Genero() {
	return this->Genero;
}

void Pasajero::set_Genero(String^ Genero) {
	this->Genero = Genero;
}
String^ Pasajero::get_Telefono() {
	return this->Telefono;
}

void Pasajero::set_Telefono(String^ Telefono) {
	this->Telefono = Telefono;
}
String^ Pasajero::get_Contrasena() {
	return this->Contrasena;
}

void Pasajero::set_Contrasena(String^ Contrasena) {
	this->Contrasena = Contrasena;
}
String^ Pasajero::get_FechaNacimiento() {
	return this->FechaNacimiento;
}

void Pasajero::set_FechaNacimiento(String^ FechaNacimiento) {
	this->FechaNacimiento = FechaNacimiento;
}