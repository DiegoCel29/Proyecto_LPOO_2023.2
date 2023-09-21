#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class EmpleadoController {
	public:
		EmpleadoController();
		List<Empleado^>^ BuscarEmpleado(String^ BuscarApellidoPat);
	};
};