#include <iostream>
#include "ConductorController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


ConductorController::ConductorController() {

}

List<Empleado^>^ ConductorController::buscarConductores(String^ Conductores) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Empleado^>^ listaConductoresEncontrados = gcnew List<Empleado^>();
	array<String^>^ lineas = File::ReadAllLines("Empleados.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaConductores in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ Datos = lineaConductores->Split(separadores->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ DNI = Datos[1];
		String^ Nombre = Datos[2];
		String^ ApellidoPat = Datos[3];
		String^ ApellidoMat = Datos[4];
		int Edad = Convert::ToInt32(Datos[5]);
		String^ Genero = Datos[6];
		String^ Telefono = Datos[7];
		String^ Contrasena = Datos[8];
		String^ Tipo = Datos[9];
		int Sueldo = Convert::ToInt32(Datos[10]);
		String^ EstadoContrato = Datos[11];

		if (Nombre->Contains(Conductores)) {
			Empleado^ objConductor = gcnew Empleado(Codigo, DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, Tipo, Sueldo, EstadoContrato);
			listaConductoresEncontrados->Add(objConductor);
		}
	}
	return listaConductoresEncontrados;
}
