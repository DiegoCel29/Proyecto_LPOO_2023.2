#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class GestionController {
	public:
		GestionController();
		List<Gestion^>^ buscarRuta(String^ Ruta);
	};


}
