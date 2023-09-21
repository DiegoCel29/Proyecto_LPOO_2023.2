#pragma once
#include "FrmMantenimientoBuzonSugerencias.h"
#include "FrmMantenimientoPromociones.h"
#include "FrmMantenimientoTarjeta.h"
#include "FrmMantenimientoEmpleado.h"
#include "FrmMantenimientoPersona.h"

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
	private: System::Windows::Forms::ToolStripMenuItem^ personasToolStripMenuItem;








	private: System::Windows::Forms::ToolStripMenuItem^ recorridosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ informesEconomicosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medidasEstadisticasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ promocionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atajosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ autobusesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ emergenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rutasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paraderosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ situacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sugerenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ empleadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ conductoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasajerosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tarjetasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viajesToolStripMenuItem;



	protected:











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
			this->gestionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informesEconomicosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medidasEstadisticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->conductoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasajerosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tarjetasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viajesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promocionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recorridosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atajosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autobusesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->emergenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rutasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paraderosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->situacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sugerenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->gestionToolStripMenuItem,
					this->informesEconomicosToolStripMenuItem, this->medidasEstadisticasToolStripMenuItem, this->personasToolStripMenuItem, this->promocionesToolStripMenuItem,
					this->recorridosToolStripMenuItem, this->sugerenciasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(769, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// gestionToolStripMenuItem
			// 
			this->gestionToolStripMenuItem->Name = L"gestionToolStripMenuItem";
			this->gestionToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->gestionToolStripMenuItem->Text = L"Gestion";
			// 
			// informesEconomicosToolStripMenuItem
			// 
			this->informesEconomicosToolStripMenuItem->Name = L"informesEconomicosToolStripMenuItem";
			this->informesEconomicosToolStripMenuItem->Size = System::Drawing::Size(134, 20);
			this->informesEconomicosToolStripMenuItem->Text = L"Informes Economicos";
			// 
			// medidasEstadisticasToolStripMenuItem
			// 
			this->medidasEstadisticasToolStripMenuItem->Name = L"medidasEstadisticasToolStripMenuItem";
			this->medidasEstadisticasToolStripMenuItem->Size = System::Drawing::Size(127, 20);
			this->medidasEstadisticasToolStripMenuItem->Text = L"Medidas Estadisticas";
			// 
			// personasToolStripMenuItem
			// 
			this->personasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->empleadosToolStripMenuItem,
					this->pasajerosToolStripMenuItem
			});
			this->personasToolStripMenuItem->Name = L"personasToolStripMenuItem";
			this->personasToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->personasToolStripMenuItem->Text = L"Personas";
			this->personasToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::personasToolStripMenuItem_Click);
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->administradoresToolStripMenuItem,
					this->conductoresToolStripMenuItem
			});
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			this->empleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::empleadosToolStripMenuItem_Click);
			// 
			// administradoresToolStripMenuItem
			// 
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->administradoresToolStripMenuItem->Text = L"Administradores";
			// 
			// conductoresToolStripMenuItem
			// 
			this->conductoresToolStripMenuItem->Name = L"conductoresToolStripMenuItem";
			this->conductoresToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->conductoresToolStripMenuItem->Text = L"Conductores";
			// 
			// pasajerosToolStripMenuItem
			// 
			this->pasajerosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tarjetasToolStripMenuItem,
					this->viajesToolStripMenuItem
			});
			this->pasajerosToolStripMenuItem->Name = L"pasajerosToolStripMenuItem";
			this->pasajerosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->pasajerosToolStripMenuItem->Text = L"Pasajeros";
			// 
			// tarjetasToolStripMenuItem
			// 
			this->tarjetasToolStripMenuItem->Name = L"tarjetasToolStripMenuItem";
			this->tarjetasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->tarjetasToolStripMenuItem->Text = L"Tarjetas";
			this->tarjetasToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::tarjetasToolStripMenuItem_Click_1);
			// 
			// viajesToolStripMenuItem
			// 
			this->viajesToolStripMenuItem->Name = L"viajesToolStripMenuItem";
			this->viajesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->viajesToolStripMenuItem->Text = L"Viajes";
			// 
			// promocionesToolStripMenuItem
			// 
			this->promocionesToolStripMenuItem->Name = L"promocionesToolStripMenuItem";
			this->promocionesToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->promocionesToolStripMenuItem->Text = L"Promociones";
			this->promocionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::promocionesToolStripMenuItem_Click);
			// 
			// recorridosToolStripMenuItem
			// 
			this->recorridosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->atajosToolStripMenuItem,
					this->autobusesToolStripMenuItem, this->rutasToolStripMenuItem, this->situacionToolStripMenuItem
			});
			this->recorridosToolStripMenuItem->Name = L"recorridosToolStripMenuItem";
			this->recorridosToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->recorridosToolStripMenuItem->Text = L"Recorridos";
			// 
			// atajosToolStripMenuItem
			// 
			this->atajosToolStripMenuItem->Name = L"atajosToolStripMenuItem";
			this->atajosToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->atajosToolStripMenuItem->Text = L"Atajos";
			// 
			// autobusesToolStripMenuItem
			// 
			this->autobusesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->emergenciasToolStripMenuItem,
					this->mantenimientosToolStripMenuItem
			});
			this->autobusesToolStripMenuItem->Name = L"autobusesToolStripMenuItem";
			this->autobusesToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->autobusesToolStripMenuItem->Text = L"Autobuses";
			// 
			// emergenciasToolStripMenuItem
			// 
			this->emergenciasToolStripMenuItem->Name = L"emergenciasToolStripMenuItem";
			this->emergenciasToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->emergenciasToolStripMenuItem->Text = L"Emergencias";
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			// 
			// rutasToolStripMenuItem
			// 
			this->rutasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->paraderosToolStripMenuItem });
			this->rutasToolStripMenuItem->Name = L"rutasToolStripMenuItem";
			this->rutasToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->rutasToolStripMenuItem->Text = L"Rutas";
			// 
			// paraderosToolStripMenuItem
			// 
			this->paraderosToolStripMenuItem->Name = L"paraderosToolStripMenuItem";
			this->paraderosToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->paraderosToolStripMenuItem->Text = L"Paraderos";
			// 
			// situacionToolStripMenuItem
			// 
			this->situacionToolStripMenuItem->Name = L"situacionToolStripMenuItem";
			this->situacionToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->situacionToolStripMenuItem->Text = L"Situacion";
			// 
			// sugerenciasToolStripMenuItem
			// 
			this->sugerenciasToolStripMenuItem->Name = L"sugerenciasToolStripMenuItem";
			this->sugerenciasToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->sugerenciasToolStripMenuItem->Text = L"Sugerencias";
			this->sugerenciasToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmPantallaAdministrador::sugerenciasToolStripMenuItem_Click);
			// 
			// FrmPantallaAdministrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(769, 428);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FrmPantallaAdministrador";
			this->Text = L"FrmPantallaAdministrador";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void rutasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void promocionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmMantenimientoPromociones^ VentanaMantenimientoPromociones = gcnew FrmMantenimientoPromociones();
		VentanaMantenimientoPromociones->ShowDialog();
	}
	private: System::Void sugerenciasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmMantenimientoBuzonSugerencias^ VentanaMantenimientoBuzonSugerencias = gcnew FrmMantenimientoBuzonSugerencias();
		VentanaMantenimientoBuzonSugerencias->ShowDialog();
	}
	private: System::Void tarjetasToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		FrmMantenimientoTarjeta^ VentanaMantenimientoTarjeta = gcnew FrmMantenimientoTarjeta();
		VentanaMantenimientoTarjeta->ShowDialog();
	}
	private: System::Void empleadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmMantenimientoEmpleado^ VentanaMantenimientoEmpleado = gcnew FrmMantenimientoEmpleado();
		VentanaMantenimientoEmpleado->ShowDialog();
	}
	private: System::Void personasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmMantenimientoPersona^ VentanaMantenimientoPersona = gcnew FrmMantenimientoPersona();
		VentanaMantenimientoPersona->ShowDialog();
	}
};
}
