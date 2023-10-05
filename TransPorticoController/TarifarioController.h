#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class TarifarioController {
	public:
		TarifarioController();
		List<Tarifario^>^ BuscarTarifarioAll();
		Tarifario^ BuscarTarifarioIdentificador(String^ Identificador);
		List<Tarifario^>^ BuscarTarifariosRuta(List<Tarifario^>^ ListTarifarioGeneral, String^ Ruta);
		List<Tarifario^>^ BuscarTarifariosParaderoInicial(List<Tarifario^>^ ListTarifarioGeneral, String^ ParaderoInicial);
		List<Tarifario^>^ BuscarTarifariosParaderoFinal(List<Tarifario^>^ ListTarifarioGeneral, String^ ParaderoFinal);
		List<Tarifario^>^ BuscarTarifariosTarifa(List<Tarifario^>^ ListTarifarioGeneral, String^ Tarifa);
		void EscribirTarifario(List<Tarifario^>^);
		void EliminarTarifario(String^ Identificador);
		void AgregarTarifario(Tarifario^ ObjTarifario);
		void ActualizarTarifario(Tarifario^ ObjTarifario);
	};
}