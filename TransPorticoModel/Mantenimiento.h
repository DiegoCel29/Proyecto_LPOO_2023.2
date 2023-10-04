#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class Mantenimiento {
	private:
		int Codigo;
		String^ FechaMantenimiento;
		String^ TipoMantenimiento;
		String^ DescripcionMantenimiento;

	public:
		Mantenimiento();
		Mantenimiento(int Codigo, String^ FechaMantenimiento, String^ TipoMantenimiento, String^ DescripcionMantenimiento);

		int GetCodigo();
		void SetCodigo(int Codigo);

		String^ GetFechaMantenimiento();
		void SetFechaMantenimiento(String^ FechaMantenimiento);

		String^ GetTipoMantenimiento();
		void SetTipoMantenimiento(String^ TipoMantenimiento);

		String^ GetDescripcionMantenimiento();
		void SetDescripcionMantenimiento(String^ DescripcionMantenimiento);
	};
};