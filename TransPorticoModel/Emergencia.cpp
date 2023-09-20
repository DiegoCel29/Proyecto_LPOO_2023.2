#include "Emergencia.h"

using namespace TransPorticoModel;

Emergencia::Emergencia() {

};

Emergencia::Emergencia(int Codigo, bool EnEmergencia, String^ TipoEmergencia) {
	this->Codigo = Codigo;
	this->EnEmergencia = EnEmergencia;
	this->TipoEmergencia = TipoEmergencia;
};