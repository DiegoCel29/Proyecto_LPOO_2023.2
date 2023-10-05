#include <iostream>
#include "EmpleadoController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


EmpleadoController::EmpleadoController() {

}

List<Empleado^>^ EmpleadoController::BuscarEmpleados(String^ NombreEmpleado) {

	List<Empleado^>^ listaEmpleadoesEncontrados = gcnew List<Empleado^>();
	array<String^>^ lineas = File::ReadAllLines("ListaEmpleados.txt");

	String^ separadores = ";";

	for each (String ^ lineaEmpleadoes in lineas) {

		array<String^>^ Datos = lineaEmpleadoes->Split(separadores->ToCharArray());

		String^ DNI = Datos[0];
		String^ Nombre = Datos[1];
		String^ ApellidoPat = Datos[2];
		String^ ApellidoMat = Datos[3];
		int Edad = Convert::ToInt32(Datos[4]);
		String^ Genero = Datos[5];
		String^ Telefono = Datos[6];
		String^ Contrasena = Datos[7];
		String^ Tipo = Datos[8];
		int Sueldo = Convert::ToInt32(Datos[9]);
		String^ EstadoContrato = Datos[10];

		if (Nombre->Contains(NombreEmpleado)) {
			Empleado^ objEmpleado = gcnew Empleado(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, Tipo, Sueldo, EstadoContrato);
			listaEmpleadoesEncontrados->Add(objEmpleado);
		}
	}
	return listaEmpleadoesEncontrados;
}
List<Empleado^>^ EmpleadoController::BuscarEmpleadosAll( ) {

	List<Empleado^>^ listaEmpleadoesEncontrados = gcnew List<Empleado^>();
	array<String^>^ lineas = File::ReadAllLines("ListaEmpleados.txt");

	String^ separadores = ";";
	for each (String ^ lineaEmpleadoes in lineas) {

		array<String^>^ Datos = lineaEmpleadoes->Split(separadores->ToCharArray());

		String^ DNI = Datos[0];
		String^ Nombre = Datos[1];
		String^ ApellidoPat = Datos[2];
		String^ ApellidoMat = Datos[3];
		int Edad = Convert::ToInt32(Datos[4]);
		String^ Genero = Datos[5];
		String^ Telefono = Datos[6];
		String^ Contrasena = Datos[7];
		String^ Tipo = Datos[8];
		int Sueldo = Convert::ToInt32(Datos[9]);
		String^ EstadoContrato = Datos[10];

		Empleado^ objEmpleado = gcnew Empleado(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, Tipo, Sueldo, EstadoContrato);
		listaEmpleadoesEncontrados->Add(objEmpleado);
	}
	return listaEmpleadoesEncontrados;
}

void EmpleadoController::EscribirEmpleado(List<Empleado^>^ ListaEmpleados) {
	array<String^>^ lineasEmpleado = gcnew array<String^>(ListaEmpleados->Count);
	for (int i = 0; i < ListaEmpleados->Count; i++) {
		Empleado^ objeto = ListaEmpleados[i];
		lineasEmpleado[i] = objeto->GetDNI_Empleado() + ";" + objeto->GetNombre_Empleado() + ";" + objeto->GetApellidoPat_Empleado() + ";" + objeto->GetApellidoMat_Empleado() + ";" + objeto->GetEdad_Empleado() + ";" + objeto->GetGenero_Empleado() + ";" + objeto->GetTelefono_Empleado() + ";" + objeto->GetContrasena_Empleado() + ";" + objeto->GetTipo_Empleado() + ";" + objeto->GetSueldo_Empleado() + ";" + objeto->GetEstadoContrato_Empleado();
	}
	File::WriteAllLines("ListaEmpleados.txt", lineasEmpleado);
}

void EmpleadoController::EliminarEmpleado(String^ DNI) {

	List<Empleado^>^ listaEmpleadoes = BuscarEmpleadosAll();
	for (int i = 0; i < listaEmpleadoes->Count; i++) {

		if (listaEmpleadoes[i]->GetDNI_Empleado() == DNI) {
			listaEmpleadoes->RemoveAt(i);
		}
	}
	EscribirEmpleado(listaEmpleadoes);
}
void EmpleadoController::AgregarEmpleado(Empleado^ ObjEmpleado) {
	List<Empleado^>^ listaEmpleadoes = BuscarEmpleadosAll();
	listaEmpleadoes->Add(ObjEmpleado);
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

void EmpleadoController::ActualizarEmpleado(Empleado^ ObjEmpleado) {
	List<Empleado^>^ listaEmpleadoes = BuscarEmpleadosAll();
	for (int i = 0; i < listaEmpleadoes->Count; i++) {
		if (listaEmpleadoes[i]->GetDNI_Empleado() == ObjEmpleado->GetDNI_Empleado()) {

			listaEmpleadoes[i]->SetNombre_Empleado(ObjEmpleado->GetNombre_Empleado());
			listaEmpleadoes[i]->SetApellidoPat_Empleado(ObjEmpleado->GetApellidoPat_Empleado());
			listaEmpleadoes[i]->SetApellidoMat_Empleado(ObjEmpleado->GetApellidoMat_Empleado());
			listaEmpleadoes[i]->SetEdad_Empleado(ObjEmpleado->GetEdad_Empleado());
			listaEmpleadoes[i]->SetGenero_Empleado(ObjEmpleado->GetGenero_Empleado());
			listaEmpleadoes[i]->SetTelefono_Empleado(ObjEmpleado->GetTelefono_Empleado());
			listaEmpleadoes[i]->SetContrasena_Empleado(ObjEmpleado->GetContrasena_Empleado());
			listaEmpleadoes[i]->SetTipo_Empleado(ObjEmpleado->GetTipo_Empleado());
			listaEmpleadoes[i]->SetSueldo_Empleado(ObjEmpleado->GetSueldo_Empleado());
			listaEmpleadoes[i]->SetEstadoContrato_Empleado(ObjEmpleado->GetEstadoContrato_Empleado());
			break;
		}
	}
	EscribirEmpleado(listaEmpleadoes);
}