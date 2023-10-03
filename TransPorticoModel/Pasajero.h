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
		
		String^ get_DNI();
		void set_DNI(String^ DNI);


		String^ get_Nombre();
		void set_Nombre(String^ Nombre);

		String^ get_ApellidoPat();
		void set_ApellidoPat(String^ ApellidoPat);

		String^ get_ApellidoMat();
		void set_ApellidoMat(String^ ApellidoMat);

		int get_Edad();
		void set_Edad(int Edad);

		String^ get_Genero();
		void set_Genero(String^ Genero);

		String^ get_Telefono();
		void set_Telefono(String^ Telefono);

		String^ get_Contrasena();
		void set_Contrasena(String^ Contrasena);

		String^ get_FechaNacimiento();
		void set_FechaNacimiento(String^ Contrasena);

	};
};