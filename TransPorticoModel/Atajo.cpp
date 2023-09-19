#include "Atajo.h"

Atajo::Atajo() {

};

Atajo::Atajo(int Codigo, double X_Inicio, double Y_Inicio, double X_Final, double Y_Final, String^ RutaAsociada) {
	this->Codigo = Codigo;
	this->X_Inicio = X_Inicio;
	this->Y_Inicio = Y_Inicio;
	this->X_Final = X_Final;
	this->Y_Final = Y_Final;
	this->RutaAsociada = RutaAsociada;
}