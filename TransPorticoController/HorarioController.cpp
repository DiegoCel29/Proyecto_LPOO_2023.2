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

void HorarioController::escribirArchivo(List<Horario^>^ ListaHorarios) {
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaHorarios->Count);
	for (int i = 0; i < ListaHorarios->Count; i++) {
		Horario^ objHorario = ListaHorarios[i];
		lineasArchivo[i] = objHorario->getCodigo() + ";" + objHorario->getHoraInicio() + ";" + objHorario->getHoraSalida() + ";" + objHorario->getTurno();

	}
	File::WriteAllLines("Horario.txt", lineasArchivo);
}

List<Horario^>^ HorarioController::buscarHorariosall() {
	List<Horario^>^ listaHorariosEncontradas = gcnew List<Horario^>();
	array<String^>^ lineas = File::ReadAllLines("Horario.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int CodigoHorario = Convert::ToInt32(datos[0]);
		String^ HorarioInicio = datos[1];
		String^ HorarioSalida = datos[2];
		String^ TurnoHorario = datos[3];

		Horario^ objHorario = gcnew Horario(CodigoHorario, HorarioInicio, HorarioSalida, TurnoHorario);
		listaHorariosEncontradas->Add(objHorario);

	}
	return listaHorariosEncontradas;
}

Horario^ HorarioController::buscarHorarios(int codigo) {
	Horario^ objHorario = gcnew Horario;
	//Traemos todas carreras a una lista
	List<Horario^>^ ListHorario = buscarHorariosall();
	for (int i = 0; i < ListHorario->Count; i++) {
		if ((ListHorario[i]->getCodigo()) == codigo) {
			objHorario->setCodigo(ListHorario[i]->getCodigo());
			objHorario->setHoraInicio(ListHorario[i]->getHoraInicio());
			objHorario->setHoraSalida(ListHorario[i]->getHoraSalida());
			objHorario->setTurno(ListHorario[i]->getTurno());
			break;
		}
	}
	return objHorario;
}

void HorarioController::ActualizarHorario(int Codigo, String^ HoraInicio, String^ HoraSalida, String^ Turno) {
	List<Horario^>^ ListaHorario = buscarHorariosall();
	for (int i = 0; i < ListaHorario->Count; i++) {
		if ((ListaHorario[i]->getCodigo()) == Codigo) {
			ListaHorario[i]->setHoraInicio(HoraInicio);
			ListaHorario[i]->setHoraSalida(HoraSalida);
			ListaHorario[i]->setTurno(Turno);
			//Noactualizamos el codigo no es apto para cambios
			break;

		}
	}

	escribirArchivo(ListaHorario);
}


int HorarioController::ExisteHorario(int codigo) {
	int existe = 0;

	List<Horario^>^ listaHorario = buscarHorariosall();

	for (int i = 0; i < listaHorario->Count; i++) {
		Horario^ objHorario = listaHorario[i];
		if ((codigo) == (objHorario->getCodigo())) {
			existe = 1;
			break;
		}
	}


	return existe;
}
void HorarioController::EliminarHorario(int codigo) {
	List<Horario^>^ listaHorario = buscarHorariosall();
	for (int i = 0; i < listaHorario->Count; i++) {
		Horario^ objHorario = listaHorario[i];
		if ((objHorario->getCodigo()) == (codigo)) {
			listaHorario->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaHorario);

}
void HorarioController::agregarHorario(int Codigo, String^ HoraInicio, String^ HoraSalida, String^ Turno) {

	List<Horario^>^ listaHorario = buscarHorariosall();
	Horario^ objHorario = gcnew Horario(Codigo, HoraInicio, HoraSalida, Turno);
	listaHorario->Add(objHorario);
	escribirArchivo(listaHorario);
}