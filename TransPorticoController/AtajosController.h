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
		List<Atajo^>^ buscarAllAtajos();
		void escribirAtajos(List<Atajo^>^ listaAtajos);
		void eliminarAtajosFisico(int codigo);
		void agregarAtajos(Atajo^ objAtajo);
		Atajo^ buscarAtajosxCodigo(int codigo);
		void actualizarAtajos(Atajo^ objAtajo);
	};
}

