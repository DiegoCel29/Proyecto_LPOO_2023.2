#include "Promociones.h"

Promociones::Promociones() {

};

Promociones::Promociones(int Codigo, String^ FechaInicio, String^ FechaFin, String^ Descripcion, String^ Titulo) {
	this->Codigo = Codigo;
	this->FechaInicio = FechaInicio;
	this->FechaFin = FechaFin;
	this->Descripcion = Descripcion;
	this->Titulo = Titulo;
}