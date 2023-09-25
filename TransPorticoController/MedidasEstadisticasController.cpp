#include <iostream>
#include "MedidasEstadisticasController.h"

using namespace TransPorticoController;
using namespace System::IO;


MedidasEstadisticasController::MedidasEstadisticasController() {

}
List<MedidasEstadisticas^>^ MedidasEstadisticasController::buscarMedidasEstadisticas(String^ Fecha) {
	List<MedidasEstadisticas^>^ listaMedidasEncontradas = gcnew List<MedidasEstadisticas^>();
	array<String^>^ lineas = File::ReadAllLines("MedidasEstadisticas.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int CodigoMedidas = Convert::ToInt32(datos[0]);
		double MediaMedidas = Convert::ToDouble(datos[1]);
		double ModaMedidas = Convert::ToDouble(datos[2]);
		double MedianaMedidas = Convert::ToDouble(datos[3]);
		double MaximoMedidas = Convert::ToDouble(datos[4]);
		double MinimoMedidas = Convert::ToDouble(datos[5]);
		double DesviacionMedidas = Convert::ToDouble(datos[6]);
		String^ FechaMedidas = datos[7];
		if (FechaMedidas->Contains(Fecha)) {
			MedidasEstadisticas^ objMedidasEstadisticas = gcnew MedidasEstadisticas(CodigoMedidas, MediaMedidas, ModaMedidas, MedianaMedidas, MaximoMedidas, MinimoMedidas, DesviacionMedidas, FechaMedidas);
			listaMedidasEncontradas->Add(objMedidasEstadisticas);
		}
	}
	return listaMedidasEncontradas;
}