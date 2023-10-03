#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class PasajeroController {
	public:
		PasajeroController();
		List<Pasajero^>^ buscarPasajeros(String^ pasajeros);
	};
}