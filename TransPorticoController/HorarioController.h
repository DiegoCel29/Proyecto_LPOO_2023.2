#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class HorarioController {
	public:
		HorarioController();
		List<Horario^>^ buscarHorarios(String^ Turno);
	};
};