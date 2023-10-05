#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoController;
	/// <summary>
	/// Resumen de HorarioMantenimientoAnadir
	/// </summary>
	public ref class HorarioMantenimientoAnadir : public System::Windows::Forms::Form
	{
	public:
		HorarioMantenimientoAnadir(void)
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
		~HorarioMantenimientoAnadir()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ TB_Tarifa;
	private: System::Windows::Forms::Label^ L_ParaderoFinal;
	private: System::Windows::Forms::Label^ L_Identificador;
	private: System::Windows::Forms::TextBox^ TB_Identificador;
	private: System::Windows::Forms::Label^ L_ParaderoInicial;
	private: System::Windows::Forms::Label^ L_RutaAsociada;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Button^ B_Grabar;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HorarioMantenimientoAnadir::typeid));
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->TB_Tarifa = (gcnew System::Windows::Forms::TextBox());
			this->L_ParaderoFinal = (gcnew System::Windows::Forms::Label());
			this->L_Identificador = (gcnew System::Windows::Forms::Label());
			this->TB_Identificador = (gcnew System::Windows::Forms::TextBox());
			this->L_ParaderoInicial = (gcnew System::Windows::Forms::Label());
			this->L_RutaAsociada = (gcnew System::Windows::Forms::Label());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->textBox2);
			this->GB_Datos->Controls->Add(this->textBox1);
			this->GB_Datos->Controls->Add(this->TB_Tarifa);
			this->GB_Datos->Controls->Add(this->L_ParaderoFinal);
			this->GB_Datos->Controls->Add(this->L_Identificador);
			this->GB_Datos->Controls->Add(this->TB_Identificador);
			this->GB_Datos->Controls->Add(this->L_ParaderoInicial);
			this->GB_Datos->Controls->Add(this->L_RutaAsociada);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(6, 67);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Size = System::Drawing::Size(520, 290);
			this->GB_Datos->TabIndex = 11;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos del horario";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(225, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(250, 29);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(225, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 29);
			this->textBox1->TabIndex = 20;
			// 
			// TB_Tarifa
			// 
			this->TB_Tarifa->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Tarifa->Location = System::Drawing::Point(225, 204);
			this->TB_Tarifa->Name = L"TB_Tarifa";
			this->TB_Tarifa->Size = System::Drawing::Size(250, 29);
			this->TB_Tarifa->TabIndex = 19;
			// 
			// L_ParaderoFinal
			// 
			this->L_ParaderoFinal->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoFinal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoFinal->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoFinal->Location = System::Drawing::Point(36, 204);
			this->L_ParaderoFinal->Name = L"L_ParaderoFinal";
			this->L_ParaderoFinal->Size = System::Drawing::Size(150, 30);
			this->L_ParaderoFinal->TabIndex = 15;
			this->L_ParaderoFinal->Text = L"Turno:";
			this->L_ParaderoFinal->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Identificador
			// 
			this->L_Identificador->BackColor = System::Drawing::Color::Moccasin;
			this->L_Identificador->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Identificador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Identificador->ForeColor = System::Drawing::Color::Black;
			this->L_Identificador->Location = System::Drawing::Point(36, 52);
			this->L_Identificador->Name = L"L_Identificador";
			this->L_Identificador->Size = System::Drawing::Size(150, 30);
			this->L_Identificador->TabIndex = 9;
			this->L_Identificador->Text = L"Código:";
			this->L_Identificador->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Identificador
			// 
			this->TB_Identificador->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Identificador->Location = System::Drawing::Point(225, 52);
			this->TB_Identificador->Name = L"TB_Identificador";
			this->TB_Identificador->Size = System::Drawing::Size(250, 29);
			this->TB_Identificador->TabIndex = 10;
			this->TB_Identificador->TextChanged += gcnew System::EventHandler(this, &HorarioMantenimientoAnadir::TB_Identificador_TextChanged);
			// 
			// L_ParaderoInicial
			// 
			this->L_ParaderoInicial->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoInicial->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoInicial->Location = System::Drawing::Point(36, 154);
			this->L_ParaderoInicial->Name = L"L_ParaderoInicial";
			this->L_ParaderoInicial->Size = System::Drawing::Size(150, 30);
			this->L_ParaderoInicial->TabIndex = 7;
			this->L_ParaderoInicial->Text = L"Hora fin:";
			this->L_ParaderoInicial->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_RutaAsociada
			// 
			this->L_RutaAsociada->BackColor = System::Drawing::Color::Moccasin;
			this->L_RutaAsociada->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_RutaAsociada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_RutaAsociada->ForeColor = System::Drawing::Color::Black;
			this->L_RutaAsociada->Location = System::Drawing::Point(36, 103);
			this->L_RutaAsociada->Name = L"L_RutaAsociada";
			this->L_RutaAsociada->Size = System::Drawing::Size(150, 30);
			this->L_RutaAsociada->TabIndex = 5;
			this->L_RutaAsociada->Text = L"Hora de inicio:";
			this->L_RutaAsociada->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(273, 395);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(100, 40);
			this->B_Cancelar->TabIndex = 10;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &HorarioMantenimientoAnadir::B_Cancelar_Click);
			// 
			// B_Grabar
			// 
			this->B_Grabar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Grabar.BackgroundImage")));
			this->B_Grabar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Grabar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Grabar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Grabar->Location = System::Drawing::Point(123, 395);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(100, 40);
			this->B_Grabar->TabIndex = 9;
			this->B_Grabar->Text = L"Grabar";
			this->B_Grabar->UseVisualStyleBackColor = true;
			this->B_Grabar->Click += gcnew System::EventHandler(this, &HorarioMantenimientoAnadir::B_Grabar_Click);
			// 
			// HorarioMantenimientoAnadir
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(533, 503);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->B_Grabar);
			this->Name = L"HorarioMantenimientoAnadir";
			this->Text = L"Nuevo";
			this->Load += gcnew System::EventHandler(this, &HorarioMantenimientoAnadir::HorarioMantenimientoAnadir_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &HorarioMantenimientoAnadir::HorarioMantenimientoAnadir_SizeChanged);
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion





	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_Identificador_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: void CentrarForm() {
		int PosXGB_Datos = ((this->ClientSize.Width) - (this->GB_Datos->Width)) / 2;

		this->GB_Datos->Location = System::Drawing::Point(PosXGB_Datos, 25);
		this->B_Grabar->Location = System::Drawing::Point(PosXGB_Datos, 340);
		this->B_Cancelar->Location = System::Drawing::Point(PosXGB_Datos + 350, 340);
	};

	private: System::Void B_Grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		//Cuardamos en varibles la informacion proporciona en la caja de texto

		int Codigo = Convert::ToInt32(this->TB_Identificador->Text);
		String^ HoraInicio = this->textBox1->Text;
		String^ HoraSalida = this->textBox2->Text;
		String^ Turno = this->TB_Tarifa->Text;

		//Creamos un objeto de controlador
		HorarioController^ objHorarioController = gcnew HorarioController();
		int existe = objHorarioController->ExisteHorario(Codigo);

		if (existe) {
			MessageBox::Show("Ya existe un Horario con ese codigo");

		}
		else {
			objHorarioController->agregarHorario(Codigo, HoraInicio, HoraSalida, Turno);
			MessageBox::Show("El Horario ha sido registrado con exito");
			this->Close();
		}
	}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void HorarioMantenimientoAnadir_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &HorarioMantenimientoAnadir::HorarioMantenimientoAnadir_SizeChanged));
		CentrarForm();
	}
	private: System::Void HorarioMantenimientoAnadir_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	};
}
