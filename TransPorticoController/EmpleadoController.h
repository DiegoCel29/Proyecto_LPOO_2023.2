#pragma once
#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class EmpleadoController {
	public:
		EmpleadoController();
		List<Empleado^>^ BuscarEmpleados(String^ Empleados);
		List<Empleado^>^ BuscarEmpleadosAll( );
		void EscribirEmpleado(List<Empleado^>^ listaEmpleados);
		void EliminarEmpleado(String^ DNI_Eliminar_Empleado);
		void AgregarEmpleado(Empleado^ objEmpleado);
		Empleado^ BuscarEmpleadoDNI(String^ DNI);
		void ActualizarEmpleado(Empleado^ objEmpleado);
	};
}