#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Atajo {
	private:
		int Codigo;
		int X_Inicio;
		int Y_Inicio;
		String^ Paradero_Inicio;
		int X_Final;
		int Y_Final;
		String^ Paradero_Final;
		String^ RutaAsociada;


	public:
		Atajo();
		Atajo(int Codigo, int X_Inicio, int Y_Inicio, String^ Paradero_Inicio, int X_Final, int Y_Final, String^ Paradero_Final, String^ RutaAsociada);
		int getCodigo_A();
		void setCodigo_A(int Codigo);
		int getX_Inicio();
		void setX_Inicio(int X_Inicio);
		int getY_Inicio();
		void setY_Inicio(int Y_Inicio);
		String^ getParadero_Inicio();
		void setParadero_Inicio(String^ Paradero_Inicio);
		int getX_Final();
		void setX_Final(int X_Final);
		int getY_Final();
		void setY_Final(int Y_Final);
		String^ getParadero_Final();
		void setParadero_Final(String^ Paradero_Final);
		String^ getRutaAsociada();
		void setRutaAsociada(String^ RutaAsociada);
	};
};