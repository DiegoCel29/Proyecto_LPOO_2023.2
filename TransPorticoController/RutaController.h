#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class RutaController {
	public:
		RutaController();
		List<Ruta^>^ buscarRutas(String^ Linea);
	};
};