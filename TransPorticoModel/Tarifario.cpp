#include "Tarifario.h"

using namespace TransPorticoModel;

Tarifario::Tarifario() {

};

Tarifario::Tarifario(int Codigo, String^ RutaAsociada, String^ Identificador, String^ ParaderoInicial, String^ ParaderoFinal, double Tarifa) {
	this->Codigo = Codigo;
	this->RutaAsociada = RutaAsociada;
	this->Identificador = Identificador;
	this->ParaderoInicial = ParaderoInicial;
	this->ParaderoFinal = ParaderoFinal;
	this->Tarifa = Tarifa;
}

int Tarifario::GetCodigo() {
	return this->Codigo;
}
void Tarifario::SetCodigo(int Codigo) {
	this->Codigo = Codigo;
}

String^ Tarifario::GetIdentificador() {
	return this->Identificador;
}
void Tarifario::SetIdentificador(String^ Identificador) {
	this->Identificador = Identificador;
}

String^ Tarifario::GetRutaAsociada() {
	return this->RutaAsociada;
}
void Tarifario::SetRutaAsociada(String^ RutaAsociada) {
	this->RutaAsociada = RutaAsociada;
}

String^ Tarifario::GetParaderoInicial() {
	return this->ParaderoInicial;
}
void Tarifario::SetParaderoInicial(String^ ParaderoInicial) {
	this->ParaderoInicial = ParaderoInicial;
}

String^ Tarifario::GetParaderoFinal() {
	return this->ParaderoFinal;
}
void Tarifario::SetParaderoFinal(String^ ParaderoFinal) {
	this->ParaderoFinal = ParaderoFinal;
}

double Tarifario::GetTarifa() {
	return this->Tarifa;
}
void Tarifario::SetTarifa(double Tarifa) {
	this->Tarifa = Tarifa;
}
