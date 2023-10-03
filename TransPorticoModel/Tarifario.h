#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Tarifario {
	private:
		String^ RutaAsociada;
		String^ Identificador;
		String^ ParaderoInicial;
		String^ ParaderoFinal;
		double Tarifa;

	public:
		Tarifario();
		Tarifario(String^ Identificador, String^ RutaAsociada, String^ ParaderoInicial, String^ ParaderoFinal, double Tarifa);

		String^ GetRutaAsociada();
		void SetRutaAsociada(String^ RutaAsociada);

		String^ GetIdentificador();
		void SetIdentificador(String^ Identificador);

		String^ GetParaderoInicial();
		void SetParaderoInicial(String^ Tarjeta);

		String^ GetParaderoFinal();
		void SetParaderoFinal(String^ ParaderoFinal);

		double GetTarifa();
		void SetTarifa(double Tarifa);
	};
};