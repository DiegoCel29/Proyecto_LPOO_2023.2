#include "BuzonSugerencia.h"

using namespace TransPorticoModel;

BuzonSugerencia::BuzonSugerencia() {

};

BuzonSugerencia::BuzonSugerencia(int Codigo, String^ Fecha, String^ Hora, String^ Tipo, String^ Comentario, Persona^ Usuario, String^ Placa) {
	this->Codigo = Codigo;
	this->Fecha = Fecha;
	this->Hora = Hora;
	this->Tipo = Tipo;
	this->Comentario = Comentario;
	this->Usuario = Usuario;
	this->Placa = Placa;
	this->Placa = Placa;
}