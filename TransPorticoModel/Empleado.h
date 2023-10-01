#pragma once
#include "Persona.h"

namespace TransPorticoModel {
	public ref class Empleado :Persona {
	private:
		int Sueldo;
		String^ EstadoContrato;

	public:
		Empleado();
		Empleado(int Codigo, String^ DNI, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ Tipo, int Sueldo, String^ EstadoContrato);

		String^ get_DNI_();
		void set_DNI_(String^ DNI);

		String^ get_Nombre_();
		void set_Nombre_(String^ Nombre);

		String^ get_ApellidoPat_();
		void set_ApellidoPat_(String^ ApellidoPat);

		String^ get_ApellidoMat_();
		void set_ApellidoMat_(String^ ApellidoMat);

		int get_Edad_();
		void set_Edad_(int Edad);

		String^ get_Genero_();
		void set_Genero_(String^ Genero);

		String^ get_Telefono_();
		void set_Telefono_(String^ Telefono);

		String^ get_Contrasena_();
		void set_Contrasena_(String^ Contrasena);

		int get_Sueldo_();
		void set_Sueldo_(int Sueldo);

		String^ get_EstadoContrato_();
		void set_EstadoContrato_(String^ EstadoContrato);
	};
};
