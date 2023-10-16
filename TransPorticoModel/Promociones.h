#pragma once
#include "Paradero.h"

using namespace System;

namespace TransPorticoModel {
	public ref class Promociones {
	private:

		int Codigo;
		String^ FechaPromocion;
		String^ Descripcion;
		String^ Titulo;
		Paradero^ ParaderoAsociado;
		int AforoPromocion;
		double CantDescuento;
		bool Estado;

	public:
		Promociones();
		Promociones(int Codigo, String^ Titulo, String^ Descripcion, String^ FechaPromocion, int AforoPromocion, double CantDescuento, Paradero^ ParaderoAsociado, bool Estado);

		int GetCodigo();
		void SetCodigo(int Codigo);

		String^ GetFechaPromocion();
		void SetFechaPromocion(String^ FechaPromocion);

		String^ GetDescripcion();
		void SetDescripcion(String^ Descripcion);

		String^ GetTitulo();
		void SetTitulo(String^ Titulo);

		Paradero^ GetParaderoAsociado();
		void SetParaderoAsociado(Paradero^ ParaderoAsociado);

		int GetAforoPromocion();
		void SetAforoPromocion(int AforoPromocion);

		double GetCantDescuento();
		void SetCantDescuento(double CantDescuento);

		bool GetEstado();
		void SetEstado(bool Estado);
	};
};