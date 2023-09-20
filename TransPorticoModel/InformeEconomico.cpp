#include "InformeEconomico.h"

using namespace TransPorticoModel;

InformeEconomico::InformeEconomico() {

};

InformeEconomico::InformeEconomico(int Codigo, double Ingresos, double Salarios, double CostoMantenimientos) {
	this->Codigo = Codigo;
	this->Ingresos = Ingresos;
	this->Salarios = Salarios;
	this->CostoMantenimientos = CostoMantenimientos;
};