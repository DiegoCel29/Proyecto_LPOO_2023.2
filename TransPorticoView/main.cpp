#include "Pantalla_Ver_Ruta.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace TransPorticoView;

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Pantalla_Ver_Ruta Ventana;
	Application::Run(% Ventana);
}