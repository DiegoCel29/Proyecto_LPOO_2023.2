#pragma once
#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class SituacionController {
	public:
		SituacionController();
		List<Situacion^>^ buscarSituacionesRecorridos(String^ situacionesrecorridos);

		Situacion^ buscarRecorrido(int codigo);

		int ExisteRecorrido(int codigo);
		void EliminarRecorrido(int codigo);
		void escribirArchivo(List<Situacion^>^ ListaSitucionRecorrido);
		void agregarRecorrido(int codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero);
		List<Situacion^>^ buscarRecorridoall();
		void ActualizarRecorrido(int codigo, bool HayTrafico, bool HayChoque, bool ExcVelocidad, String^ Paradero);
	};
}