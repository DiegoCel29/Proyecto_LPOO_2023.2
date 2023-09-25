#include "Gestion.h"

using namespace TransPorticoModel;

Gestion::Gestion() {

};

Gestion::Gestion(int Codigo, String^ Ruta, int CantPasajerosRuta, int MediaPuntaje) {
	this->Codigo = Codigo;
	this->Ruta = Ruta;
	this->CantPasajerosRuta = CantPasajerosRuta;
	this->MediaPuntaje = MediaPuntaje;
};
int Gestion::getCodigo() {
	return this->Codigo;
}
void Gestion::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}
String^ Gestion::getRuta() {
	return this->Ruta;
}
void Gestion::setRuta(String^ Ruta) {
	this->Ruta = Ruta;
}
int Gestion::getCantPasajerosRuta() {
	return this->CantPasajerosRuta;
}

void Gestion::setCantPasajerosRuta(int CantPasajerosRuta) {
	this->CantPasajerosRuta = CantPasajerosRuta;
}

int Gestion::getMediaPuntaje() {
	return this->MediaPuntaje;
}

void Gestion::setMediaPuntaje(int MediaPuntaje) {
	this->MediaPuntaje = MediaPuntaje;
}



