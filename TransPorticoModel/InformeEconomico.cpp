#include "InformeEconomico.h"

using namespace TransPorticoModel;

InformeEconomico::InformeEconomico() {

};

InformeEconomico::InformeEconomico(int Codigo, String^ Anhio, int Ingresos, int SalarioAdministrador, int SalarioConductor, int CostoMantenimientos) {
	this->Codigo = Codigo;
	this->Anhio = Anhio;
	this->Ingresos = Ingresos;
	this->SalarioAdministrador = SalarioAdministrador;
	this->SalarioConductor = SalarioConductor;
	this->CostoMantenimientos = CostoMantenimientos;
};

int InformeEconomico::GetCodigo() {
	return this->Codigo;
}

void InformeEconomico::SetCodigo(int Codigo) {
	this->Codigo = Codigo;
}

String^ InformeEconomico::GetAnhio() {
	return this->Anhio;
}

void InformeEconomico::SetAnhio( String^ Anhio) {
	this->Anhio = Anhio;
}



int InformeEconomico::GetIngresos() {
	return this->Ingresos;
}

void InformeEconomico::SetIngresos(int Ingresos) {
	this->Ingresos = Ingresos;
}

int InformeEconomico::GetSalarioAdministrador() {
	return this->SalarioAdministrador;
}
void InformeEconomico::SetSalarioAdministrador(int SalarioAdministrador) {
	this->SalarioAdministrador = SalarioAdministrador;
}

int InformeEconomico::GetSalarioConductor() {
	return this->SalarioConductor;
}
void InformeEconomico::SetSalarioConductor(int SalarioConductor) {
	this->SalarioConductor = SalarioConductor;
}

int InformeEconomico::GetCostoMantenimientos() {
	return this->CostoMantenimientos;
}
void InformeEconomico::SetCostoMantenimientos(int CostoMantenimientos) {
	this->CostoMantenimientos = CostoMantenimientos;
}