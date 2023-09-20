#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Tarjeta {
	private:
		int Codigo;
		double Saldo;
		String^ Titular;
		String^ Identificador;

	public:
		Tarjeta();
		Tarjeta(int Codigo, double Saldo, String^ Titular, String^ Identificador);
	};
};