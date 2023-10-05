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
	/// Resumen de EmpleadoMantenimientoEditar
	/// </summary>
	public ref class EmpleadoMantenimientoEditar : public System::Windows::Forms::Form
	{
	public:
		EmpleadoMantenimientoEditar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		EmpleadoMantenimientoEditar(Empleado^ objEmpleado)
		{
			InitializeComponent();
			this->objEmpleado = objEmpleado;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EmpleadoMantenimientoEditar()
		{
			if (components)
			{
				delete components;
			}
		}
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
	private: System::Windows::Forms::Label^ L_Sueldo;
	private: System::Windows::Forms::TextBox^ TB_Sueldo;
	private: System::Windows::Forms::Label^ L_Contrato;
	private: System::Windows::Forms::TextBox^ TB_Contrato;
	private: Empleado^ objEmpleado;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Button^ B_Grabar;
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::ComboBox^ CB_Tipo;
	private: System::Windows::Forms::Label^ L_Tipo;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmpleadoMantenimientoEditar::typeid));
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
			this->L_Sueldo = (gcnew System::Windows::Forms::Label());
			this->TB_Sueldo = (gcnew System::Windows::Forms::TextBox());
			this->L_Contrato = (gcnew System::Windows::Forms::Label());
			this->TB_Contrato = (gcnew System::Windows::Forms::TextBox());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->CB_Tipo = (gcnew System::Windows::Forms::ComboBox());
			this->L_Tipo = (gcnew System::Windows::Forms::Label());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// CB_Genero
			// 
			this->CB_Genero->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Genero->Enabled = false;
			this->CB_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Genero->FormattingEnabled = true;
			this->CB_Genero->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->CB_Genero->Location = System::Drawing::Point(185, 279);
			this->CB_Genero->Name = L"CB_Genero";
			this->CB_Genero->Size = System::Drawing::Size(250, 32);
			this->CB_Genero->TabIndex = 62;
			// 
			// L_Contrasena
			// 
			this->L_Contrasena->BackColor = System::Drawing::Color::Moccasin;
			this->L_Contrasena->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Contrasena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Contrasena->ForeColor = System::Drawing::Color::Black;
			this->L_Contrasena->Location = System::Drawing::Point(10, 380);
			this->L_Contrasena->Name = L"L_Contrasena";
			this->L_Contrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Contrasena->Size = System::Drawing::Size(160, 30);
			this->L_Contrasena->TabIndex = 61;
			this->L_Contrasena->Text = L"Contraseña:";
			this->L_Contrasena->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Contrasena
			// 
			this->TB_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Contrasena->ForeColor = System::Drawing::Color::Black;
			this->TB_Contrasena->Location = System::Drawing::Point(185, 380);
			this->TB_Contrasena->Name = L"TB_Contrasena";
			this->TB_Contrasena->PasswordChar = '*';
			this->TB_Contrasena->Size = System::Drawing::Size(250, 29);
			this->TB_Contrasena->TabIndex = 60;
			// 
			// L_Telefono
			// 
			this->L_Telefono->BackColor = System::Drawing::Color::Moccasin;
			this->L_Telefono->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Telefono->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Telefono->ForeColor = System::Drawing::Color::Black;
			this->L_Telefono->Location = System::Drawing::Point(10, 330);
			this->L_Telefono->Name = L"L_Telefono";
			this->L_Telefono->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Telefono->Size = System::Drawing::Size(160, 30);
			this->L_Telefono->TabIndex = 59;
			this->L_Telefono->Text = L"Telefono:";
			this->L_Telefono->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Telefono
			// 
			this->TB_Telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Telefono->ForeColor = System::Drawing::Color::Black;
			this->TB_Telefono->Location = System::Drawing::Point(185, 330);
			this->TB_Telefono->Name = L"TB_Telefono";
			this->TB_Telefono->Size = System::Drawing::Size(250, 29);
			this->TB_Telefono->TabIndex = 58;
			// 
			// L_Genero
			// 
			this->L_Genero->BackColor = System::Drawing::Color::Moccasin;
			this->L_Genero->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Genero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Genero->ForeColor = System::Drawing::Color::Black;
			this->L_Genero->Location = System::Drawing::Point(10, 280);
			this->L_Genero->Name = L"L_Genero";
			this->L_Genero->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Genero->Size = System::Drawing::Size(160, 30);
			this->L_Genero->TabIndex = 57;
			this->L_Genero->Text = L"Genero:";
			this->L_Genero->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Edad
			// 
			this->L_Edad->BackColor = System::Drawing::Color::Moccasin;
			this->L_Edad->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Edad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Edad->ForeColor = System::Drawing::Color::Black;
			this->L_Edad->Location = System::Drawing::Point(10, 230);
			this->L_Edad->Name = L"L_Edad";
			this->L_Edad->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Edad->Size = System::Drawing::Size(160, 30);
			this->L_Edad->TabIndex = 56;
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
			this->TB_Edad->ReadOnly = true;
			this->TB_Edad->Size = System::Drawing::Size(250, 29);
			this->TB_Edad->TabIndex = 55;
			// 
			// L_DNI
			// 
			this->L_DNI->BackColor = System::Drawing::Color::Moccasin;
			this->L_DNI->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_DNI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_DNI->ForeColor = System::Drawing::Color::Black;
			this->L_DNI->Location = System::Drawing::Point(10, 180);
			this->L_DNI->Name = L"L_DNI";
			this->L_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_DNI->Size = System::Drawing::Size(160, 30);
			this->L_DNI->TabIndex = 54;
			this->L_DNI->Text = L"DNI:";
			this->L_DNI->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_DNI
			// 
			this->TB_DNI->Enabled = false;
			this->TB_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_DNI->ForeColor = System::Drawing::Color::Black;
			this->TB_DNI->Location = System::Drawing::Point(185, 180);
			this->TB_DNI->Name = L"TB_DNI";
			this->TB_DNI->ReadOnly = true;
			this->TB_DNI->Size = System::Drawing::Size(250, 29);
			this->TB_DNI->TabIndex = 53;
			// 
			// L_ApellidoMat
			// 
			this->L_ApellidoMat->BackColor = System::Drawing::Color::Moccasin;
			this->L_ApellidoMat->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ApellidoMat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoMat->ForeColor = System::Drawing::Color::Black;
			this->L_ApellidoMat->Location = System::Drawing::Point(10, 130);
			this->L_ApellidoMat->Name = L"L_ApellidoMat";
			this->L_ApellidoMat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoMat->Size = System::Drawing::Size(160, 30);
			this->L_ApellidoMat->TabIndex = 52;
			this->L_ApellidoMat->Text = L"Apellido Materno:";
			this->L_ApellidoMat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_ApellidoMat
			// 
			this->TB_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoMat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoMat->Location = System::Drawing::Point(185, 130);
			this->TB_ApellidoMat->Name = L"TB_ApellidoMat";
			this->TB_ApellidoMat->Size = System::Drawing::Size(250, 29);
			this->TB_ApellidoMat->TabIndex = 51;
			// 
			// L_ApellidoPat
			// 
			this->L_ApellidoPat->BackColor = System::Drawing::Color::Moccasin;
			this->L_ApellidoPat->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ApellidoPat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoPat->ForeColor = System::Drawing::Color::Black;
			this->L_ApellidoPat->Location = System::Drawing::Point(10, 80);
			this->L_ApellidoPat->Name = L"L_ApellidoPat";
			this->L_ApellidoPat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoPat->Size = System::Drawing::Size(160, 30);
			this->L_ApellidoPat->TabIndex = 50;
			this->L_ApellidoPat->Text = L"Apellido Paterno:";
			this->L_ApellidoPat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_ApellidoPat
			// 
			this->TB_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoPat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoPat->Location = System::Drawing::Point(185, 80);
			this->TB_ApellidoPat->Name = L"TB_ApellidoPat";
			this->TB_ApellidoPat->Size = System::Drawing::Size(250, 29);
			this->TB_ApellidoPat->TabIndex = 49;
			// 
			// L_Nombres
			// 
			this->L_Nombres->BackColor = System::Drawing::Color::Moccasin;
			this->L_Nombres->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Nombres->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Nombres->ForeColor = System::Drawing::Color::Black;
			this->L_Nombres->Location = System::Drawing::Point(10, 30);
			this->L_Nombres->Name = L"L_Nombres";
			this->L_Nombres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Nombres->Size = System::Drawing::Size(160, 30);
			this->L_Nombres->TabIndex = 48;
			this->L_Nombres->Text = L"Nombres:";
			this->L_Nombres->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Nombres
			// 
			this->TB_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Nombres->ForeColor = System::Drawing::Color::Black;
			this->TB_Nombres->Location = System::Drawing::Point(185, 30);
			this->TB_Nombres->Name = L"TB_Nombres";
			this->TB_Nombres->Size = System::Drawing::Size(250, 29);
			this->TB_Nombres->TabIndex = 47;
			// 
			// L_Sueldo
			// 
			this->L_Sueldo->BackColor = System::Drawing::Color::Moccasin;
			this->L_Sueldo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Sueldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Sueldo->ForeColor = System::Drawing::Color::Black;
			this->L_Sueldo->Location = System::Drawing::Point(10, 530);
			this->L_Sueldo->Name = L"L_Sueldo";
			this->L_Sueldo->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Sueldo->Size = System::Drawing::Size(160, 30);
			this->L_Sueldo->TabIndex = 65;
			this->L_Sueldo->Text = L"Sueldo";
			this->L_Sueldo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Sueldo
			// 
			this->TB_Sueldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Sueldo->ForeColor = System::Drawing::Color::Black;
			this->TB_Sueldo->Location = System::Drawing::Point(185, 530);
			this->TB_Sueldo->Name = L"TB_Sueldo";
			this->TB_Sueldo->Size = System::Drawing::Size(250, 29);
			this->TB_Sueldo->TabIndex = 66;
			// 
			// L_Contrato
			// 
			this->L_Contrato->BackColor = System::Drawing::Color::Moccasin;
			this->L_Contrato->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Contrato->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Contrato->ForeColor = System::Drawing::Color::Black;
			this->L_Contrato->Location = System::Drawing::Point(10, 480);
			this->L_Contrato->Name = L"L_Contrato";
			this->L_Contrato->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Contrato->Size = System::Drawing::Size(160, 30);
			this->L_Contrato->TabIndex = 67;
			this->L_Contrato->Text = L"Contrato:";
			this->L_Contrato->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Contrato
			// 
			this->TB_Contrato->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Contrato->ForeColor = System::Drawing::Color::Black;
			this->TB_Contrato->Location = System::Drawing::Point(185, 480);
			this->TB_Contrato->Name = L"TB_Contrato";
			this->TB_Contrato->Size = System::Drawing::Size(250, 29);
			this->TB_Contrato->TabIndex = 68;
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(360, 606);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(100, 40);
			this->B_Cancelar->TabIndex = 70;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &EmpleadoMantenimientoEditar::B_Cancelar_Click);
			// 
			// B_Grabar
			// 
			this->B_Grabar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Grabar.BackgroundImage")));
			this->B_Grabar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Grabar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Grabar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Grabar->Location = System::Drawing::Point(0, 606);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(100, 40);
			this->B_Grabar->TabIndex = 69;
			this->B_Grabar->Text = L"Grabar";
			this->B_Grabar->UseVisualStyleBackColor = true;
			this->B_Grabar->Click += gcnew System::EventHandler(this, &EmpleadoMantenimientoEditar::B_Grabar_Click);
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->CB_Tipo);
			this->GB_Datos->Controls->Add(this->L_Tipo);
			this->GB_Datos->Controls->Add(this->L_Nombres);
			this->GB_Datos->Controls->Add(this->L_ApellidoPat);
			this->GB_Datos->Controls->Add(this->L_ApellidoMat);
			this->GB_Datos->Controls->Add(this->TB_Sueldo);
			this->GB_Datos->Controls->Add(this->TB_Contrato);
			this->GB_Datos->Controls->Add(this->L_DNI);
			this->GB_Datos->Controls->Add(this->L_Contrato);
			this->GB_Datos->Controls->Add(this->TB_Contrasena);
			this->GB_Datos->Controls->Add(this->CB_Genero);
			this->GB_Datos->Controls->Add(this->TB_Telefono);
			this->GB_Datos->Controls->Add(this->L_Sueldo);
			this->GB_Datos->Controls->Add(this->L_Edad);
			this->GB_Datos->Controls->Add(this->L_Genero);
			this->GB_Datos->Controls->Add(this->TB_Edad);
			this->GB_Datos->Controls->Add(this->TB_DNI);
			this->GB_Datos->Controls->Add(this->L_Telefono);
			this->GB_Datos->Controls->Add(this->TB_ApellidoMat);
			this->GB_Datos->Controls->Add(this->L_Contrasena);
			this->GB_Datos->Controls->Add(this->TB_ApellidoPat);
			this->GB_Datos->Controls->Add(this->TB_Nombres);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(0, 0);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Size = System::Drawing::Size(460, 590);
			this->GB_Datos->TabIndex = 71;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos del empleado:";
			// 
			// CB_Tipo
			// 
			this->CB_Tipo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Tipo->Enabled = false;
			this->CB_Tipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Tipo->FormattingEnabled = true;
			this->CB_Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Administrador", L"Conductor" });
			this->CB_Tipo->Location = System::Drawing::Point(185, 429);
			this->CB_Tipo->Name = L"CB_Tipo";
			this->CB_Tipo->Size = System::Drawing::Size(250, 32);
			this->CB_Tipo->TabIndex = 72;
			// 
			// L_Tipo
			// 
			this->L_Tipo->BackColor = System::Drawing::Color::Moccasin;
			this->L_Tipo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Tipo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Tipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Tipo->ForeColor = System::Drawing::Color::Black;
			this->L_Tipo->Location = System::Drawing::Point(10, 430);
			this->L_Tipo->Name = L"L_Tipo";
			this->L_Tipo->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Tipo->Size = System::Drawing::Size(160, 30);
			this->L_Tipo->TabIndex = 70;
			this->L_Tipo->Text = L"Tipo:";
			this->L_Tipo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// EmpleadoMantenimientoEditar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1141, 843);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->B_Grabar);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EmpleadoMantenimientoEditar";
			this->Text = L"Editar empleado";
			this->Load += gcnew System::EventHandler(this, &EmpleadoMantenimientoEditar::EmpleadoMantenimientoEditar_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &EmpleadoMantenimientoEditar::EmpleadoMantenimientoEditar_SizeChanged);
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CentrarForm() {
		int PosXGB_Datos = ((this->ClientSize.Width) - (this->GB_Datos->Width)) / 2;

		this->GB_Datos->Location = System::Drawing::Point(PosXGB_Datos, 25);
		this->B_Cancelar->Location = System::Drawing::Point(PosXGB_Datos, 640);
		this->B_Grabar->Location = System::Drawing::Point(PosXGB_Datos + 360, 640);
	}
	private: System::Void EmpleadoMantenimientoEditar_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &EmpleadoMantenimientoEditar::EmpleadoMantenimientoEditar_SizeChanged));
		CentrarForm();
		this->TB_Nombres->Text = this->objEmpleado->GetNombre_Empleado();
		this->TB_ApellidoPat->Text = this->objEmpleado->GetApellidoPat_Empleado();
		this->TB_ApellidoMat->Text = this->objEmpleado->GetApellidoMat_Empleado();
		this->TB_DNI->Text = this->objEmpleado->GetDNI_Empleado();
		this->TB_Edad->Text = Convert::ToString(this->objEmpleado->GetEdad_Empleado());
		this->CB_Genero->Text = this->objEmpleado->GetGenero_Empleado();
		this->TB_Telefono->Text = this->objEmpleado->GetTelefono_Empleado();
		this->TB_Contrasena->Text = this->objEmpleado->GetContrasena_Empleado();
		this->CB_Tipo->Text = this->objEmpleado->GetTipo_Empleado();
		this->TB_Sueldo->Text = Convert::ToString(this->objEmpleado->GetSueldo_Empleado());
		this->TB_Contrato->Text = Convert::ToString(this->objEmpleado->GetEstadoContrato_Empleado());
	}
	private: System::Void EmpleadoMantenimientoEditar_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	};
	private: System::Void B_Grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->TB_Sueldo->Text != ""){
			this->objEmpleado->SetNombre_Empleado(this->TB_Nombres->Text);
			this->objEmpleado->SetApellidoPat_Empleado(this->TB_ApellidoPat->Text);
			this->objEmpleado->SetApellidoMat_Empleado(this->TB_ApellidoMat->Text);
			this->objEmpleado->SetTelefono_Empleado(this->TB_Telefono->Text);
			this->objEmpleado->SetContrasena_Empleado(this->TB_Contrasena->Text);
			this->objEmpleado->SetTipo_Empleado(this->CB_Tipo->Text);
			this->objEmpleado->SetSueldo_Empleado(Convert::ToInt32(this->TB_Sueldo->Text));
			this->objEmpleado->SetEstadoContrato_Empleado(this->TB_Contrato->Text);


			EmpleadoController^ objEmpleadoController = gcnew EmpleadoController();
			objEmpleadoController->ActualizarEmpleado(objEmpleado);
			MessageBox::Show("Los datos del Empleado han sido actualizados con exito");
			this->Close();
		}
	}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
};
}
