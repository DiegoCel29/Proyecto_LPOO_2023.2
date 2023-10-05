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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DateTimePicker^ Tiempo_Cumpleanos;
	private: System::Windows::Forms::Label^ Cumpleanos;
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
	private: Pasajero^ objPasajero; /*Este atributo lo agregamos porque necesitamos manejar la informacion de los pasajeros*/
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Tiempo_Cumpleanos = (gcnew System::Windows::Forms::DateTimePicker());
			this->Cumpleanos = (gcnew System::Windows::Forms::Label());
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
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkBlue;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(75, 648);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkBlue;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(969, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(75, 648);
			this->panel2->TabIndex = 1;
			// 
			// Tiempo_Cumpleanos
			// 
			this->Tiempo_Cumpleanos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tiempo_Cumpleanos->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->Tiempo_Cumpleanos->Location = System::Drawing::Point(687, 318);
			this->Tiempo_Cumpleanos->Name = L"Tiempo_Cumpleanos";
			this->Tiempo_Cumpleanos->Size = System::Drawing::Size(265, 41);
			this->Tiempo_Cumpleanos->TabIndex = 46;
			// 
			// Cumpleanos
			// 
			this->Cumpleanos->BackColor = System::Drawing::Color::OldLace;
			this->Cumpleanos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cumpleanos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cumpleanos->Location = System::Drawing::Point(373, 276);
			this->Cumpleanos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Cumpleanos->Name = L"Cumpleanos";
			this->Cumpleanos->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Cumpleanos->Size = System::Drawing::Size(267, 49);
			this->Cumpleanos->TabIndex = 45;
			this->Cumpleanos->Text = L"Cumpleaños:";
			this->Cumpleanos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->B_Crear->Location = System::Drawing::Point(403, 552);
			this->B_Crear->Margin = System::Windows::Forms::Padding(4);
			this->B_Crear->Name = L"B_Crear";
			this->B_Crear->Size = System::Drawing::Size(120, 49);
			this->B_Crear->TabIndex = 44;
			this->B_Crear->Text = L"Grabar";
			this->B_Crear->UseVisualStyleBackColor = false;
			this->B_Crear->Click += gcnew System::EventHandler(this, &PasajeroMantenimientoEditar::B_Crear_Click);
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
			this->B_Cancelar->Location = System::Drawing::Point(202, 552);
			this->B_Cancelar->Margin = System::Windows::Forms::Padding(4);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(120, 49);
			this->B_Cancelar->TabIndex = 43;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = false;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &PasajeroMantenimientoEditar::B_Cancelar_Click);
			// 
			// CB_Genero
			// 
			this->CB_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Genero->FormattingEnabled = true;
			this->CB_Genero->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->CB_Genero->Location = System::Drawing::Point(372, 349);
			this->CB_Genero->Margin = System::Windows::Forms::Padding(4);
			this->CB_Genero->Name = L"CB_Genero";
			this->CB_Genero->Size = System::Drawing::Size(265, 44);
			this->CB_Genero->TabIndex = 42;
			this->CB_Genero->TabStop = false;
			// 
			// L_Contrasena
			// 
			this->L_Contrasena->BackColor = System::Drawing::Color::OldLace;
			this->L_Contrasena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Contrasena->Location = System::Drawing::Point(98, 460);
			this->L_Contrasena->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Contrasena->Name = L"L_Contrasena";
			this->L_Contrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Contrasena->Size = System::Drawing::Size(267, 49);
			this->L_Contrasena->TabIndex = 41;
			this->L_Contrasena->Text = L"Contraseña:";
			this->L_Contrasena->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Contrasena
			// 
			this->TB_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Contrasena->ForeColor = System::Drawing::Color::Black;
			this->TB_Contrasena->Location = System::Drawing::Point(372, 460);
			this->TB_Contrasena->Margin = System::Windows::Forms::Padding(4);
			this->TB_Contrasena->Name = L"TB_Contrasena";
			this->TB_Contrasena->PasswordChar = '*';
			this->TB_Contrasena->Size = System::Drawing::Size(265, 41);
			this->TB_Contrasena->TabIndex = 40;
			// 
			// L_Telefono
			// 
			this->L_Telefono->BackColor = System::Drawing::Color::OldLace;
			this->L_Telefono->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Telefono->Location = System::Drawing::Point(98, 407);
			this->L_Telefono->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Telefono->Name = L"L_Telefono";
			this->L_Telefono->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Telefono->Size = System::Drawing::Size(267, 49);
			this->L_Telefono->TabIndex = 39;
			this->L_Telefono->Text = L"Telefono:";
			this->L_Telefono->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Telefono
			// 
			this->TB_Telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Telefono->ForeColor = System::Drawing::Color::Black;
			this->TB_Telefono->Location = System::Drawing::Point(372, 407);
			this->TB_Telefono->Margin = System::Windows::Forms::Padding(4);
			this->TB_Telefono->Name = L"TB_Telefono";
			this->TB_Telefono->Size = System::Drawing::Size(265, 41);
			this->TB_Telefono->TabIndex = 38;
			// 
			// L_Genero
			// 
			this->L_Genero->BackColor = System::Drawing::Color::OldLace;
			this->L_Genero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Genero->Location = System::Drawing::Point(98, 345);
			this->L_Genero->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Genero->Name = L"L_Genero";
			this->L_Genero->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Genero->Size = System::Drawing::Size(267, 49);
			this->L_Genero->TabIndex = 37;
			this->L_Genero->Text = L"Genero:";
			this->L_Genero->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Edad
			// 
			this->L_Edad->BackColor = System::Drawing::Color::OldLace;
			this->L_Edad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Edad->Location = System::Drawing::Point(98, 288);
			this->L_Edad->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Edad->Name = L"L_Edad";
			this->L_Edad->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Edad->Size = System::Drawing::Size(267, 49);
			this->L_Edad->TabIndex = 36;
			this->L_Edad->Text = L"Edad:";
			this->L_Edad->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Edad
			// 
			this->TB_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Edad->ForeColor = System::Drawing::Color::Black;
			this->TB_Edad->Location = System::Drawing::Point(372, 288);
			this->TB_Edad->Margin = System::Windows::Forms::Padding(4);
			this->TB_Edad->Name = L"TB_Edad";
			this->TB_Edad->Size = System::Drawing::Size(265, 41);
			this->TB_Edad->TabIndex = 35;
			// 
			// L_DNI
			// 
			this->L_DNI->BackColor = System::Drawing::Color::OldLace;
			this->L_DNI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_DNI->Location = System::Drawing::Point(98, 232);
			this->L_DNI->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_DNI->Name = L"L_DNI";
			this->L_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_DNI->Size = System::Drawing::Size(267, 49);
			this->L_DNI->TabIndex = 34;
			this->L_DNI->Text = L"DNI:";
			this->L_DNI->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_DNI
			// 
			this->TB_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_DNI->ForeColor = System::Drawing::Color::Black;
			this->TB_DNI->Location = System::Drawing::Point(372, 232);
			this->TB_DNI->Margin = System::Windows::Forms::Padding(4);
			this->TB_DNI->Name = L"TB_DNI";
			this->TB_DNI->Size = System::Drawing::Size(265, 41);
			this->TB_DNI->TabIndex = 33;
			// 
			// L_ApellidoMat
			// 
			this->L_ApellidoMat->BackColor = System::Drawing::Color::OldLace;
			this->L_ApellidoMat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoMat->Location = System::Drawing::Point(98, 165);
			this->L_ApellidoMat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_ApellidoMat->Name = L"L_ApellidoMat";
			this->L_ApellidoMat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoMat->Size = System::Drawing::Size(267, 49);
			this->L_ApellidoMat->TabIndex = 32;
			this->L_ApellidoMat->Text = L"Apellido Materno:";
			this->L_ApellidoMat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_ApellidoMat
			// 
			this->TB_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoMat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoMat->Location = System::Drawing::Point(372, 165);
			this->TB_ApellidoMat->Margin = System::Windows::Forms::Padding(4);
			this->TB_ApellidoMat->Name = L"TB_ApellidoMat";
			this->TB_ApellidoMat->Size = System::Drawing::Size(265, 41);
			this->TB_ApellidoMat->TabIndex = 31;
			// 
			// L_ApellidoPat
			// 
			this->L_ApellidoPat->BackColor = System::Drawing::Color::OldLace;
			this->L_ApellidoPat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoPat->Location = System::Drawing::Point(98, 105);
			this->L_ApellidoPat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_ApellidoPat->Name = L"L_ApellidoPat";
			this->L_ApellidoPat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoPat->Size = System::Drawing::Size(267, 49);
			this->L_ApellidoPat->TabIndex = 30;
			this->L_ApellidoPat->Text = L"Apellido Paterno:";
			this->L_ApellidoPat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_ApellidoPat
			// 
			this->TB_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoPat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoPat->Location = System::Drawing::Point(372, 105);
			this->TB_ApellidoPat->Margin = System::Windows::Forms::Padding(4);
			this->TB_ApellidoPat->Name = L"TB_ApellidoPat";
			this->TB_ApellidoPat->Size = System::Drawing::Size(265, 41);
			this->TB_ApellidoPat->TabIndex = 29;
			// 
			// L_Nombres
			// 
			this->L_Nombres->BackColor = System::Drawing::Color::OldLace;
			this->L_Nombres->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Nombres->Location = System::Drawing::Point(98, 51);
			this->L_Nombres->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Nombres->Name = L"L_Nombres";
			this->L_Nombres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Nombres->Size = System::Drawing::Size(267, 49);
			this->L_Nombres->TabIndex = 28;
			this->L_Nombres->Text = L"Nombres:";
			this->L_Nombres->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Nombres
			// 
			this->TB_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Nombres->ForeColor = System::Drawing::Color::Black;
			this->TB_Nombres->Location = System::Drawing::Point(372, 48);
			this->TB_Nombres->Margin = System::Windows::Forms::Padding(4);
			this->TB_Nombres->Name = L"TB_Nombres";
			this->TB_Nombres->Size = System::Drawing::Size(265, 41);
			this->TB_Nombres->TabIndex = 27;
			// 
			// PasajeroMantenimientoEditar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 648);
			this->Controls->Add(this->Tiempo_Cumpleanos);
			this->Controls->Add(this->Cumpleanos);
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
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"PasajeroMantenimientoEditar";
			this->Text = L"PasajeroMantenimientoEditar";
			this->Load += gcnew System::EventHandler(this, &PasajeroMantenimientoEditar::PasajeroMantenimientoEditar_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &PasajeroMantenimientoEditar::PasajeroMantenimientoEditar_SizeChanged);
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
			this->Cumpleanos->Location = System::Drawing::Point(CentroX - 205, 480);
			this->Tiempo_Cumpleanos->Location = System::Drawing::Point(CentroX + 5, 480);
			this->B_Cancelar->Location = System::Drawing::Point(CentroX - 125, 530);
			this->B_Crear->Location = System::Drawing::Point(CentroX + 35, 530);
		}

	private: System::Void B_Crear_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Nombre = this->TB_Nombres->Text;
		String^ Apellido_Pat = this->TB_ApellidoPat->Text;
		String^ Apellido_Mat = this->TB_ApellidoMat->Text;
		String^ DNI = this->TB_DNI->Text;
		int Edad = Convert::ToInt32(this->TB_Edad->Text);
		String^ Genero = this->CB_Genero->Text;
		String^ Telefono = this->TB_Telefono->Text;
		String^ Contrasena = this->TB_Contrasena->Text;
		String^ Tiempo_Cumpleanos = this->Tiempo_Cumpleanos->Text;
		Pasajero^ objPasajero = gcnew Pasajero(DNI,Nombre,Apellido_Pat,Apellido_Mat,Edad,Genero,Telefono,Contrasena,Tiempo_Cumpleanos);
		PasajeroController^ objPasajeroController = gcnew PasajeroController();
		objPasajeroController->ActualizarPasajero(objPasajero);
		MessageBox::Show("La carrera ha sido actualizada con exito");
		this->Close();
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
