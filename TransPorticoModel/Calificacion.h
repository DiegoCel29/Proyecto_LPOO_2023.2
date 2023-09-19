#pragma once

using namespace System;

public ref class Calificacion {
private:
	int Codigo;
	int Puntaje;

public:
	Calificacion();
	Calificacion(int Codigo, int Puntaje);
};