#include "EmpleadoController.h"

using namespace TransPorticoController;
using namespace System::IO;

EmpleadoController::EmpleadoController() {

};

List<Empleado^>^ EmpleadoController::BuscarEmpleado(String^ BuscarApellidoPat) {

	List<Empleado^>^ ListEmpleadosEncontrados = gcnew List<Empleado^>();

	array<String^>^ Lineas = File::ReadAllLines("Empleados.txt");

	String^ Separador = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ Linea in Lineas) {

		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());

		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Nombre = Datos[1];
		String^ ApellidoPat = Datos[2];
		String^ ApellidoMat = Datos[3];
		String^ DNI = Datos[4];
		int Edad = Convert::ToInt32(Datos[5]);
		String^ Genero = Datos[6];
		String^ Telefono = Datos[7];
		String^ Contrasena = Datos[8];
		double Sueldo = Convert::ToDouble(Datos[9]);
		String^ IdPersonal = Datos[10];
		String^ EstadoContrato = Datos[11];

		if (ApellidoPat->Contains(BuscarApellidoPat)) {
			Empleado^ ObjEmpleado = gcnew Empleado(Codigo, Nombre, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono, Contrasena, Sueldo, IdPersonal, EstadoContrato);
			ListEmpleadosEncontrados->Add(ObjEmpleado);
		}
	}
	return ListEmpleadosEncontrados;

};