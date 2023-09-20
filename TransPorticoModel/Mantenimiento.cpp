#include "Mantenimiento.h"

using namespace TransPorticoModel;

Mantenimiento::Mantenimiento() {

};

Mantenimiento::Mantenimiento(int Codigo, bool IrMantenimiento, String^ TipoMantenimiento, String^ DescripcionMantenimiento) {
	this->Codigo = Codigo;
	this->IrMantenimiento = IrMantenimiento;
	this->TipoMantenimiento = TipoMantenimiento;
	this->DescripcionMantenimiento = DescripcionMantenimiento;
};