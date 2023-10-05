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
	/// Resumen de MantenimientoMantenimientoAnadir
	/// </summary>
	public ref class MantenimientoMantenimientoAnadir : public System::Windows::Forms::Form
	{
	public:
		MantenimientoMantenimientoAnadir(void)
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
		~MantenimientoMantenimientoAnadir()
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


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MantenimientoMantenimientoAnadir::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->button2->Location = System::Drawing::Point(374, 411);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 42);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantenimientoMantenimientoAnadir::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(184, 411);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 42);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantenimientoMantenimientoAnadir::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(37, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(600, 327);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Mantenimiento";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MantenimientoMantenimientoAnadir::groupBox1_Enter);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(218, 129);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(145, 30);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(218, 257);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(134, 30);
			this->textBox4->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(218, 190);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(134, 30);
			this->textBox3->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(218, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 30);
			this->textBox1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::OldLace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(57, 264);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Descripción: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::OldLace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(57, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo: ";
			this->label3->Click += gcnew System::EventHandler(this, &MantenimientoMantenimientoAnadir::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::OldLace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(57, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fecha: ";
			this->label2->Click += gcnew System::EventHandler(this, &MantenimientoMantenimientoAnadir::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::OldLace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(57, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código: ";
			// 
			// MantenimientoMantenimientoAnadir
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkBlue;
			this->ClientSize = System::Drawing::Size(659, 511);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MantenimientoMantenimientoAnadir";
			this->Text = L"MantenimientoMantenimientoAnadir";
			this->Load += gcnew System::EventHandler(this, &MantenimientoMantenimientoAnadir::MantenimientoMantenimientoAnadir_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MantenimientoMantenimientoAnadir_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int CodigoParadero = Convert::ToInt32(this->textBox1->Text);
		String^ GetFechaMantenimiento = this->dateTimePicker1->Text;
		String^ TipoMantenimiento = this->textBox3->Text;
		String^ Descripcion = this->textBox4->Text;
		Mantenimiento^ objMantenimiento = gcnew Mantenimiento(CodigoParadero, GetFechaMantenimiento, TipoMantenimiento, Descripcion);
		MantenimientoController^ objMantenimientoController = gcnew MantenimientoController();
		objMantenimientoController->actualizarMantenimiento(objMantenimiento);
		MessageBox::Show("El mantenimiento se ha agregado con éxito");
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}