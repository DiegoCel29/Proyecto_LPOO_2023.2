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

//Para Editar
SituacionRecorrido^ SituacionRecorridoController::buscarRecorrido(int codigo) {
	SituacionRecorrido^ objSRecorrido = gcnew SituacionRecorrido;
	//Traemos todas carreras a una lista
	List<SituacionRecorrido^>^ ListSRecorrido = buscarRecorridoall();
	for (int i = 0; i < ListSRecorrido->Count; i++) {
		if ((ListSRecorrido[i]->getCodigo()) == codigo) {

			objSRecorrido->setCodigo(ListSRecorrido[i]->getCodigo());
			objSRecorrido->setHayTrafico(ListSRecorrido[i]->getHayTrafico());
			objSRecorrido->setHayChoque(ListSRecorrido[i]->getHayChoque());
			objSRecorrido->setExcVelocidad(ListSRecorrido[i]->getExcVelocidad());
			objSRecorrido->setParadero(ListSRecorrido[i]->getParadero());
			
			break;
		}
	}
	return objSRecorrido;
}        


int SituacionRecorridoController::ExisteRecorrido(int codigo) {

	int existe = 0;

	List<SituacionRecorrido^>^ listaSRecorrido = buscarRecorridoall();

	for (int i = 0; i < listaSRecorrido->Count; i++) {
		SituacionRecorrido^ objSRecorrido = listaSRecorrido[i];
		if ((codigo) == (objSRecorrido->getCodigo())) {
			existe = 1;
			break;
		}
	}


	return existe;
}
void SituacionRecorridoController::EliminarRecorrido(int codigo) {
	List<SituacionRecorrido^>^ ListaSRecorrido = buscarRecorridoall();
	for (int i = 0; i < ListaSRecorrido->Count; i++) {
		SituacionRecorrido^ objSRecorrido = ListaSRecorrido[i];
		if ((objSRecorrido->getCodigo()) == (codigo)) {
			ListaSRecorrido->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(ListaSRecorrido);
}
void SituacionRecorridoController::escribirArchivo(List<SituacionRecorrido^>^ ListaSitucionRecorrido) {
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaSitucionRecorrido->Count);
	for (int i = 0; i < ListaSitucionRecorrido->Count; i++) {
		SituacionRecorrido^ objSRecorrido = ListaSitucionRecorrido[i];
		lineasArchivo[i] = objSRecorrido->getCodigo() + ";" + objSRecorrido->getHayTrafico() + ";" +
			objSRecorrido->getHayChoque() + ";" + objSRecorrido->getExcVelocidad() + ";" + objSRecorrido->getParadero() + ";";

	}
	File::WriteAllLines("Lista_SituacionRecorrido.txt", lineasArchivo);
}
void SituacionRecorridoController::agregarRecorrido(int codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero) {
	
	List<SituacionRecorrido^>^ listaSRecorrido = buscarRecorridoall();
	SituacionRecorrido^ obSRecorrido = gcnew SituacionRecorrido(codigo,HayTrafico, HayChoque, ExcVelocidad,  Paradero);
	listaSRecorrido->Add(obSRecorrido);
	escribirArchivo(listaSRecorrido);
}

//Almacenar todos los objetos SR en una lista.
List<SituacionRecorrido^>^ SituacionRecorridoController::buscarRecorridoall() {

	List<SituacionRecorrido^>^ listaSituacionesEncontradas = gcnew List<SituacionRecorrido^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_SituacionRecorrido.txt");

	String^ separadores = ";";
	for each (String ^ lineaSituacionRecorrido in lineas) {
		array<String^>^ datos = lineaSituacionRecorrido->Split(separadores->ToCharArray());
		int Codigo = Convert::ToInt32(datos[0]);
		bool HayTrafico = Convert::ToBoolean(datos[1]);
		bool HayChoque = Convert::ToBoolean(datos[2]);
		bool ExcVelocidad = Convert::ToBoolean(datos[3]);
		String^ Paradero = datos[4];


		SituacionRecorrido^ objSituacionRecorrido = gcnew SituacionRecorrido(Codigo, HayTrafico, HayChoque, ExcVelocidad, Paradero);
		listaSituacionesEncontradas->Add(objSituacionRecorrido);

	}
	return listaSituacionesEncontradas;
}

void SituacionRecorridoController::ActualizarRecorrido(int codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero) {
	List<SituacionRecorrido^>^ ListaSRecorrido = buscarRecorridoall();
	for (int i = 0; i < ListaSRecorrido->Count; i++) {
		if ((ListaSRecorrido[i]->getCodigo()) == codigo) {
			ListaSRecorrido[i]->setHayTrafico(HayTrafico);
			ListaSRecorrido[i]->setHayChoque(HayChoque);
			ListaSRecorrido[i]->setExcVelocidad(ExcVelocidad);
			ListaSRecorrido[i]->setParadero(Paradero);
			
			//Noactualizamos el codigo no es apto para cambios
			break;

		}
	}

	escribirArchivo(ListaSRecorrido);
}
