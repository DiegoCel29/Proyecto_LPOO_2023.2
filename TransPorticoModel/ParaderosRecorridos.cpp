#include "ParaderosRecorridos.h"

using namespace TransPorticoModel;

ParaderosRecorridos::ParaderosRecorridos() {

};

ParaderosRecorridos::ParaderosRecorridos(String^ Nombre, String^ ParaderoSubida, String^ ParaderoBajada, String^ Tarjeta, double Tarifa) {
	this->Nombre = Nombre;
	this->ParaderoBajada = ParaderoBajada;
	this->ParaderoSubida = ParaderoSubida;
	this->Tarifa = Tarifa;
	this->Tarjeta = Tarjeta;
}
String^ ParaderosRecorridos::getNombre() {
	return this->Nombre;
}

void ParaderosRecorridos::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
}

String^ ParaderosRecorridos::getParadero_Subida() {
	return this->ParaderoSubida;
}

void ParaderosRecorridos::setParadero_Subida(String^ ParaderoSubida) {
	this->ParaderoSubida = ParaderoSubida;
}
String^ ParaderosRecorridos::getParadero_Bajada() {
	return this->ParaderoBajada;
}

void ParaderosRecorridos::setParadero_Bajada(String^ ParaderoBajada) {
	this->ParaderoBajada = ParaderoBajada;
}

String^ ParaderosRecorridos::getTarjeta() {
	return this->Tarjeta;
}

void ParaderosRecorridos::setTarjeta(String^ Tarjeta) {
	this->Tarjeta = Tarjeta;
}
double ParaderosRecorridos::getTarifa() {
	return this->Tarifa;
}

void ParaderosRecorridos::setTarifa(double Tarifa) {
	this->Tarifa = Tarifa;
}
