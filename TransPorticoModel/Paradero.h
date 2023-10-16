#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Paradero {
	private:
		int Codigo;
		String^ Nombre;
		double X_Paradero;
		double Y_Paradero;
		String^ Ruta;
		String^ Horario;
		String^ Publicidad;
		String^ Referencia;
		String^ Seguridad;
	public:
		Paradero();
		Paradero(int Codigo, String^ Nombre, double X_Paradero, double Y_Paradero, String^ Ruta,String^ Horario,String^ Publicidad,String^ Referencia,String^ Seguridad);
		int getCodigo();
		void setCodigo(int Codigo);
		String^ getNombre();
		void setNombre(String^ Nombre);
		double getX_Paradero();
		void setX_Paradero(int X_Paradero);
		double getY_Paradero();
		void setY_Paradero(int Y_Paradero);
		String^ getRuta();
		void setRuta(String^ Ruta);
		String^ getHorario();
		void setHorario(String^ Horario);
		String^ getPublicidad();
		void setPublicidad(String^ Publicidad);
		String^ getReferencia();
		void setReferencia(String^ Referencia);
		String^ getSeguridad();
		void setSeguridad(String^ Seguridad);
	};
};