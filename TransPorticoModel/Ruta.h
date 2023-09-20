#pragma once
#include "Paradero.h"

using namespace System;
using namespace System::Collections::Generic;

namespace TransPorticoModel {
	public ref class Ruta {
	private:
		int Codigo;
		int CantParaderos;
		List<Paradero^>^ ListParadero;
		char Linea;
		String^ HoraInicio;
		String^ HoraCierre;
		String^ Zona;

	public:
		Ruta();
		Ruta(int Codigo, int CantParaderos, List<Paradero^>^ ListParadero, char Linea, String^ HoraInicio, String^ HoraCierre, String^ Zona);
	};
};