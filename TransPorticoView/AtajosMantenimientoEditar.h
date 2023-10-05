#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace TransPorticoModel;
	using namespace TransPorticoController;

	/// <summary>
	/// Resumen de AtajosMantenimientoEditar
	/// </summary>
	public ref class AtajosMantenimientoEditar : public System::Windows::Forms::Form
	{
	public:
		AtajosMantenimientoEditar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		AtajosMantenimientoEditar(Atajo^ objAtajos)
		{
			InitializeComponent();
			this->objAtajos = objAtajos;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AtajosMantenimientoEditar()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: Atajo^ objAtajos;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::ComboBox^ CB_RutaAsociada;
	private: System::Windows::Forms::ComboBox^ CB_ParaderoFinal;
	private: System::Windows::Forms::ComboBox^ CB_ParaderoInicial;
	private: System::Windows::Forms::Label^ L_Codigo;
	private: System::Windows::Forms::TextBox^ TB_X_Final;
	private: System::Windows::Forms::Label^ L_Paradero_Inicio;
	private: System::Windows::Forms::Label^ L_Ruta_Asociada;
	private: System::Windows::Forms::TextBox^ TB_Y_Final;
	private: System::Windows::Forms::Label^ L_X_Inicio;
	private: System::Windows::Forms::Label^ L_Y_Inicio;
	private: System::Windows::Forms::TextBox^ TB_Y_Inicio;
	private: System::Windows::Forms::Label^ L_Y_Final;
	private: System::Windows::Forms::TextBox^ TB_X_Inicio;
	private: System::Windows::Forms::Label^ L_Paradero_Final;
	private: System::Windows::Forms::Label^ L_X_Final;
	private: System::Windows::Forms::TextBox^ TB_Codigo;
	private: System::Windows::Forms::Button^ B_Crear;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AtajosMantenimientoEditar::typeid));
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->CB_RutaAsociada = (gcnew System::Windows::Forms::ComboBox());
			this->CB_ParaderoFinal = (gcnew System::Windows::Forms::ComboBox());
			this->CB_ParaderoInicial = (gcnew System::Windows::Forms::ComboBox());
			this->L_Codigo = (gcnew System::Windows::Forms::Label());
			this->TB_X_Final = (gcnew System::Windows::Forms::TextBox());
			this->L_Paradero_Inicio = (gcnew System::Windows::Forms::Label());
			this->L_Ruta_Asociada = (gcnew System::Windows::Forms::Label());
			this->TB_Y_Final = (gcnew System::Windows::Forms::TextBox());
			this->L_X_Inicio = (gcnew System::Windows::Forms::Label());
			this->L_Y_Inicio = (gcnew System::Windows::Forms::Label());
			this->TB_Y_Inicio = (gcnew System::Windows::Forms::TextBox());
			this->L_Y_Final = (gcnew System::Windows::Forms::Label());
			this->TB_X_Inicio = (gcnew System::Windows::Forms::TextBox());
			this->L_Paradero_Final = (gcnew System::Windows::Forms::Label());
			this->L_X_Final = (gcnew System::Windows::Forms::Label());
			this->TB_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->B_Crear = (gcnew System::Windows::Forms::Button());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(320, 497);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(100, 40);
			this->B_Cancelar->TabIndex = 132;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::B_Cancelar_Click);
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->CB_RutaAsociada);
			this->GB_Datos->Controls->Add(this->CB_ParaderoFinal);
			this->GB_Datos->Controls->Add(this->CB_ParaderoInicial);
			this->GB_Datos->Controls->Add(this->L_Codigo);
			this->GB_Datos->Controls->Add(this->TB_X_Final);
			this->GB_Datos->Controls->Add(this->L_Paradero_Inicio);
			this->GB_Datos->Controls->Add(this->L_Ruta_Asociada);
			this->GB_Datos->Controls->Add(this->TB_Y_Final);
			this->GB_Datos->Controls->Add(this->L_X_Inicio);
			this->GB_Datos->Controls->Add(this->L_Y_Inicio);
			this->GB_Datos->Controls->Add(this->TB_Y_Inicio);
			this->GB_Datos->Controls->Add(this->L_Y_Final);
			this->GB_Datos->Controls->Add(this->TB_X_Inicio);
			this->GB_Datos->Controls->Add(this->L_Paradero_Final);
			this->GB_Datos->Controls->Add(this->L_X_Final);
			this->GB_Datos->Controls->Add(this->TB_Codigo);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(2, 1);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Size = System::Drawing::Size(460, 440);
			this->GB_Datos->TabIndex = 130;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos del atajo:";
			// 
			// CB_RutaAsociada
			// 
			this->CB_RutaAsociada->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_RutaAsociada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CB_RutaAsociada->FormattingEnabled = true;
			this->CB_RutaAsociada->Location = System::Drawing::Point(185, 379);
			this->CB_RutaAsociada->Name = L"CB_RutaAsociada";
			this->CB_RutaAsociada->Size = System::Drawing::Size(250, 32);
			this->CB_RutaAsociada->TabIndex = 127;
			// 
			// CB_ParaderoFinal
			// 
			this->CB_ParaderoFinal->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_ParaderoFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CB_ParaderoFinal->FormattingEnabled = true;
			this->CB_ParaderoFinal->Location = System::Drawing::Point(185, 229);
			this->CB_ParaderoFinal->Name = L"CB_ParaderoFinal";
			this->CB_ParaderoFinal->Size = System::Drawing::Size(250, 32);
			this->CB_ParaderoFinal->TabIndex = 126;
			// 
			// CB_ParaderoInicial
			// 
			this->CB_ParaderoInicial->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_ParaderoInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CB_ParaderoInicial->FormattingEnabled = true;
			this->CB_ParaderoInicial->Location = System::Drawing::Point(185, 79);
			this->CB_ParaderoInicial->Name = L"CB_ParaderoInicial";
			this->CB_ParaderoInicial->Size = System::Drawing::Size(250, 32);
			this->CB_ParaderoInicial->TabIndex = 125;
			// 
			// L_Codigo
			// 
			this->L_Codigo->BackColor = System::Drawing::Color::Moccasin;
			this->L_Codigo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Codigo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Codigo->ForeColor = System::Drawing::Color::Black;
			this->L_Codigo->Location = System::Drawing::Point(10, 30);
			this->L_Codigo->Name = L"L_Codigo";
			this->L_Codigo->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Codigo->Size = System::Drawing::Size(160, 30);
			this->L_Codigo->TabIndex = 109;
			this->L_Codigo->Text = L"Codigo :";
			this->L_Codigo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_X_Final
			// 
			this->TB_X_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_X_Final->ForeColor = System::Drawing::Color::Black;
			this->TB_X_Final->Location = System::Drawing::Point(185, 280);
			this->TB_X_Final->Name = L"TB_X_Final";
			this->TB_X_Final->Size = System::Drawing::Size(250, 29);
			this->TB_X_Final->TabIndex = 123;
			// 
			// L_Paradero_Inicio
			// 
			this->L_Paradero_Inicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_Paradero_Inicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Paradero_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Paradero_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Paradero_Inicio->ForeColor = System::Drawing::Color::Black;
			this->L_Paradero_Inicio->Location = System::Drawing::Point(10, 80);
			this->L_Paradero_Inicio->Name = L"L_Paradero_Inicio";
			this->L_Paradero_Inicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Paradero_Inicio->Size = System::Drawing::Size(160, 30);
			this->L_Paradero_Inicio->TabIndex = 111;
			this->L_Paradero_Inicio->Text = L"Paradero inicial:";
			this->L_Paradero_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Ruta_Asociada
			// 
			this->L_Ruta_Asociada->BackColor = System::Drawing::Color::Moccasin;
			this->L_Ruta_Asociada->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Ruta_Asociada->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Ruta_Asociada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Ruta_Asociada->ForeColor = System::Drawing::Color::Black;
			this->L_Ruta_Asociada->Location = System::Drawing::Point(10, 380);
			this->L_Ruta_Asociada->Name = L"L_Ruta_Asociada";
			this->L_Ruta_Asociada->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Ruta_Asociada->Size = System::Drawing::Size(160, 30);
			this->L_Ruta_Asociada->TabIndex = 122;
			this->L_Ruta_Asociada->Text = L"RutaAsociada:";
			this->L_Ruta_Asociada->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Y_Final
			// 
			this->TB_Y_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Y_Final->ForeColor = System::Drawing::Color::Black;
			this->TB_Y_Final->Location = System::Drawing::Point(185, 330);
			this->TB_Y_Final->Name = L"TB_Y_Final";
			this->TB_Y_Final->Size = System::Drawing::Size(250, 29);
			this->TB_Y_Final->TabIndex = 119;
			// 
			// L_X_Inicio
			// 
			this->L_X_Inicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_X_Inicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_X_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_X_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_X_Inicio->ForeColor = System::Drawing::Color::Black;
			this->L_X_Inicio->Location = System::Drawing::Point(10, 130);
			this->L_X_Inicio->Name = L"L_X_Inicio";
			this->L_X_Inicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_X_Inicio->Size = System::Drawing::Size(160, 30);
			this->L_X_Inicio->TabIndex = 113;
			this->L_X_Inicio->Text = L"X_Inicio:";
			this->L_X_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Y_Inicio
			// 
			this->L_Y_Inicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_Y_Inicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Y_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Y_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Y_Inicio->ForeColor = System::Drawing::Color::Black;
			this->L_Y_Inicio->Location = System::Drawing::Point(10, 180);
			this->L_Y_Inicio->Name = L"L_Y_Inicio";
			this->L_Y_Inicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Y_Inicio->Size = System::Drawing::Size(160, 30);
			this->L_Y_Inicio->TabIndex = 115;
			this->L_Y_Inicio->Text = L"Y_Inicio:";
			this->L_Y_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Y_Inicio
			// 
			this->TB_Y_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Y_Inicio->ForeColor = System::Drawing::Color::Black;
			this->TB_Y_Inicio->Location = System::Drawing::Point(185, 180);
			this->TB_Y_Inicio->Name = L"TB_Y_Inicio";
			this->TB_Y_Inicio->Size = System::Drawing::Size(250, 29);
			this->TB_Y_Inicio->TabIndex = 114;
			// 
			// L_Y_Final
			// 
			this->L_Y_Final->BackColor = System::Drawing::Color::Moccasin;
			this->L_Y_Final->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Y_Final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Y_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Y_Final->ForeColor = System::Drawing::Color::Black;
			this->L_Y_Final->Location = System::Drawing::Point(10, 330);
			this->L_Y_Final->Name = L"L_Y_Final";
			this->L_Y_Final->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Y_Final->Size = System::Drawing::Size(160, 30);
			this->L_Y_Final->TabIndex = 120;
			this->L_Y_Final->Text = L"Y_Final:";
			this->L_Y_Final->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_X_Inicio
			// 
			this->TB_X_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_X_Inicio->ForeColor = System::Drawing::Color::Black;
			this->TB_X_Inicio->Location = System::Drawing::Point(185, 130);
			this->TB_X_Inicio->Name = L"TB_X_Inicio";
			this->TB_X_Inicio->Size = System::Drawing::Size(250, 29);
			this->TB_X_Inicio->TabIndex = 112;
			// 
			// L_Paradero_Final
			// 
			this->L_Paradero_Final->BackColor = System::Drawing::Color::Moccasin;
			this->L_Paradero_Final->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Paradero_Final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Paradero_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Paradero_Final->ForeColor = System::Drawing::Color::Black;
			this->L_Paradero_Final->Location = System::Drawing::Point(10, 230);
			this->L_Paradero_Final->Name = L"L_Paradero_Final";
			this->L_Paradero_Final->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Paradero_Final->Size = System::Drawing::Size(160, 30);
			this->L_Paradero_Final->TabIndex = 117;
			this->L_Paradero_Final->Text = L"Paradero final:";
			this->L_Paradero_Final->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_X_Final
			// 
			this->L_X_Final->BackColor = System::Drawing::Color::Moccasin;
			this->L_X_Final->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_X_Final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_X_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_X_Final->ForeColor = System::Drawing::Color::Black;
			this->L_X_Final->Location = System::Drawing::Point(10, 280);
			this->L_X_Final->Name = L"L_X_Final";
			this->L_X_Final->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_X_Final->Size = System::Drawing::Size(160, 30);
			this->L_X_Final->TabIndex = 118;
			this->L_X_Final->Text = L"X_Final:";
			this->L_X_Final->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Codigo
			// 
			this->TB_Codigo->Enabled = false;
			this->TB_Codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Codigo->ForeColor = System::Drawing::Color::Black;
			this->TB_Codigo->Location = System::Drawing::Point(185, 30);
			this->TB_Codigo->Name = L"TB_Codigo";
			this->TB_Codigo->Size = System::Drawing::Size(250, 29);
			this->TB_Codigo->TabIndex = 108;
			// 
			// B_Crear
			// 
			this->B_Crear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Crear.BackgroundImage")));
			this->B_Crear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Crear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Crear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Crear->Location = System::Drawing::Point(14, 483);
			this->B_Crear->Name = L"B_Crear";
			this->B_Crear->Size = System::Drawing::Size(100, 40);
			this->B_Crear->TabIndex = 131;
			this->B_Crear->Text = L"Grabar";
			this->B_Crear->UseVisualStyleBackColor = true;
			this->B_Crear->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::B_Crear_Click);
			// 
			// AtajosMantenimientoEditar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(757, 548);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Crear);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AtajosMantenimientoEditar";
			this->Text = L"Editar atajo";
			this->Load += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::AtajosMantenimientoEditar_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::AtajosMantenimientoEditar_SizeChanged);
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CentrarForm() {
			int PosXGB_Datos = ((this->ClientSize.Width) - (this->GB_Datos->Width)) / 2;
			this->GB_Datos->Location = System::Drawing::Point(PosXGB_Datos, 25);
			this->B_Cancelar->Location = System::Drawing::Point(PosXGB_Datos, 510);
			this->B_Crear->Location = System::Drawing::Point(PosXGB_Datos + 360, 510);
		}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void AtajosMantenimientoEditar_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void AtajosMantenimientoEditar_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &AtajosMantenimientoEditar::AtajosMantenimientoEditar_SizeChanged));
		CentrarForm();

		this->CB_ParaderoInicial->Items->Clear();
		this->CB_ParaderoFinal->Items->Clear();
		this->CB_RutaAsociada->Items->Clear();
		ParaderoController^ ObjParaderoController = gcnew ParaderoController();
		List<Paradero^>^ ListParaderos = ObjParaderoController->buscarAll();
		RutaController^ ObjRutaController = gcnew RutaController();
		List<Ruta^>^ ListRutas = ObjRutaController->buscarAll();
		for (int i = 0; i < ListParaderos->Count; i++) {
			this->CB_ParaderoInicial->Items->Add(ListParaderos[i]->getNombre());
			this->CB_ParaderoFinal->Items->Add(ListParaderos[i]->getNombre());
		}
		for (int i = 0; i < ListRutas->Count; i++) {
			this->CB_RutaAsociada->Items->Add(ListRutas[i]->getLinea());
		}

		this->TB_Codigo->Text = Convert::ToString(this->objAtajos->getCodigo_A());
		this->TB_X_Inicio->Text = Convert::ToString(this->objAtajos->getX_Inicio());
		this->TB_Y_Inicio->Text = Convert::ToString(this->objAtajos->getY_Inicio());
		this->CB_ParaderoInicial->Text = this->objAtajos->getParadero_Inicio();
		this->TB_X_Final->Text = Convert::ToString(this->objAtajos->getX_Final());
		this->TB_Y_Final->Text = Convert::ToString(this->objAtajos->getY_Final());
		this->CB_ParaderoFinal->Text = this->objAtajos->getParadero_Final();
		this->CB_RutaAsociada->Text = this->objAtajos->getRutaAsociada();

	}
	private: System::Void B_Crear_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((this->CB_ParaderoInicial->Text != "") && (this->CB_ParaderoFinal->Text != "") && (this->CB_RutaAsociada->Text != "") && (this->TB_Codigo->Text != "") && (this->TB_X_Inicio->Text != "") && (this->TB_Y_Inicio->Text != "") && (this->TB_X_Final->Text != "") && (this->TB_Y_Final->Text != "")) {
			objAtajos->setParadero_Inicio(this->CB_ParaderoInicial->Text);
			objAtajos->setX_Inicio(Convert::ToInt32(this->TB_X_Inicio->Text));
			objAtajos->setY_Inicio(Convert::ToInt32(this->TB_Y_Inicio->Text));
			objAtajos->setParadero_Final(this->CB_ParaderoFinal->Text);
			objAtajos->setX_Final(Convert::ToInt32(this->TB_X_Final->Text));
			objAtajos->setY_Final(Convert::ToInt32(this->TB_Y_Final->Text));
			objAtajos->setRutaAsociada(this->CB_RutaAsociada->Text);

			AtajosController^ objAtajosController = gcnew AtajosController();
			objAtajosController->actualizarAtajos(objAtajos);

			MessageBox::Show("Los atajos han sido actualizados con exito");
			this->Close();
		}
}
};
}
