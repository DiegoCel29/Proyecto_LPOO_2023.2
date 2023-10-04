#include <iostream>
#include "PasajeroController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


PasajeroController::PasajeroController() {

}

List<Pasajero^>^ PasajeroController::BuscarPasajeros(String^ pasajeros) {

	List<Pasajero^>^ listaPasajerosEncontrados = gcnew List<Pasajero^>();
	array<String^>^ lineas = File::ReadAllLines("ListaPasajeros.txt");

	String^ separadores = ";";

	for each (String ^ lineaPasajeros in lineas) {

		array<String^>^ Datos = lineaPasajeros->Split(separadores->ToCharArray());

		String^ DNI = Datos[0];
		String^ Nombre = Datos[1];
		String^ ApellidoPat = Datos[2];
		String^ ApellidoMat = Datos[3];
		int Edad = Convert::ToInt32(Datos[4]);
		String^ Genero = Datos[5];
		String^ Telefono = Datos[6];
		String^ Contrasena = Datos[7];
		String^ FechaNacimiento = Datos[8];

		if (Nombre->Contains(pasajeros)) {

			Pasajero^ objPasajero = gcnew Pasajero(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, FechaNacimiento);
			listaPasajerosEncontrados->Add(objPasajero);
		}
	}
	return listaPasajerosEncontrados;
}

List<Pasajero^>^ PasajeroController::BuscarAllPasajeros() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Pasajero^>^ listaPasajerosEncontrados = gcnew List<Pasajero^>();
	array<String^>^ lineas = File::ReadAllLines("ListaPasajeros.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaPasajeros in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ Datos = lineaPasajeros->Split(separadores->ToCharArray());

		String^ DNI = Datos[0];
		String^ Nombre = Datos[1];
		String^ ApellidoPat = Datos[2];
		String^ ApellidoMat = Datos[3];
		int Edad = Convert::ToInt32(Datos[4]);
		String^ Genero = Datos[5];
		String^ Telefono = Datos[6];
		String^ Contrasena = Datos[7];
		String^ FechaNacimiento = Datos[8];
		Pasajero^ objPasajero = gcnew Pasajero(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, FechaNacimiento);
		listaPasajerosEncontrados->Add(objPasajero);
	}
	return listaPasajerosEncontrados;
}

void PasajeroController::EscribirPasajero(List<Pasajero^>^ lista) {
	array<String^>^ lineasPasajero = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		Pasajero^ objeto = lista[i];
		lineasPasajero[i] = objeto->GetDNI_Pasajero() + ";" + objeto->GetNombre_Pasajero() + ";" + objeto->GetApellidoPat_Pasajero() + ";" + objeto->GetApellidoMat_Pasajero() + ";" + objeto->GetEdad_Pasajero() + ";" + objeto->GetGenero_Pasajero() + ";" + objeto->GetTelefono_Pasajero() + ";" + objeto->GetContrasena_Pasajero() + ";" + objeto->GetFechaNacimiento_Pasajero();
	}
	File::WriteAllLines("ListaPasajeros.txt", lineasPasajero);
}

void PasajeroController::EliminarPasajeroFisico(String^ DNI_Eliminar) {
	List<Pasajero^>^ listaPasajeros = BuscarAllPasajeros();
	for (int i = 0; i < listaPasajeros->Count; i++) {
		/*encontr[*/
		if (listaPasajeros[i]->GetDNI_Pasajero() == DNI_Eliminar) {
			listaPasajeros->RemoveAt(i);
		}
	}
	EscribirPasajero(listaPasajeros);
}
void PasajeroController::AgregarPasajero(Pasajero^ objProyecto) {
	List<Pasajero^>^ listaPasajeros = BuscarAllPasajeros();
	listaPasajeros->Add(objProyecto);
	EscribirPasajero(listaPasajeros);
}

Pasajero^ PasajeroController::BuscarPasajeroDNI(String^ DNI) {
	List<Pasajero^>^ listaPasajeros = BuscarAllPasajeros();
	for (int i = 0; i < listaPasajeros->Count; i++) {
		if (listaPasajeros[i]->GetDNI_Pasajero() == DNI) {
			return listaPasajeros[i];
		}
	}
}

void PasajeroController::ActualizarPasajero(Pasajero^ objPasajero) {
	List<Pasajero^>^ listaPasajeros = BuscarAllPasajeros();
	for (int i = 0; i < listaPasajeros->Count; i++) {
		if (listaPasajeros[i]->GetDNI_Pasajero() == objPasajero->GetDNI_Pasajero()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaPasajeros[i]->SetNombre_Pasajero(objPasajero->GetNombre_Pasajero());
			listaPasajeros[i]->SetApellidoPat_Pasajero(objPasajero->GetApellidoPat_Pasajero());
			listaPasajeros[i]->SetApellidoMat_Pasajero(objPasajero->GetApellidoMat_Pasajero());
			listaPasajeros[i]->SetEdad_Pasajero(objPasajero->GetEdad_Pasajero());
			listaPasajeros[i]->SetGenero_Pasajero(objPasajero->GetGenero_Pasajero());
			listaPasajeros[i]->SetTelefono_Pasajero(objPasajero->GetTelefono_Pasajero());
			listaPasajeros[i]->SetFechaNacimiento_Pasajero(objPasajero->GetFechaNacimiento_Pasajero());
			break;
		}
	}
	EscribirPasajero(listaPasajeros);
}