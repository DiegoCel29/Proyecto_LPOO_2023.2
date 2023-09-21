#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Calificacion {
	private:
		int Codigo;
		String^ Nombre;
		int Puntaje;
	public:
		Calificacion();
		Calificacion(int Codigo, String^ Nombre, int Puntaje);
		int getCodigo();
		void setCodigo(int Codigo);
		String^ getNombre();
		void setNombre(String^ Nombre);
		int getPuntaje();
		void setPuntaje(int Puntaje);
	};
};