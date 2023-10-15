#include "Ruta.h"

using namespace TransPorticoModel;

Ruta::Ruta() {

};

Ruta::Ruta(int Codigo, String^ Linea, int CantParaderos, String^ HoraInicio, String^ HoraCierre, String^ Zona, String^ Supervisor, int CantAutobuses, double Distancia, double Duracion){
	this->Codigo = Codigo;
	this->Linea = Linea;
	this->CantParaderos = CantParaderos;
	this->HoraInicio = HoraInicio;
	this->HoraCierre = HoraCierre;
	this->Zona = Zona;
	this->Supervisor = Supervisor;
	this->CantAutobuses = CantAutobuses;
	this->Distancia = Distancia;
	this->Duracion = Duracion;
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
String^ Ruta::getSupervisor() {
	return this->Supervisor;
}
void Ruta::setSupervisor(String^ Supervisor) {
	this->Supervisor = Supervisor;
}
int Ruta::getCantBuses() {
	return this->CantAutobuses;
}
void Ruta::setCantBuses(int CantAutobuses) {
	this->CantAutobuses;
}
double Ruta::getDistancia() {
	return this->Distancia;
}
void Ruta::setDistancia(double Distancia) {
	this->Distancia = Distancia;
}
double Ruta::getDuracion() {
	return this->Duracion;
}
void Ruta::setDuracion(double Duracion) {
	this->Duracion = Duracion;
}