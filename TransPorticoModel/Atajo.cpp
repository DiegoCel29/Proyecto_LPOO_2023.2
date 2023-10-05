#include "Atajo.h"

using namespace TransPorticoModel;

Atajo::Atajo() {

};

Atajo::Atajo(int Codigo, int X_Inicio, int Y_Inicio, String^ Paradero_Inicio, int X_Final, int Y_Final, String^ Paradero_Final, String^ RutaAsociada) {
	this->Codigo = Codigo;
	this->X_Inicio = X_Inicio;
	this->Y_Inicio = Y_Inicio;
	this->Paradero_Inicio = Paradero_Inicio;
	this->X_Final = X_Final;
	this->Y_Final = Y_Final;
	this->Paradero_Final = Paradero_Final;
	this->RutaAsociada = RutaAsociada;
}

void Atajo::setCodigo_A(int Codigo) {
	this->Codigo = Codigo;
}
int Atajo::getCodigo_A() {
	return this->Codigo;
}

void Atajo::setX_Inicio(int X_Inicio) {
	this->X_Inicio = X_Inicio;
}
int Atajo::getX_Inicio() {
	return this->X_Inicio;
}
void Atajo::setY_Inicio(int Y_Inicio) {
	this->Y_Inicio = Y_Inicio;
}
int Atajo::getY_Inicio() {
	return this->Y_Inicio;
}

String^ Atajo::getParadero_Inicio() {
	return this->Paradero_Inicio;
}

void Atajo::setParadero_Inicio(String^ Paradero_Inicio) {
	this->Paradero_Inicio = Paradero_Inicio;
}

int Atajo::getX_Final() {
	return this->X_Final;
}
void Atajo::setX_Final(int X_Final) {
	this->X_Final = X_Final;
}

int Atajo::getY_Final() {
	return this->Y_Final;
}
void Atajo::setY_Final(int Y_Final) {
	this->Y_Final = Y_Final;
}
String^ Atajo::getParadero_Final() {
	return this->Paradero_Final;
}

void Atajo::setParadero_Final(String^ Paradero_Final) {
	this->Paradero_Final = Paradero_Final;
}
String^ Atajo::getRutaAsociada() {
	return this->RutaAsociada;
}

void Atajo::setRutaAsociada(String^ RutaAsociada) {
	this->RutaAsociada = RutaAsociada;
}