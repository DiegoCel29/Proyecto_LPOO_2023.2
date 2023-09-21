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