#pragma once

using namespace System;

public ref class ParaderosRecorridos {
private:
	String^ ParaderoSubida;
	String^ ParaderoBajada;
	double Tarjeta;
	double Tarifa;

public:
	ParaderosRecorridos();
	ParaderosRecorridos(String^ ParaderoSubida, String^ ParaderoBajada, double Tarjeta, double Tarifa);
};