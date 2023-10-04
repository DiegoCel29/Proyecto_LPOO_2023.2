#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class RutaController {
	public:
		RutaController();
		List<Ruta^>^ buscarRutas(String^ Linea);
		List<Ruta^>^ buscarAll();
		//Todo lo que esta en una lista lo va a enviar a un archivo de texto
		void escribirArchivo(List<Ruta^>^ listaRuta);
		void eliminarRutaFisico(int Codigo);
		void agregarRuta(Ruta^ objRuta);
		Ruta^ buscarRutaxCodigo(int Codigo);
		void actualizarRuta(Ruta^ objRuta);
		List<String^>^ obtenerLinea();
	};
};