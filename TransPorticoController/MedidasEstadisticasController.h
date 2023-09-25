#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class MedidasEstadisticasController {
	public:
		MedidasEstadisticasController();
		List<MedidasEstadisticas^>^ buscarMedidasEstadisticas(String^ Fecha);
	};
}