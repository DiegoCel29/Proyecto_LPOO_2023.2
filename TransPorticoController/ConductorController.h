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
		void escribirConductor(List<Empleado^>^ listaConductores);
		void eliminarConductorFisico(String^ DNI_Eliminar_Conductor);
		void agregarConductor(Empleado^ objConductor);
		Empleado^ buscarConductorxDNI(String^ DNI_);
		void actualizarConductor(Empleado^ objConductor);
	};
}