#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PPPasajeroBusesCercanos
	/// </summary>
	public ref class PPPasajeroBusesCercanos : public System::Windows::Forms::Form
	{
	public:
		PPPasajeroBusesCercanos(void)
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
		~PPPasajeroBusesCercanos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:



	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Button^ B_TARJETA;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PPPasajeroBusesCercanos::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->B_TARJETA = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->Logo);
			this->groupBox1->Controls->Add(this->B_TARJETA);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBox1->Location = System::Drawing::Point(30, 29);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(694, 522);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(340, 365);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(211, 34);
			this->textBox3->TabIndex = 30;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkBlue;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(51, 365);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 39);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Cantidad Pasajeros";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(340, 276);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(211, 34);
			this->textBox2->TabIndex = 28;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkBlue;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(51, 276);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(250, 39);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Cantidad Pasajeros";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(340, 199);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 34);
			this->textBox1->TabIndex = 24;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Consulta", L"Reclamo", L"Sugerencia" });
			this->comboBox1->Location = System::Drawing::Point(340, 121);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(211, 37);
			this->comboBox1->TabIndex = 23;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkBlue;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(51, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 39);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Proximidad";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkBlue;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(251, 464);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 45);
			this->button2->TabIndex = 21;
			this->button2->Text = L"REGRESAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &PPPasajeroBusesCercanos::button2_Click);
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::SystemColors::Control;
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Logo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(561, 9);
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
			this->B_TARJETA->Location = System::Drawing::Point(51, 121);
			this->B_TARJETA->Name = L"B_TARJETA";
			this->B_TARJETA->Size = System::Drawing::Size(250, 39);
			this->B_TARJETA->TabIndex = 11;
			this->B_TARJETA->Text = L"Bus";
			this->B_TARJETA->UseVisualStyleBackColor = false;
			// 
			// PPPasajeroBusesCercanos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(746, 588);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Name = L"PPPasajeroBusesCercanos";
			this->Text = L"PPPasajeroBusesCercanos";
			this->Load += gcnew System::EventHandler(this, &PPPasajeroBusesCercanos::PPPasajeroBusesCercanos_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &PPPasajeroBusesCercanos::PPPasajeroBusesCercanos_SizeChanged);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void PPPasajeroBusesCercanos_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &PPPasajeroBusesCercanos::PPPasajeroBusesCercanos_SizeChanged));
		CentrarForm();
	}

	private: System::Void PPPasajeroBusesCercanos_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void CentrarForm() {
		int CentroX = (this->ClientSize.Width - this->groupBox1->Width) / 2;
		int CentroY = (this->ClientSize.Height - this->groupBox1->Height) / 2;
		this->groupBox1->Location = System::Drawing::Point(CentroX, CentroY);
	}
	};
}
