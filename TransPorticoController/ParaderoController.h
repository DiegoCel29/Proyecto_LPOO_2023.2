#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class ParaderoController {
	public:
		ParaderoController();
		List<Paradero^>^ buscarParaderos(String^ Nombre);
		//Devolver todos los archivos sin que le demos nada y ya
		//luego filtartlo como nosotros queramos
		List<Paradero^>^ buscarAll();
		//Todo lo que esta en una lista lo va a enviar a un archivo de texto
		void escribirArchivo(List<Paradero^>^ listaParaderos);
		void eliminarParaderoFisico(int Codigo);
		void agregarParadero(Paradero^ objParadero);
		Paradero^ buscarParaderoxCodigo(int Codigo);
		void actualizarParadero(Paradero^ objParadero);
	};
};