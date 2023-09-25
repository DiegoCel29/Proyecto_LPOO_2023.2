#include <iostream>
#include "PasajeroController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


PasajeroController::PasajeroController() {

}

List<Pasajero^>^ PasajeroController::buscarPasajeros(String^ pasajeros) {
	/*En esta lista vamos a colocar la informaci�n de los proyectos que encontremos en el archivo de texto*/
	List<Pasajero^>^ listaPasajerosEncontrados = gcnew List<Pasajero^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_pasajeros.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaPasajeros in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaPasajeros->Split(separadores->ToCharArray());
		String^ DNI = datos[0];
		String^ Nombre = datos[1];
		String^ ApellidoPat = datos[2];
		String^ ApellidoMat = datos[3];
		int Edad = Convert::ToInt32(datos[4]);
		String^ Genero = datos[5];
		String^ Telefono = datos[6];
		String^ Contrasena = datos[7];
		String^ FechaNacimiento = datos[8];
		if (Nombre->Contains(pasajeros)) {
			Pasajero^ objPasajero = gcnew Pasajero(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, FechaNacimiento);
			listaPasajerosEncontrados->Add(objPasajero);
		}
	}
	return listaPasajerosEncontrados;
}