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

void ConductorController::escribirConductor(List<Empleado^>^ listaConductores) {
	array<String^>^ lineasConductor = gcnew array<String^>(listaConductores->Count);
	for (int i = 0; i < listaConductores->Count; i++) {
		Empleado^ objeto = listaConductores[i];
		lineasConductor[i] = objeto->get_DNI_() + ";" + objeto->get_Nombre_() + ";" + objeto->get_ApellidoPat_() + ";" + objeto->get_ApellidoMat_() + ";" + objeto->get_Edad_() + ";" + objeto->get_Genero_() + ";" + objeto->get_Telefono_() + ";" + objeto->get_Contrasena_() + ";" + objeto->get_Sueldo_()+objeto->get_EstadoContrato_();
	}
	File::WriteAllLines("Empleados.txt", lineasConductor);
}

void ConductorController::eliminarConductorFisico(String^ DNI_Eliminar_Conductor) {
	List<Empleado^>^ listaConductores = buscarConductoresAll();
	for (int i = 0; i < listaConductores->Count; i++) {
		/*encontr[*/
		if (listaConductores[i]->get_DNI_() == DNI_Eliminar_Conductor) {
			listaConductores->RemoveAt(i);
		}
	}
	escribirConductor(listaConductores);
}
void ConductorController::agregarConductor(Empleado^ objConductor) {
	List<Empleado^>^ listaConductores = buscarConductoresAll();
	listaConductores->Add(objConductor);
	escribirConductor(listaConductores);
}

Empleado^ ConductorController::buscarConductorxDNI(String^ DNI_) {
	List<Empleado^>^ listaConductores = buscarConductoresAll();
	for (int i = 0; i < listaConductores->Count; i++) {
		if (listaConductores[i]->get_DNI_() == DNI_) {
			return listaConductores[i];
		}
	}
}

void ConductorController::actualizarConductor(Empleado^ objConductor) {
	List<Empleado^>^ listaConductores = buscarConductoresAll();
	for (int i = 0; i < listaConductores->Count; i++) {
		if (listaConductores[i]->get_DNI_() == objConductor->get_DNI_()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaConductores[i]->set_Nombre_(objConductor->get_Nombre_());
			listaConductores[i]->set_ApellidoPat_(objConductor->get_ApellidoPat_());
			listaConductores[i]->set_ApellidoMat_(objConductor->get_ApellidoMat_());
			listaConductores[i]->set_Edad_(objConductor->get_Edad_());
			listaConductores[i]->set_Genero_(objConductor->get_Genero_());
			listaConductores[i]->set_Telefono_(objConductor->get_Telefono_());
			listaConductores[i]->set_Contrasena_(objConductor->get_Contrasena_());
			listaConductores[i]->set_Sueldo_(objConductor->get_Sueldo_());
			listaConductores[i]->set_EstadoContrato_(objConductor->get_EstadoContrato_());
			break;
		}
	}
	escribirConductor(listaConductores);
}