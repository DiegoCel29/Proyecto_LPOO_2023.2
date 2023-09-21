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