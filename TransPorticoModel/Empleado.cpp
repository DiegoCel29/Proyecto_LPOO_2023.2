#include "Empleado.h"

using namespace TransPorticoModel;

Empleado::Empleado() :Persona() {

};

Empleado::Empleado(int Codigo, String^ DNI, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ Tipo, int Sueldo, String^ EstadoContrato) :Persona(Codigo, DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, Tipo) {
	this->Sueldo = Sueldo;
	this->EstadoContrato = EstadoContrato;

};
Empleado::Empleado( String^ DNI, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ Telefono, String^ Contrasena,int Sueldo, String^ EstadoContrato) :Persona(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena) {
	this->Sueldo = Sueldo;
	this->EstadoContrato = EstadoContrato;

};
String^ Empleado::GetDNI_Empleado() {
	return this->DNI;
}

void Empleado::SetDNI_Empleado(String^ DNI) {
	this->DNI = DNI;
}

String^ Empleado::GetNombre_Empleado() {
	return this->Nombres;
}

void Empleado::SetNombre_Empleado(String^ Nombre) {
	this->Nombres = Nombre;
}
String^ Empleado::GetApellidoPat_Empleado() {
	return this->ApellidoPat;
}

void Empleado::SetApellidoPat_Empleado(String^ ApellidoPat) {
	this->ApellidoPat = ApellidoPat;
}

String^ Empleado::GetApellidoMat_Empleado() {
	return this->ApellidoMat;
}

void Empleado::SetApellidoMat_Empleado(String^ ApellidoMat) {
	this->ApellidoMat = ApellidoMat;
}
int Empleado::GetEdad_Empleado() {
	return this->Edad;
}

void Empleado::SetEdad_Empleado(int Edad) {
	this->Edad = Edad;
}
String^ Empleado::GetGenero_Empleado() {
	return this->Genero;
}

void Empleado::SetGenero_Empleado(String^ Genero) {
	this->Genero = Genero;
}
String^ Empleado::GetTelefono_Empleado() {
	return this->Telefono;
}

void Empleado::SetTelefono_Empleado(String^ Telefono) {
	this->Telefono = Telefono;
}
String^ Empleado::GetContrasena_Empleado() {
	return this->Contrasena;
}

void Empleado::SetContrasena_Empleado(String^ Contrasena) {
	this->Contrasena = Contrasena;
}

int Empleado::GetSueldo_Empleado() {
	return this->Sueldo;
}

void Empleado::SetSueldo_Empleado(int Sueldo) {
	this->Sueldo = Sueldo;
}


String^ Empleado::GetEstadoContrato_Empleado() {
	return this->EstadoContrato;
}

void Empleado::SetEstadoContrato_Empleado(String^ EstadoContrato) {
	this->EstadoContrato = EstadoContrato;
}
