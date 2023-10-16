#include "Promociones.h"

using namespace TransPorticoModel;

Promociones::Promociones() {

};

Promociones::Promociones(int Codigo, String^ Titulo, String^ Descripcion, String^ FechaPromocion, int AforoPromocion, double CantDescuento, Paradero^ ParaderoAsociado, bool Estado) {
	this->Codigo = Codigo;
	this->Titulo = Titulo;
	this->Descripcion = Descripcion;
	this->FechaPromocion = FechaPromocion;
	this->AforoPromocion = AforoPromocion;
	this->CantDescuento = CantDescuento;
	this->ParaderoAsociado = ParaderoAsociado;
	this->Estado = Estado;
};

int Promociones::GetCodigo() {
	return this->Codigo;
};
void Promociones::SetCodigo(int Codigo) {
	this->Codigo = Codigo;
};

String^ Promociones::GetFechaPromocion() {
	return this->FechaPromocion;
};
void Promociones::SetFechaPromocion(String^ FechaInicio) {
	this->FechaPromocion = FechaPromocion;
};

Paradero^ Promociones::GetParaderoAsociado() {
	return this->ParaderoAsociado;
};
void Promociones::SetParaderoAsociado(Paradero^ ParaderoAsociado) {
	this->ParaderoAsociado = ParaderoAsociado;
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

int Promociones::GetAforoPromocion() {
	return this->AforoPromocion;
};
void Promociones::SetAforoPromocion(int AforoPromocion) {
	this->AforoPromocion = AforoPromocion;
};

double Promociones::GetCantDescuento() {
	return this->CantDescuento;
};
void Promociones::SetCantDescuento(double CantDescuento) {
	this->CantDescuento = CantDescuento;
};

bool Promociones::GetEstado() {
	return this->Estado;
};
void Promociones::SetEstado(bool Estado) {
	this->Estado = Estado;
};