#include "Horario.h"

using namespace TransPorticoModel;

Horario::Horario() {

};

Horario::Horario(int Codigo, String^ HoraInicio, String^ HoraSalida, String^ Turno) {
	this->Codigo = Codigo;
	this->HoraInicio = HoraInicio;
	this->HoraSalida = HoraSalida;
	this->Turno = Turno;
};
int Horario::getCodigo() {
	return this->Codigo;
}
void Horario::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}
String^ Horario::getHoraInicio() {
	return this->HoraInicio;
}
void Horario::setHoraInicio(String^ HoraInicio) {
	this->HoraInicio = HoraInicio;
}
String^ Horario::getHoraSalida() {
	return this->HoraSalida;
}
void Horario::setHoraSalida(String^ HoraSalida) {
	this->HoraSalida = HoraSalida;
}
String^ Horario::getTurno() {
	return this->Turno;
}
void Horario::setTurno(String^ Turno) {
	this->Turno = Turno;
}