#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class CalificacionController {
	public:
		CalificacionController();
		List<Calificacion^>^ buscarCalificacion(String^ Nombre);
	};
};