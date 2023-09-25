#include "MedidasEstadisticas.h"

using namespace TransPorticoModel;

MedidasEstadisticas::MedidasEstadisticas() {

};

MedidasEstadisticas::MedidasEstadisticas(int Codigo, double Media, double Moda, double Mediana, double Maximo, double Minimo, double Desviacion, String^ Fecha) {
	this->Codigo = Codigo;
	this->Media = Media;
	this->Moda = Moda;
	this->Mediana = Mediana;
	this->Maximo = Maximo;
	this->Minimo = Minimo;
	this->Desviacion = Desviacion;
	this->Fecha = Fecha;
};
int MedidasEstadisticas::getCodigo() {
	return this->Codigo;
}
void MedidasEstadisticas::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}
double MedidasEstadisticas::getMedia() {
	return this->Media;
}
void MedidasEstadisticas::setMedia(double Media) {
	this->Media = Media;
}
double MedidasEstadisticas::getModa() {
	return this->Moda;
}
void MedidasEstadisticas::setModa(double Moda) {
	this->Moda = Moda;
}
double MedidasEstadisticas::getMediana() {
	return this->Mediana;
}
void MedidasEstadisticas::setMediana(double Mediana) {
	this->Mediana = Mediana;
}
double MedidasEstadisticas::getMaximo() {
	return this->Maximo;
}
void MedidasEstadisticas::setMaximo(double Maximo) {
	this->Maximo = Maximo;
}
double MedidasEstadisticas::getMinimo() {
	return this->Minimo;
}
void MedidasEstadisticas::setMinimo(double Minimo) {
	this->Minimo = Minimo;
}
double MedidasEstadisticas::getDesviacion() {
	return this->Desviacion;
}
void MedidasEstadisticas::setDesviacion(double Desviacion) {
	this->Desviacion = Desviacion;
}
String^ MedidasEstadisticas::getFecha() {
	return this->Fecha;
}
void MedidasEstadisticas::setFecha(String^ Fecha) {
	this->Fecha = Fecha;
}