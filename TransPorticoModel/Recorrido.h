#pragma once

using namespace System;

public ref class Recorrido {
private:
	String^ Personal;
	String^ Ruta;
	String^ Autobus;
	String^ HoraSalida;
	String^ HoraLlegada;
	String^ Combustible;

private:
	Recorrido();
	Recorrido(String^ Personal, String^ Ruta, String^ Autobus, String^ HoraSalida, String^ HoraLlegada, String^ Combustible);
};