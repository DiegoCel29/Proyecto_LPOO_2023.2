#pragma once
#include "Mantenimiento.h"

using namespace System;

namespace TransPorticoModel {
	public ref class Autobus {
	private:
		int Codigo;
		String^ Placa;
		int CantAsientos;
		int CantPasajeros;
		int Capacidad;
		int X_Autobus;
		int Y_Autobus;
		int Velocidad;

	public:
		Autobus();
		Autobus(int Codigo, String^ Placa, int CantAsientos, int CantPasajeros, int Capacidad, int X_Autobus, int Y_Autobus, int Velocidad);

		int GetCodigo();
		void SetCodigo(int Codigo);

		String^ GetPlaca();
		void SetPlaca(String^ Placa);

		int GetCantAsientos();
		void SetCantAsientos(int CantAsientos);

		int GetCantPasajeros();
		void SetCantPasajeros(int CantPasajeros);

		int GetCapacidad();
		void SetCapacidad(int Capacidad);

		int GetX_Autobus();
		void SetX_Autobus(int X_Autobus);

		int GetY_Autobus();
		void SetY_Autobus(int Y_Autobus);

		int GetVelocidad();
		void SetVelocidad(int Velocidad);




	};
};