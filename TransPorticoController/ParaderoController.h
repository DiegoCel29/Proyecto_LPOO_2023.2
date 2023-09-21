#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class ParaderoController {
	public:
		ParaderoController();
		List<Paradero^>^ buscarParaderos(String^ Nombre);
	};
};