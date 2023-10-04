#include "Promociones.h"

using namespace TransPorticoModel;

Promociones::Promociones() {

};

Promociones::Promociones(int Codigo, String^ Titulo, String^ Descripcion, String^ FechaInicio, String^ FechaFin) {
	this->Codigo = Codigo;
	this->FechaInicio = FechaInicio;
	this->FechaFin = FechaFin;
	this->Descripcion = Descripcion;
	this->Titulo = Titulo;
}

int Promociones::GetCodigo() {
	return this->Codigo;
};

void Promociones::SetCodigo(int Codigo) {
	this->Codigo = Codigo;
};

String^ Promociones::GetFechaInicio() {
	return this->FechaInicio;
};

void Promociones::SetFechaInicio(String^ FechaInicio) {
	this->FechaInicio = FechaInicio;
};

String^ Promociones::GetFechaFin() {
	return this->FechaFin;
};

void Promociones::SetFechaFin(String^ FechaFin) {
	this->FechaFin = FechaFin;
};

String^ Promociones::GetDescripcion() {
	return this->Descripcion;
};

void Promociones::SetDescripcion(String^ Descripcion) {
	this->Descripcion = Descripcion;
};

String^ Promociones::GetTitulo() {
	return this->Titulo;
};

void Promociones::SetTitulo(String^ Titulo) {
	this->Titulo = Titulo;
};