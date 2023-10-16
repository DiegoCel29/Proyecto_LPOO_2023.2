#include "Paradero.h"

using namespace TransPorticoModel;

Paradero::Paradero() {

};

Paradero::Paradero(int Codigo, String^ Nombre, double X_Paradero, double Y_Paradero, String^ Ruta, String^ Horario, String^ Publicidad, String^ Referencia, String^ Seguridad){
	this->Codigo = Codigo;
	this->Nombre = Nombre;
	this->X_Paradero = X_Paradero;
	this->Y_Paradero = Y_Paradero;
	this->Ruta = Ruta;
	this->Horario = Horario;
	this->Publicidad = Publicidad;
	this->Referencia = Referencia;
	this->Seguridad = Seguridad;
}
int Paradero::getCodigo() {
	return this->Codigo;
}
void Paradero::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}
String^ Paradero::getNombre() {
	return this->Nombre;
}
void  Paradero::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
}
double  Paradero::getX_Paradero() {
	return this->X_Paradero;
}
void  Paradero::setX_Paradero(int X_Paradero) {
	this->X_Paradero = X_Paradero;
}
double  Paradero::getY_Paradero() {
	return this->Y_Paradero;
}
void  Paradero::setY_Paradero(int Y_Paradero) {
	this->Y_Paradero = Y_Paradero;
}
String^ Paradero::getRuta() {
	return this->Ruta;
}
void Paradero::setRuta(String^ Ruta) {
	this->Ruta = Ruta;
}
String^ Paradero::getHorario() {
	return this->Horario;
}
void Paradero::setHorario(String^ Horario) {
	this->Horario = Horario;
}
String^ Paradero::getPublicidad() {
	return this->Publicidad;
}
void Paradero::setPublicidad(String^ Publicidad) {
	this->Publicidad = Publicidad;
}
String^ Paradero::getReferencia() {
	return this->Referencia;
}
void Paradero::setReferencia(String^ Referencia) {
	this->Referencia = Referencia;
}
String^ Paradero::getSeguridad() {
	return this->Seguridad;
}
void Paradero::setSeguridad(String^ Seguridad) {
	this->Seguridad = Seguridad;
}