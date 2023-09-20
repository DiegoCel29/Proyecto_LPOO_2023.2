#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Calificacion {
	private:
		int Codigo;
		int Puntaje;

	public:
		Calificacion();
		Calificacion(int Codigo, int Puntaje);
	};
};