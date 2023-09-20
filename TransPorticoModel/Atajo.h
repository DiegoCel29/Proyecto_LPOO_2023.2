#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Atajo {
	private:
		int Codigo;
		double X_Inicio;
		double Y_Inicio;
		double X_Final;
		double Y_Final;
		String^ RutaAsociada;

	public:
		Atajo();
		Atajo(int Codigo, double X_Inicio, double Y_Inicio, double X_Final, double Y_Final, String^ RutaAsociada);
	};
};