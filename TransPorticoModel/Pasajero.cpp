#include "Pasajero.h"

using namespace TransPorticoModel;

Pasajero::Pasajero() : Persona() {

};

Pasajero::Pasajero(String^ DNI, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ FechaNacimiento) :Persona(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, "Pasajero") {
	this->FechaNacimiento = FechaNacimiento;

};

String^ Pasajero::GetDNI_Pasajero() {
	return this->DNI;
};
void Pasajero::SetDNI_Pasajero(String^ DNI) {
	this->DNI = DNI;
};

String^ Pasajero::GetNombre_Pasajero() {
	return this->Nombres;
};
void Pasajero::SetNombre_Pasajero(String^ Nombre) {
	this->Nombres = Nombre;
};

String^ Pasajero::GetApellidoPat_Pasajero() {
	return this->ApellidoPat;
};
void Pasajero::SetApellidoPat_Pasajero(String^ ApellidoPat) {
	this->ApellidoPat = ApellidoPat;
};

String^ Pasajero::GetApellidoMat_Pasajero() {
	return this->ApellidoMat;
};
void Pasajero::SetApellidoMat_Pasajero(String^ ApellidoMat) {
	this->ApellidoMat = ApellidoMat;
};

int Pasajero::GetEdad_Pasajero() {
	return this->Edad;
};
void Pasajero::SetEdad_Pasajero(int Edad) {
	this->Edad = Edad;
};

String^ Pasajero::GetGenero_Pasajero() {
	return this->Genero;
};
void Pasajero::SetGenero_Pasajero(String^ Genero) {
	this->Genero = Genero;
};

String^ Pasajero::GetTelefono_Pasajero() {
	return this->Telefono;
};
void Pasajero::SetTelefono_Pasajero(String^ Telefono) {
	this->Telefono = Telefono;
};

String^ Pasajero::GetContrasena_Pasajero() {
	return this->Contrasena;
};
void Pasajero::SetContrasena_Pasajero(String^ Contrasena) {
	this->Contrasena = Contrasena;
};

String^ Pasajero::GetTipo_Pasajero() {
	return this->Tipo;
};

String^ Pasajero::GetFechaNacimiento_Pasajero() {
	return this->FechaNacimiento;
};
void Pasajero::SetFechaNacimiento_Pasajero(String^ FechaNacimiento) {
	this->FechaNacimiento = FechaNacimiento;
};