#include "Tarifario.h"

using namespace TransPorticoModel;

Tarifario::Tarifario() {

};

Tarifario::Tarifario(String^ Identificador, String^ RutaAsociada, String^ ParaderoInicial, String^ ParaderoFinal, double Tarifa) {
	this->RutaAsociada = RutaAsociada;
	this->Identificador = Identificador;
	this->ParaderoInicial = ParaderoInicial;
	this->ParaderoFinal = ParaderoFinal;
	this->Tarifa = Tarifa;
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
