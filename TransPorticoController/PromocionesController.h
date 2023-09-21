#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class PromocionesController {
	public:
		PromocionesController();
		List<Promociones^>^ BuscarPromocion(String^ BuscarTitulo);
	};
};