#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class HorarioController {
	public:
		HorarioController();
		List<Horario^>^ buscarHorarios(String^ Turno);
		Horario^ buscarHorarios(int codigo);
		int ExisteHorario(int codigo);
		void EliminarHorario(int codigo);
		void escribirArchivo(List<Horario^>^ ListaHorarios);
		void agregarHorario(int Codigo, String^ HoraInicio, String^ HoraSalida, String^ Turno);
		List<Horario^>^ buscarHorariosall();
		void ActualizarHorario(int Codigo, String^ HoraInicio, String^ HoraSalida, String^ Turno);
	};
};