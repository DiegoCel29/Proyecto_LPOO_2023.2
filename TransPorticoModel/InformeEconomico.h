#pragma once

using namespace System;

public ref class InformeEconomico {
private:
	int Codigo;
	double Ingresos;
	double Salarios;
	double CostoMantenimientos;

public:
	InformeEconomico();
	InformeEconomico(int Codigo, double Ingresos, double Salarios, double CostoMantenimientos);
};