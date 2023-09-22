#pragma once
#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class AtajosController {
	public:
		AtajosController();
		List<Atajo^>^ buscarAtajos(String^ atajos);
	};
}