#include "SituacionRecorrido.h"

SituacionRecorrido::SituacionRecorrido() {

};

SituacionRecorrido::SituacionRecorrido(int Codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad) {
	this->Codigo = Codigo;
	this->HayTrafico = HayTrafico;
	this->HayChoque = HayChoque;
	this->ExcVelocidad = ExcVelocidad;
};