#include <iostream>
#include "SituacionController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


SituacionController::SituacionController() {

}

List<Situacion^>^ SituacionController::buscarSituacionesRecorridos(String^ situaciones) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Situacion^>^ listaSituacionEncontradas = gcnew List<Situacion^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_Situacion.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaSituacion in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaSituacion->Split(separadores->ToCharArray());
		int Codigo = Convert::ToInt32(datos[0]);
		bool HayTrafico = Convert::ToBoolean(datos[1]);
		bool HayChoque = Convert::ToBoolean(datos[2]);
	    bool ExcVelocidad = Convert::ToBoolean(datos[3]);
		String^ Paradero = datos[4];
		if (Paradero->Contains(situaciones)) {
			Situacion^ objSituacion = gcnew Situacion(Codigo,HayTrafico,HayChoque,ExcVelocidad,Paradero);
			listaSituacionEncontradas->Add(objSituacion);
		}
	}
	return listaSituacionEncontradas;
}

//Para Editar
Situacion^ SituacionController::buscarRecorrido(int codigo) {
	Situacion^ objSRecorrido = gcnew Situacion;
	//Traemos todas carreras a una lista
	List<Situacion^>^ ListSRecorrido = buscarRecorridoall();
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


int SituacionController::ExisteRecorrido(int codigo) {

	int existe = 0;

	List<Situacion^>^ listaSRecorrido = buscarRecorridoall();

	for (int i = 0; i < listaSRecorrido->Count; i++) {
		Situacion^ objSRecorrido = listaSRecorrido[i];
		if ((codigo) == (objSRecorrido->getCodigo())) {
			existe = 1;
			break;
		}
	}


	return existe;
}
void SituacionController::EliminarRecorrido(int codigo) {
	List<Situacion^>^ ListaSRecorrido = buscarRecorridoall();
	for (int i = 0; i < ListaSRecorrido->Count; i++) {
		Situacion^ objSRecorrido = ListaSRecorrido[i];
		if ((objSRecorrido->getCodigo()) == (codigo)) {
			ListaSRecorrido->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(ListaSRecorrido);
}
void SituacionController::escribirArchivo(List<Situacion^>^ ListaSitucionRecorrido) {
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaSitucionRecorrido->Count);
	for (int i = 0; i < ListaSitucionRecorrido->Count; i++) {
		Situacion^ objSRecorrido = ListaSitucionRecorrido[i];
		lineasArchivo[i] = objSRecorrido->getCodigo() + ";" + objSRecorrido->getHayTrafico() + ";" +
			objSRecorrido->getHayChoque() + ";" + objSRecorrido->getExcVelocidad() + ";" + objSRecorrido->getParadero() + ";";

	}
	File::WriteAllLines("Lista_Situacion.txt", lineasArchivo);
}
void SituacionController::agregarRecorrido(int codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero) {
	
	List<Situacion^>^ listaSRecorrido = buscarRecorridoall();
	Situacion^ obSRecorrido = gcnew Situacion(codigo,HayTrafico, HayChoque, ExcVelocidad,  Paradero);
	listaSRecorrido->Add(obSRecorrido);
	escribirArchivo(listaSRecorrido);
}

//Almacenar todos los objetos SR en una lista.
List<Situacion^>^ SituacionController::buscarRecorridoall() {

	List<Situacion^>^ listaSituacionesEncontradas = gcnew List<Situacion^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_Situacion.txt");

	String^ separadores = ";";
	for each (String ^ lineaSituacion in lineas) {
		array<String^>^ datos = lineaSituacion->Split(separadores->ToCharArray());
		int Codigo = Convert::ToInt32(datos[0]);
		bool HayTrafico = Convert::ToBoolean(datos[1]);
		bool HayChoque = Convert::ToBoolean(datos[2]);
		bool ExcVelocidad = Convert::ToBoolean(datos[3]);
		String^ Paradero = datos[4];


		Situacion^ objSituacion = gcnew Situacion(Codigo, HayTrafico, HayChoque, ExcVelocidad, Paradero);
		listaSituacionesEncontradas->Add(objSituacion);

	}
	return listaSituacionesEncontradas;
}

void SituacionController::ActualizarRecorrido(int codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero) {
	List<Situacion^>^ ListaSRecorrido = buscarRecorridoall();
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
