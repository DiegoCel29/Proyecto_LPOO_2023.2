#include <iostream>
#include "BuzonSugerenciaController.h"

using namespace TransPorticoController;
using namespace System::IO; 

BuzonSugerenciaController::BuzonSugerenciaController() {

};

List<BuzonSugerencia^>^ BuzonSugerenciaController::BuscarBuzonSugerencia(String^ BuscarTipo) {

	List<BuzonSugerencia^>^ ListBuzonSugerenciaEncontrados = gcnew List<BuzonSugerencia^>();

	array<String^>^ Lineas = File::ReadAllLines("BuzonSugerencia.txt");

	String^ Separador = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ Linea in Lineas) {

		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());

		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Fecha = Datos[1];
		String^ Hora = Datos[2];
		String^ Tipo = Datos[3];
		String^ Comentario = Datos[4];
		String^ Usuario = Datos[5];
		String^ Placa = Datos[6];

		if (Tipo->Contains(BuscarTipo)) {
			BuzonSugerencia^ ObjBuzonSugerencia = gcnew BuzonSugerencia(Codigo, Fecha, Hora, Tipo, Comentario, Usuario, Placa);
			ListBuzonSugerenciaEncontrados->Add(ObjBuzonSugerencia);
		}
	}
	return ListBuzonSugerenciaEncontrados;

};
