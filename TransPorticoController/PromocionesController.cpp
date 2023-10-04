#include "PromocionesController.h"

using namespace TransPorticoController;
using namespace System::IO;

PromocionesController::PromocionesController() {

};

List<Promociones^>^ PromocionesController::BuscarPromocionAll() {
	List<Promociones^>^ ListPromocionesEncontrados = gcnew List<Promociones^>();
	array<String^>^ Lineas = File::ReadAllLines("Promociones.txt");
	String^ Separador = ";";
	for each (String ^ Linea in Lineas) {
		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());

		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Titulo = Datos[1];
		String^ Descripcion = Datos[2];
		String^ FechaInicio = Datos[3];
		String^ FechaFin = Datos[4];

		Promociones^ ObjPromocion = gcnew Promociones(Codigo, Titulo, Descripcion, FechaInicio, FechaFin);
		ListPromocionesEncontrados->Add(ObjPromocion);
	}
	return ListPromocionesEncontrados;
};

Promociones^ PromocionesController::BuscarPromocionCodigo(int Codigo) {

	List<Promociones^>^ ListPromocionesGeneral = BuscarPromocionAll();

	for (int i = 0; i < ListPromocionesGeneral->Count; i++) {
		if (Convert::ToInt32(ListPromocionesGeneral[i]->GetCodigo()) == Codigo) {
			return ListPromocionesGeneral[i];
		}
	}
};

List<Promociones^>^ PromocionesController::BuscarPromocionFechaInicio(List<Promociones^>^ ListPromocionesGeneral, String^ FechaInicio) {
	List<Promociones^>^ ListPromocionesEspecifico = gcnew List<Promociones^>();
	for (int i = 0; i < ListPromocionesGeneral->Count; i++) {
		if (ListPromocionesGeneral[i]->GetFechaInicio()->Contains(FechaInicio)) {
			ListPromocionesEspecifico->Add(ListPromocionesGeneral[i]);
		}
	}
	return ListPromocionesEspecifico;
};

List<Promociones^>^ PromocionesController::BuscarPromocionFechaFin(List<Promociones^>^ ListPromocionesGeneral, String^ FechaFin) {
	List<Promociones^>^ ListPromocionesEspecifico = gcnew List<Promociones^>();
	for (int i = 0; i < ListPromocionesGeneral->Count; i++) {
		if (ListPromocionesGeneral[i]->GetFechaFin()->Contains(FechaFin)) {
			ListPromocionesEspecifico->Add(ListPromocionesGeneral[i]);
		}
	}
	return ListPromocionesEspecifico;
};

void PromocionesController::EscribirPromociones(List<Promociones^>^ ListPromociones) {
	array<String^>^ Lineas = gcnew array<String^>(ListPromociones->Count);

	for (int i = 0; i < ListPromociones->Count; i++) {
		Promociones^ ObjPromociones = ListPromociones[i];
		Lineas[i] = Convert::ToString(ObjPromociones->GetCodigo()) + ";" + ObjPromociones->GetTitulo() + ";" + ObjPromociones->GetDescripcion() + ";" + ObjPromociones->GetFechaInicio() + ";" + ObjPromociones->GetFechaFin();
	}
	File::WriteAllLines("Promociones.txt", Lineas);
};

void PromocionesController::EliminarPromocion(int Codigo) {
	List<Promociones^>^ ListPromociones = BuscarPromocionAll();
	for (int i = 0; i < ListPromociones->Count; i++) {
		if (ListPromociones[i]->GetCodigo() == Codigo) {
			ListPromociones->RemoveAt(i);
		}
	}
	EscribirPromociones(ListPromociones);
};

void PromocionesController::AgregarPromocion(Promociones^ ObjPromociones) {
	List<Promociones^>^ ListPromociones = BuscarPromocionAll();
	ListPromociones->Add(ObjPromociones);
	EscribirPromociones(ListPromociones);
};

void PromocionesController::ActualizarPromocion(Promociones^ ObjPromociones) {
	List<Promociones^>^ ListPromociones = BuscarPromocionAll();
	for (int i = 0; i < ListPromociones->Count; i++) {
		if (ListPromociones[i]->GetCodigo() == ObjPromociones->GetCodigo()) {
			ListPromociones[i]->SetTitulo(ObjPromociones->GetTitulo());
			ListPromociones[i]->SetDescripcion(ObjPromociones->GetDescripcion());
			ListPromociones[i]->SetFechaInicio(ObjPromociones->GetFechaInicio());
			ListPromociones[i]->SetFechaFin(ObjPromociones->GetFechaFin());
			break;
		}
	}
	EscribirPromociones(ListPromociones);
}