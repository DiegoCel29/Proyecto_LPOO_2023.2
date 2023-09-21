#include <iostream>
#include "EmergenciaController.h"

using namespace TransPorticoController;
using namespace System::IO;


EmergenciaController::EmergenciaController() {

}
List<Emergencia^>^ EmergenciaController::buscarEmergencia(String^ TipoEmergencia) {
	List<Emergencia^>^ listaEmergenciasEncontradas = gcnew List<Emergencia^>();
	array<String^>^ lineas = File::ReadAllLines("Emergencia.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int Codigo = Convert::ToInt32(datos[0]);
		bool EnEmergencia = Convert::ToBoolean(datos[1]);
		String^ TipoEmergenciaControl = datos[2];
		if (TipoEmergenciaControl->Contains(TipoEmergencia)) {
			Emergencia^ objEmergencia = gcnew Emergencia(Codigo, EnEmergencia, TipoEmergenciaControl);
			listaEmergenciasEncontradas->Add(objEmergencia);
		}
	}
	return listaEmergenciasEncontradas;
}