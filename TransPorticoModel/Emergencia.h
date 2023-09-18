#pragma once

using namespace System;

public ref class Emergencia {
public:
	int Codigo;
	bool EnEmergencia;
	String^ TipoEmergencia;

private:
	Emergencia();
	Emergencia(int Codigo, bool EnEmergencia, String^ TipoEmergencia);
};