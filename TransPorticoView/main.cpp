#include "EmpleadoMantenimiento.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace TransPorticoView;

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	EmpleadoMantenimiento Ventana;
	Application::Run(% Ventana);
}