#pragma once
#include "Paradero.h"

Paradero()::Paradero() {

};

Paradero::Paradero(int Codigo, String^ Nombre, double X_Paradero, double Y_Paradero, int Frecuencia, double Distancia) {
	this->Codigo = Codigo;
	this->Nombre = Nombre;
	this->X_Paradero = X_Paradero;
	this->Y_Paradero = Y_Paradero;
	this->frecuencia = Frecuencia;
	this->Distancia = Distancia;
};