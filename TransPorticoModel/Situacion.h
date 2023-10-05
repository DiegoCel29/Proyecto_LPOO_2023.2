#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Situacion {
	private:
		int Codigo;
		bool HayTrafico;
		bool HayChoque;
		bool ExcVelocidad;
		String^ Paradero;

	public:
		Situacion();
		Situacion(int Codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero);
		int getCodigo();
		void setCodigo(int DNI);

		bool getHayTrafico();
		void setHayTrafico(bool HayTrafico);

		bool getHayChoque();
		void setHayChoque(bool HayChoque);

		bool getExcVelocidad();
		void setExcVelocidad(bool ExcVelocidad);

		String^ getParadero();
		void setParadero(String^ Paradero);
	};
};