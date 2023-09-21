#include "PersonaController.h"

using namespace TransPorticoController;
using namespace System::IO;

PersonaController::PersonaController() {

};

List<Persona^>^ PersonaController::BuscarPersona(String^ BuscarApellidoPat) {

	List<Persona^>^ ListPersonasEncontradas = gcnew List<Persona^>();

	array<String^>^ Lineas = File::ReadAllLines("Personas.txt");

	String^ Separador = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ Linea in Lineas) {

		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());

		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Nombre = Datos[1];
		String^ ApellidoPat = Datos[2];
		String^ ApellidoMat = Datos[3];
		String^ DNI = Datos[4];
		int Edad = Convert::ToInt32(Datos[5]);
		String^ Genero = Datos[6];
		String^ Telefono = Datos[7];
		String^ Contrasena = Datos[8];

		if (ApellidoPat->Contains(BuscarApellidoPat)) {
			Persona^ ObjPersona = gcnew Persona(DNI,Nombre,ApellidoPat,ApellidoMat,Edad,Genero,Telefono,Contrasena);
			ListPersonasEncontradas->Add(ObjPersona);
		}
	}
	return ListPersonasEncontradas;

};