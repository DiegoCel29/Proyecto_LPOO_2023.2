#include "MantenimientoEmpleado.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace TransPorticoView;

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MantenimientoEmpleado Ventana;
	Application::Run(% Ventana);
}