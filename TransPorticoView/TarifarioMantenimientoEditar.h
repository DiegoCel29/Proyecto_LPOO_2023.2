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
	/// Resumen de TarifarioMantenimientoEditar
	/// </summary>
	public ref class TarifarioMantenimientoEditar : public System::Windows::Forms::Form
	{
	public:
		TarifarioMantenimientoEditar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		TarifarioMantenimientoEditar(Tarifario^ ObjTarifario) {
			InitializeComponent();
			this->ObjTarifario = ObjTarifario;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~TarifarioMantenimientoEditar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Tarifario^ ObjTarifario;
	private: System::Windows::Forms::Button^ B_Grabar;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Label^ L_RutaAsociada;
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::Label^ L_Identificador;
	private: System::Windows::Forms::TextBox^ TB_Identificador;
	private: System::Windows::Forms::Label^ L_ParaderoInicial;
	private: System::Windows::Forms::Label^ L_ParaderoFinal;
	private: System::Windows::Forms::Label^ L_Tarifa;
	private: System::Windows::Forms::TextBox^ TB_Tarifa;
	private: System::Windows::Forms::TextBox^ TB_ParaderoFinal;
	private: System::Windows::Forms::TextBox^ TB_ParaderoInicial;
	private: System::Windows::Forms::TextBox^ TB_RutaAsociada;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TarifarioMantenimientoEditar::typeid));
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->L_RutaAsociada = (gcnew System::Windows::Forms::Label());
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->TB_ParaderoFinal = (gcnew System::Windows::Forms::TextBox());
			this->TB_ParaderoInicial = (gcnew System::Windows::Forms::TextBox());
			this->TB_RutaAsociada = (gcnew System::Windows::Forms::TextBox());
			this->TB_Tarifa = (gcnew System::Windows::Forms::TextBox());
			this->L_ParaderoFinal = (gcnew System::Windows::Forms::Label());
			this->L_Tarifa = (gcnew System::Windows::Forms::Label());
			this->L_Identificador = (gcnew System::Windows::Forms::Label());
			this->TB_Identificador = (gcnew System::Windows::Forms::TextBox());
			this->L_ParaderoInicial = (gcnew System::Windows::Forms::Label());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// B_Grabar
			// 
			this->B_Grabar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Grabar.BackgroundImage")));
			this->B_Grabar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Grabar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Grabar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Grabar->Location = System::Drawing::Point(0, 340);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(100, 40);
			this->B_Grabar->TabIndex = 2;
			this->B_Grabar->Text = L"Grabar";
			this->B_Grabar->UseVisualStyleBackColor = true;
			this->B_Grabar->Click += gcnew System::EventHandler(this, &TarifarioMantenimientoEditar::B_Grabar_Click);
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(350, 340);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(100, 40);
			this->B_Cancelar->TabIndex = 3;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &TarifarioMantenimientoEditar::B_Cancelar_Click);
			// 
			// L_RutaAsociada
			// 
			this->L_RutaAsociada->BackColor = System::Drawing::Color::Moccasin;
			this->L_RutaAsociada->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_RutaAsociada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_RutaAsociada->ForeColor = System::Drawing::Color::Black;
			this->L_RutaAsociada->Location = System::Drawing::Point(10, 80);
			this->L_RutaAsociada->Name = L"L_RutaAsociada";
			this->L_RutaAsociada->Size = System::Drawing::Size(150, 30);
			this->L_RutaAsociada->TabIndex = 5;
			this->L_RutaAsociada->Text = L"Ruta asociada:";
			this->L_RutaAsociada->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->TB_ParaderoFinal);
			this->GB_Datos->Controls->Add(this->TB_ParaderoInicial);
			this->GB_Datos->Controls->Add(this->TB_RutaAsociada);
			this->GB_Datos->Controls->Add(this->TB_Tarifa);
			this->GB_Datos->Controls->Add(this->L_ParaderoFinal);
			this->GB_Datos->Controls->Add(this->L_Tarifa);
			this->GB_Datos->Controls->Add(this->L_Identificador);
			this->GB_Datos->Controls->Add(this->TB_Identificador);
			this->GB_Datos->Controls->Add(this->L_ParaderoInicial);
			this->GB_Datos->Controls->Add(this->L_RutaAsociada);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(0, 25);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Size = System::Drawing::Size(450, 290);
			this->GB_Datos->TabIndex = 8;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos de la tarifa:";
			// 
			// TB_ParaderoFinal
			// 
			this->TB_ParaderoFinal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_ParaderoFinal->Enabled = false;
			this->TB_ParaderoFinal->Location = System::Drawing::Point(175, 180);
			this->TB_ParaderoFinal->Name = L"TB_ParaderoFinal";
			this->TB_ParaderoFinal->Size = System::Drawing::Size(250, 29);
			this->TB_ParaderoFinal->TabIndex = 22;
			// 
			// TB_ParaderoInicial
			// 
			this->TB_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_ParaderoInicial->Enabled = false;
			this->TB_ParaderoInicial->Location = System::Drawing::Point(175, 130);
			this->TB_ParaderoInicial->Name = L"TB_ParaderoInicial";
			this->TB_ParaderoInicial->Size = System::Drawing::Size(250, 29);
			this->TB_ParaderoInicial->TabIndex = 21;
			// 
			// TB_RutaAsociada
			// 
			this->TB_RutaAsociada->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_RutaAsociada->Enabled = false;
			this->TB_RutaAsociada->Location = System::Drawing::Point(175, 80);
			this->TB_RutaAsociada->Name = L"TB_RutaAsociada";
			this->TB_RutaAsociada->Size = System::Drawing::Size(250, 29);
			this->TB_RutaAsociada->TabIndex = 20;
			// 
			// TB_Tarifa
			// 
			this->TB_Tarifa->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Tarifa->Location = System::Drawing::Point(175, 230);
			this->TB_Tarifa->Name = L"TB_Tarifa";
			this->TB_Tarifa->Size = System::Drawing::Size(250, 29);
			this->TB_Tarifa->TabIndex = 19;
			// 
			// L_ParaderoFinal
			// 
			this->L_ParaderoFinal->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoFinal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoFinal->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoFinal->Location = System::Drawing::Point(10, 180);
			this->L_ParaderoFinal->Name = L"L_ParaderoFinal";
			this->L_ParaderoFinal->Size = System::Drawing::Size(150, 30);
			this->L_ParaderoFinal->TabIndex = 15;
			this->L_ParaderoFinal->Text = L"Paradero final:";
			this->L_ParaderoFinal->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Tarifa
			// 
			this->L_Tarifa->BackColor = System::Drawing::Color::Moccasin;
			this->L_Tarifa->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Tarifa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Tarifa->ForeColor = System::Drawing::Color::Black;
			this->L_Tarifa->Location = System::Drawing::Point(10, 230);
			this->L_Tarifa->Name = L"L_Tarifa";
			this->L_Tarifa->Size = System::Drawing::Size(150, 30);
			this->L_Tarifa->TabIndex = 12;
			this->L_Tarifa->Text = L"Costo:";
			this->L_Tarifa->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Identificador
			// 
			this->L_Identificador->BackColor = System::Drawing::Color::Moccasin;
			this->L_Identificador->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Identificador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Identificador->ForeColor = System::Drawing::Color::Black;
			this->L_Identificador->Location = System::Drawing::Point(10, 30);
			this->L_Identificador->Name = L"L_Identificador";
			this->L_Identificador->Size = System::Drawing::Size(150, 30);
			this->L_Identificador->TabIndex = 9;
			this->L_Identificador->Text = L"Identificador:";
			this->L_Identificador->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Identificador
			// 
			this->TB_Identificador->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Identificador->Enabled = false;
			this->TB_Identificador->Location = System::Drawing::Point(175, 30);
			this->TB_Identificador->Name = L"TB_Identificador";
			this->TB_Identificador->Size = System::Drawing::Size(250, 29);
			this->TB_Identificador->TabIndex = 10;
			// 
			// L_ParaderoInicial
			// 
			this->L_ParaderoInicial->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoInicial->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoInicial->Location = System::Drawing::Point(10, 130);
			this->L_ParaderoInicial->Name = L"L_ParaderoInicial";
			this->L_ParaderoInicial->Size = System::Drawing::Size(150, 30);
			this->L_ParaderoInicial->TabIndex = 7;
			this->L_ParaderoInicial->Text = L"Paradero inicial:";
			this->L_ParaderoInicial->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TarifarioMantenimientoEditar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(966, 618);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->B_Grabar);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->Name = L"TarifarioMantenimientoEditar";
			this->Text = L"Editar tarifa";
			this->Load += gcnew System::EventHandler(this, &TarifarioMantenimientoEditar::TarifarioMantenimientoEditar_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &TarifarioMantenimientoEditar::TarifarioMantenimientoEditar_SizeChanged);
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Datos = ((this->ClientSize.Width) - (this->GB_Datos->Width)) / 2;

		this->GB_Datos->Location = System::Drawing::Point(PosXGB_Datos, 25);
		this->B_Grabar->Location = System::Drawing::Point(PosXGB_Datos, 340);
		this->B_Cancelar->Location = System::Drawing::Point(PosXGB_Datos + 350, 340);
	};
	private: System::Void TarifarioMantenimientoEditar_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &TarifarioMantenimientoEditar::TarifarioMantenimientoEditar_SizeChanged));
		CentrarForm();

		ParaderoController^ ObjParaderoController = gcnew ParaderoController();
		List<Paradero^>^ ListParaderos = ObjParaderoController->buscarAll();
		RutaController^ ObjRutaController = gcnew RutaController();
		List<Ruta^>^ ListRutas = ObjRutaController->buscarAll();

		this->TB_Identificador->Text = this->ObjTarifario->GetIdentificador();
		this->TB_RutaAsociada->Text = this->ObjTarifario->GetRutaAsociada();
		this->TB_ParaderoInicial->Text = this->ObjTarifario->GetParaderoInicial();
		this->TB_ParaderoFinal->Text = this->ObjTarifario->GetParaderoFinal();
		this->TB_Tarifa->Text = Convert::ToString(this->ObjTarifario->GetTarifa());
	};
	private: System::Void TarifarioMantenimientoEditar_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void B_Grabar_Click(System::Object^ sender, System::EventArgs^ e) {

		this->ObjTarifario->SetTarifa(Convert::ToDouble(this->TB_Tarifa->Text));

		TarifarioController^ ObjTarifarioController = gcnew TarifarioController();
		ObjTarifarioController->ActualizarTarifario(ObjTarifario);
		MessageBox::Show("La tarifa se ha actualizado con éxito");
		this->Close();
	}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
