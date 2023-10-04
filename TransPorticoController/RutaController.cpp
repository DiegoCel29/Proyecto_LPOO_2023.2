#include <iostream>
#include "RutaController.h"

using namespace TransPorticoController;
using namespace System::IO;


RutaController::RutaController() {

}
List<Ruta^>^ RutaController::buscarRutas(String^ Linea) {
	List<Ruta^>^ listaRutasEncontradas = gcnew List<Ruta^>();
	array<String^>^ lineas = File::ReadAllLines("Ruta.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int CodigoRuta = Convert::ToInt32(datos[0]);
		String^ LineaRuta = datos[1];
		int CantParaderosRuta = Convert::ToInt32(datos[2]);
		String^ HoraInicioRuta = datos[3];
		String^ HoraCierreRuta = datos[4];
		String^ ZonaRuta = datos[5];
		if (LineaRuta->Contains(Linea)) {
			Ruta^ objRuta = gcnew Ruta(CodigoRuta, LineaRuta, CantParaderosRuta, HoraInicioRuta, HoraCierreRuta, ZonaRuta);
			listaRutasEncontradas->Add(objRuta);
		}
	}
	return listaRutasEncontradas;
}
List<Ruta^>^ RutaController::buscarAll() {
	List<Ruta^>^ listaRutasEncontradas = gcnew List<Ruta^>();
	array<String^>^ lineas = File::ReadAllLines("Ruta.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int CodigoRuta = Convert::ToInt32(datos[0]);
		String^ LineaRuta = datos[1];
		int CantParaderosRuta = Convert::ToInt32(datos[2]);
		String^ HoraInicioRuta = datos[3];
		String^ HoraCierreRuta = datos[4];
		String^ ZonaRuta = datos[5];
		Ruta^ objRuta = gcnew Ruta(CodigoRuta, LineaRuta, CantParaderosRuta, HoraInicioRuta, HoraCierreRuta, ZonaRuta);
		listaRutasEncontradas->Add(objRuta);
	}
	return listaRutasEncontradas;
}
void RutaController::escribirArchivo(List<Ruta^>^ listaRuta) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaRuta->Count);
	for (int i = 0; i < listaRuta->Count; i++) {
		Ruta^ objeto = listaRuta[i];
		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getLinea() + ";" + objeto->getCantParaderos() + ";" + objeto->getHoraInicio() + ";" + objeto->getHoraCierre() + ";" + objeto->getZona();
	}
	File::WriteAllLines("Ruta.txt", lineasArchivo);
}
void RutaController::eliminarRutaFisico(int Codigo) {
	List<Ruta^>^ listaRuta = buscarAll();
	for (int i = 0; i < listaRuta->Count; i++) {
		if (listaRuta[i]->getCodigo() == Codigo) {
			listaRuta->RemoveAt(i);
		}
	}
	escribirArchivo(listaRuta);
}
void RutaController::agregarRuta(Ruta^ objRuta) {
	List<Ruta^>^ listaRuta = buscarAll();
	listaRuta->Add(objRuta);
	escribirArchivo(listaRuta);
}
Ruta^ RutaController::buscarRutaxCodigo(int Codigo) {
	List<Ruta^>^ listaRuta = buscarAll();
	for (int i = 0; i < listaRuta->Count; i++) {
		if (listaRuta[i]->getCodigo() == Codigo) {
			return listaRuta[i];
		}
	}
}
void RutaController::actualizarRuta(Ruta^ objRuta) {
	List<Ruta^>^ listaRuta = buscarAll();
	for (int i = 0; i < listaRuta->Count; i++) {
		if (listaRuta[i]->getCodigo() == objRuta->getCodigo()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaRuta[i]->setLinea(objRuta->getLinea());
			listaRuta[i]->setCantParaderos(objRuta->getCantParaderos());
			listaRuta[i]->setHoraInicio(objRuta->getHoraInicio());
			listaRuta[i]->setHoraCierre(objRuta->getHoraCierre());
			listaRuta[i]->setZona(objRuta->getZona());
			break;
		}
	}
	escribirArchivo(listaRuta);
}
List<String^>^ RutaController::obtenerLinea() {
	List<Ruta^>^ listaRuta = buscarAll();
	List<String^>^ listaLinea = gcnew List<String^>();
	for (int i = 0; i < listaRuta->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de departamentos*/
		String^ Linea = listaRuta[i]->getLinea();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaLinea->Count; j++) {
			if (listaLinea[j]->Contains(Linea)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaLinea->Add(Linea);
		}
	}
	return listaLinea;
}