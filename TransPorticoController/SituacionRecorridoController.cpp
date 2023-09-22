#include <iostream>
#include "SituacionRecorridoController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


SituacionRecorridoController::SituacionRecorridoController() {

}

List<SituacionRecorrido^>^ SituacionRecorridoController::buscarSituacionesRecorridos(String^ situaciones) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<SituacionRecorrido^>^ listaSituacionRecorridoEncontradas = gcnew List<SituacionRecorrido^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_SituacionRecorrido.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaSituacionRecorrido in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaSituacionRecorrido->Split(separadores->ToCharArray());
		int Codigo = Convert::ToInt32(datos[0]);
		bool HayTrafico = Convert::ToBoolean(datos[1]);
		bool HayChoque = Convert::ToBoolean(datos[2]);
	    bool ExcVelocidad = Convert::ToBoolean(datos[3]);
		String^ Paradero = datos[4];
		if (Paradero->Contains(situaciones)) {
			SituacionRecorrido^ objSituacionRecorrido = gcnew SituacionRecorrido(Codigo,HayTrafico,HayChoque,ExcVelocidad,Paradero);
			listaSituacionRecorridoEncontradas->Add(objSituacionRecorrido);
		}
	}
	return listaSituacionRecorridoEncontradas;
}