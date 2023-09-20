#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Recorrido {
	private:
		int Codigo;
		String^ Personal;
		String^ Ruta;
		String^ Autobus;
		String^ HoraSalida;
		String^ HoraLlegada;
		String^ Combustible;

	private:
		Recorrido();
		Recorrido(int Codigo, String^ Personal, String^ Ruta, String^ Autobus, String^ HoraSalida, String^ HoraLlegada, String^ Combustible);
	};
};