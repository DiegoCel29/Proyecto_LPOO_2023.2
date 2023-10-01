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

		int Codigo = Convert::ToInt32(Datos[0]);
		String^ DNI = Datos[1];
		String^ Nombre = Datos[2];
		String^ ApellidoPat = Datos[3];
		String^ ApellidoMat = Datos[4];
		int Edad = Convert::ToInt32(Datos[5]);
		String^ Genero = Datos[6];
		String^ Telefono = Datos[7];
		String^ Contrasena = Datos[8];
		String^ FechaNacimiento = Datos[9];

		if (Nombre->Contains(pasajeros)) {
			Pasajero^ objPasajero = gcnew Pasajero(Codigo, DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, FechaNacimiento);
			listaPasajerosEncontrados->Add(objPasajero);
		}
	}
	return listaPasajerosEncontrados;
}