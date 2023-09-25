#include <iostream>
#include "InformeEconomicoController.h"

using namespace TransPorticoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


InformeEconomicoController::InformeEconomicoController() {

}

List<InformeEconomico^>^ InformeEconomicoController::BuscarInforme(String^ informes) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<InformeEconomico^>^ listaInformesEcontrados = gcnew List<InformeEconomico^>();
	array<String^>^ lineas = File::ReadAllLines("Lista_Informes.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaInformesEncontrados in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaInformesEncontrados->Split(separadores->ToCharArray());
		int Codigo = Convert::ToInt32(datos[0]);
		String^ anhio = datos[1];
		int Ingresos = Convert::ToInt32(datos[2]);
		int SalarioAdministrador = Convert::ToInt32(datos[3]);
		int SalarioConductor = Convert::ToInt32(datos[4]);
		int CostoMantenimientos = Convert::ToInt32(datos[5]);
		
		

		if (anhio->Contains(informes)) {
			InformeEconomico^ objInforme = gcnew InformeEconomico(Codigo, anhio, Ingresos, SalarioAdministrador, SalarioConductor, CostoMantenimientos);
			listaInformesEcontrados->Add(objInforme);
		}
	}
	return listaInformesEcontrados;
}