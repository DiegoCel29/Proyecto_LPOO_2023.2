#include "ParaderosRecorridos.h"

ParaderosRecorridos::ParaderosRecorridos() {

};

ParaderosRecorridos::ParaderosRecorridos(String^ ParaderoSubida, String^ ParaderoBajada, double Tarjeta, double Tarifa) {
	this->ParaderoBajada = ParaderoBajada;
	this->ParaderoSubida = ParaderoSubida;
	this->Tarifa = Tarifa;
	this->Tarjeta = Tarjeta;
}