#include "Persona.h"

using namespace TransPorticoModel;

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

int Persona::GetCodigo() {
	return this->Codigo;
};

void Persona::SetCodigo(int Codigo) {
	this->Codigo = Codigo;
};

int Persona::GetEdad() {
	return this->Edad;
};

void Persona::SetEdad(int Codigo) {
	this->Edad = Edad;
}

String^ Persona::GetNombre() {
	return this->Nombre;
};

void Persona::SetNombre(String^ Nombre) {
	this->Nombre = Nombre;
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

String^ Persona::GetDNI() {
	return this->DNI;
};

void Persona::SetDNI(String^ DNI) {
	this->DNI = DNI;
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