#pragma once
#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class EmpleadoController {
	public:
		EmpleadoController();
		List<Empleado^>^ BuscarEmpleados(String^ NombreEmpleado);
		List<Empleado^>^ BuscarEmpleadosAll( );
		void EscribirEmpleado(List<Empleado^>^ ListaEmpleados);
		void EliminarEmpleado(String^ DNI);
		void AgregarEmpleado(Empleado^ ObjEmpleado);
		Empleado^ BuscarEmpleadoDNI(String^ DNI);
		void ActualizarEmpleado(Empleado^ ObjEmpleado);
	};
}