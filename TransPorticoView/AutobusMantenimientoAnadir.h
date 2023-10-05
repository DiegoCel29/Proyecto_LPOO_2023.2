#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoController;
	/// <summary>
	/// Resumen de AutobusMantenimientoAnadir
	/// </summary>
	public ref class AutobusMantenimientoAnadir : public System::Windows::Forms::Form
	{
	public:
		AutobusMantenimientoAnadir(void)
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
		~AutobusMantenimientoAnadir()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ L_Identificador;
	private: System::Windows::Forms::TextBox^ TB_Identificador;
	private: System::Windows::Forms::Label^ L_ParaderoInicial;
	private: System::Windows::Forms::Label^ L_RutaAsociada;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Button^ B_Grabar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AutobusMantenimientoAnadir::typeid));
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->L_Identificador = (gcnew System::Windows::Forms::Label());
			this->TB_Identificador = (gcnew System::Windows::Forms::TextBox());
			this->L_ParaderoInicial = (gcnew System::Windows::Forms::Label());
			this->L_RutaAsociada = (gcnew System::Windows::Forms::Label());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->textBox2);
			this->GB_Datos->Controls->Add(this->textBox1);
			this->GB_Datos->Controls->Add(this->L_Identificador);
			this->GB_Datos->Controls->Add(this->TB_Identificador);
			this->GB_Datos->Controls->Add(this->L_ParaderoInicial);
			this->GB_Datos->Controls->Add(this->L_RutaAsociada);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(78, 91);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Size = System::Drawing::Size(520, 208);
			this->GB_Datos->TabIndex = 11;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos del autobus:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(217, 135);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(250, 29);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(217, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 29);
			this->textBox1->TabIndex = 20;
			// 
			// L_Identificador
			// 
			this->L_Identificador->BackColor = System::Drawing::Color::Moccasin;
			this->L_Identificador->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Identificador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Identificador->ForeColor = System::Drawing::Color::Black;
			this->L_Identificador->Location = System::Drawing::Point(52, 35);
			this->L_Identificador->Name = L"L_Identificador";
			this->L_Identificador->Size = System::Drawing::Size(150, 30);
			this->L_Identificador->TabIndex = 9;
			this->L_Identificador->Text = L"Codigo:";
			this->L_Identificador->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Identificador
			// 
			this->TB_Identificador->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Identificador->Location = System::Drawing::Point(217, 35);
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
			this->L_ParaderoInicial->Location = System::Drawing::Point(52, 135);
			this->L_ParaderoInicial->Name = L"L_ParaderoInicial";
			this->L_ParaderoInicial->Size = System::Drawing::Size(150, 30);
			this->L_ParaderoInicial->TabIndex = 7;
			this->L_ParaderoInicial->Text = L"Capacidad:";
			this->L_ParaderoInicial->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_RutaAsociada
			// 
			this->L_RutaAsociada->BackColor = System::Drawing::Color::Moccasin;
			this->L_RutaAsociada->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_RutaAsociada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_RutaAsociada->ForeColor = System::Drawing::Color::Black;
			this->L_RutaAsociada->Location = System::Drawing::Point(52, 85);
			this->L_RutaAsociada->Name = L"L_RutaAsociada";
			this->L_RutaAsociada->Size = System::Drawing::Size(150, 30);
			this->L_RutaAsociada->TabIndex = 5;
			this->L_RutaAsociada->Text = L"Placa:";
			this->L_RutaAsociada->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(324, 342);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(98, 40);
			this->B_Cancelar->TabIndex = 10;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &AutobusMantenimientoAnadir::B_Cancelar_Click);
			// 
			// B_Grabar
			// 
			this->B_Grabar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Grabar.BackgroundImage")));
			this->B_Grabar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Grabar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Grabar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Grabar->Location = System::Drawing::Point(180, 342);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(100, 40);
			this->B_Grabar->TabIndex = 9;
			this->B_Grabar->Text = L"Grabar";
			this->B_Grabar->UseVisualStyleBackColor = true;
			this->B_Grabar->Click += gcnew System::EventHandler(this, &AutobusMantenimientoAnadir::B_Grabar_Click);
			// 
			// AutobusMantenimientoAnadir
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(661, 464);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->B_Grabar);
			this->DoubleBuffered = true;
			this->Name = L"AutobusMantenimientoAnadir";
			this->Text = L"Nuevo";
			this->Load += gcnew System::EventHandler(this, &AutobusMantenimientoAnadir::AutobusMantenimientoAnadir_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &AutobusMantenimientoAnadir::AutobusMantenimientoAnadir_SizeChanged);
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

	private: System::Void B_Grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->TB_Identificador->Text);
		String^ Placa = this->textBox1->Text;
		int Capacidad = Convert::ToInt32(this->textBox2->Text);
		AutobusController^ objAutobusController = gcnew AutobusController();
		int existe = objAutobusController->ExisteAutobus(codigo);
		if (existe) {
			MessageBox::Show("Ya existe un autobus con ese codigo");

		}
		else {
			objAutobusController->agregarAutobus(codigo, Placa, Capacidad);
			MessageBox::Show("La carrera ha sido registrada con exito");
			this->Close();
		}

	}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void AutobusMantenimientoAnadir_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &AutobusMantenimientoAnadir::AutobusMantenimientoAnadir_SizeChanged));
		CentrarForm();
	}
	private: System::Void AutobusMantenimientoAnadir_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	};
}