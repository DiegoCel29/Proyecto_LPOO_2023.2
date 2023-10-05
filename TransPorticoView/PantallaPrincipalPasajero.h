#pragma once
#include "MenuTarjeta.h"
#include "CrearReporte.h"
#include "VerBuses.h"
#include "Promociones.h"
#include "Historial_Ruta.h"

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PantallaPrincipalPasajero
	/// </summary>
	public ref class PantallaPrincipalPasajero : public System::Windows::Forms::Form
	{
	public:
		PantallaPrincipalPasajero(void)
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
		~PantallaPrincipalPasajero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ B_ATAJOS;
	private: System::Windows::Forms::Button^ B_TARJETA;
	private: System::Windows::Forms::Button^ B_RUTA;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ B_HORARIO_SEMANAL;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PantallaPrincipalPasajero::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->B_ATAJOS = (gcnew System::Windows::Forms::Button());
			this->B_TARJETA = (gcnew System::Windows::Forms::Button());
			this->B_RUTA = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->B_HORARIO_SEMANAL = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->Logo);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->pictureBox5);
			this->groupBox1->Controls->Add(this->B_ATAJOS);
			this->groupBox1->Controls->Add(this->B_TARJETA);
			this->groupBox1->Controls->Add(this->B_RUTA);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->B_HORARIO_SEMANAL);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->pictureBox4);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBox1->Location = System::Drawing::Point(69, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(866, 682);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Menú de Opciones";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &PantallaPrincipalPasajero::groupBox1_Enter);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkBlue;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(727, 631);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 45);
			this->button2->TabIndex = 20;
			this->button2->Text = L"SALIR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &PantallaPrincipalPasajero::button2_Click);
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::SystemColors::Control;
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Logo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(729, 10);
			this->Logo->Margin = System::Windows::Forms::Padding(1);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(137, 90);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 10;
			this->Logo->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkBlue;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(346, 526);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(249, 45);
			this->button1->TabIndex = 19;
			this->button1->Text = L"PROMOCIONES";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PantallaPrincipalPasajero::button1_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(242, 526);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(69, 45);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 18;
			this->pictureBox5->TabStop = false;
			// 
			// B_ATAJOS
			// 
			this->B_ATAJOS->BackColor = System::Drawing::Color::DarkBlue;
			this->B_ATAJOS->ForeColor = System::Drawing::Color::White;
			this->B_ATAJOS->Location = System::Drawing::Point(346, 423);
			this->B_ATAJOS->Name = L"B_ATAJOS";
			this->B_ATAJOS->Size = System::Drawing::Size(249, 45);
			this->B_ATAJOS->TabIndex = 17;
			this->B_ATAJOS->Text = L"VER BUSES";
			this->B_ATAJOS->UseVisualStyleBackColor = false;
			this->B_ATAJOS->Click += gcnew System::EventHandler(this, &PantallaPrincipalPasajero::B_ATAJOS_Click);
			// 
			// B_TARJETA
			// 
			this->B_TARJETA->BackColor = System::Drawing::Color::DarkBlue;
			this->B_TARJETA->ForeColor = System::Drawing::Color::White;
			this->B_TARJETA->Location = System::Drawing::Point(346, 148);
			this->B_TARJETA->Name = L"B_TARJETA";
			this->B_TARJETA->Size = System::Drawing::Size(249, 45);
			this->B_TARJETA->TabIndex = 11;
			this->B_TARJETA->Text = L"TARJETA";
			this->B_TARJETA->UseVisualStyleBackColor = false;
			this->B_TARJETA->Click += gcnew System::EventHandler(this, &PantallaPrincipalPasajero::B_TARJETA_Click);
			// 
			// B_RUTA
			// 
			this->B_RUTA->BackColor = System::Drawing::Color::DarkBlue;
			this->B_RUTA->ForeColor = System::Drawing::Color::White;
			this->B_RUTA->Location = System::Drawing::Point(346, 334);
			this->B_RUTA->Name = L"B_RUTA";
			this->B_RUTA->Size = System::Drawing::Size(249, 45);
			this->B_RUTA->TabIndex = 16;
			this->B_RUTA->Text = L"CREAR REPORTE";
			this->B_RUTA->UseVisualStyleBackColor = false;
			this->B_RUTA->Click += gcnew System::EventHandler(this, &PantallaPrincipalPasajero::B_RUTA_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(242, 148);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// B_HORARIO_SEMANAL
			// 
			this->B_HORARIO_SEMANAL->BackColor = System::Drawing::Color::DarkBlue;
			this->B_HORARIO_SEMANAL->ForeColor = System::Drawing::Color::White;
			this->B_HORARIO_SEMANAL->Location = System::Drawing::Point(346, 241);
			this->B_HORARIO_SEMANAL->Name = L"B_HORARIO_SEMANAL";
			this->B_HORARIO_SEMANAL->Size = System::Drawing::Size(249, 45);
			this->B_HORARIO_SEMANAL->TabIndex = 15;
			this->B_HORARIO_SEMANAL->Text = L"HISTORIAL";
			this->B_HORARIO_SEMANAL->UseVisualStyleBackColor = false;
			this->B_HORARIO_SEMANAL->Click += gcnew System::EventHandler(this, &PantallaPrincipalPasajero::B_HORARIO_SEMANAL_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(242, 241);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(69, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(242, 423);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(69, 45);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(242, 334);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(69, 45);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// PantallaPrincipalPasajero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(988, 741);
			this->Controls->Add(this->groupBox1);
			this->Name = L"PantallaPrincipalPasajero";
			this->Text = L"PantallaPrincipalPasajero";
			this->Load += gcnew System::EventHandler(this, &PantallaPrincipalPasajero::PantallaPrincipalPasajero_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &PantallaPrincipalPasajero::PantallaPrincipalPasajero_SizeChanged);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PantallaPrincipalPasajero_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &PantallaPrincipalPasajero::PantallaPrincipalPasajero_SizeChanged));
		CentrarForm();
	}
	private: System::Void PantallaPrincipalPasajero_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void CentrarForm() {
		int CentroX = (this->ClientSize.Width - this->groupBox1->Width) / 2;
		int CentroY = (this->ClientSize.Height - this->groupBox1->Height) / 2;
		this->groupBox1->Location = System::Drawing::Point(CentroX, CentroY);
	}
	private: System::Void B_TARJETA_Click(System::Object^ sender, System::EventArgs^ e) {
		MenuTarjeta^ VentanaMenuTarjeta = gcnew MenuTarjeta();
		VentanaMenuTarjeta->ShowDialog();
	}

private: System::Void B_RUTA_Click(System::Object^ sender, System::EventArgs^ e) {
	CrearReporte^ VentanaCrearReporte = gcnew CrearReporte();
	VentanaCrearReporte->ShowDialog();
}
private: System::Void B_ATAJOS_Click(System::Object^ sender, System::EventArgs^ e) {
	VerBuses^ VentanaVerBuses = gcnew VerBuses();
	VentanaVerBuses->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Promociones^ VentanaPromociones = gcnew Promociones();
	VentanaPromociones->ShowDialog();
}
private: System::Void B_HORARIO_SEMANAL_Click(System::Object^ sender, System::EventArgs^ e) {
	Historial_Ruta^ VentanaHistorial_Ruta = gcnew Historial_Ruta();
	VentanaHistorial_Ruta->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
