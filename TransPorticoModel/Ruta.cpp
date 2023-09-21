#include "Ruta.h"

using namespace TransPorticoModel;

Ruta::Ruta() {

};

Ruta::Ruta(int Codigo, String^ Linea, int CantParaderos, String^ HoraInicio, String^ HoraCierre, String^ Zona) {
	this->Codigo = Codigo;
	this->Linea = Linea;
	this->CantParaderos = CantParaderos;
	this->HoraInicio = HoraInicio;
	this->HoraCierre = HoraCierre;
	this->Zona = Zona;
	this->ListParadero = ListParadero;
};
int Ruta::getCodigo() {
	return this->Codigo;
}
void Ruta::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}
String^ Ruta::getLinea() {
	return this->Linea;
}
void Ruta::setLinea(String^ getLinea) {
	this->Linea = Linea;
}
int Ruta::getCantParaderos() {
	return this->CantParaderos;
}
void Ruta::setCantParaderos(int CantParaderos) {
	this->CantParaderos = CantParaderos;
}
String^ Ruta::getHoraInicio() {
	return this->HoraInicio;
}
void Ruta::setHoraInicio(String^ getHoraInicio) {
	this->HoraInicio = HoraInicio;
}
String^ Ruta::getHoraCierre() {
	return this->HoraCierre;
}
void Ruta::setHoraCierre(String^ getHoraCierre) {
	this->HoraCierre = HoraCierre;
}
String^ Ruta::getZona() {
	return this->Zona;
}
void Ruta::setZona(String^ getZona) {
	this->Zona = Zona;
}