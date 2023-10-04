#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class PromocionesController {
	public:
		PromocionesController();
		List<Promociones^>^ BuscarPromocionAll();
		Promociones^ BuscarPromocionCodigo(int Codigo);
		List<Promociones^>^ BuscarPromocionFechaInicio(List<Promociones^>^ ListPromocionesGeneral, String^ FechaInicio);
		List<Promociones^>^ BuscarPromocionFechaFin(List<Promociones^>^ ListPromocionesGeneral, String^ FechaFin);
		void EscribirPromociones(List<Promociones^>^ ListPromociones);
		void EliminarPromocion(int Codigo);
		void AgregarPromocion(Promociones^ ObjPromociones);
		void ActualizarPromocion(Promociones^ ObjPromociones);

	};
};