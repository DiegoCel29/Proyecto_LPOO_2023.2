#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PPAdministradorVerNombres
	/// </summary>
	public ref class PPAdministradorVerNombres : public System::Windows::Forms::Form
	{
	public:
		PPAdministradorVerNombres(void)
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
		~PPAdministradorVerNombres()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private: System::Windows::Forms::Label^ L_Tipo;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::ComboBox^ CB_Mes;
	private: System::Windows::Forms::ComboBox^ CB_Ruta;
	private: System::Windows::Forms::Label^ L_Ruta;
	private: System::Windows::Forms::ComboBox^ CB_A�o;
	private: System::Windows::Forms::Label^ L_Mes;
	private: System::Windows::Forms::Label^ L_A�o;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Button^ B_Grabar;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PPAdministradorVerNombres::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->L_Tipo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->CB_Mes = (gcnew System::Windows::Forms::ComboBox());
			this->CB_Ruta = (gcnew System::Windows::Forms::ComboBox());
			this->L_Ruta = (gcnew System::Windows::Forms::Label());
			this->CB_A�o = (gcnew System::Windows::Forms::ComboBox());
			this->L_Mes = (gcnew System::Windows::Forms::Label());
			this->L_A�o = (gcnew System::Windows::Forms::Label());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(174, 51);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(712, 481);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->L_Tipo);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(44, 34);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(605, 313);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ver Nombres";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &PPAdministradorVerNombres::groupBox2_Enter);
			// 
			// L_Tipo
			// 
			this->L_Tipo->BackColor = System::Drawing::Color::Moccasin;
			this->L_Tipo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Tipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Tipo->ForeColor = System::Drawing::Color::Black;
			this->L_Tipo->Location = System::Drawing::Point(20, 183);
			this->L_Tipo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Tipo->Name = L"L_Tipo";
			this->L_Tipo->Size = System::Drawing::Size(281, 37);
			this->L_Tipo->TabIndex = 15;
			this->L_Tipo->Text = L"Vencimiento de contrato:";
			this->L_Tipo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Moccasin;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(20, 121);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 37);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Inicio de Contrato:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Moccasin;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(20, 58);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(281, 37);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Tipo de Licencia:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Click += gcnew System::EventHandler(this, &PPAdministradorVerNombres::label2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(284, 369);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 49);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->CB_Mes);
			this->GB_Datos->Controls->Add(this->CB_Ruta);
			this->GB_Datos->Controls->Add(this->L_Ruta);
			this->GB_Datos->Controls->Add(this->CB_A�o);
			this->GB_Datos->Controls->Add(this->L_Mes);
			this->GB_Datos->Controls->Add(this->L_A�o);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(231, 80);
			this->GB_Datos->Margin = System::Windows::Forms::Padding(4);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Padding = System::Windows::Forms::Padding(4);
			this->GB_Datos->Size = System::Drawing::Size(605, 254);
			this->GB_Datos->TabIndex = 18;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"B�squeda";
			// 
			// CB_Mes
			// 
			this->CB_Mes->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Mes->FormattingEnabled = true;
			this->CB_Mes->Location = System::Drawing::Point(240, 121);
			this->CB_Mes->Margin = System::Windows::Forms::Padding(4);
			this->CB_Mes->Name = L"CB_Mes";
			this->CB_Mes->Size = System::Drawing::Size(332, 37);
			this->CB_Mes->TabIndex = 18;
			// 
			// CB_Ruta
			// 
			this->CB_Ruta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Ruta->FormattingEnabled = true;
			this->CB_Ruta->Location = System::Drawing::Point(240, 183);
			this->CB_Ruta->Margin = System::Windows::Forms::Padding(4);
			this->CB_Ruta->Name = L"CB_Ruta";
			this->CB_Ruta->Size = System::Drawing::Size(332, 37);
			this->CB_Ruta->TabIndex = 17;
			// 
			// L_Ruta
			// 
			this->L_Ruta->BackColor = System::Drawing::Color::Moccasin;
			this->L_Ruta->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Ruta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Ruta->ForeColor = System::Drawing::Color::Black;
			this->L_Ruta->Location = System::Drawing::Point(20, 183);
			this->L_Ruta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Ruta->Name = L"L_Ruta";
			this->L_Ruta->Size = System::Drawing::Size(200, 37);
			this->L_Ruta->TabIndex = 15;
			this->L_Ruta->Text = L"Ruta:";
			this->L_Ruta->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// CB_A�o
			// 
			this->CB_A�o->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_A�o->FormattingEnabled = true;
			this->CB_A�o->Location = System::Drawing::Point(240, 59);
			this->CB_A�o->Margin = System::Windows::Forms::Padding(4);
			this->CB_A�o->Name = L"CB_A�o";
			this->CB_A�o->Size = System::Drawing::Size(332, 37);
			this->CB_A�o->TabIndex = 11;
			// 
			// L_Mes
			// 
			this->L_Mes->BackColor = System::Drawing::Color::Moccasin;
			this->L_Mes->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Mes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Mes->ForeColor = System::Drawing::Color::Black;
			this->L_Mes->Location = System::Drawing::Point(20, 121);
			this->L_Mes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Mes->Name = L"L_Mes";
			this->L_Mes->Size = System::Drawing::Size(200, 37);
			this->L_Mes->TabIndex = 7;
			this->L_Mes->Text = L"Mes:";
			this->L_Mes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_A�o
			// 
			this->L_A�o->BackColor = System::Drawing::Color::Moccasin;
			this->L_A�o->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_A�o->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_A�o->ForeColor = System::Drawing::Color::Black;
			this->L_A�o->Location = System::Drawing::Point(20, 58);
			this->L_A�o->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_A�o->Name = L"L_A�o";
			this->L_A�o->Size = System::Drawing::Size(200, 37);
			this->L_A�o->TabIndex = 5;
			this->L_A�o->Text = L"A�o:";
			this->L_A�o->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(568, 406);
			this->B_Cancelar->Margin = System::Windows::Forms::Padding(4);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(133, 49);
			this->B_Cancelar->TabIndex = 17;
			this->B_Cancelar->Text = L"Regresar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			// 
			// B_Grabar
			// 
			this->B_Grabar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Grabar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Grabar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Grabar->Location = System::Drawing::Point(348, 406);
			this->B_Grabar->Margin = System::Windows::Forms::Padding(4);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(133, 49);
			this->B_Grabar->TabIndex = 16;
			this->B_Grabar->Text = L"Ingresar";
			this->B_Grabar->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Moccasin;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(21, 253);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(281, 37);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Puntuaci�n:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(355, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(230, 34);
			this->textBox1->TabIndex = 17;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(355, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(230, 34);
			this->textBox2->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(355, 186);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(230, 34);
			this->textBox3->TabIndex = 19;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(355, 254);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(230, 34);
			this->textBox4->TabIndex = 20;
			// 
			// PPAdministradorVerNombres
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1060, 583);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->B_Grabar);
			this->DoubleBuffered = true;
			this->Name = L"PPAdministradorVerNombres";
			this->Text = L"PPAdministradorVerNombres";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->GB_Datos->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
