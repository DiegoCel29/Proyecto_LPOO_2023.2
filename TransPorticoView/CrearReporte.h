#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CrearReporte
	/// </summary>
	public ref class CrearReporte : public System::Windows::Forms::Form
	{
	public:
		CrearReporte(void)
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
		~CrearReporte()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::PictureBox^ Logo;



	private: System::Windows::Forms::Button^ B_TARJETA;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;




	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CrearReporte::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->Logo);
			this->groupBox1->Controls->Add(this->B_TARJETA);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBox1->Location = System::Drawing::Point(56, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(869, 686);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Escribe tu reporte";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkBlue;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(311, 621);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(133, 45);
			this->button6->TabIndex = 31;
			this->button6->Text = L"ENVIAR";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(243, 359);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(484, 234);
			this->richTextBox1->TabIndex = 30;
			this->richTextBox1->Text = L"";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkBlue;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(116, 311);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(196, 42);
			this->button5->TabIndex = 29;
			this->button5->Text = L"COMENTARIO:";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &CrearReporte::button5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(311, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(211, 34);
			this->textBox2->TabIndex = 28;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkBlue;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(116, 50);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 39);
			this->button4->TabIndex = 27;
			this->button4->Text = L"PLACA";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(311, 246);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(211, 34);
			this->dateTimePicker1->TabIndex = 26;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkBlue;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(116, 246);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 39);
			this->button3->TabIndex = 25;
			this->button3->Text = L"D�A";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(311, 182);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 34);
			this->textBox1->TabIndex = 24;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Consulta", L"Reclamo", L"Sugerencia" });
			this->comboBox1->Location = System::Drawing::Point(311, 117);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(211, 37);
			this->comboBox1->TabIndex = 23;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkBlue;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(116, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 39);
			this->button1->TabIndex = 22;
			this->button1->Text = L"HORA";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkBlue;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(544, 621);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 45);
			this->button2->TabIndex = 21;
			this->button2->Text = L"SALIR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CrearReporte::button2_Click);
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::SystemColors::Control;
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Logo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(729, 10);
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
			this->B_TARJETA->Location = System::Drawing::Point(116, 113);
			this->B_TARJETA->Name = L"B_TARJETA";
			this->B_TARJETA->Size = System::Drawing::Size(143, 41);
			this->B_TARJETA->TabIndex = 11;
			this->B_TARJETA->Text = L"TIPO";
			this->B_TARJETA->UseVisualStyleBackColor = false;
			this->B_TARJETA->Click += gcnew System::EventHandler(this, &CrearReporte::B_TARJETA_Click);
			// 
			// CrearReporte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(979, 744);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CrearReporte";
			this->Text = L"CrearReporte";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void B_TARJETA_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
