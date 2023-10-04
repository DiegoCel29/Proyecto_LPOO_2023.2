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
		String^ FechaMantenimiento = Datos[1];
		String^ TipoMantenimiento = Datos[2];
		String^ DescripcionMantenimiento = Datos[3];
		if (FechaMantenimiento->Contains(BuscarIrMantenimiento)) {
			Mantenimiento^ ObjMantenimiento = gcnew Mantenimiento(Codigo, FechaMantenimiento, TipoMantenimiento, DescripcionMantenimiento);
			ListMantenimientosEncontrados->Add(ObjMantenimiento);
		}
	}
	return ListMantenimientosEncontrados;

}
List<Mantenimiento^>^ MantenimientoController::buscarAll() {
	List<Mantenimiento^>^ ListMantenimientosEncontrados = gcnew List<Mantenimiento^>();
	array<String^>^ Lineas = File::ReadAllLines("Mantenimientos.txt");
	String^ Separador = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ Linea in Lineas) {
		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ FechaMantenimiento = Datos[1];
		String^ TipoMantenimiento = Datos[2];
		String^ DescripcionMantenimiento = Datos[3];
		Mantenimiento^ ObjMantenimiento = gcnew Mantenimiento(Codigo, FechaMantenimiento, TipoMantenimiento, DescripcionMantenimiento);
		ListMantenimientosEncontrados->Add(ObjMantenimiento);
	}
	return ListMantenimientosEncontrados;
}
void MantenimientoController::escribirArchivo(List<Mantenimiento^>^ listaMantenimiento) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaMantenimiento->Count);
	for (int i = 0; i < listaMantenimiento->Count; i++) {
		Mantenimiento^ objeto = listaMantenimiento[i];
		lineasArchivo[i] = objeto->GetCodigo() + ";" + objeto->GetFechaMantenimiento() + ";" + objeto->GetTipoMantenimiento() + ";" + objeto->GetDescripcionMantenimiento();
	}
	File::WriteAllLines("Mantenimientos.txt", lineasArchivo);
}
void MantenimientoController::eliminarMantenimientoFisico(int Codigo) {
	List<Mantenimiento^>^ listaMantenimiento = buscarAll();
	for (int i = 0; i < listaMantenimiento->Count; i++) {
		if (listaMantenimiento[i]->GetCodigo() == Codigo) {
			listaMantenimiento->RemoveAt(i);
		}
	}
	escribirArchivo(listaMantenimiento);
}
void MantenimientoController::agregarMantenimiento(Mantenimiento^ objMantenimiento) {
	List<Mantenimiento^>^ listaMantenimiento = buscarAll();
	listaMantenimiento->Add(objMantenimiento);
	escribirArchivo(listaMantenimiento);
}
Mantenimiento^ MantenimientoController::buscarMantenimientoxCodigo(int Codigo) {
	List<Mantenimiento^>^ listaMantenimiento = buscarAll();
	for (int i = 0; i < listaMantenimiento->Count; i++) {
		if (listaMantenimiento[i]->GetCodigo() == Codigo) {
			return listaMantenimiento[i];
		}
	}
}
void MantenimientoController::actualizarMantenimiento(Mantenimiento^ objMantenimiento) {
	List<Mantenimiento^>^ listaMantenimiento = buscarAll();
	for (int i = 0; i < listaMantenimiento->Count; i++) {
		if (listaMantenimiento[i]->GetCodigo() == objMantenimiento->GetCodigo()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaMantenimiento[i]->SetFechaMantenimiento(objMantenimiento->GetFechaMantenimiento());
			listaMantenimiento[i]->SetTipoMantenimiento(objMantenimiento->GetTipoMantenimiento());
			listaMantenimiento[i]->SetDescripcionMantenimiento(objMantenimiento->GetDescripcionMantenimiento());
			break;
		}
	}
	escribirArchivo(listaMantenimiento);
}