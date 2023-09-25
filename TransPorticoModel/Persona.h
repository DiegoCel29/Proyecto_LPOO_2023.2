#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Persona {
	protected:
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
		Persona(int Codigo, String^ DNI, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ Telefono, String^ Contrasena);
		int GetCodigo();
		void SetCodigo(int Codigo);

		String^ GetDNI();
		void SetDNI(String^ DNI);

		String^ GetNombre();
		void SetNombre(String^ Nombre);

		String^ GetApellidoPat();
		void SetApellidoPat(String^ ApellidoPat);

		String^ GetApellidoMat();
		void SetApellidoMat(String^ ApellidoMat);

		int GetEdad();
		void SetEdad(int Edad);

		String^ GetGenero();
		void SetGenero(String^ Genero);

		String^ GetTelefono();
		void SetTelefono(String^ Telefono);

		String^ GetContrasena();
		void SetContrasena(String^ Contrasena);
	};
};