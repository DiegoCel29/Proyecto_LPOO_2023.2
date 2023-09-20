#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Horario {
	private:
		int Codigo;
		String^ HoraInicio;
		String^ HoraSalida;
		String^ Turno;

	public:
		Horario();
		Horario(int Codigo, String^ HoraInicio, String^ HoraSalida, String^ Turno);
	};
};