#include "Pantalla_Horario_Conductor.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace TransPorticoView;

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Pantalla_Horario_Conductor Ventana;
	Application::Run(% Ventana);
}