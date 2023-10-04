#pragma once
#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class SituacionRecorridoController {
	public:
		SituacionRecorridoController();
		List<SituacionRecorrido^>^ buscarSituacionesRecorridos(String^ situacionesrecorridos);

		SituacionRecorrido^ buscarRecorrido(int codigo);

		int ExisteRecorrido(int codigo);
		void EliminarRecorrido(int codigo);
		void escribirArchivo(List<SituacionRecorrido^>^ ListaSitucionRecorrido);
		void agregarRecorrido(int codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero);
		List<SituacionRecorrido^>^ buscarRecorridoall();
		void ActualizarRecorrido(int codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero);
	};
}