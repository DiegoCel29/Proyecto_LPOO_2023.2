#include "MedidasEstadisticas.h"

using namespace TransPorticoModel;

MedidasEstadisticas::MedidasEstadisticas() {

};

MedidasEstadisticas::MedidasEstadisticas(int Codigo, double Media, double Moda, double Mediana, double Maximo, double Minimo, double Desviacion) {
	this->Codigo = Codigo;
	this->Media = Media;
	this->Moda = Moda;
	this->Mediana = Mediana;
	this->Maximo = Maximo;
	this->Minimo = Minimo;
	this->Desviacion = Desviacion;
}