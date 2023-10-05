#pragma once
#include "MenuTarjeta.h"
#include "Pantalla_Ver_Atajo.h"
#include "Pantalla_Ver_Ruta.h"
#include "Pantalla_Horario_Conductor.h"
namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoModel;


	/// <summary>
	/// Resumen de PantallaPrincipalConductor
	/// </summary>
	public ref class PantallaPrincipalConductor : public System::Windows::Forms::Form
	{
	public:
		PantallaPrincipalConductor(void)
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
		~PantallaPrincipalConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_OPCIONES;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ B_TARJETA;
	private: System::Windows::Forms::Button^ B_ATAJOS;



	private: System::Windows::Forms::Button^ B_RUTA;

	private: System::Windows::Forms::Button^ B_HORARIO_SEMANAL;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PantallaPrincipalConductor::typeid));
			this->GB_OPCIONES = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->B_ATAJOS = (gcnew System::Windows::Forms::Button());
			this->B_RUTA = (gcnew System::Windows::Forms::Button());
			this->B_HORARIO_SEMANAL = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->B_TARJETA = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GB_OPCIONES->SuspendLayout();
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
			this->GB_OPCIONES->Controls->Add(this->pictureBox5);
			this->GB_OPCIONES->Controls->Add(this->B_ATAJOS);
			this->GB_OPCIONES->Controls->Add(this->B_RUTA);
			this->GB_OPCIONES->Controls->Add(this->B_HORARIO_SEMANAL);
			this->GB_OPCIONES->Controls->Add(this->pictureBox4);
			this->GB_OPCIONES->Controls->Add(this->pictureBox3);
			this->GB_OPCIONES->Controls->Add(this->pictureBox2);
			this->GB_OPCIONES->Controls->Add(this->B_TARJETA);
			this->GB_OPCIONES->Controls->Add(this->pictureBox1);
			this->GB_OPCIONES->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->GB_OPCIONES->Location = System::Drawing::Point(13, 13);
			this->GB_OPCIONES->Margin = System::Windows::Forms::Padding(4);
			this->GB_OPCIONES->Name = L"GB_OPCIONES";
			this->GB_OPCIONES->Padding = System::Windows::Forms::Padding(4);
			this->GB_OPCIONES->Size = System::Drawing::Size(1257, 647);
			this->GB_OPCIONES->TabIndex = 0;
			this->GB_OPCIONES->TabStop = false;
			this->GB_OPCIONES->Text = L"Menu de Opciones";
			this->GB_OPCIONES->Enter += gcnew System::EventHandler(this, &PantallaPrincipalConductor::groupBox1_Enter);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(620, 146);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(336, 305);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// B_ATAJOS
			// 
			this->B_ATAJOS->BackColor = System::Drawing::Color::DarkBlue;
			this->B_ATAJOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_ATAJOS->ForeColor = System::Drawing::Color::White;
			this->B_ATAJOS->Location = System::Drawing::Point(196, 389);
			this->B_ATAJOS->Name = L"B_ATAJOS";
			this->B_ATAJOS->Size = System::Drawing::Size(249, 45);
			this->B_ATAJOS->TabIndex = 9;
			this->B_ATAJOS->Text = L"ATAJOS";
			this->B_ATAJOS->UseVisualStyleBackColor = false;
			this->B_ATAJOS->Click += gcnew System::EventHandler(this, &PantallaPrincipalConductor::button4_Click);
			// 
			// B_RUTA
			// 
			this->B_RUTA->BackColor = System::Drawing::Color::DarkBlue;
			this->B_RUTA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_RUTA->ForeColor = System::Drawing::Color::White;
			this->B_RUTA->Location = System::Drawing::Point(196, 300);
			this->B_RUTA->Name = L"B_RUTA";
			this->B_RUTA->Size = System::Drawing::Size(249, 45);
			this->B_RUTA->TabIndex = 8;
			this->B_RUTA->Text = L"RUTAS";
			this->B_RUTA->UseVisualStyleBackColor = false;
			this->B_RUTA->Click += gcnew System::EventHandler(this, &PantallaPrincipalConductor::B_RUTA_Click);
			// 
			// B_HORARIO_SEMANAL
			// 
			this->B_HORARIO_SEMANAL->BackColor = System::Drawing::Color::DarkBlue;
			this->B_HORARIO_SEMANAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_HORARIO_SEMANAL->ForeColor = System::Drawing::Color::White;
			this->B_HORARIO_SEMANAL->Location = System::Drawing::Point(196, 207);
			this->B_HORARIO_SEMANAL->Name = L"B_HORARIO_SEMANAL";
			this->B_HORARIO_SEMANAL->Size = System::Drawing::Size(249, 45);
			this->B_HORARIO_SEMANAL->TabIndex = 7;
			this->B_HORARIO_SEMANAL->Text = L"HORARIO SEMANAL";
			this->B_HORARIO_SEMANAL->UseVisualStyleBackColor = false;
			this->B_HORARIO_SEMANAL->Click += gcnew System::EventHandler(this, &PantallaPrincipalConductor::B_HORARIO_SEMANAL_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(92, 389);
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
			this->pictureBox3->Location = System::Drawing::Point(92, 300);
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
			this->pictureBox2->Location = System::Drawing::Point(92, 207);
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
			this->B_TARJETA->Location = System::Drawing::Point(196, 114);
			this->B_TARJETA->Name = L"B_TARJETA";
			this->B_TARJETA->Size = System::Drawing::Size(249, 45);
			this->B_TARJETA->TabIndex = 1;
			this->B_TARJETA->Text = L"TARJETA";
			this->B_TARJETA->UseVisualStyleBackColor = false;
			this->B_TARJETA->Click += gcnew System::EventHandler(this, &PantallaPrincipalConductor::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(92, 114);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// PantallaPrincipalConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1279, 677);
			this->Controls->Add(this->GB_OPCIONES);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PantallaPrincipalConductor";
			this->Text = L"PantallaPrincipalConductor";
			this->Load += gcnew System::EventHandler(this, &PantallaPrincipalConductor::PantallaPrincipalConductor_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &PantallaPrincipalConductor::PantallaPrincipalConductor_SizeChanged);
			this->GB_OPCIONES->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Datos = ((this->ClientSize.Width) - (this->GB_OPCIONES->Width)) / 2;

		this->GB_OPCIONES->Location = System::Drawing::Point(PosXGB_Datos, 25);

	};
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MenuTarjeta^ VentanaCrearCuenta = gcnew MenuTarjeta();
		VentanaCrearCuenta->ShowDialog();
		this->Show();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Pantalla_Ver_Atajo^ VentanaCrearCuenta = gcnew	Pantalla_Ver_Atajo();
	VentanaCrearCuenta->ShowDialog();
	this->Show();
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void B_RUTA_Click(System::Object^ sender, System::EventArgs^ e) {
	Pantalla_Ver_Ruta^ VentanaCrearCuenta = gcnew	Pantalla_Ver_Ruta();
	VentanaCrearCuenta->ShowDialog();
	this->Show();
}
private: System::Void PantallaPrincipalConductor_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &PantallaPrincipalConductor::PantallaPrincipalConductor_SizeChanged));
	CentrarForm();
}
private: System::Void PantallaPrincipalConductor_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
private: System::Void B_HORARIO_SEMANAL_Click(System::Object^ sender, System::EventArgs^ e) {
	Pantalla_Horario_Conductor^ VentanaCrearCuenta = gcnew	Pantalla_Horario_Conductor();
	VentanaCrearCuenta->ShowDialog();
	this->Show();
}

};
}
