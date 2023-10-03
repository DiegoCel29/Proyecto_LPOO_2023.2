#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class TarifarioController {
	public:
		TarifarioController();
		List<Tarifario^>^ BuscarTarifarioAll();
		List<Tarifario^>^ BuscarTarifarioIdentificador(List<Tarifario^>^ ListTarifarioGeneral, String^ Identificador);
		List<Tarifario^>^ BuscarTarifarioParaderoInicial(List<Tarifario^>^ ListTarifarioGeneral, String^ ParaderoInicial);
		List<Tarifario^>^ BuscarTarifarioTarifa(List<Tarifario^>^ ListTarifarioGeneral, String^ Tarifa);
		void EscribirTarifario(List<Tarifario^>^);
		void EliminarTarifario(String^ Identificador);
		void AgregarTarifario(Tarifario^ ObjTarifario);
	};
}