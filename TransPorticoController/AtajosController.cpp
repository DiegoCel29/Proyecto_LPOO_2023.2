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
List<Atajo^>^ AtajosController::buscarAllAtajos( ) {
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
		int Y_Inicio = Convert::ToInt32(datos[2]);
		String^ Paradero_Inicio = datos[3];
		int X_Final = Convert::ToInt32(datos[4]);
		int Y_Final = Convert::ToInt32(datos[5]);
		String^ Paradero_Final = datos[6];
		String^ RutaAsociada = datos[7];

		Atajo^ objAtajo = gcnew Atajo(Codigo, X_Inicio, Y_Inicio, Paradero_Inicio, X_Final, Y_Final, Paradero_Final, RutaAsociada);
		listaAtajosEncontrados->Add(objAtajo);
	}
	return listaAtajosEncontrados;
}

void AtajosController::escribirAtajos(List<Atajo^>^ listaAtajos) {
	array<String^>^ lineasAtajos = gcnew array<String^>(listaAtajos->Count);
	for (int i = 0; i < listaAtajos->Count; i++) {
		Atajo^ objeto = listaAtajos[i];
		lineasAtajos[i] = objeto->getCodigo_A() + ";" + objeto->getX_Inicio() + ";" + objeto->getY_Inicio() + ";" + objeto->getParadero_Inicio() + ";" + objeto->getX_Final() + ";" + objeto->getY_Final() + ";" + objeto->getParadero_Final() + ";" + objeto->getRutaAsociada();
	}
	File::WriteAllLines("Lista_Atajos.txt", lineasAtajos);
}

void AtajosController::eliminarAtajosFisico(int codigo) {
	List<Atajo^>^ listaAtajos = buscarAllAtajos();
	for (int i = 0; i < listaAtajos->Count; i++) {
		/*encontr[*/
		if (listaAtajos[i]->getCodigo_A() == codigo) {
			listaAtajos->RemoveAt(i);
		}
	}
	escribirAtajos(listaAtajos);
}
void AtajosController::agregarAtajos(Atajo^ objAtajo) {
	List<Atajo^>^ listaAtajos = buscarAllAtajos();
	listaAtajos->Add(objAtajo);
	escribirAtajos(listaAtajos);
}

Atajo^ AtajosController::buscarAtajosxCodigo(int codigo) {
	List<Atajo^>^ listaAtajos = buscarAllAtajos();
	for (int i = 0; i < listaAtajos->Count; i++) {
		if (listaAtajos[i]->getCodigo_A() == codigo) {
			return listaAtajos[i];
		}
	}
}

void AtajosController::actualizarAtajos(Atajo^ objAtajo) {
	List<Atajo^>^ listaAtajos = buscarAllAtajos();
	for (int i = 0; i < listaAtajos->Count; i++) {
		if (listaAtajos[i]->getCodigo_A() == objAtajo->getCodigo_A()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaAtajos[i]->setX_Inicio(objAtajo->getX_Inicio());
			listaAtajos[i]->setY_Inicio(objAtajo->getY_Inicio());
			listaAtajos[i]->setParadero_Inicio(objAtajo->getParadero_Inicio());
			listaAtajos[i]->setX_Final(objAtajo->getX_Final());
			listaAtajos[i]->setY_Final(objAtajo->getY_Final());
			listaAtajos[i]->setParadero_Final(objAtajo->getParadero_Final());
			listaAtajos[i]->setRutaAsociada(objAtajo->getRutaAsociada());
			break;
		}
	}
	escribirAtajos(listaAtajos);
}