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

List<Autobus^>^ AutobusController::buscarAutobusall() {

	List<Autobus^>^ listaAutoBusesEncontrados = gcnew List<Autobus^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_Autobuses.txt");

	String^ separadores = ";";
	for each (String ^ lineaAutobuses in lineas) {
		array<String^>^ datos = lineaAutobuses->Split(separadores->ToCharArray());
		int Codigo = Convert::ToInt32(datos[0]);
		String^ Placa = datos[1];
		int CantAsientos = Convert::ToInt32(datos[2]);
		int CantPasajeros = Convert::ToInt32(datos[3]);
		int Capacidad = Convert::ToInt32(datos[4]);
		int  X_Autobus = Convert::ToInt32(datos[5]);
		int  Y_Autobus = Convert::ToInt32(datos[6]);
		int Velocidad = Convert::ToInt32(datos[7]);



		
		Autobus^ objBus = gcnew Autobus(Codigo, Placa, CantAsientos, CantPasajeros, Capacidad, X_Autobus, Y_Autobus, Velocidad);
		listaAutoBusesEncontrados->Add(objBus);
		
	}
	return listaAutoBusesEncontrados;
}

int AutobusController::ExisteAutobus(int codigo) {

	int existe = 0;
	
	List<Autobus^>^ listaAutobus = buscarAutobusall();
	
	for (int i = 0;i < listaAutobus->Count;i++) {
		Autobus^ objAutobus = listaAutobus[i];
		if ((codigo)==(objAutobus->GetCodigo())) {
			existe = 1;
			break;
		}
	}


	return existe;
}

//Sobre escribe uns lista sobre el achivo txt
void AutobusController::escribirArchivo(List<Autobus^>^ ListaAutobuses){
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaAutobuses->Count);
	for (int i = 0; i < ListaAutobuses->Count; i++) {
		Autobus^objBus = ListaAutobuses[i];
		lineasArchivo[i] = objBus->GetCodigo() + ";" + objBus->GetPlaca() + ";" + objBus->GetCantAsientos() + ";" + objBus->GetCantPasajeros() + ";" + objBus->GetCapacidad() + ";" + objBus->GetX_Autobus() + ";" + objBus->GetY_Autobus() + ";" + objBus->GetVelocidad();
		
	}
	File::WriteAllLines("Lista_Autobuses.txt", lineasArchivo);
}



void AutobusController::EliminarAutobus(String^ Placa) {
	
	List<Autobus^>^ ListaAutobus = buscarAutobusall();
	for (int i=0; i < ListaAutobus->Count; i++) {
		Autobus^ objAutobus = ListaAutobus[i];
		if ( (objAutobus->GetPlaca())==(Placa)) {
			ListaAutobus->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(ListaAutobus);
}



void AutobusController::agregarAutobus(int codigo, String^ Placa, int capacidad) {
	
	int CantAsientos=0;
	int cantPasajeros=0;
	int X_Autobus=0;
	int Y_Autobus=0;
	int Velocidad=0;
	List<Autobus^>^ listaAutobus = buscarAutobusall();
	Autobus^ objBus = gcnew Autobus(codigo, Placa, CantAsientos, cantPasajeros, capacidad, X_Autobus, Y_Autobus, Velocidad);
	listaAutobus->Add(objBus);
	escribirArchivo(listaAutobus);

}