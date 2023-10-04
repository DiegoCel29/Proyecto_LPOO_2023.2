#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class PasajeroController {
	public:
		PasajeroController();
		List<Pasajero^>^ BuscarPasajeros(String^ pasajeros);
		List<Pasajero^>^ BuscarAllPasajeros();
		void EscribirPasajero(List<Pasajero^>^ listaPasajeros);
		void EliminarPasajeroFisico(String^ DNI_Eliminar);
		void AgregarPasajero(Pasajero^ objPasajero);
		Pasajero^ BuscarPasajeroDNI(String^ DNI);
		void ActualizarPasajero(Pasajero^ objPasajero);
	};
}