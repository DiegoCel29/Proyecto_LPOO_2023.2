#include "BuzonSugerencia.h"

using namespace TransPorticoModel;

BuzonSugerencia::BuzonSugerencia() {

};

BuzonSugerencia::BuzonSugerencia(int Codigo, String^ Fecha, String^ Hora, String^ Tipo, String^ Comentario, String^ Usuario, String^ Placa) {
	this->Codigo = Codigo;
	this->Fecha = Fecha;
	this->Hora = Hora;
	this->Tipo = Tipo;
	this->Comentario = Comentario;
	this->Usuario = Usuario;
	this->Placa = Placa;
	this->Placa = Placa;
};

int BuzonSugerencia::GetCodigo() {
	return this->Codigo;
};
void BuzonSugerencia::SetCodigo(int Codigo) {
	this->Codigo = Codigo;
}

String^ BuzonSugerencia::GetFecha() {
	return this->Fecha;
}
void BuzonSugerencia::SetFecha(String^ Fecha) {
	this->Fecha = Fecha;
}

String^ BuzonSugerencia::GetHora() {
	return this->Hora;
}
void BuzonSugerencia::SetHora(String^ Hora){
	this->Hora = Hora;
}

String^ BuzonSugerencia::GetTipo() {
	return this->Tipo;
}
void BuzonSugerencia::SetTipo(String^ Fecha) {
	this->Tipo = Tipo;
}

String^ BuzonSugerencia::GetComentario() {
	return this->Comentario;
}
void BuzonSugerencia::SetComentario(String^ Fecha) {
	this->Comentario = Comentario;
}

String^ BuzonSugerencia::GetUsuario() {
	return this->Usuario;
}
void BuzonSugerencia::SerUsuario(String^ Fecha) {
	this->Usuario = Usuario;
}

String^ BuzonSugerencia::GetPlaca() {
	return this->Placa;
}
void BuzonSugerencia::SetPlaca(String^ Fecha) {
	this->Placa = Placa;
}