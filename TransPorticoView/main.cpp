#include "PantallaIngreso.h"
#include "TarifarioMantenimiento.h"
#include "FrmMantenimientoPersona.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace TransPorticoView;

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TarifarioMantenimiento Ventana;
	Application::Run(% Ventana);
}