#include <iostream>
#include "ParaderoController.h"

using namespace TransPorticoController;
using namespace System::IO;


ParaderoController::ParaderoController() {

}
List<Paradero^>^ ParaderoController::buscarParaderos(String^ Nombre) {
	List<Paradero^>^ listaParaderosEncontradas = gcnew List<Paradero^>();
	array<String^>^ lineas = File::ReadAllLines("Paradero.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int CodigoParadero = Convert::ToInt32(datos[0]);
		String^ NombreParadero = datos[1];
		double X_Paradero = Convert::ToDouble(datos[2]);
		double Y_Paradero = Convert::ToDouble(datos[3]);
		String^ Ruta = datos[4];
		String^ Horario = datos[5];
		String^ Publicidad = datos[6];
		String^ Referencia = datos[7];
		String^ Seguridad = datos[8];
		if (NombreParadero->Contains(Nombre)) {
			Paradero^ objParadero = gcnew Paradero(CodigoParadero, NombreParadero, X_Paradero, Y_Paradero,Ruta,Horario,Publicidad,Referencia,Seguridad);
			listaParaderosEncontradas->Add(objParadero);
		}
	}
	return listaParaderosEncontradas;
}
List<Paradero^>^ ParaderoController::buscarAll() {
	List<Paradero^>^ listaParaderosEncontradas = gcnew List<Paradero^>();
	array<String^>^ lineas = File::ReadAllLines("Paradero.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int CodigoParadero = Convert::ToInt32(datos[0]);
		String^ NombreParadero = datos[1];
		double X_Paradero = Convert::ToDouble(datos[2]);
		double Y_Paradero = Convert::ToDouble(datos[3]);
		String^ Ruta = datos[4];
		String^ Horario = datos[5];
		String^ Publicidad = datos[6];
		String^ Referencia = datos[7];
		String^ Seguridad = datos[8];
		Paradero^ objParadero = gcnew Paradero(CodigoParadero, NombreParadero, X_Paradero, Y_Paradero, Ruta, Horario, Publicidad, Referencia, Seguridad);
		listaParaderosEncontradas->Add(objParadero);
	}
	return listaParaderosEncontradas;
}
void ParaderoController::escribirArchivo(List<Paradero^>^ listaParaderos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaParaderos->Count);
	for (int i = 0; i < listaParaderos->Count; i++) {
		Paradero^ objeto = listaParaderos[i];
		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getNombre() + ";" + objeto->getX_Paradero() + ";" + objeto->getY_Paradero() + ";" + objeto->getRuta() + ";" + objeto->getHorario() + ";" + objeto->getPublicidad() + ";" + objeto->getReferencia() + ";" + objeto->getSeguridad();
	}
	File::WriteAllLines("Paradero.txt", lineasArchivo);
}
void ParaderoController::eliminarParaderoFisico(int Codigo) {
	List<Paradero^>^ listaParaderos = buscarAll();
	for (int i = 0; i < listaParaderos->Count; i++) {
		if (listaParaderos[i]->getCodigo() == Codigo) {
			listaParaderos->RemoveAt(i);
		}
	}
	escribirArchivo(listaParaderos);
}
void ParaderoController::agregarParadero(Paradero^ objParadero) {
	List<Paradero^>^ listaParadero = buscarAll();
	listaParadero->Add(objParadero);
	escribirArchivo(listaParadero);
}
Paradero^ ParaderoController::buscarParaderoxCodigo(int Codigo) {
	List<Paradero^>^ listaParadero = buscarAll();
	for (int i = 0; i < listaParadero->Count; i++) {
		if (listaParadero[i]->getCodigo() == Codigo) {
			return listaParadero[i];
		}
	}
}
void ParaderoController::actualizarParadero(Paradero^ objParadero) {
	List<Paradero^>^ listaParadero = buscarAll();
	for (int i = 0; i < listaParadero->Count; i++) {
		if (listaParadero[i]->getCodigo() == objParadero->getCodigo()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaParadero[i]->setNombre(objParadero->getNombre());
			listaParadero[i]->setX_Paradero(objParadero->getX_Paradero());
			listaParadero[i]->setY_Paradero(objParadero->getY_Paradero());
			listaParadero[i]->setRuta(objParadero->getRuta());
			listaParadero[i]->setHorario(objParadero->getHorario());
			listaParadero[i]->setPublicidad(objParadero->getPublicidad());
			listaParadero[i]->setReferencia(objParadero->getReferencia());
			listaParadero[i]->setSeguridad(objParadero->getSeguridad());
			break;
		}
	}
	escribirArchivo(listaParadero);
}