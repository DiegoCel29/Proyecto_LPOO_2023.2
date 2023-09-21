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

		int GetCodigo();
		void SetCodigo(int Codigo);

		String^ GetFechaInicio();
		void SetFechaInicio(String^ FechaInicio);

		String^ GetFechaFin();
		void SetFechaFin(String^ FechaFin);

		String^ GetDescripcion();
		void SetDescripcion(String^ Descripcion);

		String^ GetTitulo();
		void SetTitulo(String^ Titulo);
	};
};