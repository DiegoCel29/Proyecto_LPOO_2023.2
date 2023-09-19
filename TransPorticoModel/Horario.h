#pragma once

using namespace System;

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