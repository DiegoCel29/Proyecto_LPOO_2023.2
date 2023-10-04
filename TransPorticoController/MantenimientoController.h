#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class MantenimientoController {
	public:
		MantenimientoController();
		List<Mantenimiento^>^ BuscarMantenimiento(String^ BuscarIrMantenimiento);
		List<Mantenimiento^>^ buscarAll();
		void escribirArchivo(List<Mantenimiento^>^ listaMantenimiento);
		void eliminarMantenimientoFisico(int Codigo);
		void agregarMantenimiento(Mantenimiento^ objMantenimiento);
		Mantenimiento^ buscarMantenimientoxCodigo(int Codigo);
		void actualizarMantenimiento(Mantenimiento^ objMantenimiento);
	};
};