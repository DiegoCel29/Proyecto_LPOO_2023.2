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
			Persona^ ObjPersona = gcnew Persona(Codigo, DNI,Nombre,ApellidoPat,ApellidoMat,Edad,Genero,Telefono,Contrasena);
			ListPersonasEncontradas->Add(ObjPersona);
		}
	}
	return ListPersonasEncontradas;
};

List<Persona^>^ PersonaController::BuscarAll() {
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

		Persona^ ObjPersona = gcnew Persona(Codigo, DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena);
		ListPersonasEncontradas->Add(ObjPersona);
	}
	return ListPersonasEncontradas;
};

void PersonaController::EscribirArchivo(List<Persona^>^ ListPersona) {
	array<String^>^ Lineas = gcnew array<String^>(ListPersona->Count);
	for (int i = 0; i < ListPersona->Count; i++) {
		Persona^ ObjPersona = ListPersona[i];
		Lineas[i] = ObjPersona->GetCodigo() + ";" + ObjPersona->GetNombre() + ";" + ObjPersona->GetApellidoPat() + ";" + ObjPersona->GetApellidoMat() + ";" + ObjPersona->GetDNI() + ";" + ObjPersona->GetEdad() + ";" + ObjPersona->GetGenero() + ";" + ObjPersona->GetTelefono() + ";" + ObjPersona->GetContrasena();
	}
	File::WriteAllLines("Personas.txt", Lineas);
};

void PersonaController::EliminarPersona(int Codigo) {
	List<Persona^>^ ListPersona = BuscarAll();
	for (int i = 0; i < ListPersona->Count; i++) {
		//Se encuentra el codigo
		if (ListPersona[i]->GetCodigo() == Codigo) {
			ListPersona->RemoveAt(i);
		}
	}
	EscribirArchivo(ListPersona);
};

void PersonaController::AgregarPersona(Persona^ ObjPersona) {
	List<Persona^>^ ListPersonas = BuscarAll();
	ListPersonas->Add(ObjPersona);
	EscribirArchivo(ListPersonas);
}

Persona^ PersonaController::BuscarPersonaCodigo(int Codigo) {
	List<Persona^>^ ListPersonas = BuscarAll();
	for (int i = 0; i < ListPersonas->Count; i++) {
		if (ListPersonas[i]->GetCodigo() == Codigo) {
			return ListPersonas[i];
		}
	}
}