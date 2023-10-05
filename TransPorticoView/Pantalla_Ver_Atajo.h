#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pantalla_Ver_Atajo
	/// </summary>
	public ref class Pantalla_Ver_Atajo : public System::Windows::Forms::Form
	{
	public:
		Pantalla_Ver_Atajo(void)
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
		~Pantalla_Ver_Atajo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_VER_ATAJO;
	protected:

	private: System::Windows::Forms::TextBox^ TB_PARADERO_INICIAL;

	private: System::Windows::Forms::Label^ L_ParaderoInicial;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TB_PARADERO_FINAL_1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TB_ATAJO_2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TB_PARADERO_FINAL_2;
	private: System::Windows::Forms::TextBox^ TB_ATAJO_1;
	private: System::Windows::Forms::Button^ B_Regresar;
	private: System::Windows::Forms::Button^ B_Actualizar;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pantalla_Ver_Atajo::typeid));
			this->GB_VER_ATAJO = (gcnew System::Windows::Forms::GroupBox());
			this->B_Regresar = (gcnew System::Windows::Forms::Button());
			this->B_Actualizar = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->TB_ATAJO_2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TB_PARADERO_FINAL_2 = (gcnew System::Windows::Forms::TextBox());
			this->TB_ATAJO_1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TB_PARADERO_FINAL_1 = (gcnew System::Windows::Forms::TextBox());
			this->TB_PARADERO_INICIAL = (gcnew System::Windows::Forms::TextBox());
			this->L_ParaderoInicial = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GB_VER_ATAJO->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// GB_VER_ATAJO
			// 
			this->GB_VER_ATAJO->BackColor = System::Drawing::Color::Transparent;
			this->GB_VER_ATAJO->Controls->Add(this->B_Regresar);
			this->GB_VER_ATAJO->Controls->Add(this->B_Actualizar);
			this->GB_VER_ATAJO->Controls->Add(this->groupBox2);
			this->GB_VER_ATAJO->Controls->Add(this->TB_PARADERO_INICIAL);
			this->GB_VER_ATAJO->Controls->Add(this->L_ParaderoInicial);
			this->GB_VER_ATAJO->Controls->Add(this->pictureBox1);
			this->GB_VER_ATAJO->Location = System::Drawing::Point(34, 27);
			this->GB_VER_ATAJO->Name = L"GB_VER_ATAJO";
			this->GB_VER_ATAJO->Size = System::Drawing::Size(1049, 800);
			this->GB_VER_ATAJO->TabIndex = 0;
			this->GB_VER_ATAJO->TabStop = false;
			// 
			// B_Regresar
			// 
			this->B_Regresar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Regresar.BackgroundImage")));
			this->B_Regresar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Regresar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Regresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Regresar->Location = System::Drawing::Point(698, 732);
			this->B_Regresar->Margin = System::Windows::Forms::Padding(4);
			this->B_Regresar->Name = L"B_Regresar";
			this->B_Regresar->Size = System::Drawing::Size(133, 49);
			this->B_Regresar->TabIndex = 23;
			this->B_Regresar->Text = L"Regresar";
			this->B_Regresar->UseVisualStyleBackColor = true;
			// 
			// B_Actualizar
			// 
			this->B_Actualizar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Actualizar.BackgroundImage")));
			this->B_Actualizar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Actualizar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Actualizar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Actualizar->Location = System::Drawing::Point(167, 732);
			this->B_Actualizar->Margin = System::Windows::Forms::Padding(4);
			this->B_Actualizar->Name = L"B_Actualizar";
			this->B_Actualizar->Size = System::Drawing::Size(133, 49);
			this->B_Actualizar->TabIndex = 22;
			this->B_Actualizar->Text = L"Actualizar";
			this->B_Actualizar->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->TB_ATAJO_2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->TB_PARADERO_FINAL_2);
			this->groupBox2->Controls->Add(this->TB_ATAJO_1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->TB_PARADERO_FINAL_1);
			this->groupBox2->Location = System::Drawing::Point(60, 126);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(811, 599);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Pantalla_Ver_Atajo::groupBox2_Enter);
			// 
			// TB_ATAJO_2
			// 
			this->TB_ATAJO_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_ATAJO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ATAJO_2->Location = System::Drawing::Point(21, 400);
			this->TB_ATAJO_2->Margin = System::Windows::Forms::Padding(4);
			this->TB_ATAJO_2->Multiline = true;
			this->TB_ATAJO_2->Name = L"TB_ATAJO_2";
			this->TB_ATAJO_2->Size = System::Drawing::Size(574, 182);
			this->TB_ATAJO_2->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Moccasin;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(21, 342);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 37);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Hasta el Paradero :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_PARADERO_FINAL_2
			// 
			this->TB_PARADERO_FINAL_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_PARADERO_FINAL_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_PARADERO_FINAL_2->Location = System::Drawing::Point(304, 341);
			this->TB_PARADERO_FINAL_2->Margin = System::Windows::Forms::Padding(4);
			this->TB_PARADERO_FINAL_2->Name = L"TB_PARADERO_FINAL_2";
			this->TB_PARADERO_FINAL_2->Size = System::Drawing::Size(291, 38);
			this->TB_PARADERO_FINAL_2->TabIndex = 18;
			// 
			// TB_ATAJO_1
			// 
			this->TB_ATAJO_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_ATAJO_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ATAJO_1->Location = System::Drawing::Point(21, 139);
			this->TB_ATAJO_1->Margin = System::Windows::Forms::Padding(4);
			this->TB_ATAJO_1->Multiline = true;
			this->TB_ATAJO_1->Name = L"TB_ATAJO_1";
			this->TB_ATAJO_1->Size = System::Drawing::Size(574, 182);
			this->TB_ATAJO_1->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Moccasin;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(21, 81);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(279, 37);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Hasta el Paradero :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Moccasin;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(21, 18);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(279, 37);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Atajos Creados :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_PARADERO_FINAL_1
			// 
			this->TB_PARADERO_FINAL_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_PARADERO_FINAL_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_PARADERO_FINAL_1->Location = System::Drawing::Point(304, 80);
			this->TB_PARADERO_FINAL_1->Margin = System::Windows::Forms::Padding(4);
			this->TB_PARADERO_FINAL_1->Name = L"TB_PARADERO_FINAL_1";
			this->TB_PARADERO_FINAL_1->Size = System::Drawing::Size(291, 38);
			this->TB_PARADERO_FINAL_1->TabIndex = 14;
			// 
			// TB_PARADERO_INICIAL
			// 
			this->TB_PARADERO_INICIAL->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_PARADERO_INICIAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_PARADERO_INICIAL->Location = System::Drawing::Point(440, 54);
			this->TB_PARADERO_INICIAL->Margin = System::Windows::Forms::Padding(4);
			this->TB_PARADERO_INICIAL->Name = L"TB_PARADERO_INICIAL";
			this->TB_PARADERO_INICIAL->Size = System::Drawing::Size(333, 38);
			this->TB_PARADERO_INICIAL->TabIndex = 14;
			// 
			// L_ParaderoInicial
			// 
			this->L_ParaderoInicial->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoInicial->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoInicial->Location = System::Drawing::Point(167, 51);
			this->L_ParaderoInicial->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_ParaderoInicial->Name = L"L_ParaderoInicial";
			this->L_ParaderoInicial->Size = System::Drawing::Size(238, 45);
			this->L_ParaderoInicial->TabIndex = 13;
			this->L_ParaderoInicial->Text = L"Desde el Paradero :";
			this->L_ParaderoInicial->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(60, 51);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// Pantalla_Ver_Atajo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1113, 836);
			this->Controls->Add(this->GB_VER_ATAJO);
			this->Name = L"Pantalla_Ver_Atajo";
			this->Text = L"Pantalla_Ver_Atajo";
			this->Load += gcnew System::EventHandler(this, &Pantalla_Ver_Atajo::Pantalla_Ver_Atajo_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Pantalla_Ver_Atajo::Pantalla_Ver_Atajo_SizeChanged);
			this->GB_VER_ATAJO->ResumeLayout(false);
			this->GB_VER_ATAJO->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_VER_ATAJO->Width)) / 2;
		this->GB_VER_ATAJO->Location = System::Drawing::Point(PosXGB_Busqueda, 25);
	};
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Pantalla_Ver_Atajo_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}

private: System::Void Pantalla_Ver_Atajo_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &Pantalla_Ver_Atajo::Pantalla_Ver_Atajo_SizeChanged));
	CentrarForm();
}
};
}
