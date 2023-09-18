#include "Recorrido.h"

Recorrido::Recorrido() {
};

Recorrido::Recorrido(int Codigo, String^ Personal, String^ Ruta, String^ Autobus, String^ HoraSalida, String^ HoraLlegada, String^ Combustible) {
	this->Codigo = Codigo;
	this->Personal = Personal;
	this->Ruta = Ruta;
	this->Autobus = Autobus;
	this->HoraLlegada = HoraLlegada;
	this->HoraSalida = HoraSalida;
	this->Combustible = Combustible;
};