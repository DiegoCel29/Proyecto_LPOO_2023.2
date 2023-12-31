#include "PersonaController.h"

using namespace TransPorticoController;
using namespace System::IO;

PersonaController::PersonaController() {

};

List<Persona^>^ PersonaController::BuscarAll() {
	List<Persona^>^ ListPersonasEncontradas = gcnew List<Persona^>();
	array<String^>^ ListPasajeros = File::ReadAllLines("ListaPasajeros.txt");
	array<String^>^ ListEmpleados = File::ReadAllLines("ListaEmpleados.txt");
	String^ Separador = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ Linea in ListPasajeros) {
		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());

		String^ DNI = Datos[0];
		String^ Nombre = Datos[1];
		String^ ApellidoPat = Datos[2];
		String^ ApellidoMat = Datos[3];
		int Edad = Convert::ToInt32(Datos[4]);
		String^ Genero = Datos[5];
		String^ Telefono = Datos[6];
		String^ Contrasena = Datos[7];
		String^ Tipo = Datos[8];

		Persona^ ObjPersona = gcnew Persona(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, Tipo);
		ListPersonasEncontradas->Add(ObjPersona);
	}
	for each (String ^ Linea in ListEmpleados) {
		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());
		String^ DNI = Datos[0];
		String^ Nombre = Datos[1];
		String^ ApellidoPat = Datos[2];
		String^ ApellidoMat = Datos[3];
		int Edad = Convert::ToInt32(Datos[4]);
		String^ Genero = Datos[5];
		String^ Telefono = Datos[6];
		String^ Contrasena = Datos[7];
		String^ Tipo = Datos[8];

		Persona^ ObjPersona = gcnew Persona(DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, Tipo);
		ListPersonasEncontradas->Add(ObjPersona);
	}
	return ListPersonasEncontradas;
};
void PersonaController::EscribirArchivo(List<Persona^>^ ListPersona) {
	array<String^>^ Lineas = gcnew array<String^>(ListPersona->Count);
	for (int i = 0; i < ListPersona->Count; i++) {
		Persona^ ObjPersona = ListPersona[i];
		Lineas[i] = ObjPersona->GetNombres() + ";" + ObjPersona->GetApellidoPat() + ";" + ObjPersona->GetApellidoMat() + ";" + ObjPersona->GetDNI() + ";" + ObjPersona->GetEdad() + ";" + ObjPersona->GetGenero() + ";" + ObjPersona->GetTelefono() + ";" + ObjPersona->GetContrasena() + ";" + ObjPersona->GetTipo();
	}
	File::WriteAllLines("Personas.txt", Lineas);
};
void PersonaController::EliminarPersona(String^ DNI) {
	List<Persona^>^ ListPersona = BuscarAll();
	for (int i = 0; i < ListPersona->Count; i++) {
		//Se encuentra el codigo
		if (ListPersona[i]->GetDNI() == DNI) {
			ListPersona->RemoveAt(i);
		}
	}
	EscribirArchivo(ListPersona);
};
void PersonaController::AgregarPersona(Persona^ ObjPersona) {
	List<Persona^>^ ListPersonas = BuscarAll();
	ListPersonas->Add(ObjPersona);
	EscribirArchivo(ListPersonas);
};

//Para la pantalla de ingreso
void PersonaController::BuscarPersonaDNI(Persona^ *ObjPersona, String^ DNI, bool *Registrado) {
	List<Persona^>^ ListPersonas = BuscarAll();
	for (int i = 0; i < ListPersonas->Count; i++) {
		if (ListPersonas[i]->GetDNI() == DNI) {
			*ObjPersona = ListPersonas[i];
			*Registrado = true;
			break;
		}
		else {
			*Registrado = false;
		}

	}
}
void PersonaController::VerificarPersona(String^ DNI, String^* Contrasena, String^ *Tipo, bool* Registrado) {
	List<Persona^>^ ListPersonas = BuscarAll();
	for (int i = 0; i < ListPersonas->Count; i++) {
		if (ListPersonas[i]->GetDNI() == DNI) {
			*Registrado = true;
			*Contrasena = ListPersonas[i]->GetContrasena();
			*Tipo = ListPersonas[i]->GetTipo();
			break;
		}
		else {
			*Registrado = false;
		}
	}
}
