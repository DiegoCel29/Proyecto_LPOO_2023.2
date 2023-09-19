#pragma once

using namespace System;

public ref class Mantenimiento {
private:
	int Codigo;
	bool IrMantenimiento;
	String^ TipoMantenimiento;
	String^ DescripcionMantenimiento;
	 
public:
	Mantenimiento();
	Mantenimiento(int Codigo, bool IrMantenimiento, String^ TipoMantenimiento, String^ DescripcionMantenimiento);
};