#include "Empleado.h"

using namespace TransPorticoModel;

Empleado::Empleado() :Persona() {

};

Empleado::Empleado(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, double Sueldo, String^ IdPersonal, String^ EstadoContrato) :Persona(Codigo, Nombre, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono, Contrasena) {
	this->Sueldo = Sueldo;
	this->IdPersonal = IdPersonal;
	this->EstadoContrato = EstadoContrato;

};

int Empleado::GetCodigoE() {
	return GetCodigo();
};

void Empleado::SetCodigoE(int Codigo) {
	SetCodigo(Codigo);
};

int Empleado::GetEdadE() {
	return GetEdad();
};

void Empleado::SetEdadE(int Edad) {
	SetEdad(Edad);
};

double Empleado::GetSueldo() {
	return this->Sueldo;
};

void Empleado::SetSueldo(double Sueldo) {
	this->Sueldo = Sueldo;
};

String^ Empleado::GetNombreE() {
	return GetNombre();
};

void Empleado::SetNombreE(String^ Nombre) {
	SetNombre(Nombre);
};

String^ Empleado::GetApellidoPatE() {
	return GetApellidoPat();
};

void Empleado::SetApellidoPatE(String^ ApellidoPat) {
	SetApellidoPat(ApellidoPat);
};

String^ Empleado::GetApellidoMatE() {
	return GetApellidoMat();
};

void Empleado::SetApellidoMatE(String^ ApellidoMat) {
	SetApellidoMat(ApellidoMat);
};

String^ Empleado::GetDNIE() {
	return GetDNI();
};

void Empleado::SetDNIE(String^ DNI) {
	SetDNI(DNI);
};

String^ Empleado::GetGeneroE() {
	return GetGenero();
};

void Empleado::SetGeneroE(String^ Genero) {
	SetGenero(Genero);
};

String^ Empleado::GetTelefonoE() {
	return GetTelefono();
};

void Empleado::SetTelefonoE(String^ Telefono) {
	SetTelefono(Telefono);
};

String^ Empleado::GetContrasenaE() {
	return GetContrasena();
};

void Empleado::SetContrasenaE(String^ Contrasena) {
	SetContrasena(Contrasena);
};

String^ Empleado::GetIdPersonal() {
	return this->IdPersonal;
};

void Empleado::SetIdPersonal() {
	this->IdPersonal = IdPersonal;
};

String^ Empleado::GetEstadoContrato() {
	return this->EstadoContrato;
};

void Empleado::SetEstadoContrato() {
	this->EstadoContrato = EstadoContrato;
};