#pragma once
#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class SituacionRecorridoController {
	public:
		SituacionRecorridoController();
		List<SituacionRecorrido^>^ buscarSituacionesRecorridos(String^ situacionesrecorridos);
	};
}