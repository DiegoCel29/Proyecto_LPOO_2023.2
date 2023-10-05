#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pantalla_Ver_Ruta
	/// </summary>
	public ref class Pantalla_Ver_Ruta : public System::Windows::Forms::Form
	{
	public:
		Pantalla_Ver_Ruta(void)
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
		~Pantalla_Ver_Ruta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_VER_RUTA;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ L_ParaderoInicial;
	private: System::Windows::Forms::TextBox^ TB_SIGUIENTE_PARADERO;

	private: System::Windows::Forms::Label^ L_Nivel_Trafico;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TB_PASAJERO_2;
	private: System::Windows::Forms::TextBox^ TB_BUS_2;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TB_PASAJERO_1;
	private: System::Windows::Forms::TextBox^ TB_BUS_1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TB_NIVEL_TRAFICO;
	private: System::Windows::Forms::Button^ B_Regresar;
	private: System::Windows::Forms::Button^ B_Actualizar;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pantalla_Ver_Ruta::typeid));
			this->GB_VER_RUTA = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->L_ParaderoInicial = (gcnew System::Windows::Forms::Label());
			this->TB_SIGUIENTE_PARADERO = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TB_BUS_1 = (gcnew System::Windows::Forms::TextBox());
			this->TB_PASAJERO_1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TB_PASAJERO_2 = (gcnew System::Windows::Forms::TextBox());
			this->TB_BUS_2 = (gcnew System::Windows::Forms::TextBox());
			this->L_Nivel_Trafico = (gcnew System::Windows::Forms::Label());
			this->TB_NIVEL_TRAFICO = (gcnew System::Windows::Forms::TextBox());
			this->B_Actualizar = (gcnew System::Windows::Forms::Button());
			this->B_Regresar = (gcnew System::Windows::Forms::Button());
			this->GB_VER_RUTA->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// GB_VER_RUTA
			// 
			this->GB_VER_RUTA->BackColor = System::Drawing::Color::Transparent;
			this->GB_VER_RUTA->Controls->Add(this->B_Regresar);
			this->GB_VER_RUTA->Controls->Add(this->B_Actualizar);
			this->GB_VER_RUTA->Controls->Add(this->TB_NIVEL_TRAFICO);
			this->GB_VER_RUTA->Controls->Add(this->L_Nivel_Trafico);
			this->GB_VER_RUTA->Controls->Add(this->groupBox2);
			this->GB_VER_RUTA->Controls->Add(this->groupBox1);
			this->GB_VER_RUTA->Controls->Add(this->label1);
			this->GB_VER_RUTA->Controls->Add(this->TB_SIGUIENTE_PARADERO);
			this->GB_VER_RUTA->Controls->Add(this->L_ParaderoInicial);
			this->GB_VER_RUTA->Controls->Add(this->pictureBox1);
			this->GB_VER_RUTA->Location = System::Drawing::Point(19, 18);
			this->GB_VER_RUTA->Name = L"GB_VER_RUTA";
			this->GB_VER_RUTA->Size = System::Drawing::Size(1084, 798);
			this->GB_VER_RUTA->TabIndex = 0;
			this->GB_VER_RUTA->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(40, 61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// L_ParaderoInicial
			// 
			this->L_ParaderoInicial->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoInicial->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoInicial->Location = System::Drawing::Point(147, 61);
			this->L_ParaderoInicial->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_ParaderoInicial->Name = L"L_ParaderoInicial";
			this->L_ParaderoInicial->Size = System::Drawing::Size(238, 45);
			this->L_ParaderoInicial->TabIndex = 6;
			this->L_ParaderoInicial->Text = L"Siguiente Paradero :";
			this->L_ParaderoInicial->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_SIGUIENTE_PARADERO
			// 
			this->TB_SIGUIENTE_PARADERO->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_SIGUIENTE_PARADERO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_SIGUIENTE_PARADERO->Location = System::Drawing::Point(420, 64);
			this->TB_SIGUIENTE_PARADERO->Margin = System::Windows::Forms::Padding(4);
			this->TB_SIGUIENTE_PARADERO->Name = L"TB_SIGUIENTE_PARADERO";
			this->TB_SIGUIENTE_PARADERO->Size = System::Drawing::Size(333, 38);
			this->TB_SIGUIENTE_PARADERO->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Moccasin;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(147, 164);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 45);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Buses Cercanos :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_BUS_1
			// 
			this->TB_BUS_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_BUS_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_BUS_1->Location = System::Drawing::Point(31, 13);
			this->TB_BUS_1->Margin = System::Windows::Forms::Padding(4);
			this->TB_BUS_1->Name = L"TB_BUS_1";
			this->TB_BUS_1->Size = System::Drawing::Size(124, 38);
			this->TB_BUS_1->TabIndex = 13;
			// 
			// TB_PASAJERO_1
			// 
			this->TB_PASAJERO_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_PASAJERO_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_PASAJERO_1->Location = System::Drawing::Point(329, 67);
			this->TB_PASAJERO_1->Margin = System::Windows::Forms::Padding(4);
			this->TB_PASAJERO_1->Name = L"TB_PASAJERO_1";
			this->TB_PASAJERO_1->Size = System::Drawing::Size(86, 38);
			this->TB_PASAJERO_1->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Moccasin;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(31, 67);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(279, 37);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Cantidad de Pasajeros :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->TB_PASAJERO_1);
			this->groupBox1->Controls->Add(this->TB_BUS_1);
			this->groupBox1->Location = System::Drawing::Point(116, 225);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(455, 163);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->TB_PASAJERO_2);
			this->groupBox2->Controls->Add(this->TB_BUS_2);
			this->groupBox2->Location = System::Drawing::Point(116, 404);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(455, 163);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Moccasin;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(31, 67);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 37);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Cantidad de Pasajeros :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_PASAJERO_2
			// 
			this->TB_PASAJERO_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_PASAJERO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_PASAJERO_2->Location = System::Drawing::Point(329, 67);
			this->TB_PASAJERO_2->Margin = System::Windows::Forms::Padding(4);
			this->TB_PASAJERO_2->Name = L"TB_PASAJERO_2";
			this->TB_PASAJERO_2->Size = System::Drawing::Size(86, 38);
			this->TB_PASAJERO_2->TabIndex = 14;
			// 
			// TB_BUS_2
			// 
			this->TB_BUS_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_BUS_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_BUS_2->Location = System::Drawing::Point(31, 13);
			this->TB_BUS_2->Margin = System::Windows::Forms::Padding(4);
			this->TB_BUS_2->Name = L"TB_BUS_2";
			this->TB_BUS_2->Size = System::Drawing::Size(124, 38);
			this->TB_BUS_2->TabIndex = 13;
			// 
			// L_Nivel_Trafico
			// 
			this->L_Nivel_Trafico->BackColor = System::Drawing::Color::Moccasin;
			this->L_Nivel_Trafico->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Nivel_Trafico->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Nivel_Trafico->ForeColor = System::Drawing::Color::Black;
			this->L_Nivel_Trafico->Location = System::Drawing::Point(147, 591);
			this->L_Nivel_Trafico->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Nivel_Trafico->Name = L"L_Nivel_Trafico";
			this->L_Nivel_Trafico->Size = System::Drawing::Size(238, 46);
			this->L_Nivel_Trafico->TabIndex = 18;
			this->L_Nivel_Trafico->Text = L"Nivel de Trafico :";
			this->L_Nivel_Trafico->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_NIVEL_TRAFICO
			// 
			this->TB_NIVEL_TRAFICO->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_NIVEL_TRAFICO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_NIVEL_TRAFICO->Location = System::Drawing::Point(445, 599);
			this->TB_NIVEL_TRAFICO->Margin = System::Windows::Forms::Padding(4);
			this->TB_NIVEL_TRAFICO->Name = L"TB_NIVEL_TRAFICO";
			this->TB_NIVEL_TRAFICO->Size = System::Drawing::Size(86, 38);
			this->TB_NIVEL_TRAFICO->TabIndex = 19;
			// 
			// B_Actualizar
			// 
			this->B_Actualizar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Actualizar.BackgroundImage")));
			this->B_Actualizar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Actualizar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Actualizar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Actualizar->Location = System::Drawing::Point(172, 700);
			this->B_Actualizar->Margin = System::Windows::Forms::Padding(4);
			this->B_Actualizar->Name = L"B_Actualizar";
			this->B_Actualizar->Size = System::Drawing::Size(133, 49);
			this->B_Actualizar->TabIndex = 20;
			this->B_Actualizar->Text = L"Actualizar";
			this->B_Actualizar->UseVisualStyleBackColor = true;
			// 
			// B_Regresar
			// 
			this->B_Regresar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Regresar.BackgroundImage")));
			this->B_Regresar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Regresar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Regresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Regresar->Location = System::Drawing::Point(703, 700);
			this->B_Regresar->Margin = System::Windows::Forms::Padding(4);
			this->B_Regresar->Name = L"B_Regresar";
			this->B_Regresar->Size = System::Drawing::Size(133, 49);
			this->B_Regresar->TabIndex = 21;
			this->B_Regresar->Text = L"Regresar";
			this->B_Regresar->UseVisualStyleBackColor = true;
			// 
			// Pantalla_Ver_Ruta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1116, 828);
			this->Controls->Add(this->GB_VER_RUTA);
			this->Name = L"Pantalla_Ver_Ruta";
			this->Text = L"Pantalla_Ver_Ruta";
			this->GB_VER_RUTA->ResumeLayout(false);
			this->GB_VER_RUTA->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
