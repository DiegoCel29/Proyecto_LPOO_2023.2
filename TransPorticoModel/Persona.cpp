#include "Persona.h"

using namespace TransPorticoModel;

Persona::Persona() {

};

Persona::Persona(String^ DNI, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ Tipo) {
	this->DNI = DNI;
	this->Nombres = Nombres;
	this->ApellidoPat = ApellidoPat;
	this->ApellidoMat = ApellidoMat;
	this->Edad = Edad;
	this->Genero = Genero;
	this->Telefono = Telefono;
	this->Contrasena = Contrasena;
	this->Tipo = Tipo;
};

String^ Persona::GetDNI() {
	return this->DNI;
};
void Persona::SetDNI(String^ DNI) {
	this->DNI = DNI;
};

String^ Persona::GetNombres() {
	return this->Nombres;
};
void Persona::SetNombres(String^ Nombres) {
	this->Nombres = Nombres;
};

String^ Persona::GetApellidoPat() {
	return this->ApellidoPat;
};
void Persona::SetApellidoPat(String^ ApellidoPat) {
	this->ApellidoPat = ApellidoPat;
};

String^ Persona::GetApellidoMat() {
	return this->ApellidoMat;
};
void Persona::SetApellidoMat(String^ ApellidoMat) {
	this->ApellidoMat = ApellidoMat;
};

int Persona::GetEdad() {
	return this->Edad;
};
void Persona::SetEdad(int Edad) {
	this->Edad = Edad;
};

String^ Persona::GetGenero() {
	return this->Genero;
};
void Persona::SetGenero(String^ Genero) {
	this->Genero = Genero;
};

String^ Persona::GetTelefono() {
	return this->Telefono;
};
void Persona::SetTelefono(String^ Telefono) {
	this->Telefono = Telefono;
};

String^ Persona::GetContrasena() {
	return this->Contrasena;
};
void Persona::SetContrasena(String^ Contrasena) {
	this->Contrasena = Contrasena;
};

String^ Persona::GetTipo() {
	return this->Tipo;
};
void Persona::SetTipo(String^ Tipo) {
	this->Tipo = Tipo;
};