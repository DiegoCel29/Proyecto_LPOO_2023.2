#include "Tarjeta.h"

using namespace TransPorticoModel;

Tarjeta::Tarjeta() {

};

Tarjeta::Tarjeta(int Codigo, double Saldo, String^ Titular, String^ Identificador) {
	this->Codigo = Codigo;
	this->Saldo = Saldo;
	this->Titular = Titular;
	this->Identificador = Identificador;
};

int Tarjeta::GetCodigo() {
	return this->Codigo;
};

void Tarjeta::SetCodigo(int Codigo) {
	this->Codigo = Codigo;
};

double Tarjeta::GetSaldo() {
	return this->Saldo;
};

void Tarjeta::SetSaldo(double Saldo) {
	this->Saldo = Saldo;
};

String^ Tarjeta::GetTitular() {
	return this->Titular;
};

void Tarjeta::SetTitular(String^ Titular) {
	this->Titular = Titular;
}

String^ Tarjeta::GetIdentificador() {
	return this->Identificador;
};

void Tarjeta::SetIdentificador(String^ Identificador) {
	this->Identificador = Identificador;
};