#include "Calificacion.h"

using namespace TransPorticoModel;

Calificacion::Calificacion() {

};

Calificacion::Calificacion(int Codigo, String^ Nombre, int Puntaje) {
	this->Codigo = Codigo;
	this->Puntaje = Puntaje;
	this->Nombre = Nombre;
};
int Calificacion::getCodigo() {
	return this->Codigo;
}
void Calificacion::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}
String^ Calificacion::getNombre() {
	return this->Nombre;
}
void Calificacion::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
}
int Calificacion::getPuntaje() {
	return this->Puntaje;
}
void Calificacion::setPuntaje(int Puntaje) {
	this->Puntaje = Puntaje;
}