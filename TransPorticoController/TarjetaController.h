#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class TarjetaController {
	public:
		TarjetaController();
		List<Tarjeta^>^ BuscarTarjeta(String^ Titular);
	};
};