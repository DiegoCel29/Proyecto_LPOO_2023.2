#include "Tarjeta.h"

Tarjeta::Tarjeta() {

};

Tarjeta::Tarjeta(int Codigo, double Saldo, String^ Titular, String^ Identificador) {
	this->Codigo = Codigo;
	this->Saldo = Saldo;
	this->Titular = Titular;
	this->Identificador = Identificador;
};