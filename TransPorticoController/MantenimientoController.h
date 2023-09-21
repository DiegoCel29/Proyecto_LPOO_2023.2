#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class MantenimientoController {
	public:
		MantenimientoController();
		List<Mantenimiento^>^ BuscarMantenimiento(String^ BuscarIrMantenimiento);
	};
};