#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class InformeEconomicoController {
	public:
		InformeEconomicoController();
		List<InformeEconomico^>^ BuscarInforme(String^ informes);
	};


}
