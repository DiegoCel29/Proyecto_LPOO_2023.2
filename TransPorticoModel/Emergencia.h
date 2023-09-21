#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Emergencia {
	private:
		int Codigo;
		bool EnEmergencia;
		String^ TipoEmergencia;

	public:
		Emergencia();
		Emergencia(int Codigo, bool EnEmergencia, String^ TipoEmergencia);
		int getCodigo();
		void setCodigo(int Codigo);
		bool getEnEmergencia();
		void setEnEmergencia(int EnEmergencia);
		String^ getTipoEmergencia();
		void setTipoEmergencia(String^ TipoEmergencia);
	};
};