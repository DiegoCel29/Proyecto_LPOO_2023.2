#include "Paradero.h"

using namespace TransPorticoModel;

Paradero::Paradero() {

};

Paradero::Paradero(int Codigo, String^ Nombre, double X_Paradero, double Y_Paradero, int Frecuencia, double Distancia) {
	this->Codigo = Codigo;
	this->Nombre = Nombre;
	this->X_Paradero = X_Paradero;
	this->Y_Paradero = Y_Paradero;
	this->Frecuencia = Frecuencia;
	this->Distancia = Distancia;
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
int  Paradero::getFrecuencia() {
	return this->Frecuencia;
}
void  Paradero::setFrecuencia(int Frecuencia) {
	this->Frecuencia = Frecuencia;
}
double  Paradero::getDistancia() {
	return this->Distancia;
}
void  Paradero::setDistancia(int Distancia) {
	this->Distancia = Distancia;
}