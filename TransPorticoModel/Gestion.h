#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class  Gestion {
	private:
		int Codigo;
		String^ Ruta;
		int CantPasajerosRuta;
		double MediaPuntaje;

	public:
		Gestion();
		Gestion(int Codigo, String^ Ruta, int CantPasajerosRuta, double MediaPuntaje);
	};
};