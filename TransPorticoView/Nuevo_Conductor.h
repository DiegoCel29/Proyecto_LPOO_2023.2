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
	/// Resumen de Nuevo_Conductor
	/// </summary>
	public ref class Nuevo_Conductor : public System::Windows::Forms::Form
	{
	public:
		Nuevo_Conductor(void)
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
		~Nuevo_Conductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TB_Contrato;
	protected:
	private: System::Windows::Forms::Label^ L_Contrato;
	private: System::Windows::Forms::TextBox^ TB_Sueldo;
	private: System::Windows::Forms::Label^ L_Sueldo;
	private: System::Windows::Forms::Button^ B_Crear;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::ComboBox^ CB_Genero;
	private: System::Windows::Forms::Label^ L_Contrasena;
	private: System::Windows::Forms::TextBox^ TB_Contrasena;
	private: System::Windows::Forms::Label^ L_Telefono;
	private: System::Windows::Forms::TextBox^ TB_Telefono;
	private: System::Windows::Forms::Label^ L_Genero;
	private: System::Windows::Forms::Label^ L_Edad;
	private: System::Windows::Forms::TextBox^ TB_Edad;
	private: System::Windows::Forms::Label^ L_DNI;
	private: System::Windows::Forms::TextBox^ TB_DNI;
	private: System::Windows::Forms::Label^ L_ApellidoMat;
	private: System::Windows::Forms::TextBox^ TB_ApellidoMat;
	private: System::Windows::Forms::Label^ L_ApellidoPat;
	private: System::Windows::Forms::TextBox^ TB_ApellidoPat;
	private: System::Windows::Forms::Label^ L_Nombres;
	private: System::Windows::Forms::TextBox^ TB_Nombres;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

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
			this->TB_Contrato = (gcnew System::Windows::Forms::TextBox());
			this->L_Contrato = (gcnew System::Windows::Forms::Label());
			this->TB_Sueldo = (gcnew System::Windows::Forms::TextBox());
			this->L_Sueldo = (gcnew System::Windows::Forms::Label());
			this->B_Crear = (gcnew System::Windows::Forms::Button());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->CB_Genero = (gcnew System::Windows::Forms::ComboBox());
			this->L_Contrasena = (gcnew System::Windows::Forms::Label());
			this->TB_Contrasena = (gcnew System::Windows::Forms::TextBox());
			this->L_Telefono = (gcnew System::Windows::Forms::Label());
			this->TB_Telefono = (gcnew System::Windows::Forms::TextBox());
			this->L_Genero = (gcnew System::Windows::Forms::Label());
			this->L_Edad = (gcnew System::Windows::Forms::Label());
			this->TB_Edad = (gcnew System::Windows::Forms::TextBox());
			this->L_DNI = (gcnew System::Windows::Forms::Label());
			this->TB_DNI = (gcnew System::Windows::Forms::TextBox());
			this->L_ApellidoMat = (gcnew System::Windows::Forms::Label());
			this->TB_ApellidoMat = (gcnew System::Windows::Forms::TextBox());
			this->L_ApellidoPat = (gcnew System::Windows::Forms::Label());
			this->TB_ApellidoPat = (gcnew System::Windows::Forms::TextBox());
			this->L_Nombres = (gcnew System::Windows::Forms::Label());
			this->TB_Nombres = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// TB_Contrato
			// 
			this->TB_Contrato->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Contrato->ForeColor = System::Drawing::Color::Black;
			this->TB_Contrato->Location = System::Drawing::Point(449, 244);
			this->TB_Contrato->Margin = System::Windows::Forms::Padding(4);
			this->TB_Contrato->Name = L"TB_Contrato";
			this->TB_Contrato->Size = System::Drawing::Size(265, 41);
			this->TB_Contrato->TabIndex = 90;
			// 
			// L_Contrato
			// 
			this->L_Contrato->BackColor = System::Drawing::Color::OldLace;
			this->L_Contrato->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Contrato->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Contrato->Location = System::Drawing::Point(448, 240);
			this->L_Contrato->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Contrato->Name = L"L_Contrato";
			this->L_Contrato->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Contrato->Size = System::Drawing::Size(267, 49);
			this->L_Contrato->TabIndex = 89;
			this->L_Contrato->Text = L"Contrato:";
			this->L_Contrato->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Sueldo
			// 
			this->TB_Sueldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Sueldo->ForeColor = System::Drawing::Color::Black;
			this->TB_Sueldo->Location = System::Drawing::Point(441, 236);
			this->TB_Sueldo->Margin = System::Windows::Forms::Padding(4);
			this->TB_Sueldo->Name = L"TB_Sueldo";
			this->TB_Sueldo->Size = System::Drawing::Size(265, 41);
			this->TB_Sueldo->TabIndex = 88;
			// 
			// L_Sueldo
			// 
			this->L_Sueldo->BackColor = System::Drawing::Color::OldLace;
			this->L_Sueldo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Sueldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Sueldo->Location = System::Drawing::Point(440, 232);
			this->L_Sueldo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Sueldo->Name = L"L_Sueldo";
			this->L_Sueldo->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Sueldo->Size = System::Drawing::Size(267, 49);
			this->L_Sueldo->TabIndex = 87;
			this->L_Sueldo->Text = L"Sueldo";
			this->L_Sueldo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_Crear
			// 
			this->B_Crear->BackColor = System::Drawing::Color::DodgerBlue;
			this->B_Crear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Crear->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->B_Crear->FlatAppearance->BorderSize = 0;
			this->B_Crear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Crear->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->B_Crear->Location = System::Drawing::Point(451, 484);
			this->B_Crear->Margin = System::Windows::Forms::Padding(4);
			this->B_Crear->Name = L"B_Crear";
			this->B_Crear->Size = System::Drawing::Size(120, 49);
			this->B_Crear->TabIndex = 86;
			this->B_Crear->Text = L"Crear";
			this->B_Crear->UseVisualStyleBackColor = false;
			this->B_Crear->Click += gcnew System::EventHandler(this, &Nuevo_Conductor::B_Crear_Click);
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackColor = System::Drawing::Color::DodgerBlue;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->B_Cancelar->FlatAppearance->BorderSize = 0;
			this->B_Cancelar->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->B_Cancelar->Location = System::Drawing::Point(250, 484);
			this->B_Cancelar->Margin = System::Windows::Forms::Padding(4);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(120, 49);
			this->B_Cancelar->TabIndex = 85;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = false;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &Nuevo_Conductor::B_Cancelar_Click);
			// 
			// CB_Genero
			// 
			this->CB_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Genero->FormattingEnabled = true;
			this->CB_Genero->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->CB_Genero->Location = System::Drawing::Point(420, 281);
			this->CB_Genero->Margin = System::Windows::Forms::Padding(4);
			this->CB_Genero->Name = L"CB_Genero";
			this->CB_Genero->Size = System::Drawing::Size(265, 44);
			this->CB_Genero->TabIndex = 84;
			this->CB_Genero->TabStop = false;
			// 
			// L_Contrasena
			// 
			this->L_Contrasena->BackColor = System::Drawing::Color::OldLace;
			this->L_Contrasena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Contrasena->Location = System::Drawing::Point(146, 392);
			this->L_Contrasena->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Contrasena->Name = L"L_Contrasena";
			this->L_Contrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Contrasena->Size = System::Drawing::Size(267, 49);
			this->L_Contrasena->TabIndex = 83;
			this->L_Contrasena->Text = L"Contraseña:";
			this->L_Contrasena->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Contrasena
			// 
			this->TB_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Contrasena->ForeColor = System::Drawing::Color::Black;
			this->TB_Contrasena->Location = System::Drawing::Point(420, 392);
			this->TB_Contrasena->Margin = System::Windows::Forms::Padding(4);
			this->TB_Contrasena->Name = L"TB_Contrasena";
			this->TB_Contrasena->PasswordChar = '*';
			this->TB_Contrasena->Size = System::Drawing::Size(265, 41);
			this->TB_Contrasena->TabIndex = 82;
			// 
			// L_Telefono
			// 
			this->L_Telefono->BackColor = System::Drawing::Color::OldLace;
			this->L_Telefono->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Telefono->Location = System::Drawing::Point(146, 339);
			this->L_Telefono->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Telefono->Name = L"L_Telefono";
			this->L_Telefono->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Telefono->Size = System::Drawing::Size(267, 49);
			this->L_Telefono->TabIndex = 81;
			this->L_Telefono->Text = L"Telefono:";
			this->L_Telefono->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Telefono
			// 
			this->TB_Telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Telefono->ForeColor = System::Drawing::Color::Black;
			this->TB_Telefono->Location = System::Drawing::Point(420, 339);
			this->TB_Telefono->Margin = System::Windows::Forms::Padding(4);
			this->TB_Telefono->Name = L"TB_Telefono";
			this->TB_Telefono->Size = System::Drawing::Size(265, 41);
			this->TB_Telefono->TabIndex = 80;
			// 
			// L_Genero
			// 
			this->L_Genero->BackColor = System::Drawing::Color::OldLace;
			this->L_Genero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Genero->Location = System::Drawing::Point(146, 277);
			this->L_Genero->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Genero->Name = L"L_Genero";
			this->L_Genero->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Genero->Size = System::Drawing::Size(267, 49);
			this->L_Genero->TabIndex = 79;
			this->L_Genero->Text = L"Genero:";
			this->L_Genero->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Edad
			// 
			this->L_Edad->BackColor = System::Drawing::Color::OldLace;
			this->L_Edad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Edad->Location = System::Drawing::Point(146, 220);
			this->L_Edad->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Edad->Name = L"L_Edad";
			this->L_Edad->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Edad->Size = System::Drawing::Size(267, 49);
			this->L_Edad->TabIndex = 78;
			this->L_Edad->Text = L"Edad:";
			this->L_Edad->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Edad
			// 
			this->TB_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Edad->ForeColor = System::Drawing::Color::Black;
			this->TB_Edad->Location = System::Drawing::Point(420, 220);
			this->TB_Edad->Margin = System::Windows::Forms::Padding(4);
			this->TB_Edad->Name = L"TB_Edad";
			this->TB_Edad->Size = System::Drawing::Size(265, 41);
			this->TB_Edad->TabIndex = 77;
			// 
			// L_DNI
			// 
			this->L_DNI->BackColor = System::Drawing::Color::OldLace;
			this->L_DNI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_DNI->Location = System::Drawing::Point(146, 164);
			this->L_DNI->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_DNI->Name = L"L_DNI";
			this->L_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_DNI->Size = System::Drawing::Size(267, 49);
			this->L_DNI->TabIndex = 76;
			this->L_DNI->Text = L"DNI:";
			this->L_DNI->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_DNI
			// 
			this->TB_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_DNI->ForeColor = System::Drawing::Color::Black;
			this->TB_DNI->Location = System::Drawing::Point(420, 164);
			this->TB_DNI->Margin = System::Windows::Forms::Padding(4);
			this->TB_DNI->Name = L"TB_DNI";
			this->TB_DNI->Size = System::Drawing::Size(265, 41);
			this->TB_DNI->TabIndex = 75;
			// 
			// L_ApellidoMat
			// 
			this->L_ApellidoMat->BackColor = System::Drawing::Color::OldLace;
			this->L_ApellidoMat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoMat->Location = System::Drawing::Point(146, 97);
			this->L_ApellidoMat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_ApellidoMat->Name = L"L_ApellidoMat";
			this->L_ApellidoMat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoMat->Size = System::Drawing::Size(267, 49);
			this->L_ApellidoMat->TabIndex = 74;
			this->L_ApellidoMat->Text = L"Apellido Materno:";
			this->L_ApellidoMat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_ApellidoMat
			// 
			this->TB_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoMat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoMat->Location = System::Drawing::Point(420, 97);
			this->TB_ApellidoMat->Margin = System::Windows::Forms::Padding(4);
			this->TB_ApellidoMat->Name = L"TB_ApellidoMat";
			this->TB_ApellidoMat->Size = System::Drawing::Size(265, 41);
			this->TB_ApellidoMat->TabIndex = 73;
			// 
			// L_ApellidoPat
			// 
			this->L_ApellidoPat->BackColor = System::Drawing::Color::OldLace;
			this->L_ApellidoPat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoPat->Location = System::Drawing::Point(146, 37);
			this->L_ApellidoPat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_ApellidoPat->Name = L"L_ApellidoPat";
			this->L_ApellidoPat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoPat->Size = System::Drawing::Size(267, 49);
			this->L_ApellidoPat->TabIndex = 72;
			this->L_ApellidoPat->Text = L"Apellido Paterno:";
			this->L_ApellidoPat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_ApellidoPat
			// 
			this->TB_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoPat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoPat->Location = System::Drawing::Point(420, 37);
			this->TB_ApellidoPat->Margin = System::Windows::Forms::Padding(4);
			this->TB_ApellidoPat->Name = L"TB_ApellidoPat";
			this->TB_ApellidoPat->Size = System::Drawing::Size(265, 41);
			this->TB_ApellidoPat->TabIndex = 71;
			// 
			// L_Nombres
			// 
			this->L_Nombres->BackColor = System::Drawing::Color::OldLace;
			this->L_Nombres->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Nombres->Location = System::Drawing::Point(146, -17);
			this->L_Nombres->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Nombres->Name = L"L_Nombres";
			this->L_Nombres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Nombres->Size = System::Drawing::Size(267, 49);
			this->L_Nombres->TabIndex = 70;
			this->L_Nombres->Text = L"Nombres:";
			this->L_Nombres->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Nombres
			// 
			this->TB_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Nombres->ForeColor = System::Drawing::Color::Black;
			this->TB_Nombres->Location = System::Drawing::Point(420, -20);
			this->TB_Nombres->Margin = System::Windows::Forms::Padding(4);
			this->TB_Nombres->Name = L"TB_Nombres";
			this->TB_Nombres->Size = System::Drawing::Size(265, 41);
			this->TB_Nombres->TabIndex = 69;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkBlue;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(100, 719);
			this->panel1->TabIndex = 91;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkBlue;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(929, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(100, 719);
			this->panel2->TabIndex = 92;
			// 
			// Nuevo_Conductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1029, 719);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->TB_Contrato);
			this->Controls->Add(this->L_Contrato);
			this->Controls->Add(this->TB_Sueldo);
			this->Controls->Add(this->L_Sueldo);
			this->Controls->Add(this->B_Crear);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->CB_Genero);
			this->Controls->Add(this->L_Contrasena);
			this->Controls->Add(this->TB_Contrasena);
			this->Controls->Add(this->L_Telefono);
			this->Controls->Add(this->TB_Telefono);
			this->Controls->Add(this->L_Genero);
			this->Controls->Add(this->L_Edad);
			this->Controls->Add(this->TB_Edad);
			this->Controls->Add(this->L_DNI);
			this->Controls->Add(this->TB_DNI);
			this->Controls->Add(this->L_ApellidoMat);
			this->Controls->Add(this->TB_ApellidoMat);
			this->Controls->Add(this->L_ApellidoPat);
			this->Controls->Add(this->TB_ApellidoPat);
			this->Controls->Add(this->L_Nombres);
			this->Controls->Add(this->TB_Nombres);
			this->Name = L"Nuevo_Conductor";
			this->Text = L"Nuevo_Conductor";
			this->Load += gcnew System::EventHandler(this, &Nuevo_Conductor::Nuevo_Conductor_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Nuevo_Conductor::Nuevo_Conductor_SizeChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void CentrarForm() {
			int CentroX = (this->ClientSize.Width) / 2;
			int CentroY = (this->ClientSize.Height) / 2;
			this->L_Nombres->Location = System::Drawing::Point(CentroX - 205, 80);
			this->TB_Nombres->Location = System::Drawing::Point(CentroX + 5, 80);
			this->L_ApellidoPat->Location = System::Drawing::Point(CentroX - 205, 130);
			this->TB_ApellidoPat->Location = System::Drawing::Point(CentroX + 5, 130);
			this->L_ApellidoMat->Location = System::Drawing::Point(CentroX - 205, 180);
			this->TB_ApellidoMat->Location = System::Drawing::Point(CentroX + 5, 180);
			this->L_DNI->Location = System::Drawing::Point(CentroX - 205, 230);
			this->TB_DNI->Location = System::Drawing::Point(CentroX + 5, 230);
			this->L_Edad->Location = System::Drawing::Point(CentroX - 205, 280);
			this->TB_Edad->Location = System::Drawing::Point(CentroX + 5, 280);
			this->L_Genero->Location = System::Drawing::Point(CentroX - 205, 330);
			this->CB_Genero->Location = System::Drawing::Point(CentroX + 5, 330);
			this->L_Telefono->Location = System::Drawing::Point(CentroX - 205, 380);
			this->TB_Telefono->Location = System::Drawing::Point(CentroX + 5, 380);
			this->L_Contrasena->Location = System::Drawing::Point(CentroX - 205, 430);
			this->TB_Contrasena->Location = System::Drawing::Point(CentroX + 5, 430);
			this->L_Sueldo->Location = System::Drawing::Point(CentroX - 205, 480);
			this->TB_Sueldo->Location = System::Drawing::Point(CentroX + 5, 480);
			this->L_Contrato->Location = System::Drawing::Point(CentroX - 205, 530);
			this->TB_Contrato->Location = System::Drawing::Point(CentroX + 5, 530);
			this->B_Cancelar->Location = System::Drawing::Point(CentroX - 125, 580);
			this->B_Crear->Location = System::Drawing::Point(CentroX + 35, 580);
		}
	private: System::Void B_Crear_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Nombres = this->TB_Nombres->Text;
		String^ ApellidoPat = this->TB_ApellidoPat->Text;
		String^ ApellidoMat = this->TB_ApellidoMat->Text;
		String^ DNI = this->TB_DNI->Text;
		int Edad = Convert::ToInt32(this->TB_Edad->Text);
		String^ Genero = this->CB_Genero->Text;
		String^ Telefono = this->TB_Telefono->Text;
		String^ Contrasena = this->TB_Contrasena->Text;
		int Sueldo = Convert::ToInt32(this->TB_Sueldo->Text);
		String^ Contrato = this->TB_Contrato->Text;

		PersonaController^ ObjPersonaController = gcnew PersonaController();
		int Codigo = (ObjPersonaController->BuscarUltimoCodigo() + 1);
		Persona^ ObjPersona = gcnew Persona(Codigo, Nombres, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono, Contrasena, "Conductor");
		ObjPersonaController->AgregarPersona(ObjPersona);

		ConductorController^ ObjConductorController = gcnew ConductorController();
		Empleado^ ObjConductor = gcnew Empleado(DNI, Nombres, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena,Sueldo,Contrato);
		ObjConductorController->agregarConductor(ObjConductor);

		MessageBox::Show("Cuenta de Conductor creado con exito.");
		this->Close();
	}
private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Nuevo_Conductor_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &Nuevo_Conductor::Nuevo_Conductor_SizeChanged));
	CentrarForm();
}
private: System::Void Nuevo_Conductor_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
};
}
