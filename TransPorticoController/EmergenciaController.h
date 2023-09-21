#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class EmergenciaController {
	public:
		EmergenciaController();
		List<Emergencia^>^ buscarEmergencia(String^ TipoEmergencia);
	};
};