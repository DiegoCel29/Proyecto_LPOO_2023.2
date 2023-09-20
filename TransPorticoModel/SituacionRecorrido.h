#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class SituacionRecorrido {
	private:
		int Codigo;
		bool HayTrafico;
		bool HayChoque;
		bool ExcVelocidad;

	public:
		SituacionRecorrido();
		SituacionRecorrido(int Codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad);
	};
};