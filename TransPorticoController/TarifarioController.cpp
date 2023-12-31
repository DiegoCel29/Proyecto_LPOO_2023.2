#pragma once
#include <iostream>
#include "TarifarioController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


TarifarioController::TarifarioController() {

};

List<Tarifario^>^ TarifarioController::BuscarTarifarioAll() {
	List<Tarifario^>^ ListTarifarioGeneral = gcnew List<Tarifario^>();
	array<String^>^ Lineas = File::ReadAllLines("Tarifario.txt");

	String^ Separador = ";";

	for each (String ^ Linea in Lineas) {

		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());

		String^ Identificador = Datos[0];
		String^ RutaAsociada = Datos[1];		
		String^ ParaderoInicial = Datos[2];
		String^ ParaderoFinal = Datos[3];
		double Tarifa = Convert::ToDouble(Datos[4]);

		Tarifario^ ObjTarifario = gcnew Tarifario(Identificador, RutaAsociada, ParaderoInicial, ParaderoFinal, Tarifa);
		ListTarifarioGeneral->Add(ObjTarifario);
	}
	return ListTarifarioGeneral;
};

Tarifario^ TarifarioController::BuscarTarifarioIdentificador(String^ Identificador) {
	List<Tarifario^>^ ListTarifarioGeneral = BuscarTarifarioAll();
	for (int i = 0; i < ListTarifarioGeneral->Count; i++) {
		if (ListTarifarioGeneral[i]->GetIdentificador()->Contains(Identificador)) {
			return ListTarifarioGeneral[i];
		}
	}
};

List<Tarifario^>^ TarifarioController::BuscarTarifariosRuta(List<Tarifario^>^ ListTarifarioGeneral, String^ Ruta) {
	List<Tarifario^>^ ListTarifarioEspecifico = gcnew List<Tarifario^>();
	for (int i = 0; i < ListTarifarioGeneral->Count; i++) {
		if (ListTarifarioGeneral[i]->GetRutaAsociada()->Contains(Ruta)) {
			ListTarifarioEspecifico->Add(ListTarifarioGeneral[i]);
		}
	}
	return ListTarifarioEspecifico;
};

List<Tarifario^>^ TarifarioController::BuscarTarifariosParaderoInicial(List<Tarifario^>^ ListTarifarioGeneral, String^ ParaderoInicial) {
	List<Tarifario^>^ ListTarifarioEspecifico = gcnew List<Tarifario^>();
	for (int i = 0; i < ListTarifarioGeneral->Count; i++) {
		if (ListTarifarioGeneral[i]->GetParaderoInicial()->Contains(ParaderoInicial)) {
			ListTarifarioEspecifico->Add(ListTarifarioGeneral[i]);
		}
	}
	return ListTarifarioEspecifico;
};

List<Tarifario^>^ TarifarioController::BuscarTarifariosParaderoFinal(List<Tarifario^>^ ListTarifarioGeneral, String^ ParaderoFinal) {
	List<Tarifario^>^ ListTarifarioEspecifico = gcnew List<Tarifario^>();
	for (int i = 0; i < ListTarifarioGeneral->Count; i++) {
		if (ListTarifarioGeneral[i]->GetParaderoFinal()->Contains(ParaderoFinal)) {
			ListTarifarioEspecifico->Add(ListTarifarioGeneral[i]);
		}
	}
	return ListTarifarioEspecifico;
};

List<Tarifario^>^ TarifarioController::BuscarTarifariosTarifa(List<Tarifario^>^ ListTarifarioGeneral, String^ Tarifa) {
	List<Tarifario^>^ ListTarifarioEspecifico = gcnew List<Tarifario^>();
	for (int i = 0; i < ListTarifarioGeneral->Count; i++) {
		if (Convert::ToString(ListTarifarioGeneral[i]->GetTarifa())->Contains(Tarifa)){
			ListTarifarioEspecifico->Add(ListTarifarioGeneral[i]);
		}
	}
	return ListTarifarioEspecifico;
};

void TarifarioController::EscribirTarifario(List<Tarifario^>^ ListTarifario) {
	array<String^>^ Lineas = gcnew array<String^>(ListTarifario->Count);

	for (int i = 0; i < ListTarifario->Count; i++) {
		Tarifario^ ObjTarifario = ListTarifario[i];
		Lineas[i] = ObjTarifario->GetIdentificador() + ";" + ObjTarifario->GetRutaAsociada() + ";" + ObjTarifario->GetParaderoInicial() + ";" + ObjTarifario->GetParaderoFinal() + ";" + ObjTarifario->GetTarifa();
	}
	File::WriteAllLines("Tarifario.txt", Lineas);
};

void TarifarioController::EliminarTarifario(String^ Identificador) {
	List<Tarifario^>^ ListTarifario = BuscarTarifarioAll();
	for (int i = 0; i < ListTarifario->Count; i++) {
		if (ListTarifario[i]->GetIdentificador() == Identificador) {
			ListTarifario->RemoveAt(i);
		}
	}
	EscribirTarifario(ListTarifario);
};

void TarifarioController::AgregarTarifario(Tarifario^ ObjTarifario) {
	List<Tarifario^>^ ListTarifario = BuscarTarifarioAll();
	ListTarifario->Add(ObjTarifario);
	EscribirTarifario(ListTarifario);
};

void TarifarioController::ActualizarTarifario(Tarifario^ ObjTarifario) {
	List<Tarifario^>^ ListTarifario = BuscarTarifarioAll();
	for (int i = 0; i < ListTarifario->Count; i++) {
		if (ListTarifario[i]->GetIdentificador() == ObjTarifario->GetIdentificador()) {
			ListTarifario[i]->SetTarifa(ObjTarifario->GetTarifa());
			break;
		}
	}
	EscribirTarifario(ListTarifario);
}

