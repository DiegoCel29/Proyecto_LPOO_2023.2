#pragma once

using namespace System;

namespace TransPorticoModel {
	public ref class BuzonSugerencia {
	private:
		int Codigo;
		String^ Fecha;
		String^ Hora;
		String^ Tipo;
		String^ Comentario;
		String^ Usuario;
		String^ Placa;

	public:
		BuzonSugerencia();
		BuzonSugerencia(int Codigo, String^ Fecha, String^ Hora, String^ Tipo, String^ Comentario, String^ Usuario, String^ Placa);

		int GetCodigo();
		void SetCodigo(int Codigo);

		String^ GetFecha();
		void SetFecha(String^ Fecha);

		String^ GetHora();
		void SetHora(String^ Hora);

		String^ GetTipo();
		void SetTipo(String^ Fecha);

		String^ GetComentario();
		void SetComentario(String^ Fecha);

		String^ GetUsuario();
		void SerUsuario(String^ Fecha);

		String^ GetPlaca();
		void SetPlaca(String^ Fecha);
	};
};