#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoController;
	using namespace TransPorticoModel;

	/// <summary>
	/// Resumen de RutaMantenimientoAnadir
	/// </summary>
	public ref class RutaMantenimientoAnadir : public System::Windows::Forms::Form
	{
	public:
		RutaMantenimientoAnadir(void)
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
		~RutaMantenimientoAnadir()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RutaMantenimientoAnadir::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(344, 516);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 42);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RutaMantenimientoAnadir::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(165, 516);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 42);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RutaMantenimientoAnadir::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(18, 43);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(600, 446);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de la Ruta";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(218, 322);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 27);
			this->dateTimePicker2->TabIndex = 13;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(216, 255);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 27);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(218, 388);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(134, 30);
			this->textBox6->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(218, 190);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(134, 30);
			this->textBox3->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(218, 129);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 30);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(218, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 30);
			this->textBox1->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::OldLace;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(39, 398);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Zona: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::OldLace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(39, 329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Hora Cierre:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::OldLace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(39, 264);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Hora Inicio:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::OldLace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(39, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"N�mero de Paraderos:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::OldLace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Linea: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::OldLace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"C�digo: ";
			// 
			// RutaMantenimientoAnadir
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkBlue;
			this->ClientSize = System::Drawing::Size(636, 601);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"RutaMantenimientoAnadir";
			this->Text = L"RutaMantenimientoAnadir";
			this->Load += gcnew System::EventHandler(this, &RutaMantenimientoAnadir::RutaMantenimientoAnadir_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigoRuta = Convert::ToInt32(this->textBox1->Text);
		String^ Linea = this->textBox2->Text;
		int CantParaderos = Convert::ToInt32(this->textBox3->Text);
		String^ HoraInicio = this->dateTimePicker1->Text;
		String^ HoraCierre = this->dateTimePicker2->Text;
		String^ Zona = this->textBox6->Text;
		Ruta^ objRuta = gcnew Ruta(codigoRuta, Linea, CantParaderos, HoraInicio, HoraCierre, Zona);
		RutaController^ objRutaController = gcnew RutaController();
		objRutaController->agregarRuta(objRuta);
		MessageBox::Show("La ruta se ha agregado con �xito");
		this->Close(); /*Esta linea cierra la ventana actual*/
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void RutaMantenimientoAnadir_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
