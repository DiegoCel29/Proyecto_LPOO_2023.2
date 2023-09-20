#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Paradero {
	private:
		int Codigo;
		String^ Nombre;
		double X_Paradero;
		double Y_Paradero;
		int Frecuencia;
		double Distancia;

	public:
		Paradero();
		Paradero(int Codigo, String^ Nombre, double X_Paradero, double Y_Paradero, int Frecuencia, double Distancia);
	};
};