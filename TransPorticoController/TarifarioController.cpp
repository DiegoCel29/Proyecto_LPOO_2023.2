#include <iostream>
#include "TarifarioController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


TarifarioController::TarifarioController() {

};

List<Tarifario^>^ TarifarioController::BuscarTarifarioAll() {
	List<Tarifario^>^ listaTarifarioEncontrados = gcnew List<Tarifario^>();
	array<String^>^ lineas = File::ReadAllLines("Tarifario.txt");

	String^ Separador = ";";

	for each (String ^ Lineas in lineas) {

		array<String^>^ Datos = Lineas->Split(Separador->ToCharArray());

		int Codigo = Convert::ToInt16(Datos[0]);
		String^ RutaAsociada = Datos[1];
		String^ Identificador = Datos[2];
		String^ ParaderoInicial = Datos[3];
		String^ ParaderoFinal = Datos[4];
		double Tarifa = Convert::ToDouble(Datos[5]);

		Tarifario^ objParaderoRecorrido = gcnew Tarifario(Codigo, RutaAsociada, Identificador, ParaderoInicial, ParaderoFinal, Tarifa);
		listaTarifarioEncontrados->Add(objParaderoRecorrido);
	}
	return listaTarifarioEncontrados;
};

void TarifarioController::EscribirTarifario(List<Tarifario^>^ ListTarifario) {
	array<String^>^ Lineas = gcnew array<String^>(ListTarifario->Count);

	for (int i = 0; i < ListTarifario->Count; i++) {
		Tarifario^ ObjTarifario = ListTarifario[i];
		Lineas[i] = ObjTarifario->GetCodigo() + ";" + ObjTarifario->GetRutaAsociada() + ":" + ObjTarifario->GetIdentificador() + ";" + ObjTarifario->GetParaderoInicial() + ";" + ObjTarifario->GetParaderoFinal() + ";" + ObjTarifario->GetTarifa();
	}
	File::WriteAllLines("Tarifario.txt", Lineas);
};

void TarifarioController::EliminarTarifario(int Codigo) {
	List<Tarifario^>^ ListTarifario = BuscarTarifarioAll();
	for (int i = 0; i < ListTarifario->Count; i++) {
		if (ListTarifario[i]->GetCodigo() == Codigo) {
			ListTarifario->RemoveAt(i);
		}
	}
};

void TarifarioController::AgregarTarifario(Tarifario^ ObjTarifario) {
	List<Tarifario^>^ ListTarifario = BuscarTarifarioAll();
	ListTarifario->Add(ObjTarifario);
	EscribirTarifario(ListTarifario);
};

