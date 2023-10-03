#include <iostream>
#include "PasajeroController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


PasajeroController::PasajeroController() {

}

List<Pasajero^>^ PasajeroController::buscarPasajeros(String^ pasajeros) {

	List<Pasajero^>^ listaPasajerosEncontrados = gcnew List<Pasajero^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_pasajeros.txt");

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

List<Pasajero^>^ PasajeroController::buscarAllPasajeros() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Pasajero^>^ listaPasajerosEncontrados = gcnew List<Pasajero^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_pasajeros.txt");

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

void PasajeroController::escribirPasajero(List<Pasajero^>^ lista) {
	array<String^>^ lineasPasajero = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		Pasajero^ objeto = lista[i];
		lineasPasajero[i] = objeto->get_DNI() + ";" + objeto->get_Nombre() + ";" + objeto->get_ApellidoPat() + ";" + objeto->get_ApellidoMat() + ";" + objeto->get_Edad() + ";" + objeto->get_Genero() + ";" + objeto->get_Telefono() + ";" + objeto->get_Contrasena() + ";" + objeto->get_FechaNacimiento();
	}
	File::WriteAllLines("Lista_pasajeros.txt", lineasPasajero);
}

void PasajeroController::eliminarPasajeroFisico(String^ DNI_Eliminar) {
	List<Pasajero^>^ listaPasajeros = buscarAllPasajeros();
	for (int i = 0; i < listaPasajeros->Count; i++) {
		/*encontr[*/
		if (listaPasajeros[i]->get_DNI() == DNI_Eliminar) {
			listaPasajeros->RemoveAt(i);
		}
	}
	escribirPasajero(listaPasajeros);
}
void PasajeroController::agregarPasajero(Pasajero^ objProyecto) {
	List<Pasajero^>^ listaPasajeros = buscarAllPasajeros();
	listaPasajeros->Add(objProyecto);
	escribirPasajero(listaPasajeros);
}

Pasajero^ PasajeroController::buscarPasajeroxDNI(String^ DNI) {
	List<Pasajero^>^ listaPasajeros = buscarAllPasajeros();
	for (int i = 0; i < listaPasajeros->Count; i++) {
		if (listaPasajeros[i]->get_DNI() == DNI) {
			return listaPasajeros[i];
		}
	}
}

void PasajeroController::actualizarPasajero(Pasajero^ objPasajero) {
	List<Pasajero^>^ listaPasajeros = buscarAllPasajeros();
	for (int i = 0; i < listaPasajeros->Count; i++) {
		if (listaPasajeros[i]->get_DNI() == objPasajero->get_DNI()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaPasajeros[i]->set_Nombre(objPasajero->get_Nombre());
			listaPasajeros[i]->set_ApellidoPat(objPasajero->get_ApellidoPat());
			listaPasajeros[i]->set_ApellidoMat(objPasajero->get_ApellidoMat());
			listaPasajeros[i]->set_Edad(objPasajero->get_Edad());
			listaPasajeros[i]->set_Genero(objPasajero->get_Genero());
			listaPasajeros[i]->set_Telefono(objPasajero->get_Telefono());
			listaPasajeros[i]->set_FechaNacimiento(objPasajero->get_FechaNacimiento());
			break;
		}
	}
	escribirPasajero(listaPasajeros);
}