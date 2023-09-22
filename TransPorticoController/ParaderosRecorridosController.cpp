#include <iostream>
#include "ParaderosRecorridosController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


ParaderosRecorridosController::ParaderosRecorridosController() {

}

List<ParaderosRecorridos^>^ ParaderosRecorridosController::buscarParaderosRecorridos(String^ paraderosrecorridos) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<ParaderosRecorridos^>^ listaParaderosRecorridosEncontrados = gcnew List<ParaderosRecorridos^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_ParaderosRecorridos.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaParaderosRecorridos in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaParaderosRecorridos->Split(separadores->ToCharArray());
		String^ Nombre = datos[0];
		String^ ParaderoSubida= datos[1];
		String^ ParaderoBajada = datos[2];
		String^ Tarjeta = datos[3];
		double Tarifa = Convert::ToDouble(datos[4]);
		if (Nombre->Contains(paraderosrecorridos)) {
			ParaderosRecorridos^ objParaderoRecorrido = gcnew ParaderosRecorridos(Nombre,ParaderoSubida,ParaderoBajada,Tarjeta,Tarifa);
			listaParaderosRecorridosEncontrados->Add(objParaderoRecorrido);
		}
	}
	return listaParaderosRecorridosEncontrados;
}