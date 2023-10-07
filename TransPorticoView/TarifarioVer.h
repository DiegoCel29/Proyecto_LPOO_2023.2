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
	/// Resumen de TarifarioVer
	/// </summary>
	public ref class TarifarioVer : public System::Windows::Forms::Form
	{
	public:
		TarifarioVer(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~TarifarioVer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Button^ B_TARJETA;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TarifarioVer::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->B_TARJETA = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->Logo);
			this->groupBox1->Controls->Add(this->B_TARJETA);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBox1->Location = System::Drawing::Point(44, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(752, 521);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &TarifarioVer::groupBox1_Enter);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(345, 221);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(211, 37);
			this->comboBox3->TabIndex = 39;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(345, 143);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(211, 37);
			this->comboBox2->TabIndex = 38;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(345, 395);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(211, 34);
			this->textBox3->TabIndex = 37;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkBlue;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(51, 390);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 39);
			this->button3->TabIndex = 36;
			this->button3->Text = L"TARIFA";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkBlue;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(584, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 45);
			this->button2->TabIndex = 21;
			this->button2->Text = L"SALIR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &TarifarioVer::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkBlue;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(51, 219);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 39);
			this->button1->TabIndex = 34;
			this->button1->Text = L"PARADERO FINAL";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(345, 62);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(211, 37);
			this->comboBox1->TabIndex = 33;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkBlue;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(268, 302);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(133, 45);
			this->button6->TabIndex = 31;
			this->button6->Text = L"BUSCAR";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &TarifarioVer::button6_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkBlue;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(51, 62);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(250, 39);
			this->button4->TabIndex = 27;
			this->button4->Text = L"ESCOGER RUTA";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::SystemColors::Control;
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Logo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(615, 11);
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
			this->B_TARJETA->Location = System::Drawing::Point(51, 141);
			this->B_TARJETA->Name = L"B_TARJETA";
			this->B_TARJETA->Size = System::Drawing::Size(250, 39);
			this->B_TARJETA->TabIndex = 11;
			this->B_TARJETA->Text = L"PARADERO INICIAL";
			this->B_TARJETA->UseVisualStyleBackColor = false;
			// 
			// TarifarioVer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(827, 545);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Name = L"TarifarioVer";
			this->Text = L"TarifarioVer";
			this->Load += gcnew System::EventHandler(this, &TarifarioVer::Tarifario_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &TarifarioVer::Tarifario_SizeChanged);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ BuscarRuta = this->comboBox1->Text;
		String^ BuscarParaderoInicial = this->comboBox2->Text;
		String^ BuscarParaderoFinal = this->comboBox3->Text;

		TarifarioController^ ObjTarifarioController = gcnew TarifarioController();
		List<Tarifario^>^ ListTarifarioGeneral = ObjTarifarioController->BuscarTarifarioAll();
		List<Tarifario^>^ ListTarifarioBuscado = gcnew List<Tarifario^>();

		ListTarifarioBuscado = ObjTarifarioController->BuscarTarifariosRuta(ListTarifarioGeneral, BuscarRuta);
		ListTarifarioBuscado = ObjTarifarioController->BuscarTarifariosParaderoInicial(ListTarifarioBuscado, BuscarParaderoInicial);
		ListTarifarioBuscado = ObjTarifarioController->BuscarTarifariosParaderoFinal(ListTarifarioBuscado, BuscarParaderoFinal);

		this->textBox3->Text = Convert::ToString(ListTarifarioBuscado[0]->GetTarifa());

	}
	private: System::Void MostrarGrilla(List<Tarifario^>^ ListTarifario) {


	}
	private: System::Void Tarifario_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &TarifarioVer::Tarifario_SizeChanged));
		CentrarForm();
		// Poner paraderos en los ComboBox
		ParaderoController^ ObjParaderoController = gcnew ParaderoController;
		List<Paradero^>^ ListParaderos = ObjParaderoController->buscarAll();
		this->comboBox2->Items->Clear();
		this->comboBox3->Items->Clear();
		for (int i = 0; i < ListParaderos->Count; i++) {
			this->comboBox2->Items->Add(ListParaderos[i]->getNombre());
			this->comboBox3->Items->Add(ListParaderos[i]->getNombre());
		}
		RutaController^ ObjRutaController = gcnew RutaController;
		List<Ruta^>^ ListRutas = ObjRutaController->buscarAll();
		this->comboBox1->Items->Clear();
		for (int i = 0; i < ListRutas->Count; i++) {
			this->comboBox1->Items->Add(ListRutas[i]->getLinea());
		}

	}
	private: System::Void Tarifario_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void CentrarForm() {
		int CentroX = (this->ClientSize.Width - this->groupBox1->Width) / 2;
		int CentroY = (this->ClientSize.Height - this->groupBox1->Height) / 2;
		this->groupBox1->Location = System::Drawing::Point(CentroX, CentroY);
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
