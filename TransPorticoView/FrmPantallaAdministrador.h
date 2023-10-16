#pragma once
#include "PromocionesMantenimiento.h"
#include "MantenimientoMantenimiento.h"
#include "RutaMantenimiento.h"
#include "ParaderoMantenimiento.h"
#include "HorarioMantenimiento.h"
#include "AtajoMantenimiento.h"
#include "EmpleadoMantenimiento.h"
#include "TarifarioMantenimiento.h"
#include "PasajeroMantenimiento.h"
#include "AutobusMantenimiento.h"

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmPantallaAdministrador
	/// </summary>
	public ref class FrmPantallaAdministrador : public System::Windows::Forms::Form
	{
	public:
		FrmPantallaAdministrador(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmPantallaAdministrador()
		{
			if (components)
			{
				delete components;
			}
			
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ sugerenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paraderoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rutasToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ empleadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasajerosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ horarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ autobusesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ promocionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atajosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tarifarioToolStripMenuItem;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmPantallaAdministrador::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sugerenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paraderoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rutasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasajerosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->horarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autobusesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promocionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atajosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tarifarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->sugerenciasToolStripMenuItem,
					this->paraderoToolStripMenuItem, this->rutasToolStripMenuItem, this->empleadosToolStripMenuItem, this->pasajerosToolStripMenuItem,
					this->horarioToolStripMenuItem, this->autobusesToolStripMenuItem, this->promocionesToolStripMenuItem, this->atajosToolStripMenuItem,
					this->tarifarioToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1232, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// sugerenciasToolStripMenuItem
			// 
			this->sugerenciasToolStripMenuItem->Name = L"sugerenciasToolStripMenuItem";
			this->sugerenciasToolStripMenuItem->Size = System::Drawing::Size(14, 24);
			// 
			// paraderoToolStripMenuItem
			// 
			this->paraderoToolStripMenuItem->Name = L"paraderoToolStripMenuItem";
			this->paraderoToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->paraderoToolStripMenuItem->Text = L"Paradero";
			this->paraderoToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::paraderoToolStripMenuItem_Click);
			// 
			// rutasToolStripMenuItem
			// 
			this->rutasToolStripMenuItem->Name = L"rutasToolStripMenuItem";
			this->rutasToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->rutasToolStripMenuItem->Text = L"Rutas";
			this->rutasToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::rutasToolStripMenuItem_Click_2);
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(97, 24);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			this->empleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::empleadosToolStripMenuItem_Click);
			// 
			// pasajerosToolStripMenuItem
			// 
			this->pasajerosToolStripMenuItem->Name = L"pasajerosToolStripMenuItem";
			this->pasajerosToolStripMenuItem->Size = System::Drawing::Size(84, 24);
			this->pasajerosToolStripMenuItem->Text = L"Pasajeros";
			this->pasajerosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::pasajerosToolStripMenuItem_Click_1);
			// 
			// horarioToolStripMenuItem
			// 
			this->horarioToolStripMenuItem->Name = L"horarioToolStripMenuItem";
			this->horarioToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->horarioToolStripMenuItem->Text = L"Horario";
			this->horarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::horarioToolStripMenuItem_Click);
			// 
			// autobusesToolStripMenuItem
			// 
			this->autobusesToolStripMenuItem->Name = L"autobusesToolStripMenuItem";
			this->autobusesToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->autobusesToolStripMenuItem->Text = L"Autobuses";
			this->autobusesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::autobusesToolStripMenuItem_Click_1);
			// 
			// promocionesToolStripMenuItem
			// 
			this->promocionesToolStripMenuItem->Name = L"promocionesToolStripMenuItem";
			this->promocionesToolStripMenuItem->Size = System::Drawing::Size(109, 24);
			this->promocionesToolStripMenuItem->Text = L"Promociones";
			this->promocionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::promocionesToolStripMenuItem_Click_1);
			// 
			// atajosToolStripMenuItem
			// 
			this->atajosToolStripMenuItem->Name = L"atajosToolStripMenuItem";
			this->atajosToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->atajosToolStripMenuItem->Text = L"Atajos";
			this->atajosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::atajosToolStripMenuItem_Click_1);
			// 
			// tarifarioToolStripMenuItem
			// 
			this->tarifarioToolStripMenuItem->Name = L"tarifarioToolStripMenuItem";
			this->tarifarioToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->tarifarioToolStripMenuItem->Text = L"Tarifario";
			this->tarifarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::tarifarioToolStripMenuItem_Click);
			// 
			// FrmPantallaAdministrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1232, 527);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"FrmPantallaAdministrador";
			this->Text = L"FrmPantallaAdministrador";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FrmPantallaAdministrador::FrmPantallaAdministrador_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void paraderoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ParaderoMantenimiento^ VentanaMantenimientoParadero = gcnew ParaderoMantenimiento();
	VentanaMantenimientoParadero->ShowDialog();
}
private: System::Void rutasToolStripMenuItem_Click_2(System::Object^ sender, System::EventArgs^ e) {
	RutaMantenimiento^ VentanaMantenimientoRuta = gcnew RutaMantenimiento();
	VentanaMantenimientoRuta->ShowDialog();
}
private: System::Void empleadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EmpleadoMantenimiento^ VentanaEmpleadoMantenimiento = gcnew EmpleadoMantenimiento();
	VentanaEmpleadoMantenimiento->ShowDialog();
}
private: System::Void pasajerosToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	PasajeroMantenimiento^ VentanaPasajeroMantenimientos = gcnew PasajeroMantenimiento();
	VentanaPasajeroMantenimientos->ShowDialog();
}
private: System::Void horarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	HorarioMantenimiento^ VentanaMantenimientoHorario = gcnew HorarioMantenimiento();
	VentanaMantenimientoHorario->ShowDialog();
}
private: System::Void autobusesToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AutobusMantenimiento^ VentanaMantenimientoAutobus = gcnew AutobusMantenimiento();
	VentanaMantenimientoAutobus->ShowDialog();
}

private: System::Void promocionesToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	PromocionesMantenimiento^ VentanaPromocionesMantenimiento = gcnew PromocionesMantenimiento();
	VentanaPromocionesMantenimiento->ShowDialog();
}
private: System::Void atajosToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AtajoMantenimiento^ VentanaAtajoMantenimiento = gcnew AtajoMantenimiento();
	VentanaAtajoMantenimiento->ShowDialog();
}
private: System::Void tarifarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TarifarioMantenimiento^ VentanaTarifarioMantenimiento = gcnew TarifarioMantenimiento();
	VentanaTarifarioMantenimiento->ShowDialog();
}
private: System::Void FrmPantallaAdministrador_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
