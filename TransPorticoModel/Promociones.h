#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Promociones {
	private:
		int Codigo;
		String^ FechaInicio;
		String^ FechaFin;
		String^ Descripcion;
		String^ Titulo;

	public:
		Promociones();
		Promociones(int Codigo, String^ FechaInicio, String^ FechaFin, String^ Descripcion, String^ Titulo);
	};
};