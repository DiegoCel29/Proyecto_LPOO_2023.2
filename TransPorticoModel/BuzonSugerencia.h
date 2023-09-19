#pragma once
#include "Persona.h"

using namespace System;

public ref class BuzonSugerencia {
private:
	int Codigo;
	String^ Fecha;
	String^ Hora;
	String^ Tipo;
	String^ Comentario;
	Persona^ Usuario;
	String^ Placa;

public:
	BuzonSugerencia();
	BuzonSugerencia(int Codigo, String^ Fecha, String^ Hora, String^ Tipo, String^ Comentario, Persona^ Usuario, String^ Placa);

};