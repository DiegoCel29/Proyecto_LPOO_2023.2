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
		int getCodigo();
		void setCodigo(int Codigo);
		String^ getNombre();
		void setNombre(String^ Nombre);
		double getX_Paradero();
		void setX_Paradero(int X_Paradero);
		double getY_Paradero();
		void setY_Paradero(int Y_Paradero);
		int getFrecuencia();
		void setFrecuencia(int Frecuencia);
		double getDistancia();
		void setDistancia(int Distancia);
	};
};