#include "TarjetaController.h"

using namespace TransPorticoController;
using namespace System::IO;

TarjetaController::TarjetaController() {

};

List<Tarjeta^>^ TarjetaController::BuscarTarjeta(String^ BuscarTitular) {

	List<Tarjeta^>^ ListTarjetaEncontradas = gcnew List<Tarjeta^>();

	array<String^>^ Lineas = File::ReadAllLines("Tarjetas.txt");

	String^ Separador = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ Linea in Lineas) {

		array<String^>^ Datos = Linea->Split(Separador->ToCharArray());

		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Titular = Datos[1];
		String^ Identificador = Datos[2];
		double Saldo = Convert::ToDouble(Datos[3]);

		if (Titular->Contains(BuscarTitular)) {
			Tarjeta^ ObjTarjeta = gcnew Tarjeta(Codigo, Saldo,Titular,Identificador);
			ListTarjetaEncontradas->Add(ObjTarjeta);
		}
	}
	return ListTarjetaEncontradas;

};