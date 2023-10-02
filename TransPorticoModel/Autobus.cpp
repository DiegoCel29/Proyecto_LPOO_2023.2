#include "Autobus.h"

using namespace TransPorticoModel;

Autobus::Autobus() {

};

Autobus::Autobus(int Codigo, String^ Placa, int CantAsientos, int CantPasajeros, int Capacidad, int X_Autobus, int Y_Autobus, int Velocidad) {
	this->Codigo = Codigo;
	this->Placa = Placa;
	this->CantAsientos = CantAsientos;
	this->CantPasajeros = CantPasajeros;
	this->Capacidad = Capacidad;
	this->X_Autobus = X_Autobus;
	this->Y_Autobus = Y_Autobus;
	this->Velocidad = Velocidad;

};



int Autobus::GetCodigo() {
	return this->Codigo;
};

void Autobus::SetCodigo(int Codigo) {
	this->Codigo = Codigo;
};

String^ Autobus::GetPlaca() {
	return this->Placa;
}
void Autobus::SetPlaca(String^ Placa) {
	this->Placa = Placa;
}

int Autobus::GetCantAsientos() {
	return this->CantAsientos;
}

void Autobus::SetCantAsientos(int CantAsientos) {
	this->CantAsientos = CantAsientos;
}

int Autobus::GetCantPasajeros() {
	return this->CantPasajeros;
}

void Autobus::SetCantPasajeros(int CantPasajeros) {
	this->CantPasajeros = CantPasajeros;
}

int Autobus::GetCapacidad() {
	return this->Capacidad;
}

void Autobus::SetCapacidad(int Capacidad) {
	this->Capacidad = Capacidad;
}

int Autobus::GetX_Autobus() {
	return this->X_Autobus;
}
void Autobus::SetX_Autobus(int X_Autobus) {
	this->X_Autobus = X_Autobus;
}

int Autobus::GetY_Autobus() {
	return this->X_Autobus;
}
void Autobus::SetY_Autobus(int Y_Autobus) {
	this->Y_Autobus = Y_Autobus;
}

int Autobus::GetVelocidad() {
	return this->Velocidad;
}
void Autobus::SetVelocidad(int Velocidad) {
	this->Velocidad = Velocidad;
}
