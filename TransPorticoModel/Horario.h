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
		int getCodigo();
		void setCodigo(int Codigo);
		String^ getHoraInicio();
		void setHoraInicio(String^ HoraInicio);
		String^ getHoraSalida();
		void setHoraSalida(String^ HoraSalida);
		String^ getTurno();
		void setTurno(String^ Turno);
	};
};