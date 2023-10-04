#include "Mantenimiento.h"

using namespace TransPorticoModel;

Mantenimiento::Mantenimiento() {

};

Mantenimiento::Mantenimiento(int Codigo, String^ FechaMantenimiento, String^ TipoMantenimiento, String^ DescripcionMantenimiento) {
	this->Codigo = Codigo;
	this->FechaMantenimiento = FechaMantenimiento;
	this->TipoMantenimiento = TipoMantenimiento;
	this->DescripcionMantenimiento = DescripcionMantenimiento;
};

int Mantenimiento::GetCodigo() {
	return this->Codigo;
};

void Mantenimiento::SetCodigo(int Codigo) {
	this->Codigo = Codigo;
};

String^ Mantenimiento::GetFechaMantenimiento() {
	return this->FechaMantenimiento;
};

void Mantenimiento::SetFechaMantenimiento(String^ FechaMantenimiento) {
	this->FechaMantenimiento = FechaMantenimiento;
};

String^ Mantenimiento::GetTipoMantenimiento() {
	return this->TipoMantenimiento;
};

void Mantenimiento::SetTipoMantenimiento(String^ TipoMantenimiento) {
	this->TipoMantenimiento = TipoMantenimiento;
};


String^ Mantenimiento::GetDescripcionMantenimiento() {
	return this->DescripcionMantenimiento;
};

void Mantenimiento::SetDescripcionMantenimiento(String^ DescripcionMantenimiento) {
	this->DescripcionMantenimiento = DescripcionMantenimiento;
};