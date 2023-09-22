#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class ParaderosRecorridosController {
	public:
		ParaderosRecorridosController();
		List<ParaderosRecorridos^>^ buscarParaderosRecorridos(String^ paraderosrecorridos);
	};
}