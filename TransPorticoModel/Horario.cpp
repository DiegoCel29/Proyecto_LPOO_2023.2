#include "Horario.h"

Horario::Horario() {

};

Horario::Horario(int Codigo, String^ HoraInicio, String^ HoraSalida, String^ Turno) {
	this->Codigo = Codigo;
	this->HoraInicio = HoraInicio;
	this->HoraSalida = HoraSalida;
	this->Turno = Turno;
};