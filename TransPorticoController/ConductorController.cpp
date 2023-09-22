#include <iostream>
#include "ConductorController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


ConductorController::ConductorController() {

}

List<Empleado^>^ ConductorController::buscarConductores(String^ conductores) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Empleado^>^ listaConductoresEncontrados = gcnew List<Empleado^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_conductores.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaConductores in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaConductores->Split(separadores->ToCharArray());
		String^ DNI = datos[0];
		String^ Nombre = datos[1];
		String^ ApellidoPat = datos[2];
		String^ ApellidoMat = datos[3];
		int Edad = Convert::ToInt32(datos[4]);
		String^ Genero = datos[5];
		String^ Telefono = datos[6];
		String^ Contrasena = datos[7];
		int Sueldo = Convert::ToInt32(datos[8]);
		String^ EstadoContrato = datos[9];
		if (Nombre->Contains(conductores)) {
			Empleado^ objConductor = gcnew Empleado(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, Sueldo, EstadoContrato);
			listaConductoresEncontrados->Add(objConductor);
		}
	}
	return listaConductoresEncontrados;
}
