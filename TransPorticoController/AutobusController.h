#pragma once


using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class AutobusController {
	public:
		AutobusController();
		List<Autobus^>^ buscarAutobus(String^ buses);
		List<Autobus^>^ buscarAutobusall();
		int ExisteAutobus(int codigo);
		void EliminarAutobus(String^ Placa);
		void escribirArchivo(List<Autobus^>^ ListaAutobuses);
		void agregarAutobus(int codigo, String^ Placa, int capacidad);
		
	};


}