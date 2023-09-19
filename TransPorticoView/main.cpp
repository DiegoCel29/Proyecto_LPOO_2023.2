#include "FrmPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace TransPorticoView;

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FrmPrincipal Ventana;
	Application::Run(% Ventana);
}