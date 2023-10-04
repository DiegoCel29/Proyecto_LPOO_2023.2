#include <iostream>
#include "EmpleadoController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


EmpleadoController::EmpleadoController() {

}

List<Empleado^>^ EmpleadoController::BuscarEmpleados(String^ Empleados) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Empleado^>^ listaEmpleadoesEncontrados = gcnew List<Empleado^>();
	array<String^>^ lineas = File::ReadAllLines("Empleados.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaEmpleadoes in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ Datos = lineaEmpleadoes->Split(separadores->ToCharArray());
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

		if (Nombre->Contains(Empleados)) {
			Empleado^ objEmpleado = gcnew Empleado(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena,Sueldo, EstadoContrato);
			listaEmpleadoesEncontrados->Add(objEmpleado);
		}
	}
	return listaEmpleadoesEncontrados;
}
List<Empleado^>^ EmpleadoController::BuscarEmpleadosAll( ) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Empleado^>^ listaEmpleadoesEncontrados = gcnew List<Empleado^>();
	array<String^>^ lineas = File::ReadAllLines("Empleados.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaEmpleadoes in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ Datos = lineaEmpleadoes->Split(separadores->ToCharArray());
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

		Empleado^ objEmpleado = gcnew Empleado(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, Sueldo, EstadoContrato);
		listaEmpleadoesEncontrados->Add(objEmpleado);
	}
	return listaEmpleadoesEncontrados;
}

void EmpleadoController::EscribirEmpleado(List<Empleado^>^ listaEmpleados) {
	array<String^>^ lineasEmpleado = gcnew array<String^>(listaEmpleados->Count);
	for (int i = 0; i < listaEmpleados->Count; i++) {
		Empleado^ objeto = listaEmpleados[i];
		lineasEmpleado[i] = objeto->GetDNI_Empleado() + ";" + objeto->GetNombre_Empleado() + ";" + objeto->GetApellidoPat_Empleado() + ";" + objeto->GetApellidoMat_Empleado() + ";" + objeto->GetEdad_Empleado() + ";" + objeto->GetGenero_Empleado() + ";" + objeto->GetTelefono_Empleado() + ";" + objeto->GetContrasena_Empleado() + ";" + objeto->GetSueldo_Empleado()+ ";" + objeto->GetEstadoContrato_Empleado();
	}
	File::WriteAllLines("Empleados.txt", lineasEmpleado);
}

void EmpleadoController::EliminarEmpleado(String^ DNI_Eliminar_Empleado) {
	List<Empleado^>^ listaEmpleadoes = BuscarEmpleadosAll();
	for (int i = 0; i < listaEmpleadoes->Count; i++) {
		/*encontr[*/
		if (listaEmpleadoes[i]->GetDNI_Empleado() == DNI_Eliminar_Empleado) {
			listaEmpleadoes->RemoveAt(i);
		}
	}
	EscribirEmpleado(listaEmpleadoes);
}
void EmpleadoController::AgregarEmpleado(Empleado^ objEmpleado) {
	List<Empleado^>^ listaEmpleadoes = BuscarEmpleadosAll();
	listaEmpleadoes->Add(objEmpleado);
	EscribirEmpleado(listaEmpleadoes);
}

Empleado^ EmpleadoController::BuscarEmpleadoDNI(String^ DNI) {
	List<Empleado^>^ listaEmpleadoes = BuscarEmpleadosAll();
	for (int i = 0; i < listaEmpleadoes->Count; i++) {
		if (listaEmpleadoes[i]->GetDNI_Empleado() == DNI) {
			return listaEmpleadoes[i];
		}
	}
}

void EmpleadoController::ActualizarEmpleado(Empleado^ objEmpleado) {
	List<Empleado^>^ listaEmpleadoes = BuscarEmpleadosAll();
	for (int i = 0; i < listaEmpleadoes->Count; i++) {
		if (listaEmpleadoes[i]->GetDNI_Empleado() == objEmpleado->GetDNI_Empleado()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaEmpleadoes[i]->SetNombre_Empleado(objEmpleado->GetNombre_Empleado());
			listaEmpleadoes[i]->SetApellidoPat_Empleado(objEmpleado->GetApellidoPat_Empleado());
			listaEmpleadoes[i]->SetApellidoMat_Empleado(objEmpleado->GetApellidoMat_Empleado());
			listaEmpleadoes[i]->SetEdad_Empleado(objEmpleado->GetEdad_Empleado());
			listaEmpleadoes[i]->SetGenero_Empleado(objEmpleado->GetGenero_Empleado());
			listaEmpleadoes[i]->SetTelefono_Empleado(objEmpleado->GetTelefono_Empleado());
			listaEmpleadoes[i]->SetContrasena_Empleado(objEmpleado->GetContrasena_Empleado());
			listaEmpleadoes[i]->SetSueldo_Empleado(objEmpleado->GetSueldo_Empleado());
			listaEmpleadoes[i]->SetEstadoContrato_Empleado(objEmpleado->GetEstadoContrato_Empleado());
			break;
		}
	}
	EscribirEmpleado(listaEmpleadoes);
}