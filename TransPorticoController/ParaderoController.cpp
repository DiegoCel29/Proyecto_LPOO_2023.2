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
		int FrecuenciaParadero = Convert::ToInt32(datos[4]);
		double DistanciaParadero = Convert::ToDouble(datos[5]);
		if (NombreParadero->Contains(Nombre)) {
			Paradero^ objParadero = gcnew Paradero(CodigoParadero, NombreParadero, X_Paradero, Y_Paradero, FrecuenciaParadero, DistanciaParadero);
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
		int FrecuenciaParadero = Convert::ToInt32(datos[4]);
		double DistanciaParadero = Convert::ToDouble(datos[5]);
		Paradero^ objParadero = gcnew Paradero(CodigoParadero, NombreParadero, X_Paradero, Y_Paradero, FrecuenciaParadero, DistanciaParadero);
		listaParaderosEncontradas->Add(objParadero);
	}
	return listaParaderosEncontradas;
}
void ParaderoController::escribirArchivo(List<Paradero^>^ listaParaderos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaParaderos->Count);
	for (int i = 0; i < listaParaderos->Count; i++) {
		Paradero^ objeto = listaParaderos[i];
		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getNombre() + ";" + objeto->getX_Paradero() + ";" + objeto->getY_Paradero() + ";" + objeto->getFrecuencia() + ";" + objeto->getDistancia();
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
			listaParadero[i]->setFrecuencia(objParadero->getFrecuencia());
			listaParadero[i]->setDistancia(objParadero->getDistancia());
			break;
		}
	}
	escribirArchivo(listaParadero);
}