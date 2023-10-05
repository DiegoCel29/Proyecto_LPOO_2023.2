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
	/// Resumen de HorarioMantenimientoEditar
	/// </summary>
	public ref class HorarioMantenimientoEditar : public System::Windows::Forms::Form
	{
	public:
		HorarioMantenimientoEditar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		HorarioMantenimientoEditar(Horario^ objetohorario) {
			InitializeComponent();

			this->objetoHorario = objetohorario;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~HorarioMantenimientoEditar()
		{
			if (components)
			{
				delete components;
			}
		}












	private: Horario^ objetoHorario;
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::TextBox^ TB_ParaderoFinal;
	private: System::Windows::Forms::TextBox^ TB_ParaderoInicial;
	private: System::Windows::Forms::TextBox^ TB_RutaAsociada;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HorarioMantenimientoEditar::typeid));
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->TB_ParaderoFinal = (gcnew System::Windows::Forms::TextBox());
			this->TB_ParaderoInicial = (gcnew System::Windows::Forms::TextBox());
			this->TB_RutaAsociada = (gcnew System::Windows::Forms::TextBox());
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
			this->GB_Datos->Controls->Add(this->TB_ParaderoFinal);
			this->GB_Datos->Controls->Add(this->TB_ParaderoInicial);
			this->GB_Datos->Controls->Add(this->TB_RutaAsociada);
			this->GB_Datos->Controls->Add(this->L_ParaderoFinal);
			this->GB_Datos->Controls->Add(this->L_Identificador);
			this->GB_Datos->Controls->Add(this->TB_Identificador);
			this->GB_Datos->Controls->Add(this->L_ParaderoInicial);
			this->GB_Datos->Controls->Add(this->L_RutaAsociada);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(40, 40);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Size = System::Drawing::Size(450, 256);
			this->GB_Datos->TabIndex = 11;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos del Horario:";
			// 
			// TB_ParaderoFinal
			// 
			this->TB_ParaderoFinal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_ParaderoFinal->Enabled = false;
			this->TB_ParaderoFinal->Location = System::Drawing::Point(175, 180);
			this->TB_ParaderoFinal->Name = L"TB_ParaderoFinal";
			this->TB_ParaderoFinal->Size = System::Drawing::Size(250, 29);
			this->TB_ParaderoFinal->TabIndex = 22;
			// 
			// TB_ParaderoInicial
			// 
			this->TB_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_ParaderoInicial->Enabled = false;
			this->TB_ParaderoInicial->Location = System::Drawing::Point(175, 130);
			this->TB_ParaderoInicial->Name = L"TB_ParaderoInicial";
			this->TB_ParaderoInicial->Size = System::Drawing::Size(250, 29);
			this->TB_ParaderoInicial->TabIndex = 21;
			// 
			// TB_RutaAsociada
			// 
			this->TB_RutaAsociada->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_RutaAsociada->Enabled = false;
			this->TB_RutaAsociada->Location = System::Drawing::Point(175, 80);
			this->TB_RutaAsociada->Name = L"TB_RutaAsociada";
			this->TB_RutaAsociada->Size = System::Drawing::Size(250, 29);
			this->TB_RutaAsociada->TabIndex = 20;
			// 
			// L_ParaderoFinal
			// 
			this->L_ParaderoFinal->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoFinal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoFinal->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoFinal->Location = System::Drawing::Point(10, 180);
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
			this->L_Identificador->Location = System::Drawing::Point(10, 30);
			this->L_Identificador->Name = L"L_Identificador";
			this->L_Identificador->Size = System::Drawing::Size(150, 30);
			this->L_Identificador->TabIndex = 9;
			this->L_Identificador->Text = L"Código:";
			this->L_Identificador->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Identificador
			// 
			this->TB_Identificador->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Identificador->Enabled = false;
			this->TB_Identificador->Location = System::Drawing::Point(175, 30);
			this->TB_Identificador->Name = L"TB_Identificador";
			this->TB_Identificador->Size = System::Drawing::Size(250, 29);
			this->TB_Identificador->TabIndex = 10;
			// 
			// L_ParaderoInicial
			// 
			this->L_ParaderoInicial->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoInicial->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoInicial->Location = System::Drawing::Point(10, 130);
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
			this->L_RutaAsociada->Location = System::Drawing::Point(10, 80);
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
			this->B_Cancelar->Location = System::Drawing::Point(305, 338);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(100, 40);
			this->B_Cancelar->TabIndex = 10;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &HorarioMantenimientoEditar::B_Cancelar_Click);
			// 
			// B_Grabar
			// 
			this->B_Grabar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Grabar.BackgroundImage")));
			this->B_Grabar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Grabar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Grabar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Grabar->Location = System::Drawing::Point(103, 338);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(170, 40);
			this->B_Grabar->TabIndex = 9;
			this->B_Grabar->Text = L"Aplicar Cambios";
			this->B_Grabar->UseVisualStyleBackColor = true;
			this->B_Grabar->Click += gcnew System::EventHandler(this, &HorarioMantenimientoEditar::B_Grabar_Click);
			// 
			// HorarioMantenimientoEditar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(535, 445);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->B_Grabar);
			this->DoubleBuffered = true;
			this->Name = L"HorarioMantenimientoEditar";
			this->Text = L"Editar";
			this->Load += gcnew System::EventHandler(this, &HorarioMantenimientoEditar::HorarioMantenimientoEditar_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &HorarioMantenimientoEditar::HorarioMantenimientoEditar_SizeChanged);
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Datos = ((this->ClientSize.Width) - (this->GB_Datos->Width)) / 2;

		this->GB_Datos->Location = System::Drawing::Point(PosXGB_Datos, 25);
		this->B_Grabar->Location = System::Drawing::Point(PosXGB_Datos, 340);
		this->B_Cancelar->Location = System::Drawing::Point(PosXGB_Datos + 350, 340);
	};



	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void HorarioMantenimientoEditar_Load(System::Object^ sender, System::EventArgs^ e) {

		this->SizeChanged += (gcnew System::EventHandler(this, &HorarioMantenimientoEditar::HorarioMantenimientoEditar_SizeChanged));
		CentrarForm();
		this->TB_Identificador->Text = Convert::ToString(this->objetoHorario->getCodigo());
		this->TB_RutaAsociada->Text = this->objetoHorario->getHoraInicio();
		this->TB_ParaderoInicial->Text = (this->objetoHorario->getHoraSalida());
		this->TB_ParaderoFinal->Text = (this->objetoHorario->getTurno());
	}

	private: System::Void B_Grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		int Codigo = Convert::ToInt32(this->TB_Identificador->Text);
		String^ HoraInicio = this->TB_RutaAsociada->Text;
		String^ HoraSalida = this->TB_ParaderoInicial->Text;
		String^ Turno = this->TB_ParaderoFinal->Text;

		HorarioController^ objHorarioController = gcnew HorarioController();
		objHorarioController->ActualizarHorario(Codigo, HoraInicio, HoraSalida, Turno);
		MessageBox::Show("El Horario ha sido Actualizado con exito");
		this->Close();

	}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
	private: System::Void HorarioMantenimientoEditar_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	};
}