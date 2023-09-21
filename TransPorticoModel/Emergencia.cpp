#include "Emergencia.h"

using namespace TransPorticoModel;

Emergencia::Emergencia() {

};

Emergencia::Emergencia(int Codigo, bool EnEmergencia, String^ TipoEmergencia) {
	this->Codigo = Codigo;
	this->EnEmergencia = EnEmergencia;
	this->TipoEmergencia = TipoEmergencia;
};
int Emergencia::getCodigo() {
	return this->Codigo;
}
void Emergencia::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}
bool Emergencia::getEnEmergencia() {
	return this->EnEmergencia;
}
void Emergencia::setEnEmergencia(int EnEmergencia) {
	this->EnEmergencia = EnEmergencia;
}
String^ Emergencia::getTipoEmergencia() {
	return this->TipoEmergencia;
}
void Emergencia::setTipoEmergencia(String^ TipoEmergencia) {
	this->TipoEmergencia = TipoEmergencia;
}