#include <iostream>
#include "CalificacionController.h"

using namespace TransPorticoController;
using namespace System::IO;


CalificacionController::CalificacionController() {

}
List<Calificacion^>^ CalificacionController::buscarCalificacion(String^ Nombre){
	List<Calificacion^>^ listaCalificacionEncontradas = gcnew List<Calificacion^>();
	array<String^>^ lineas = File::ReadAllLines("Calificacion.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int CodigoCalificacion = Convert::ToInt32(datos[0]);
		String^ NombreCalificacion = datos[1];
		int PuntajeCalificacion = Convert::ToInt32(datos[2]);
		if (NombreCalificacion->Contains(Nombre)) {
			Calificacion^ objCalificacion = gcnew Calificacion(CodigoCalificacion, NombreCalificacion, PuntajeCalificacion);
			listaCalificacionEncontradas->Add(objCalificacion);
		}
	}
	return listaCalificacionEncontradas;
}