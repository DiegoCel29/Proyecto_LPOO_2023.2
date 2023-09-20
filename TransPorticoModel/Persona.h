#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Persona {
	private:
		int Codigo;
		String^ Nombre;
		String^ ApellidoPat;
		String^ ApellidoMat;
		String^ DNI;
		int Edad;
		String^ Genero;
		String^ Telefono;
		String^ Contrasena;

	public:
		Persona();
		Persona(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena);
	};
};