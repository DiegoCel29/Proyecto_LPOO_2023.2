#pragma once
#include "Paradero.h"

using namespace System;
using namespace System::Collections::Generic;

namespace TransPorticoModel {
	public ref class Ruta {
	private:
		int Codigo;
		String^ Linea;
		int CantParaderos;
		String^ HoraInicio;
		String^ HoraCierre;
		String^ Zona;
		String^ Supervisor;
		int CantAutobuses;
		double Distancia;
		double Duracion;
		List<Paradero^>^ ListParadero;


	public:
		Ruta();
		Ruta(int Codigo, String^ Linea, int CantParaderos, String^ HoraInicio, String^ HoraCierre, String^ Zona, String^ Supervisor,int CantAutobuses,double Distancia,double Duracion);
		int getCodigo();
		void setCodigo(int Codigo);
		String^ getLinea();
		void setLinea(String^ getLinea);
		int getCantParaderos();
		void setCantParaderos(int CantParaderos);
		String^ getHoraInicio();
		void setHoraInicio(String^ getHoraInicio);
		String^ getHoraCierre();
		void setHoraCierre(String^ getHoraCierre);
		String^ getZona();
		void setZona(String^ getZona);
		String^ getSupervisor();
		void setSupervisor(String^ Supervisor);
		int getCantBuses();
		void setCantBuses(int CantAutobuses);
		double getDistancia();
		void setDistancia(double Distancia);
		double getDuracion();
		void setDuracion(double Duracion);
	};
};