#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Emergencia {
	public:
		int Codigo;
		bool EnEmergencia;
		String^ TipoEmergencia;

	private:
		Emergencia();
		Emergencia(int Codigo, bool EnEmergencia, String^ TipoEmergencia);
	};
};