#include "SituacionRecorrido.h"

using namespace TransPorticoModel;

SituacionRecorrido::SituacionRecorrido() {

};

SituacionRecorrido::SituacionRecorrido(int Codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero) {
	this->Codigo = Codigo;
	this->HayTrafico = HayTrafico;
	this->HayChoque = HayChoque;
	this->ExcVelocidad = ExcVelocidad;
	this->Paradero = Paradero;
};
int SituacionRecorrido::getCodigo() {
	return this->Codigo;
}

void SituacionRecorrido::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}
bool SituacionRecorrido::getHayTrafico() {
	return this->HayTrafico;
}

void SituacionRecorrido::setHayTrafico(bool HayTrafico) {
	this->HayTrafico = HayTrafico;
}
bool SituacionRecorrido::getHayChoque() {
	return this->HayChoque;
}

void SituacionRecorrido::setHayChoque(bool HayChoque) {
	this->HayChoque = HayChoque;
}
bool SituacionRecorrido::getExcVelocidad() {
	return this->ExcVelocidad;
}

void SituacionRecorrido::setExcVelocidad(bool ExcVelocidad) {
	this->ExcVelocidad = ExcVelocidad;
}
String^ SituacionRecorrido::getParadero() {
	return this->Paradero;
}

void SituacionRecorrido::setParadero(String^ Paradero) {
	this->Paradero;
}