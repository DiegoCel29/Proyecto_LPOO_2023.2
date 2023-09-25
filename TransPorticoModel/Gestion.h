#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class  Gestion {
	private:
		int Codigo;
		String^ Ruta;
		int CantPasajerosRuta;
		int MediaPuntaje;

	public:
		Gestion();
		Gestion(int Codigo, String^ Ruta, int CantPasajerosRuta, int MediaPuntaje);
		int getCodigo();
		void setCodigo(int Codigo);
		String^ getRuta();
		void setRuta(String^ Ruta);
		int getCantPasajerosRuta();
		void setCantPasajerosRuta(int CantPasajerosRuta);
		int getMediaPuntaje();
		void setMediaPuntaje(int MediaPuntaje);
	};
};