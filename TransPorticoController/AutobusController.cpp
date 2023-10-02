#include <iostream>
#include "AutobusController.h"

using namespace TransPorticoController;
using namespace System::IO;

AutobusController::AutobusController() {

}

List<Autobus^>^ AutobusController::buscarAutobus(String^ buses) {
		List<Autobus^> ^ listaAutoBusesEncontrados = gcnew List<Autobus^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_Autobuses.txt");

	String^ separadores = ";";
		for each (String ^ lineaAutobuses in lineas) {
				array<String^> ^ datos = lineaAutobuses->Split(separadores->ToCharArray());
			int Codigo = Convert::ToInt32(datos[0]);
			String^ Placa = datos[1];
			int CantAsientos = Convert::ToInt32(datos[2]);
			int CantPasajeros = Convert::ToInt32(datos[3]);
			int Capacidad = Convert::ToInt32(datos[4]);
			int  X_Autobus = Convert::ToInt32(datos[5]);
			int  Y_Autobus = Convert::ToInt32(datos[6]);
			int Velocidad = Convert::ToInt32(datos[7]);



			if (Placa->Contains(buses)) {
				Autobus^ objBus = gcnew Autobus(Codigo, Placa, CantAsientos, CantPasajeros, Capacidad, X_Autobus, Y_Autobus, Velocidad);
				listaAutoBusesEncontrados->Add(objBus);
			}
		}
	return listaAutoBusesEncontrados;
}


int AutobusController::ExisteAutobus(int codigo) {

	int existe = 0;
	String^ buses;
	List<Autobus^>^ listaAutobus = buscarAutobus(buses);
	for (int i = 0;i < listaAutobus->Count;i++) {
		Autobus^ objAutobus = listaAutobus[i];
		if ((codigo)==(objAutobus->GetCodigo())) {
			existe = 1;
			break;
		}
	}


	return existe;
}