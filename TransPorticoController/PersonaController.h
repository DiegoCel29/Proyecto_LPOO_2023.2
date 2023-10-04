#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TransPorticoModel;

namespace TransPorticoController {

	public ref class PersonaController {
	public:
		PersonaController();
		//Este metodo busca todo, para que luego puedas filtrar
		List<Persona^>^ BuscarAll();
		//Este metodo toda la informacion de un proyecto (lista), lo traslada a un archivo de txt
		void EscribirArchivo(List<Persona^>^ ListPersona);
		//Este metodo eliminara el proyecto de manera fisica, en base a su codigo
		void EliminarPersona(String^ DNI);
		//Este metodo permite agregar un nuevo objeto
		void AgregarPersona(Persona^ ObjPersona);
		//Este metodo busca un objeto por codido :p
		void BuscarPersonaDNI(Persona^ *ObjPersona, String^ DNI, bool* Registrado);
		//Este metodo verifica que haya una persona en la base de datos con el DNI, entrega el valor de verdad dependiendo del resultado.
		void VerificarPersona(String^ DNI, String^* Contrasena, String^* Tipo, bool* Registrado);
		//Este metodo cambiara la contrasena de una persona, tras entregar un numero telefonico que ya ha sido verificado
		void CambiarPersonaContrasenaTelefono(String^ Telefono, String^ NuevaContrasena);
	};
};