#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Persona {
	protected:
		int Codigo;
		String^ Nombres;
		String^ ApellidoPat;
		String^ ApellidoMat;
		String^ DNI;
		int Edad;
		String^ Genero;
		String^ Telefono;
		String^ Contrasena;
		String^ Tipo;

	public:
		Persona();
		Persona(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ Tipo);
		Persona(String^ DNI, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat,int Edad, String^ Genero, String^ Telefono, String^ Contrasena);
		int GetCodigo();
		void SetCodigo(int Codigo);

		String^ GetDNI();
		void SetDNI(String^ DNI);

		String^ GetNombres();
		void SetNombres(String^ Nombres);

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

		String^ GetTipo();
		void SetTipo(String^ Tipo);
	};
};