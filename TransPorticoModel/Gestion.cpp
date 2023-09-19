#include "Gestion.h"

Gestion::Gestion() {

};

Gestion::Gestion(int Codigo, String^ Ruta, int CantPasajerosRuta, double MediaPuntaje) {
	this->Codigo = Codigo;
	this->Ruta = Ruta;
	this->CantPasajerosRuta = CantPasajerosRuta;
	this->MediaPuntaje = MediaPuntaje;
}