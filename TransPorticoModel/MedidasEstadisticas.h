#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class MedidasEstadisticas {
	private:
		int Codigo;
		double Media;
		double Moda;
		double Mediana;
		double Maximo;
		double Minimo;
		double Desviacion;

	public:
		MedidasEstadisticas();
		MedidasEstadisticas(int Codigo, double Media, double Moda, double Mediana, double Maximo, double Minimo, double Desviacion);
	};
};