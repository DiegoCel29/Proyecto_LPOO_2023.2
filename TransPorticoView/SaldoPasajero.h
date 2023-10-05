#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SaldoPasajero
	/// </summary>
	public ref class SaldoPasajero : public System::Windows::Forms::Form
	{
	public:
		SaldoPasajero(void)
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
		~SaldoPasajero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ L_Ruta;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SaldoPasajero::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->L_Ruta = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->L_Ruta);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->Logo);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBox1->Location = System::Drawing::Point(41, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(466, 334);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(221, 131);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(211, 34);
			this->textBox3->TabIndex = 37;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkBlue;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(157, 283);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 45);
			this->button2->TabIndex = 21;
			this->button2->Text = L"SALIR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SaldoPasajero::button2_Click);
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::SystemColors::Control;
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Logo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(329, 12);
			this->Logo->Margin = System::Windows::Forms::Padding(1);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(137, 90);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 10;
			this->Logo->TabStop = false;
			// 
			// L_Ruta
			// 
			this->L_Ruta->BackColor = System::Drawing::Color::Moccasin;
			this->L_Ruta->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Ruta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Ruta->ForeColor = System::Drawing::Color::Black;
			this->L_Ruta->Location = System::Drawing::Point(21, 130);
			this->L_Ruta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Ruta->Name = L"L_Ruta";
			this->L_Ruta->Size = System::Drawing::Size(160, 37);
			this->L_Ruta->TabIndex = 38;
			this->L_Ruta->Text = L"Saldo";
			this->L_Ruta->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_Ruta->Click += gcnew System::EventHandler(this, &SaldoPasajero::L_Ruta_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Moccasin;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(21, 191);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 37);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Identificador";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(221, 192);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 34);
			this->textBox1->TabIndex = 39;
			// 
			// SaldoPasajero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(530, 385);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Name = L"SaldoPasajero";
			this->Text = L"SaldoPasajero";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void L_Ruta_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
