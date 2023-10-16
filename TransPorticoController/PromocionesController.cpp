#include "PromocionesController.h"
#include "ParaderoController.h"

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

		ParaderoController^ ObjParaderoController = gcnew ParaderoController();

		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Titulo = Datos[1];
		String^ Descripcion = Datos[2];
		String^ FechaPromocion = Datos[3];
		int AforoPromocion = Convert::ToInt32(Datos[4]);
		double CantDescuento = Convert::ToDouble(Datos[5]);
		Paradero^ ParaderoAsociado = ObjParaderoController->buscarParaderoxCodigo(Convert::ToDouble(Datos[6]));
		bool Estado = Convert::ToBoolean(Datos[7]);

		Promociones^ ObjPromocion = gcnew Promociones(Codigo, Titulo, Descripcion, FechaPromocion, AforoPromocion, CantDescuento, ParaderoAsociado, Estado);
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

List<Promociones^>^ PromocionesController::BuscarPromocionFechaPromocion(List<Promociones^>^ ListPromocionesGeneral, String^ FechaPromocion) {
	List<Promociones^>^ ListPromocionesEspecifico = gcnew List<Promociones^>();
	for (int i = 0; i < ListPromocionesGeneral->Count; i++) {
		if (ListPromocionesGeneral[i]->GetFechaPromocion()->Contains(FechaPromocion)) {
			ListPromocionesEspecifico->Add(ListPromocionesGeneral[i]);
		}
	}
	return ListPromocionesEspecifico;
};

void PromocionesController::EscribirPromociones(List<Promociones^>^ ListPromociones) {
	array<String^>^ Lineas = gcnew array<String^>(ListPromociones->Count);

	for (int i = 0; i < ListPromociones->Count; i++) {
		Promociones^ ObjPromociones = ListPromociones[i];
		Lineas[i] = Convert::ToString(ObjPromociones->GetCodigo()) + ";" + ObjPromociones->GetTitulo() + ";" + ObjPromociones->GetDescripcion() + ";" + ObjPromociones->GetFechaPromocion() + ";" + ObjPromociones->GetAforoPromocion()+ ";" + ObjPromociones->GetCantDescuento()+ ";" + ObjPromociones->GetParaderoAsociado()->getCodigo()+ ";" + ObjPromociones->GetEstado();
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
			ListPromociones[i]->SetFechaPromocion(ObjPromociones->GetFechaPromocion());
			ListPromociones[i]->SetAforoPromocion(ObjPromociones->GetAforoPromocion());
			ListPromociones[i]->SetCantDescuento(ObjPromociones->GetCantDescuento());
			ListPromociones[i]->SetParaderoAsociado(ObjPromociones->GetParaderoAsociado());
			ListPromociones[i]->SetEstado(ObjPromociones->GetEstado	());
			break;
		}
	}
	EscribirPromociones(ListPromociones);
}