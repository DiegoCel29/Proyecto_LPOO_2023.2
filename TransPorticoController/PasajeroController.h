#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class PasajeroController {
	public:
		PasajeroController();
		List<Pasajero^>^ buscarPasajeros(String^ pasajeros);
		List<Pasajero^>^ buscarAllPasajeros();
		void escribirPasajero(List<Pasajero^>^ listaPasajeros);
		void eliminarPasajeroFisico(String^ DNI_Eliminar);
		void agregarPasajero(Pasajero^ objPasajero);
	};
}