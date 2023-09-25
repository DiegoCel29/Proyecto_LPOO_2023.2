#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class PersonaController {
	public:
		PersonaController();
		List<Persona^>^ BuscarPersona(String^ BuscarApellidoPat);

		//Este metodo busca todo, para que luego puedas filtrar
		List<Persona^>^ BuscarAll();
		//Este metodo toda la informacion de un proyecto (lista), lo traslada a un archivo de txt
		void EscribirArchivo(List<Persona^>^ ListPersona);
		//Este metodo eliminara el proyecto de manera fisica, en base a su codigo
		void EliminarPersona(int Codigo);
		//Este metodo permite agregar un nuevo objeto
		void AgregarPersona(Persona^ ObjPersona);
		//Este metodo busca un objeto por codido :p
		Persona^ BuscarPersonaCodigo(int Codigo);
	};
};