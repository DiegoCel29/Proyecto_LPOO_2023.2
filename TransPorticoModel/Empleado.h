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
		Empleado(String^ DNI, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, int Sueldo, String^ EstadoContrato);
		String^ GetDNI_Empleado();
		void SetDNI_Empleado(String^ DNI);

		String^ GetNombre_Empleado();
		void SetNombre_Empleado(String^ Nombre);

		String^ GetApellidoPat_Empleado();
		void SetApellidoPat_Empleado(String^ ApellidoPat);

		String^ GetApellidoMat_Empleado();
		void SetApellidoMat_Empleado(String^ ApellidoMat);

		int GetEdad_Empleado();
		void SetEdad_Empleado(int Edad);

		String^ GetGenero_Empleado();
		void SetGenero_Empleado(String^ Genero);

		String^ GetTelefono_Empleado();
		void SetTelefono_Empleado(String^ Telefono);

		String^ GetContrasena_Empleado();
		void SetContrasena_Empleado(String^ Contrasena);

		int GetSueldo_Empleado();
		void SetSueldo_Empleado(int Sueldo);

		String^ GetEstadoContrato_Empleado();
		void SetEstadoContrato_Empleado(String^ EstadoContrato);
	};
};
