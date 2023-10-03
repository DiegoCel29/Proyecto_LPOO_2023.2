#pragma once
#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class ConductorController {
	public:
		ConductorController();
		List<Empleado^>^ buscarConductores(String^ conductores);
		List<Empleado^>^ buscarConductoresAll( );
	};
}