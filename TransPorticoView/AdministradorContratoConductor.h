#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdministradorContratoConductor
	/// </summary>
	public ref class AdministradorContratoConductor : public System::Windows::Forms::Form
	{
	public:
		AdministradorContratoConductor(void)
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
		~AdministradorContratoConductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Button^ B_TARJETA;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdministradorContratoConductor::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->Logo);
			this->groupBox1->Controls->Add(this->B_TARJETA);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBox1->Location = System::Drawing::Point(53, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(752, 521);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(355, 282);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(211, 37);
			this->comboBox3->TabIndex = 39;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(355, 142);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(211, 37);
			this->comboBox2->TabIndex = 38;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkBlue;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(531, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 45);
			this->button2->TabIndex = 21;
			this->button2->Text = L"SALIR";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkBlue;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(51, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 39);
			this->button1->TabIndex = 34;
			this->button1->Text = L"NOMBRE";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkBlue;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(60, 454);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(149, 45);
			this->button6->TabIndex = 31;
			this->button6->Text = L"INGRESAR";
			this->button6->UseVisualStyleBackColor = false;
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
			this->B_TARJETA->Location = System::Drawing::Point(51, 140);
			this->B_TARJETA->Name = L"B_TARJETA";
			this->B_TARJETA->Size = System::Drawing::Size(250, 39);
			this->B_TARJETA->TabIndex = 11;
			this->B_TARJETA->Text = L"ORDENAR";
			this->B_TARJETA->UseVisualStyleBackColor = false;
			// 
			// AdministradorContratoConductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(872, 654);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AdministradorContratoConductor";
			this->Text = L"AdministradorContratoConductor";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
