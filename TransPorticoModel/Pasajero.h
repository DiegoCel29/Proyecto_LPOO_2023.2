#pragma once
#include "Persona.h"

using namespace System;

namespace TransPorticoModel {
	public ref class Pasajero :Persona {
	private:
		String^ FechaNacimiento;
	public:
		Pasajero();
		Pasajero(String^ DNI, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ FechaNacimiento);


		String^ GetDNI_Pasajero();
		void SetDNI_Pasajero(String^ DNI);

		String^ GetNombre_Pasajero();
		void SetNombre_Pasajero(String^ Nombre);

		String^ GetApellidoPat_Pasajero();
		void SetApellidoPat_Pasajero(String^ ApellidoPat);

		String^ GetApellidoMat_Pasajero();
		void SetApellidoMat_Pasajero(String^ ApellidoMat);

		int GetEdad_Pasajero();
		void SetEdad_Pasajero(int Edad);

		String^ GetGenero_Pasajero();
		void SetGenero_Pasajero(String^ Genero);

		String^ GetTelefono_Pasajero();
		void SetTelefono_Pasajero(String^ Telefono);

		String^ GetContrasena_Pasajero();
		void SetContrasena_Pasajero(String^ Contrasena);

		String^ GetFechaNacimiento_Pasajero();
		void SetFechaNacimiento_Pasajero(String^ Contrasena);

	};
};