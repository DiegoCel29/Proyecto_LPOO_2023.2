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
		//Este metodo verifica que haya una persona en la base de datos con el DNI, entrega el valor de verdad dependiendo del resultado.
		void VerificarPersona(String^ DNI, String^* Contrasena, String^* Tipo, bool* Registrado);
		//Este metodo verifica que haya una persona con cierto numero telefonico, ademas de haberlo procede con la recuperacion de contrasena
		bool ExistePersonaTelefono(String^ Telefono);
		//Este metodo cambiara la contrasena de una persona, tras entregar un numero telefonico que ya ha sido verificado
		void CambiarPersonaContrasenaTelefono(String^ Telefono, String^ NuevaContrasena);
		//Este metodo halla y devuelve el ultimo codigo usado en una persona, tal que no haya dos ObjPersona con el mismo codigo
		int BuscarUltimoCodigo();
	};
};