#include "Empleado.h"

using namespace TransPorticoModel;

Empleado::Empleado() :Persona() {

};

Empleado::Empleado(int Codigo, String^ DNI, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ Tipo, int Sueldo, String^ EstadoContrato) :Persona(Codigo, DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, Tipo) {
	this->Sueldo = Sueldo;
	this->EstadoContrato = EstadoContrato;

};
String^ Empleado::get_DNI_() {
	return this->DNI;
}

void Empleado::set_DNI_(String^ DNI) {
	this->DNI = DNI;
}

String^ Empleado::get_Nombre_() {
	return this->Nombres;
}

void Empleado::set_Nombre_(String^ Nombre) {
	this->Nombres = Nombre;
}
String^ Empleado::get_ApellidoPat_() {
	return this->ApellidoPat;
}

void Empleado::set_ApellidoPat_(String^ ApellidoPat) {
	this->ApellidoPat = ApellidoPat;
}

String^ Empleado::get_ApellidoMat_() {
	return this->ApellidoMat;
}

void Empleado::set_ApellidoMat_(String^ ApellidoMat) {
	this->ApellidoMat = ApellidoMat;
}
int Empleado::get_Edad_() {
	return this->Edad;
}

void Empleado::set_Edad_(int Edad) {
	this->Edad = Edad;
}
String^ Empleado::get_Genero_() {
	return this->Genero;
}

void Empleado::set_Genero_(String^ Genero) {
	this->Genero = Genero;
}
String^ Empleado::get_Telefono_() {
	return this->Telefono;
}

void Empleado::set_Telefono_(String^ Telefono) {
	this->Telefono = Telefono;
}
String^ Empleado::get_Contrasena_() {
	return this->Contrasena;
}

void Empleado::set_Contrasena_(String^ Contrasena) {
	this->Contrasena = Contrasena;
}

int Empleado::get_Sueldo_() {
	return this->Sueldo;
}

void Empleado::set_Sueldo_(int Sueldo) {
	this->Sueldo = Sueldo;
}


String^ Empleado::get_EstadoContrato_() {
	return this->EstadoContrato;
}

void Empleado::set_EstadoContrato_(String^ EstadoContrato) {
	this->EstadoContrato = EstadoContrato;
}
