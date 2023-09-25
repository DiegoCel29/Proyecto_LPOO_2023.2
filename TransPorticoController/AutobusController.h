#pragma once


using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class AutobusController {
	public:
		AutobusController();
		List<Autobus^>^ buscarAutobus(String^ buses);
	};


}