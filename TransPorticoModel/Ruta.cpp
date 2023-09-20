#include "Ruta.h"

using namespace TransPorticoModel;

Ruta::Ruta() {

};

Ruta::Ruta(int Codigo, int CantParaderos, List<Paradero^>^ ListParadero, char Linea, String^ HoraInicio, String^ HoraCierre, String^ Zona) {
	this->Codigo = Codigo;
	this->CantParaderos = CantParaderos;
	this->ListParadero = ListParadero;
	this->Linea = Linea;
	this->HoraInicio = HoraInicio;
	this->HoraCierre = HoraCierre;
	this->Zona = Zona;
};