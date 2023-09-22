#include <iostream>
#include "AtajosController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


AtajosController::AtajosController() {

}

List<Atajo^>^ AtajosController::buscarAtajos(String^ atajos) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Atajo^>^ listaAtajosEncontrados = gcnew List<Atajo^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_Atajos.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaAtajosEncontrados in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaAtajosEncontrados->Split(separadores->ToCharArray());
		int Codigo = Convert::ToInt32(datos[0]);
		int X_Inicio = Convert::ToInt32(datos[1]);
		int Y_Inicio=Convert::ToInt32(datos[2]);
		String^ Paradero_Inicio = datos[3];
		int X_Final = Convert::ToInt32(datos[4]);
		int Y_Final = Convert::ToInt32(datos[5]);
		String^ Paradero_Final = datos[6];
		String^ RutaAsociada = datos[7];

		if (Paradero_Inicio->Contains(atajos)) {
			Atajo^ objAtajo = gcnew Atajo(Codigo,X_Inicio,Y_Inicio,Paradero_Inicio,X_Final,Y_Final,Paradero_Final,RutaAsociada);
			listaAtajosEncontrados->Add(objAtajo);
		}
	}
	return listaAtajosEncontrados;
}