#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoController;
	using namespace TransPorticoModel;

	/// <summary>
	/// Resumen de CrearCuenta
	/// </summary>
	public ref class CrearCuenta : public System::Windows::Forms::Form
	{
	public:
		CrearCuenta(void)
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
		~CrearCuenta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ L_Nombres;
	private: System::Windows::Forms::TextBox^ TB_Nombres;
	private: System::Windows::Forms::Label^ L_ApellidoPat;
	private: System::Windows::Forms::TextBox^ TB_ApellidoPat;
	private: System::Windows::Forms::Label^ L_ApellidoMat;
	private: System::Windows::Forms::TextBox^ TB_ApellidoMat;
	private: System::Windows::Forms::Label^ L_DNI;
	private: System::Windows::Forms::TextBox^ TB_DNI;
	private: System::Windows::Forms::Label^ L_Edad;
	private: System::Windows::Forms::TextBox^ TB_Edad;
	private: System::Windows::Forms::Label^ L_Genero;
	private: System::Windows::Forms::Label^ L_Telefono;
	private: System::Windows::Forms::TextBox^ TB_Telefono;
	private: System::Windows::Forms::Label^ L_Contrasena;
	private: System::Windows::Forms::TextBox^ TB_Contrasena;
	private: System::Windows::Forms::ComboBox^ CB_Genero;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Button^ B_Crear;
	private: System::Windows::Forms::Label^ Cumpleanos;
	private: System::Windows::Forms::DateTimePicker^ Tiempo_Cumpleanos;
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::Label^ L_Registrarte;
	private: System::Windows::Forms::Label^ L_info;
	private: System::Windows::Forms::GroupBox^ GB_Text;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CrearCuenta::typeid));
			this->L_Nombres = (gcnew System::Windows::Forms::Label());
			this->TB_Nombres = (gcnew System::Windows::Forms::TextBox());
			this->L_ApellidoPat = (gcnew System::Windows::Forms::Label());
			this->TB_ApellidoPat = (gcnew System::Windows::Forms::TextBox());
			this->L_ApellidoMat = (gcnew System::Windows::Forms::Label());
			this->TB_ApellidoMat = (gcnew System::Windows::Forms::TextBox());
			this->L_DNI = (gcnew System::Windows::Forms::Label());
			this->TB_DNI = (gcnew System::Windows::Forms::TextBox());
			this->L_Edad = (gcnew System::Windows::Forms::Label());
			this->TB_Edad = (gcnew System::Windows::Forms::TextBox());
			this->L_Genero = (gcnew System::Windows::Forms::Label());
			this->L_Telefono = (gcnew System::Windows::Forms::Label());
			this->TB_Telefono = (gcnew System::Windows::Forms::TextBox());
			this->L_Contrasena = (gcnew System::Windows::Forms::Label());
			this->TB_Contrasena = (gcnew System::Windows::Forms::TextBox());
			this->CB_Genero = (gcnew System::Windows::Forms::ComboBox());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->B_Crear = (gcnew System::Windows::Forms::Button());
			this->Cumpleanos = (gcnew System::Windows::Forms::Label());
			this->Tiempo_Cumpleanos = (gcnew System::Windows::Forms::DateTimePicker());
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->L_Registrarte = (gcnew System::Windows::Forms::Label());
			this->L_info = (gcnew System::Windows::Forms::Label());
			this->GB_Text = (gcnew System::Windows::Forms::GroupBox());
			this->GB_Datos->SuspendLayout();
			this->GB_Text->SuspendLayout();
			this->SuspendLayout();
			// 
			// L_Nombres
			// 
			this->L_Nombres->BackColor = System::Drawing::Color::Transparent;
			this->L_Nombres->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Nombres->Location = System::Drawing::Point(80, 25);
			this->L_Nombres->Name = L"L_Nombres";
			this->L_Nombres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Nombres->Size = System::Drawing::Size(200, 40);
			this->L_Nombres->TabIndex = 6;
			this->L_Nombres->Text = L"Nombres:";
			this->L_Nombres->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Nombres
			// 
			this->TB_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Nombres->ForeColor = System::Drawing::Color::Black;
			this->TB_Nombres->Location = System::Drawing::Point(290, 25);
			this->TB_Nombres->Name = L"TB_Nombres";
			this->TB_Nombres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_Nombres->Size = System::Drawing::Size(200, 40);
			this->TB_Nombres->TabIndex = 5;
			// 
			// L_ApellidoPat
			// 
			this->L_ApellidoPat->BackColor = System::Drawing::Color::Transparent;
			this->L_ApellidoPat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoPat->Location = System::Drawing::Point(80, 75);
			this->L_ApellidoPat->Name = L"L_ApellidoPat";
			this->L_ApellidoPat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoPat->Size = System::Drawing::Size(200, 40);
			this->L_ApellidoPat->TabIndex = 8;
			this->L_ApellidoPat->Text = L"Apellido Paterno:";
			this->L_ApellidoPat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_ApellidoPat
			// 
			this->TB_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoPat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoPat->Location = System::Drawing::Point(290, 75);
			this->TB_ApellidoPat->Name = L"TB_ApellidoPat";
			this->TB_ApellidoPat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_ApellidoPat->Size = System::Drawing::Size(200, 40);
			this->TB_ApellidoPat->TabIndex = 7;
			// 
			// L_ApellidoMat
			// 
			this->L_ApellidoMat->BackColor = System::Drawing::Color::Transparent;
			this->L_ApellidoMat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoMat->Location = System::Drawing::Point(80, 125);
			this->L_ApellidoMat->Name = L"L_ApellidoMat";
			this->L_ApellidoMat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoMat->Size = System::Drawing::Size(200, 40);
			this->L_ApellidoMat->TabIndex = 10;
			this->L_ApellidoMat->Text = L"Apellido Materno:";
			this->L_ApellidoMat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_ApellidoMat
			// 
			this->TB_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoMat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoMat->Location = System::Drawing::Point(290, 125);
			this->TB_ApellidoMat->Name = L"TB_ApellidoMat";
			this->TB_ApellidoMat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_ApellidoMat->Size = System::Drawing::Size(200, 40);
			this->TB_ApellidoMat->TabIndex = 9;
			// 
			// L_DNI
			// 
			this->L_DNI->BackColor = System::Drawing::Color::Transparent;
			this->L_DNI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_DNI->Location = System::Drawing::Point(80, 175);
			this->L_DNI->Name = L"L_DNI";
			this->L_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_DNI->Size = System::Drawing::Size(200, 40);
			this->L_DNI->TabIndex = 12;
			this->L_DNI->Text = L"DNI:";
			this->L_DNI->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_DNI
			// 
			this->TB_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_DNI->ForeColor = System::Drawing::Color::Black;
			this->TB_DNI->Location = System::Drawing::Point(290, 175);
			this->TB_DNI->Name = L"TB_DNI";
			this->TB_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_DNI->Size = System::Drawing::Size(200, 40);
			this->TB_DNI->TabIndex = 11;
			// 
			// L_Edad
			// 
			this->L_Edad->BackColor = System::Drawing::Color::Transparent;
			this->L_Edad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Edad->Location = System::Drawing::Point(80, 225);
			this->L_Edad->Name = L"L_Edad";
			this->L_Edad->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Edad->Size = System::Drawing::Size(200, 40);
			this->L_Edad->TabIndex = 14;
			this->L_Edad->Text = L"Edad:";
			this->L_Edad->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Edad
			// 
			this->TB_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Edad->ForeColor = System::Drawing::Color::Black;
			this->TB_Edad->Location = System::Drawing::Point(290, 225);
			this->TB_Edad->Name = L"TB_Edad";
			this->TB_Edad->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_Edad->Size = System::Drawing::Size(200, 40);
			this->TB_Edad->TabIndex = 13;
			// 
			// L_Genero
			// 
			this->L_Genero->BackColor = System::Drawing::Color::Transparent;
			this->L_Genero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Genero->Location = System::Drawing::Point(80, 275);
			this->L_Genero->Name = L"L_Genero";
			this->L_Genero->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Genero->Size = System::Drawing::Size(200, 40);
			this->L_Genero->TabIndex = 16;
			this->L_Genero->Text = L"Genero:";
			this->L_Genero->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Telefono
			// 
			this->L_Telefono->BackColor = System::Drawing::Color::Transparent;
			this->L_Telefono->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Telefono->Location = System::Drawing::Point(80, 325);
			this->L_Telefono->Name = L"L_Telefono";
			this->L_Telefono->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Telefono->Size = System::Drawing::Size(200, 40);
			this->L_Telefono->TabIndex = 18;
			this->L_Telefono->Text = L"Telefono:";
			this->L_Telefono->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Telefono
			// 
			this->TB_Telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Telefono->ForeColor = System::Drawing::Color::Black;
			this->TB_Telefono->Location = System::Drawing::Point(290, 325);
			this->TB_Telefono->Name = L"TB_Telefono";
			this->TB_Telefono->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_Telefono->Size = System::Drawing::Size(200, 40);
			this->TB_Telefono->TabIndex = 17;
			// 
			// L_Contrasena
			// 
			this->L_Contrasena->BackColor = System::Drawing::Color::Transparent;
			this->L_Contrasena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Contrasena->Location = System::Drawing::Point(80, 375);
			this->L_Contrasena->Name = L"L_Contrasena";
			this->L_Contrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Contrasena->Size = System::Drawing::Size(200, 40);
			this->L_Contrasena->TabIndex = 20;
			this->L_Contrasena->Text = L"Contraseña:";
			this->L_Contrasena->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Contrasena
			// 
			this->TB_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Contrasena->ForeColor = System::Drawing::Color::Black;
			this->TB_Contrasena->Location = System::Drawing::Point(290, 375);
			this->TB_Contrasena->Name = L"TB_Contrasena";
			this->TB_Contrasena->PasswordChar = '*';
			this->TB_Contrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_Contrasena->Size = System::Drawing::Size(200, 40);
			this->TB_Contrasena->TabIndex = 19;
			// 
			// CB_Genero
			// 
			this->CB_Genero->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Genero->FormattingEnabled = true;
			this->CB_Genero->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->CB_Genero->Location = System::Drawing::Point(290, 275);
			this->CB_Genero->Name = L"CB_Genero";
			this->CB_Genero->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->CB_Genero->Size = System::Drawing::Size(200, 41);
			this->CB_Genero->TabIndex = 21;
			this->CB_Genero->TabStop = false;
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackColor = System::Drawing::Color::DodgerBlue;
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->B_Cancelar->FlatAppearance->BorderSize = 0;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->ForeColor = System::Drawing::Color::Black;
			this->B_Cancelar->Location = System::Drawing::Point(0, 635);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(120, 40);
			this->B_Cancelar->TabIndex = 22;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = false;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &CrearCuenta::B_Cancelar_Click);
			// 
			// B_Crear
			// 
			this->B_Crear->BackColor = System::Drawing::Color::DodgerBlue;
			this->B_Crear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Crear.BackgroundImage")));
			this->B_Crear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Crear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Crear->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->B_Crear->FlatAppearance->BorderSize = 0;
			this->B_Crear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Crear->ForeColor = System::Drawing::Color::Black;
			this->B_Crear->Location = System::Drawing::Point(450, 510);
			this->B_Crear->Name = L"B_Crear";
			this->B_Crear->Size = System::Drawing::Size(120, 40);
			this->B_Crear->TabIndex = 23;
			this->B_Crear->Text = L"Crear";
			this->B_Crear->UseVisualStyleBackColor = false;
			this->B_Crear->Click += gcnew System::EventHandler(this, &CrearCuenta::B_Crear_Click);
			// 
			// Cumpleanos
			// 
			this->Cumpleanos->BackColor = System::Drawing::Color::Transparent;
			this->Cumpleanos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cumpleanos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cumpleanos->Location = System::Drawing::Point(80, 425);
			this->Cumpleanos->Name = L"Cumpleanos";
			this->Cumpleanos->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Cumpleanos->Size = System::Drawing::Size(200, 40);
			this->Cumpleanos->TabIndex = 25;
			this->Cumpleanos->Text = L"Cumpleaños:";
			this->Cumpleanos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Tiempo_Cumpleanos
			// 
			this->Tiempo_Cumpleanos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Tiempo_Cumpleanos->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->Tiempo_Cumpleanos->Location = System::Drawing::Point(290, 425);
			this->Tiempo_Cumpleanos->Margin = System::Windows::Forms::Padding(2);
			this->Tiempo_Cumpleanos->Name = L"Tiempo_Cumpleanos";
			this->Tiempo_Cumpleanos->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Tiempo_Cumpleanos->Size = System::Drawing::Size(200, 40);
			this->Tiempo_Cumpleanos->TabIndex = 26;
			// 
			// GB_Datos
			// 
			this->GB_Datos->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GB_Datos->BackColor = System::Drawing::Color::AliceBlue;
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
			this->GB_Datos->Location = System::Drawing::Point(0, 135);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->GB_Datos->Size = System::Drawing::Size(570, 490);
			this->GB_Datos->TabIndex = 27;
			this->GB_Datos->TabStop = false;
			// 
			// L_Registrarte
			// 
			this->L_Registrarte->BackColor = System::Drawing::Color::Transparent;
			this->L_Registrarte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Registrarte->Location = System::Drawing::Point(30, 10);
			this->L_Registrarte->Name = L"L_Registrarte";
			this->L_Registrarte->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Registrarte->Size = System::Drawing::Size(360, 75);
			this->L_Registrarte->TabIndex = 28;
			this->L_Registrarte->Text = L"Registrarte";
			// 
			// L_info
			// 
			this->L_info->BackColor = System::Drawing::Color::Transparent;
			this->L_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_info->Location = System::Drawing::Point(30, 90);
			this->L_info->Name = L"L_info";
			this->L_info->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_info->Size = System::Drawing::Size(279, 25);
			this->L_info->TabIndex = 29;
			this->L_info->Text = L"Es rápido y fácil.";
			// 
			// GB_Text
			// 
			this->GB_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GB_Text->BackColor = System::Drawing::Color::LightCyan;
			this->GB_Text->Controls->Add(this->L_Registrarte);
			this->GB_Text->Controls->Add(this->L_info);
			this->GB_Text->Location = System::Drawing::Point(0, 0);
			this->GB_Text->Name = L"GB_Text";
			this->GB_Text->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->GB_Text->Size = System::Drawing::Size(570, 125);
			this->GB_Text->TabIndex = 30;
			this->GB_Text->TabStop = false;
			// 
			// CrearCuenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1097, 788);
			this->Controls->Add(this->GB_Text);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Crear);
			this->Controls->Add(this->B_Cancelar);
			this->DoubleBuffered = true;
			this->Name = L"CrearCuenta";
			this->Text = L"Creador de cuenta";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &CrearCuenta::CrearCuenta_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &CrearCuenta::CrearCuenta_SizeChanged);
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			this->GB_Text->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void CentrarForm() {
		int CentroX = (this->ClientSize.Width - this->GB_Datos->Width) / 2;
		int CentroY = (this->ClientSize.Height - this->GB_Datos->Height) / 2;

		this->GB_Text->Location = System::Drawing::Point(CentroX, CentroY - 135);
		this->GB_Datos->Location = System::Drawing::Point(CentroX, CentroY);
		this->B_Cancelar->Location = System::Drawing::Point(CentroX, CentroY + 510);
		this->B_Crear->Location = System::Drawing::Point(CentroX + 450, CentroY + 510);
	}
	private: System::Void CrearCuenta_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &CrearCuenta::CrearCuenta_SizeChanged));
		CentrarForm();
	}
	private: System::Void CrearCuenta_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void B_Crear_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ Nombres = this->TB_Nombres->Text;
		String^ ApellidoPat = this->TB_ApellidoPat->Text;
		String^ ApellidoMat = this->TB_ApellidoMat->Text;
		String^ DNI = this->TB_DNI->Text;
		String^ Genero = this->CB_Genero->Text;
		String^ Telefono = this->TB_Telefono->Text;
		String^ Contrasena = this->TB_Contrasena->Text;
		String^ FechaCumpleanos = this->Tiempo_Cumpleanos->Text;

		if ((Nombres != "") && (ApellidoPat != "") && (ApellidoMat != "") && (DNI != "") && (Genero != "") && (Telefono != "") && (Contrasena != "") && (FechaCumpleanos != "") && (this->TB_Edad->Text != "")) {

			int Edad = Convert::ToInt32(this->TB_Edad->Text);

			PasajeroController^ ObjPasajeroController = gcnew PasajeroController();
			Pasajero^ ObjPasajero = gcnew Pasajero(DNI, Nombres, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena, FechaCumpleanos);
			ObjPasajeroController->AgregarPasajero(ObjPasajero);
			MessageBox::Show("Cuenta creada con exito.");
			this->Close();

		}
		
	}
};
}
