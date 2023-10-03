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
		String^ DNI = Datos[0];
		String^ Nombre = Datos[1];
		String^ ApellidoPat = Datos[2];
		String^ ApellidoMat = Datos[3];
		int Edad = Convert::ToInt32(Datos[4]);
		String^ Genero = Datos[5];
		String^ Telefono = Datos[6];
		String^ Contrasena = Datos[7];
		int Sueldo = Convert::ToInt32(Datos[8]);
		String^ EstadoContrato = Datos[9];

		if (Nombre->Contains(Conductores)) {
			Empleado^ objConductor = gcnew Empleado(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena,Sueldo, EstadoContrato);
			listaConductoresEncontrados->Add(objConductor);
		}
	}
	return listaConductoresEncontrados;
}
List<Empleado^>^ ConductorController::buscarConductoresAll( ) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Empleado^>^ listaConductoresEncontrados = gcnew List<Empleado^>();
	array<String^>^ lineas = File::ReadAllLines("Empleados.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaConductores in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ Datos = lineaConductores->Split(separadores->ToCharArray());
		String^ DNI = Datos[0];
		String^ Nombre = Datos[1];
		String^ ApellidoPat = Datos[2];
		String^ ApellidoMat = Datos[3];
		int Edad = Convert::ToInt32(Datos[4]);
		String^ Genero = Datos[5];
		String^ Telefono = Datos[6];
		String^ Contrasena = Datos[7];
		int Sueldo = Convert::ToInt32(Datos[8]);
		String^ EstadoContrato = Datos[9];

		Empleado^ objConductor = gcnew Empleado(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, Sueldo, EstadoContrato);
		listaConductoresEncontrados->Add(objConductor);
	}
	return listaConductoresEncontrados;
}