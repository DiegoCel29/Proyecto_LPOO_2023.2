#pragma once
#include "Paradero.h"

using namespace System;
using namespace System::Collections::Generic;

namespace TransPorticoModel {
	public ref class Ruta {
	private:
		int Codigo;
		String^ Linea;
		int CantParaderos;
		String^ HoraInicio;
		String^ HoraCierre;
		String^ Zona;
		List<Paradero^>^ ListParadero;


	public:
		Ruta();
		Ruta(int Codigo, String^ Linea, int CantParaderos, String^ HoraInicio, String^ HoraCierre, String^ Zona);
		int getCodigo();
		void setCodigo(int Codigo);
		String^ getLinea();
		void setLinea(String^ getLinea);
		int getCantParaderos();
		void setCantParaderos(int CantParaderos);
		String^ getHoraInicio();
		void setHoraInicio(String^ getHoraInicio);
		String^ getHoraCierre();
		void setHoraCierre(String^ getHoraCierre);
		String^ getZona();
		void setZona(String^ getZona);
	};
};