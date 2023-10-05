#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoModel;
	using namespace TransPorticoController;

	/// <summary>
	/// Resumen de PasajeroMantenimientoEditar
	/// </summary>
	public ref class PasajeroMantenimientoEditar : public System::Windows::Forms::Form
	{
	public:
		PasajeroMantenimientoEditar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		PasajeroMantenimientoEditar(Pasajero^ objPasajero)
		{
			InitializeComponent();
			this->objPasajero = objPasajero;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PasajeroMantenimientoEditar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Pasajero^ objPasajero;
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::Label^ L_Nombres;
	private: System::Windows::Forms::DateTimePicker^ Tiempo_Cumpleanos;
	private: System::Windows::Forms::Label^ L_ApellidoPat;
	private: System::Windows::Forms::Label^ Cumpleanos;
	private: System::Windows::Forms::Label^ L_ApellidoMat;
	private: System::Windows::Forms::Label^ L_DNI;
	private: System::Windows::Forms::Label^ L_Edad;
	private: System::Windows::Forms::TextBox^ TB_Edad;
	private: System::Windows::Forms::ComboBox^ CB_Genero;
	private: System::Windows::Forms::Label^ L_Genero;
	private: System::Windows::Forms::TextBox^ TB_Contrasena;
	private: System::Windows::Forms::TextBox^ TB_Telefono;
	private: System::Windows::Forms::Label^ L_Contrasena;
	private: System::Windows::Forms::Label^ L_Telefono;
	private: System::Windows::Forms::TextBox^ TB_DNI;
	private: System::Windows::Forms::TextBox^ TB_Nombres;
	private: System::Windows::Forms::TextBox^ TB_ApellidoMat;
	private: System::Windows::Forms::TextBox^ TB_ApellidoPat;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Button^ B_Grabar;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PasajeroMantenimientoEditar::typeid));
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->L_Nombres = (gcnew System::Windows::Forms::Label());
			this->Tiempo_Cumpleanos = (gcnew System::Windows::Forms::DateTimePicker());
			this->L_ApellidoPat = (gcnew System::Windows::Forms::Label());
			this->Cumpleanos = (gcnew System::Windows::Forms::Label());
			this->L_ApellidoMat = (gcnew System::Windows::Forms::Label());
			this->L_DNI = (gcnew System::Windows::Forms::Label());
			this->L_Edad = (gcnew System::Windows::Forms::Label());
			this->TB_Edad = (gcnew System::Windows::Forms::TextBox());
			this->CB_Genero = (gcnew System::Windows::Forms::ComboBox());
			this->L_Genero = (gcnew System::Windows::Forms::Label());
			this->TB_Contrasena = (gcnew System::Windows::Forms::TextBox());
			this->TB_Telefono = (gcnew System::Windows::Forms::TextBox());
			this->L_Contrasena = (gcnew System::Windows::Forms::Label());
			this->L_Telefono = (gcnew System::Windows::Forms::Label());
			this->TB_DNI = (gcnew System::Windows::Forms::TextBox());
			this->TB_Nombres = (gcnew System::Windows::Forms::TextBox());
			this->TB_ApellidoMat = (gcnew System::Windows::Forms::TextBox());
			this->TB_ApellidoPat = (gcnew System::Windows::Forms::TextBox());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// GB_Datos
			// 
			this->GB_Datos->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->L_Nombres);
			this->GB_Datos->Controls->Add(this->Tiempo_Cumpleanos);
			this->GB_Datos->Controls->Add(this->L_ApellidoPat);
			this->GB_Datos->Controls->Add(this->Cumpleanos);
			this->GB_Datos->Controls->Add(this->L_ApellidoMat);
			this->GB_Datos->Controls->Add(this->L_DNI);
			this->GB_Datos->Controls->Add(this->L_Edad);
			this->GB_Datos->Controls->Add(this->TB_Edad);
			this->GB_Datos->Controls->Add(this->CB_Genero);
			this->GB_Datos->Controls->Add(this->L_Genero);
			this->GB_Datos->Controls->Add(this->TB_Contrasena);
			this->GB_Datos->Controls->Add(this->TB_Telefono);
			this->GB_Datos->Controls->Add(this->L_Contrasena);
			this->GB_Datos->Controls->Add(this->L_Telefono);
			this->GB_Datos->Controls->Add(this->TB_DNI);
			this->GB_Datos->Controls->Add(this->TB_Nombres);
			this->GB_Datos->Controls->Add(this->TB_ApellidoMat);
			this->GB_Datos->Controls->Add(this->TB_ApellidoPat);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(0, 20);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->GB_Datos->Size = System::Drawing::Size(570, 490);
			this->GB_Datos->TabIndex = 45;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos del pasajero:";
			// 
			// L_Nombres
			// 
			this->L_Nombres->BackColor = System::Drawing::Color::Moccasin;
			this->L_Nombres->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Nombres->ForeColor = System::Drawing::Color::Black;
			this->L_Nombres->Location = System::Drawing::Point(10, 30);
			this->L_Nombres->Name = L"L_Nombres";
			this->L_Nombres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Nombres->Size = System::Drawing::Size(160, 30);
			this->L_Nombres->TabIndex = 6;
			this->L_Nombres->Text = L"Nombres:";
			this->L_Nombres->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Tiempo_Cumpleanos
			// 
			this->Tiempo_Cumpleanos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Tiempo_Cumpleanos->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->Tiempo_Cumpleanos->Location = System::Drawing::Point(185, 430);
			this->Tiempo_Cumpleanos->Margin = System::Windows::Forms::Padding(2);
			this->Tiempo_Cumpleanos->Name = L"Tiempo_Cumpleanos";
			this->Tiempo_Cumpleanos->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Tiempo_Cumpleanos->Size = System::Drawing::Size(250, 29);
			this->Tiempo_Cumpleanos->TabIndex = 26;
			// 
			// L_ApellidoPat
			// 
			this->L_ApellidoPat->BackColor = System::Drawing::Color::Moccasin;
			this->L_ApellidoPat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoPat->ForeColor = System::Drawing::Color::Black;
			this->L_ApellidoPat->Location = System::Drawing::Point(10, 80);
			this->L_ApellidoPat->Name = L"L_ApellidoPat";
			this->L_ApellidoPat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoPat->Size = System::Drawing::Size(160, 30);
			this->L_ApellidoPat->TabIndex = 8;
			this->L_ApellidoPat->Text = L"Apellido Paterno:";
			this->L_ApellidoPat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Cumpleanos
			// 
			this->Cumpleanos->BackColor = System::Drawing::Color::Moccasin;
			this->Cumpleanos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cumpleanos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cumpleanos->ForeColor = System::Drawing::Color::Black;
			this->Cumpleanos->Location = System::Drawing::Point(10, 430);
			this->Cumpleanos->Name = L"Cumpleanos";
			this->Cumpleanos->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Cumpleanos->Size = System::Drawing::Size(160, 30);
			this->Cumpleanos->TabIndex = 25;
			this->Cumpleanos->Text = L"Cumpleaños:";
			this->Cumpleanos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_ApellidoMat
			// 
			this->L_ApellidoMat->BackColor = System::Drawing::Color::Moccasin;
			this->L_ApellidoMat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoMat->ForeColor = System::Drawing::Color::Black;
			this->L_ApellidoMat->Location = System::Drawing::Point(10, 130);
			this->L_ApellidoMat->Name = L"L_ApellidoMat";
			this->L_ApellidoMat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoMat->Size = System::Drawing::Size(160, 30);
			this->L_ApellidoMat->TabIndex = 10;
			this->L_ApellidoMat->Text = L"Apellido Materno:";
			this->L_ApellidoMat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_DNI
			// 
			this->L_DNI->BackColor = System::Drawing::Color::Moccasin;
			this->L_DNI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_DNI->ForeColor = System::Drawing::Color::Black;
			this->L_DNI->Location = System::Drawing::Point(10, 180);
			this->L_DNI->Name = L"L_DNI";
			this->L_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_DNI->Size = System::Drawing::Size(160, 30);
			this->L_DNI->TabIndex = 12;
			this->L_DNI->Text = L"DNI:";
			this->L_DNI->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Edad
			// 
			this->L_Edad->BackColor = System::Drawing::Color::Moccasin;
			this->L_Edad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Edad->ForeColor = System::Drawing::Color::Black;
			this->L_Edad->Location = System::Drawing::Point(10, 230);
			this->L_Edad->Name = L"L_Edad";
			this->L_Edad->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Edad->Size = System::Drawing::Size(160, 30);
			this->L_Edad->TabIndex = 14;
			this->L_Edad->Text = L"Edad:";
			this->L_Edad->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Edad
			// 
			this->TB_Edad->Enabled = false;
			this->TB_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Edad->ForeColor = System::Drawing::Color::Black;
			this->TB_Edad->Location = System::Drawing::Point(185, 230);
			this->TB_Edad->Name = L"TB_Edad";
			this->TB_Edad->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_Edad->Size = System::Drawing::Size(250, 29);
			this->TB_Edad->TabIndex = 13;
			// 
			// CB_Genero
			// 
			this->CB_Genero->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Genero->Enabled = false;
			this->CB_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Genero->FormattingEnabled = true;
			this->CB_Genero->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->CB_Genero->Location = System::Drawing::Point(185, 280);
			this->CB_Genero->Name = L"CB_Genero";
			this->CB_Genero->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->CB_Genero->Size = System::Drawing::Size(250, 32);
			this->CB_Genero->TabIndex = 21;
			this->CB_Genero->TabStop = false;
			// 
			// L_Genero
			// 
			this->L_Genero->BackColor = System::Drawing::Color::Moccasin;
			this->L_Genero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Genero->ForeColor = System::Drawing::Color::Black;
			this->L_Genero->Location = System::Drawing::Point(10, 280);
			this->L_Genero->Name = L"L_Genero";
			this->L_Genero->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Genero->Size = System::Drawing::Size(160, 30);
			this->L_Genero->TabIndex = 16;
			this->L_Genero->Text = L"Genero:";
			this->L_Genero->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Contrasena
			// 
			this->TB_Contrasena->Enabled = false;
			this->TB_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Contrasena->ForeColor = System::Drawing::Color::Black;
			this->TB_Contrasena->Location = System::Drawing::Point(185, 380);
			this->TB_Contrasena->Name = L"TB_Contrasena";
			this->TB_Contrasena->PasswordChar = '*';
			this->TB_Contrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_Contrasena->Size = System::Drawing::Size(250, 29);
			this->TB_Contrasena->TabIndex = 19;
			// 
			// TB_Telefono
			// 
			this->TB_Telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Telefono->ForeColor = System::Drawing::Color::Black;
			this->TB_Telefono->Location = System::Drawing::Point(185, 330);
			this->TB_Telefono->Name = L"TB_Telefono";
			this->TB_Telefono->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_Telefono->Size = System::Drawing::Size(250, 29);
			this->TB_Telefono->TabIndex = 17;
			// 
			// L_Contrasena
			// 
			this->L_Contrasena->BackColor = System::Drawing::Color::Moccasin;
			this->L_Contrasena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Contrasena->ForeColor = System::Drawing::Color::Black;
			this->L_Contrasena->Location = System::Drawing::Point(10, 380);
			this->L_Contrasena->Name = L"L_Contrasena";
			this->L_Contrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Contrasena->Size = System::Drawing::Size(160, 30);
			this->L_Contrasena->TabIndex = 20;
			this->L_Contrasena->Text = L"Contraseña:";
			this->L_Contrasena->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Telefono
			// 
			this->L_Telefono->BackColor = System::Drawing::Color::Moccasin;
			this->L_Telefono->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Telefono->ForeColor = System::Drawing::Color::Black;
			this->L_Telefono->Location = System::Drawing::Point(10, 330);
			this->L_Telefono->Name = L"L_Telefono";
			this->L_Telefono->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Telefono->Size = System::Drawing::Size(160, 30);
			this->L_Telefono->TabIndex = 18;
			this->L_Telefono->Text = L"Telefono:";
			this->L_Telefono->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_DNI
			// 
			this->TB_DNI->Enabled = false;
			this->TB_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_DNI->ForeColor = System::Drawing::Color::Black;
			this->TB_DNI->Location = System::Drawing::Point(185, 180);
			this->TB_DNI->Name = L"TB_DNI";
			this->TB_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_DNI->Size = System::Drawing::Size(250, 29);
			this->TB_DNI->TabIndex = 11;
			// 
			// TB_Nombres
			// 
			this->TB_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Nombres->ForeColor = System::Drawing::Color::Black;
			this->TB_Nombres->Location = System::Drawing::Point(185, 30);
			this->TB_Nombres->Name = L"TB_Nombres";
			this->TB_Nombres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_Nombres->Size = System::Drawing::Size(250, 29);
			this->TB_Nombres->TabIndex = 5;
			// 
			// TB_ApellidoMat
			// 
			this->TB_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoMat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoMat->Location = System::Drawing::Point(185, 130);
			this->TB_ApellidoMat->Name = L"TB_ApellidoMat";
			this->TB_ApellidoMat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_ApellidoMat->Size = System::Drawing::Size(250, 29);
			this->TB_ApellidoMat->TabIndex = 9;
			// 
			// TB_ApellidoPat
			// 
			this->TB_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoPat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoPat->Location = System::Drawing::Point(185, 80);
			this->TB_ApellidoPat->Name = L"TB_ApellidoPat";
			this->TB_ApellidoPat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_ApellidoPat->Size = System::Drawing::Size(250, 29);
			this->TB_ApellidoPat->TabIndex = 7;
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(658, 495);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(100, 40);
			this->B_Cancelar->TabIndex = 72;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			// 
			// B_Grabar
			// 
			this->B_Grabar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Grabar.BackgroundImage")));
			this->B_Grabar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Grabar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Grabar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Grabar->Location = System::Drawing::Point(298, 495);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(100, 40);
			this->B_Grabar->TabIndex = 71;
			this->B_Grabar->Text = L"Grabar";
			this->B_Grabar->UseVisualStyleBackColor = true;
			this->B_Grabar->Click += gcnew System::EventHandler(this, &PasajeroMantenimientoEditar::B_Grabar_Click);
			// 
			// PasajeroMantenimientoEditar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(783, 566);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->B_Grabar);
			this->Controls->Add(this->GB_Datos);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PasajeroMantenimientoEditar";
			this->Text = L"PasajeroMantenimientoEditar";
			this->Load += gcnew System::EventHandler(this, &PasajeroMantenimientoEditar::PasajeroMantenimientoEditar_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &PasajeroMantenimientoEditar::PasajeroMantenimientoEditar_SizeChanged);
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CentrarForm() {
		int PosXGB_Datos = ((this->ClientSize.Width) - (this->GB_Datos->Width)) / 2;
		this->GB_Datos->Location = System::Drawing::Point(PosXGB_Datos, 25);
		this->B_Cancelar->Location = System::Drawing::Point(PosXGB_Datos, 510);
		this->B_Grabar->Location = System::Drawing::Point(PosXGB_Datos + 360, 510);
	}

	private: System::Void B_Grabar_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ Nombre = this->TB_Nombres->Text;
		String^ Apellido_Pat = this->TB_ApellidoPat->Text;
		String^ Apellido_Mat = this->TB_ApellidoMat->Text;
		String^ DNI = this->TB_DNI->Text;
		String^ Genero = this->CB_Genero->Text;
		String^ Telefono = this->TB_Telefono->Text;
		String^ Contrasena = this->TB_Contrasena->Text;
		String^ Tiempo_Cumpleanos = this->Tiempo_Cumpleanos->Text;

		if((Nombre!="") && (Apellido_Pat!="") && (Apellido_Mat!="") && (Telefono!="") && (Tiempo_Cumpleanos!="")) {
			
			int Edad = Convert::ToInt32(this->TB_Edad->Text);
			
			Pasajero^ objPasajero = gcnew Pasajero(DNI, Nombre, Apellido_Pat, Apellido_Mat, Edad, Genero, Telefono, Contrasena, Tiempo_Cumpleanos);
			PasajeroController^ objPasajeroController = gcnew PasajeroController();
			objPasajeroController->ActualizarPasajero(objPasajero);
			MessageBox::Show("La carrera ha sido actualizada con exito");
			this->Close();
		}
	}
	private: System::Void PasajeroMantenimientoEditar_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &PasajeroMantenimientoEditar::PasajeroMantenimientoEditar_SizeChanged));
		CentrarForm();
		this->TB_Nombres->Text = this->objPasajero->GetNombre_Pasajero();
		this->TB_ApellidoPat->Text = this->objPasajero->GetApellidoPat_Pasajero();
		this->TB_ApellidoMat->Text = this->objPasajero->GetApellidoMat_Pasajero();
		this->TB_DNI->Text = this->objPasajero->GetDNI_Pasajero();
		this->TB_Edad->Text = Convert::ToString(this->objPasajero->GetEdad_Pasajero());
		this->CB_Genero->Text = this->objPasajero->GetGenero_Pasajero();
		this->TB_Telefono->Text = this->objPasajero->GetTelefono_Pasajero();
		this->TB_Contrasena->Text = this->objPasajero->GetContrasena_Pasajero();
		this->Tiempo_Cumpleanos->Text = this->objPasajero->GetFechaNacimiento_Pasajero();
	}

	private: System::Void PasajeroMantenimientoEditar_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
