#pragma once

using namespace System;

public ref class SituacionRecorrido{
private:
	int Codigo;
	bool HayTrafico;
	bool HayChoque;
	bool ExcVelocidad;

public:
	SituacionRecorrido();
	SituacionRecorrido(int Codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad);
};