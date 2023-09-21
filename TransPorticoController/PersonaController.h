#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class PersonaController {
	public:
		PersonaController();
		List<Persona^>^ BuscarPersona(String^ BuscarApellidoPat);
	};
};