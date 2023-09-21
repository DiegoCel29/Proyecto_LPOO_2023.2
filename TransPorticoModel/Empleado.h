#pragma once
#include "Persona.h"

namespace TransPorticoModel {
	public ref class Empleado :Persona {
	private:
		double Sueldo;
		String^ IdPersonal;
		String^ EstadoContrato;

	public:
		Empleado();
		Empleado(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, double Sueldo, String^ IdPersonal, String^ EstadoContrato);

		int GetCodigoE();
		void SetCodigoE(int Codigo);
		
		int GetEdadE();
		void SetEdadE(int Edad);

		double GetSueldo();
		void SetSueldo(double Sueldo);

		String^ GetNombreE();
		void SetNombreE(String^ Nombre);

		String^ GetApellidoPatE();
		void SetApellidoPatE(String^ ApellidoPat);

		String^ GetApellidoMatE();
		void SetApellidoMatE(String^ ApellidoMat);

		String^ GetDNIE();
		void SetDNIE(String^ DNI);

		String^ GetGeneroE();
		void SetGeneroE(String^ Genero);

		String^ GetTelefonoE();
		void SetTelefonoE(String^ Telefono);

		String^ GetContrasenaE();
		void SetContrasenaE(String^ Contrasena);

		String^ GetIdPersonal();
		void SetIdPersonal();

		String^ GetEstadoContrato();
		void SetEstadoContrato();
	};
}