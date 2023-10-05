#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoModel;
	using namespace TransPorticoController;
	/// <summary>
	/// Resumen de AutobusMantenimientoEditar
	/// </summary>
	public ref class AutobusMantenimientoEditar : public System::Windows::Forms::Form
	{
	public:
		AutobusMantenimientoEditar(void)
		{
			InitializeComponent();
			//

			//TODO: agregar código de constructor aquí
			//
		}
		AutobusMantenimientoEditar(Autobus^ objetobus) {
			InitializeComponent();

			this->objetobus = objetobus;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AutobusMantenimientoEditar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
		   /*Se va a crear un atributo de tipo carre*/
	private: Autobus^ objetobus;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(36, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(323, 312);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Editar Datos del autobus";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(175, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AutobusMantenimientoEditar::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(63, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Aplicar Cambios";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AutobusMantenimientoEditar::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(150, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(150, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(150, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Capacidad";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Placa";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código";
			// 
			// AutobusMantenimientoEditar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(403, 399);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AutobusMantenimientoEditar";
			this->Text = L"Editar";
			this->Load += gcnew System::EventHandler(this, &AutobusMantenimientoEditar::AutobusMantenimientoEditar_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Boton para aplicar cambios del editado
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->textBox1->Text);
		String^ Placa = this->textBox2->Text;
		int Capacidad = Convert::ToInt32(this->textBox3->Text);

		AutobusController^ objAutobusController = gcnew AutobusController();
		objAutobusController->ActualizarAutobus(codigo, Placa, Capacidad);
		MessageBox::Show("El autobus ha sido Actualizado con exito");
		this->Close();

	}
		   //PAra pasar los datos del bus selecionado a la nueva ventana editar
	private: System::Void AutobusMantenimientoEditar_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = Convert::ToString(this->objetobus->GetCodigo());
		this->textBox2->Text = this->objetobus->GetPlaca();
		this->textBox3->Text = Convert::ToString(this->objetobus->GetCapacidad());
	}
		   //Boton Cancelar
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}