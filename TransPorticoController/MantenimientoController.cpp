#include "MantenimientoController.h"

using namespace TransPorticoController;
using namespace System::IO;

MantenimientoController::MantenimientoController() {

};

List<Mantenimiento^>^ MantenimientoController::BuscarMantenimiento(String^ BuscarIrMantenimiento) {

	List<Mantenimiento^>^ ListMantenimientosEncontrados = gcnew List<Mantenimiento^>();

	array<String^>^ Lineas = File::ReadAllLines("Mantenimientos.txt");

	String^ Separador = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ Linea in Lineas) {

		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());

		int Codigo = Convert::ToInt32(Datos[0]);
		String^ IrMantenimiento = Datos[1];
		String^ TipoMantenimiento = Datos[2];
		String^ DescripcionMantenimiento = Datos[3];

		if (IrMantenimiento->Contains(BuscarIrMantenimiento)) {
			Mantenimiento^ ObjMantenimiento = gcnew Mantenimiento(Codigo, IrMantenimiento, TipoMantenimiento, DescripcionMantenimiento);
			ListMantenimientosEncontrados->Add(ObjMantenimiento);
		}
	}
	return ListMantenimientosEncontrados;

};