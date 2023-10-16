#pragma once
#include "FrmPantallaAdministrador.h"
#include "AdministradorEstadistica.h"
#include "PPAdministradorGestionReportesPasajeros.h"
#include "AdministradorInformesEconomicos.h"
#include "PPAdministradorMantenimientoBuses.h"
#include "MenuTarjeta.h"
namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PantallaPrincipalAdministrador
	/// </summary>
	public ref class PantallaPrincipalAdministrador : public System::Windows::Forms::Form
	{
	public:
		PantallaPrincipalAdministrador(void)
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
		~PantallaPrincipalAdministrador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_OPCIONES;
	private: System::Windows::Forms::Button^ B_GESTION_REPORTES_PARADEROS;
	protected:

	private: System::Windows::Forms::Button^ B_REPORTES_ECONOMICOS;
	private: System::Windows::Forms::Button^ B_ESTADISTICAS;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ B_TARJETA;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ B_CONTRATO_CONDUCTOR;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ B_MATENIMIENTO_BUSES;
	private: System::Windows::Forms::PictureBox^ pictureBox6;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ button1;




	protected:










	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PantallaPrincipalAdministrador::typeid));
			this->GB_OPCIONES = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->B_CONTRATO_CONDUCTOR = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->B_MATENIMIENTO_BUSES = (gcnew System::Windows::Forms::Button());
			this->B_GESTION_REPORTES_PARADEROS = (gcnew System::Windows::Forms::Button());
			this->B_REPORTES_ECONOMICOS = (gcnew System::Windows::Forms::Button());
			this->B_ESTADISTICAS = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->B_TARJETA = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GB_OPCIONES->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// GB_OPCIONES
			// 
			this->GB_OPCIONES->BackColor = System::Drawing::Color::Transparent;
			this->GB_OPCIONES->Controls->Add(this->pictureBox7);
			this->GB_OPCIONES->Controls->Add(this->button1);
			this->GB_OPCIONES->Controls->Add(this->Logo);
			this->GB_OPCIONES->Controls->Add(this->pictureBox6);
			this->GB_OPCIONES->Controls->Add(this->B_CONTRATO_CONDUCTOR);
			this->GB_OPCIONES->Controls->Add(this->pictureBox5);
			this->GB_OPCIONES->Controls->Add(this->B_MATENIMIENTO_BUSES);
			this->GB_OPCIONES->Controls->Add(this->B_GESTION_REPORTES_PARADEROS);
			this->GB_OPCIONES->Controls->Add(this->B_REPORTES_ECONOMICOS);
			this->GB_OPCIONES->Controls->Add(this->B_ESTADISTICAS);
			this->GB_OPCIONES->Controls->Add(this->pictureBox4);
			this->GB_OPCIONES->Controls->Add(this->pictureBox3);
			this->GB_OPCIONES->Controls->Add(this->pictureBox2);
			this->GB_OPCIONES->Controls->Add(this->B_TARJETA);
			this->GB_OPCIONES->Controls->Add(this->pictureBox1);
			this->GB_OPCIONES->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->GB_OPCIONES->Location = System::Drawing::Point(37, 64);
			this->GB_OPCIONES->Margin = System::Windows::Forms::Padding(4);
			this->GB_OPCIONES->Name = L"GB_OPCIONES";
			this->GB_OPCIONES->Padding = System::Windows::Forms::Padding(4);
			this->GB_OPCIONES->Size = System::Drawing::Size(1097, 662);
			this->GB_OPCIONES->TabIndex = 1;
			this->GB_OPCIONES->TabStop = false;
			this->GB_OPCIONES->Text = L"Menu de Opciones";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(92, 592);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(69, 45);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 16;
			this->pictureBox7->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(196, 592);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(396, 46);
			this->button1->TabIndex = 15;
			this->button1->Text = L"MANTENIMIENTOS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PantallaPrincipalAdministrador::button1_Click);
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::SystemColors::Control;
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Logo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(664, 159);
			this->Logo->Margin = System::Windows::Forms::Padding(1);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(319, 276);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 14;
			this->Logo->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(92, 514);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(69, 45);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 13;
			this->pictureBox6->TabStop = false;
			// 
			// B_CONTRATO_CONDUCTOR
			// 
			this->B_CONTRATO_CONDUCTOR->BackColor = System::Drawing::Color::DarkBlue;
			this->B_CONTRATO_CONDUCTOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->B_CONTRATO_CONDUCTOR->Location = System::Drawing::Point(196, 514);
			this->B_CONTRATO_CONDUCTOR->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B_CONTRATO_CONDUCTOR->Name = L"B_CONTRATO_CONDUCTOR";
			this->B_CONTRATO_CONDUCTOR->Size = System::Drawing::Size(396, 46);
			this->B_CONTRATO_CONDUCTOR->TabIndex = 12;
			this->B_CONTRATO_CONDUCTOR->Text = L"CONTRATO DE CONDUCTOR";
			this->B_CONTRATO_CONDUCTOR->UseVisualStyleBackColor = false;
			this->B_CONTRATO_CONDUCTOR->Click += gcnew System::EventHandler(this, &PantallaPrincipalAdministrador::B_CONTRATO_CONDUCTOR_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(92, 433);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(69, 45);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			// 
			// B_MATENIMIENTO_BUSES
			// 
			this->B_MATENIMIENTO_BUSES->BackColor = System::Drawing::Color::DarkBlue;
			this->B_MATENIMIENTO_BUSES->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->B_MATENIMIENTO_BUSES->Location = System::Drawing::Point(196, 433);
			this->B_MATENIMIENTO_BUSES->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B_MATENIMIENTO_BUSES->Name = L"B_MATENIMIENTO_BUSES";
			this->B_MATENIMIENTO_BUSES->Size = System::Drawing::Size(387, 46);
			this->B_MATENIMIENTO_BUSES->TabIndex = 10;
			this->B_MATENIMIENTO_BUSES->Text = L"MANT. BUSES";
			this->B_MATENIMIENTO_BUSES->UseVisualStyleBackColor = false;
			this->B_MATENIMIENTO_BUSES->Click += gcnew System::EventHandler(this, &PantallaPrincipalAdministrador::B_MATENIMIENTO_BUSES_Click);
			// 
			// B_GESTION_REPORTES_PARADEROS
			// 
			this->B_GESTION_REPORTES_PARADEROS->BackColor = System::Drawing::Color::DarkBlue;
			this->B_GESTION_REPORTES_PARADEROS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->B_GESTION_REPORTES_PARADEROS->ForeColor = System::Drawing::Color::White;
			this->B_GESTION_REPORTES_PARADEROS->Location = System::Drawing::Point(196, 345);
			this->B_GESTION_REPORTES_PARADEROS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B_GESTION_REPORTES_PARADEROS->Name = L"B_GESTION_REPORTES_PARADEROS";
			this->B_GESTION_REPORTES_PARADEROS->Size = System::Drawing::Size(387, 46);
			this->B_GESTION_REPORTES_PARADEROS->TabIndex = 9;
			this->B_GESTION_REPORTES_PARADEROS->Text = L"REPORTES DE PASAJEROS";
			this->B_GESTION_REPORTES_PARADEROS->UseVisualStyleBackColor = false;
			this->B_GESTION_REPORTES_PARADEROS->Click += gcnew System::EventHandler(this, &PantallaPrincipalAdministrador::B_GESTION_REPORTES_PARADEROS_Click);
			// 
			// B_REPORTES_ECONOMICOS
			// 
			this->B_REPORTES_ECONOMICOS->BackColor = System::Drawing::Color::DarkBlue;
			this->B_REPORTES_ECONOMICOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->B_REPORTES_ECONOMICOS->ForeColor = System::Drawing::Color::White;
			this->B_REPORTES_ECONOMICOS->Location = System::Drawing::Point(196, 252);
			this->B_REPORTES_ECONOMICOS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B_REPORTES_ECONOMICOS->Name = L"B_REPORTES_ECONOMICOS";
			this->B_REPORTES_ECONOMICOS->Size = System::Drawing::Size(387, 46);
			this->B_REPORTES_ECONOMICOS->TabIndex = 8;
			this->B_REPORTES_ECONOMICOS->Text = L"REPORTES ECONÓMICOS";
			this->B_REPORTES_ECONOMICOS->UseVisualStyleBackColor = false;
			this->B_REPORTES_ECONOMICOS->Click += gcnew System::EventHandler(this, &PantallaPrincipalAdministrador::B_REPORTES_ECONOMICOS_Click);
			// 
			// B_ESTADISTICAS
			// 
			this->B_ESTADISTICAS->BackColor = System::Drawing::Color::DarkBlue;
			this->B_ESTADISTICAS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_ESTADISTICAS->ForeColor = System::Drawing::Color::White;
			this->B_ESTADISTICAS->Location = System::Drawing::Point(196, 159);
			this->B_ESTADISTICAS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B_ESTADISTICAS->Name = L"B_ESTADISTICAS";
			this->B_ESTADISTICAS->Size = System::Drawing::Size(387, 46);
			this->B_ESTADISTICAS->TabIndex = 7;
			this->B_ESTADISTICAS->Text = L"ESTADÍSTICAS";
			this->B_ESTADISTICAS->UseVisualStyleBackColor = false;
			this->B_ESTADISTICAS->Click += gcnew System::EventHandler(this, &PantallaPrincipalAdministrador::B_ESTADISTICAS_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(92, 345);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(69, 45);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(92, 252);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(69, 45);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(92, 159);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(69, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// B_TARJETA
			// 
			this->B_TARJETA->BackColor = System::Drawing::Color::DarkBlue;
			this->B_TARJETA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_TARJETA->ForeColor = System::Drawing::Color::White;
			this->B_TARJETA->Location = System::Drawing::Point(196, 63);
			this->B_TARJETA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B_TARJETA->Name = L"B_TARJETA";
			this->B_TARJETA->Size = System::Drawing::Size(387, 46);
			this->B_TARJETA->TabIndex = 1;
			this->B_TARJETA->Text = L"TARJETA";
			this->B_TARJETA->UseVisualStyleBackColor = false;
			this->B_TARJETA->Click += gcnew System::EventHandler(this, &PantallaPrincipalAdministrador::B_TARJETA_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(92, 63);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(555, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"BIENVENIDO !";
			// 
			// PantallaPrincipalAdministrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1180, 866);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->GB_OPCIONES);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PantallaPrincipalAdministrador";
			this->Text = L"PantallaPrincipalAdministrador";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &PantallaPrincipalAdministrador::PantallaPrincipalAdministrador_Load);
			this->GB_OPCIONES->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PantallaPrincipalAdministrador_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmPantallaAdministrador^ ObjFrmPantallaAdministrador = gcnew FrmPantallaAdministrador();
		this->Hide();
		ObjFrmPantallaAdministrador->ShowDialog();
		this->Show();

	}
private: System::Void B_CONTRATO_CONDUCTOR_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void B_TARJETA_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuTarjeta^ VentanaCrearCuenta = gcnew MenuTarjeta();
	VentanaCrearCuenta->ShowDialog();
}
private: System::Void B_ESTADISTICAS_Click(System::Object^ sender, System::EventArgs^ e) {
	AdministradorEstadistica^ ObjFrmPantallaAdministrador = gcnew AdministradorEstadistica();
	ObjFrmPantallaAdministrador->ShowDialog();
}
private: System::Void B_REPORTES_ECONOMICOS_Click(System::Object^ sender, System::EventArgs^ e) {
	AdministradorInformesEconomicos^ VentanaCrearCuenta = gcnew AdministradorInformesEconomicos();
	VentanaCrearCuenta->ShowDialog();
}
private: System::Void B_GESTION_REPORTES_PARADEROS_Click(System::Object^ sender, System::EventArgs^ e) {
	PPAdministradorGestionReportesPasajeros^ VentanaCrearCuenta = gcnew PPAdministradorGestionReportesPasajeros();
	VentanaCrearCuenta->ShowDialog();
}
private: System::Void B_MATENIMIENTO_BUSES_Click(System::Object^ sender, System::EventArgs^ e) {
	PPAdministradorMantenimientoBuses^ VentanaCrearCuenta = gcnew PPAdministradorMantenimientoBuses();
	VentanaCrearCuenta->ShowDialog();
}
};
}
