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

		int GetCodigo();
		void SetCodigo(int Codigo);

		double GetSaldo();
		void SetSaldo(double Saldo);

		String^ GetTitular();
		void SetTitular(String^ Titular);

		String^ GetIdentificador();
		void SetIdentificador(String^ Identificador);
	};
};