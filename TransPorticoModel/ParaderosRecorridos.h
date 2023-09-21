#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class ParaderosRecorridos {
	private:
		String^ Nombre;
		String^ ParaderoSubida;
		String^ ParaderoBajada;
		String^ Tarjeta;
		double Tarifa;

	public:
		ParaderosRecorridos();
		ParaderosRecorridos(String^ Nombre, String^ ParaderoSubida, String^ ParaderoBajada, String^ Tarjeta, double Tarifa);
		String^ getNombre();
		void setNombre(String^ Nombre);

		String^ getParadero_Subida();
		void setParadero_Subida(String^ ParaderoSubida);

		String^ getParadero_Bajada();
		void setParadero_Bajada(String^ ParaderoBajada);

		String^ getTarjeta();
		void setTarjeta(String^ Tarjeta);

		double getTarifa();
		void setTarifa(double Tarifa);
	};
};