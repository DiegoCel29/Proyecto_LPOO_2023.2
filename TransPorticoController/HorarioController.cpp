#include <iostream>
#include "HorarioController.h"

using namespace TransPorticoController;
using namespace System::IO;


HorarioController::HorarioController() {
}
List<Horario^>^ HorarioController::buscarHorarios(String^ Turno) {
	List<Horario^>^ listaHorariosEncontradas = gcnew List<Horario^>();
	array<String^>^ lineas = File::ReadAllLines("Horario.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int CodigoHorario = Convert::ToInt32(datos[0]);
		String^ HorarioInicio = datos[1];
		String^ HorarioSalida = datos[2];
		String^ TurnoHorario = datos[3];
		if (TurnoHorario->Contains(Turno)) {
			Horario^ objHorario = gcnew Horario(CodigoHorario, HorarioInicio, HorarioSalida, TurnoHorario);
			listaHorariosEncontradas->Add(objHorario);
		}
	}
	return listaHorariosEncontradas;
}