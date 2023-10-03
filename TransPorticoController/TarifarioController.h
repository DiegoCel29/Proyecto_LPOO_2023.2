#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class TarifarioController {
	public:
		TarifarioController();
		List<Tarifario^>^ BuscarTarifarioAll();
		void EscribirTarifario(List<Tarifario^>^);
		void EliminarTarifario(int Codigo);
		void AgregarTarifario(Tarifario^ ObjTarifario);
	};
}