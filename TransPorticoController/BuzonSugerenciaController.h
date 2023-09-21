#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class BuzonSugerenciaController {
	public:
		BuzonSugerenciaController();
		List<BuzonSugerencia^>^ BuscarBuzonSugerencia(String^ BuscarTipo);
	};
};
