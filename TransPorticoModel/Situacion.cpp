#include "Situacion.h"

using namespace TransPorticoModel;

Situacion::Situacion() {

};

Situacion::Situacion(int Codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero) {
	this->Codigo = Codigo;
	this->HayTrafico = HayTrafico;
	this->HayChoque = HayChoque;
	this->ExcVelocidad = ExcVelocidad;
	this->Paradero = Paradero;
};
int Situacion::getCodigo() {
	return this->Codigo;
}

void Situacion::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}
bool Situacion::getHayTrafico() {
	return this->HayTrafico;
}

void Situacion::setHayTrafico(bool HayTrafico) {
	this->HayTrafico = HayTrafico;
}
bool Situacion::getHayChoque() {
	return this->HayChoque;
}

void Situacion::setHayChoque(bool HayChoque) {
	this->HayChoque = HayChoque;
}
bool Situacion::getExcVelocidad() {
	return this->ExcVelocidad;
}

void Situacion::setExcVelocidad(bool ExcVelocidad) {
	this->ExcVelocidad = ExcVelocidad;
}
String^ Situacion::getParadero() {
	return this->Paradero;
}

void Situacion::setParadero(String^ Paradero) {
	this->Paradero;
}