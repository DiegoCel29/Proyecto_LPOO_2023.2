#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class InformeEconomico {
	private:
		int Codigo;
		String^ Anhio;
		int Ingresos;
		int SalarioAdministrador;
		int SalarioConductor;
		int CostoMantenimientos;
		
	public:
		InformeEconomico();
		InformeEconomico(int Codigo, String^ Anhio,int Ingresos, int SalarioAdministrador,int SalarioConductor, int CostoMantenimientos);
		
		int GetCodigo();
		void SetCodigo(int Codigo);

		String^ GetAnhio();
		void SetAnhio(String^ Anhio);

		int GetIngresos();
		void SetIngresos(int Ingresos);
		
		int GetSalarioAdministrador();
		void SetSalarioAdministrador(int SalarioAdministrador);
		
		int GetSalarioConductor();
		void SetSalarioConductor(int SalarioConductor);
		
		int GetCostoMantenimientos();
		void SetCostoMantenimientos(int CostoMantenimientos);


	
	};
};