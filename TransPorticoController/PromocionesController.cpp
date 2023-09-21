#include "PromocionesController.h"

using namespace TransPorticoController;
using namespace System::IO;

PromocionesController::PromocionesController() {

};

List<Promociones^>^ PromocionesController::BuscarPromocion(String^ BuscarTitulo) {

	List<Promociones^>^ ListPromocionesEncontrados = gcnew List<Promociones^>();

	array<String^>^ Lineas = File::ReadAllLines("Promociones.txt");

	String^ Separador = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ Linea in Lineas) {

		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());

		int Codigo = Convert::ToInt32(Datos[0]);
		String^ FechaInicio = Datos[1];
		String^ FechaFin = Datos[2];
		String^ Descripcion = Datos[3];
		String^ Titulo = Datos[4];

		if (Titulo->Contains(BuscarTitulo)) {
			Promociones^ ObjPromocion = gcnew Promociones(Codigo, FechaInicio, FechaFin, Descripcion, Titulo);
			ListPromocionesEncontrados->Add(ObjPromocion);
		}
	}
	return ListPromocionesEncontrados;

};