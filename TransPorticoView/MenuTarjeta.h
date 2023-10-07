#pragma once
#include "RecargarTarjeta.h"
#include "TarifarioVer.h"
#include "SaldoPasajero.h"

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuTarjeta
	/// </summary>
	public ref class MenuTarjeta : public System::Windows::Forms::Form
	{
	public:
		MenuTarjeta(void)
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
		~MenuTarjeta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ Logo;



	private: System::Windows::Forms::Button^ B_TARJETA;
	private: System::Windows::Forms::Button^ B_RUTA;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ B_HORARIO_SEMANAL;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuTarjeta::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->B_TARJETA = (gcnew System::Windows::Forms::Button());
			this->B_RUTA = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->B_HORARIO_SEMANAL = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->Logo);
			this->groupBox1->Controls->Add(this->B_TARJETA);
			this->groupBox1->Controls->Add(this->B_RUTA);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->B_HORARIO_SEMANAL);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBox1->Location = System::Drawing::Point(38, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(631, 494);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Menú de Opciones";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkBlue;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(450, 436);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 45);
			this->button2->TabIndex = 20;
			this->button2->Text = L"SALIR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MenuTarjeta::button2_Click);
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::SystemColors::Control;
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Logo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(494, 13);
			this->Logo->Margin = System::Windows::Forms::Padding(1);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(137, 90);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 10;
			this->Logo->TabStop = false;
			// 
			// B_TARJETA
			// 
			this->B_TARJETA->BackColor = System::Drawing::Color::DarkBlue;
			this->B_TARJETA->ForeColor = System::Drawing::Color::White;
			this->B_TARJETA->Location = System::Drawing::Point(243, 151);
			this->B_TARJETA->Name = L"B_TARJETA";
			this->B_TARJETA->Size = System::Drawing::Size(249, 45);
			this->B_TARJETA->TabIndex = 11;
			this->B_TARJETA->Text = L"RECARGAR";
			this->B_TARJETA->UseVisualStyleBackColor = false;
			this->B_TARJETA->Click += gcnew System::EventHandler(this, &MenuTarjeta::B_TARJETA_Click);
			// 
			// B_RUTA
			// 
			this->B_RUTA->BackColor = System::Drawing::Color::DarkBlue;
			this->B_RUTA->ForeColor = System::Drawing::Color::White;
			this->B_RUTA->Location = System::Drawing::Point(243, 337);
			this->B_RUTA->Name = L"B_RUTA";
			this->B_RUTA->Size = System::Drawing::Size(249, 45);
			this->B_RUTA->TabIndex = 16;
			this->B_RUTA->Text = L"TARIFA";
			this->B_RUTA->UseVisualStyleBackColor = false;
			this->B_RUTA->Click += gcnew System::EventHandler(this, &MenuTarjeta::B_RUTA_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(139, 151);
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
			this->B_HORARIO_SEMANAL->Location = System::Drawing::Point(243, 244);
			this->B_HORARIO_SEMANAL->Name = L"B_HORARIO_SEMANAL";
			this->B_HORARIO_SEMANAL->Size = System::Drawing::Size(249, 45);
			this->B_HORARIO_SEMANAL->TabIndex = 15;
			this->B_HORARIO_SEMANAL->Text = L"SALDO";
			this->B_HORARIO_SEMANAL->UseVisualStyleBackColor = false;
			this->B_HORARIO_SEMANAL->Click += gcnew System::EventHandler(this, &MenuTarjeta::B_HORARIO_SEMANAL_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(139, 244);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(69, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(139, 337);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(69, 45);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// MenuTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(696, 541);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Name = L"MenuTarjeta";
			this->Text = L"MenuTarjeta";
			this->Load += gcnew System::EventHandler(this, &MenuTarjeta::MenuTarjeta_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MenuTarjeta::MenuTarjeta_SizeChanged);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MenuTarjeta_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &MenuTarjeta::MenuTarjeta_SizeChanged));
		CentrarForm();
	}

	private: System::Void B_TARJETA_Click(System::Object^ sender, System::EventArgs^ e) {
		RecargarTarjeta^ VentanaRecargarTarjeta = gcnew RecargarTarjeta();
		VentanaRecargarTarjeta->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void B_RUTA_Click(System::Object^ sender, System::EventArgs^ e) {
		TarifarioVer^ VentanaTarifario = gcnew TarifarioVer();
		VentanaTarifario->ShowDialog();
	}
	private: System::Void B_HORARIO_SEMANAL_Click(System::Object^ sender, System::EventArgs^ e) {
		SaldoPasajero^ VentanaSaldoPasajero = gcnew SaldoPasajero();
		VentanaSaldoPasajero->ShowDialog();
	}
	private: System::Void MenuTarjeta_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void CentrarForm() {
		int CentroX = (this->ClientSize.Width - this->groupBox1->Width) / 2;
		int CentroY = (this->ClientSize.Height - this->groupBox1->Height) / 2;
		this->groupBox1->Location = System::Drawing::Point(CentroX, CentroY);
	}
	};
}
