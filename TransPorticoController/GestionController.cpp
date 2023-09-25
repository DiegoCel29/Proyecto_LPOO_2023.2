#include <iostream>
#include "GestionController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


GestionController::GestionController() {

};

List<Gestion^>^ GestionController::buscarRuta(String^ Ruta) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Gestion^>^ listaRutasEscontradas = gcnew List<Gestion^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_Rutas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaRutas in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaRutas->Split(separadores->ToCharArray());

		int Codigo = Convert::ToInt32(datos[0]);
		String^ Ruta = datos[1];
		int CantPasajerosRuta = Convert::ToInt32(datos[2]);
		int MediaPuntaje = Convert::ToInt32(datos[3]);

		if (Ruta->Contains(Ruta)) {
			Gestion^ objruta = gcnew Gestion(Codigo, Ruta, CantPasajerosRuta, MediaPuntaje);
			listaRutasEscontradas->Add(objruta);
		}
	}
	return listaRutasEscontradas;
}