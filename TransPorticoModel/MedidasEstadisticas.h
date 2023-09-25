#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class MedidasEstadisticas {
	private:
		int Codigo;
		double Media;
		double Moda;
		double Mediana;
		double Maximo;
		double Minimo;
		double Desviacion;
		String^ Fecha;

	public:
		MedidasEstadisticas();
		MedidasEstadisticas(int Codigo, double Media, double Moda, double Mediana, double Maximo, double Minimo, double Desviacion, String^ Fecha);
		int getCodigo();
		void setCodigo(int Codigo);
		double getMedia();
		void setMedia(double Media);
		double getModa();
		void setModa(double Moda);
		double getMediana();
		void setMediana(double Mediana);
		double getMaximo();
		void setMaximo(double Maximo);
		double getMinimo();
		void setMinimo(double Minimo);
		double getDesviacion();
		void setDesviacion(double Desviacion);
		String^ getFecha();
		void setFecha(String^ Fecha);
	};
};