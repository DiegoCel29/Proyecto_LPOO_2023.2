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
	private: System::Windows::Forms::TextBox^ TB_Turno;
	private: System::Windows::Forms::TextBox^ TB_HoraFin;
	private: System::Windows::Forms::TextBox^ TB_HoraInicio;
	private: System::Windows::Forms::Label^ L_Turno;
	private: System::Windows::Forms::Label^ L_Codigo;
	private: System::Windows::Forms::TextBox^ TB_Codigo;
	private: System::Windows::Forms::Label^ L_HoraFin;
	private: System::Windows::Forms::Label^ L_HoraInicio;
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
			this->TB_Turno = (gcnew System::Windows::Forms::TextBox());
			this->TB_HoraFin = (gcnew System::Windows::Forms::TextBox());
			this->TB_HoraInicio = (gcnew System::Windows::Forms::TextBox());
			this->L_Turno = (gcnew System::Windows::Forms::Label());
			this->L_Codigo = (gcnew System::Windows::Forms::Label());
			this->TB_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->L_HoraFin = (gcnew System::Windows::Forms::Label());
			this->L_HoraInicio = (gcnew System::Windows::Forms::Label());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->TB_Turno);
			this->GB_Datos->Controls->Add(this->TB_HoraFin);
			this->GB_Datos->Controls->Add(this->TB_HoraInicio);
			this->GB_Datos->Controls->Add(this->L_Turno);
			this->GB_Datos->Controls->Add(this->L_Codigo);
			this->GB_Datos->Controls->Add(this->TB_Codigo);
			this->GB_Datos->Controls->Add(this->L_HoraFin);
			this->GB_Datos->Controls->Add(this->L_HoraInicio);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(0, 0);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Size = System::Drawing::Size(450, 240);
			this->GB_Datos->TabIndex = 11;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos del Horario:";
			// 
			// TB_Turno
			// 
			this->TB_Turno->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Turno->Location = System::Drawing::Point(175, 180);
			this->TB_Turno->Name = L"TB_Turno";
			this->TB_Turno->Size = System::Drawing::Size(250, 29);
			this->TB_Turno->TabIndex = 22;
			// 
			// TB_HoraFin
			// 
			this->TB_HoraFin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_HoraFin->Location = System::Drawing::Point(175, 130);
			this->TB_HoraFin->Name = L"TB_HoraFin";
			this->TB_HoraFin->Size = System::Drawing::Size(250, 29);
			this->TB_HoraFin->TabIndex = 21;
			// 
			// TB_HoraInicio
			// 
			this->TB_HoraInicio->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_HoraInicio->Location = System::Drawing::Point(175, 80);
			this->TB_HoraInicio->Name = L"TB_HoraInicio";
			this->TB_HoraInicio->Size = System::Drawing::Size(250, 29);
			this->TB_HoraInicio->TabIndex = 20;
			// 
			// L_Turno
			// 
			this->L_Turno->BackColor = System::Drawing::Color::Moccasin;
			this->L_Turno->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Turno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Turno->ForeColor = System::Drawing::Color::Black;
			this->L_Turno->Location = System::Drawing::Point(10, 180);
			this->L_Turno->Name = L"L_Turno";
			this->L_Turno->Size = System::Drawing::Size(150, 30);
			this->L_Turno->TabIndex = 15;
			this->L_Turno->Text = L"Turno:";
			this->L_Turno->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Codigo
			// 
			this->L_Codigo->BackColor = System::Drawing::Color::Moccasin;
			this->L_Codigo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Codigo->ForeColor = System::Drawing::Color::Black;
			this->L_Codigo->Location = System::Drawing::Point(10, 30);
			this->L_Codigo->Name = L"L_Codigo";
			this->L_Codigo->Size = System::Drawing::Size(150, 30);
			this->L_Codigo->TabIndex = 9;
			this->L_Codigo->Text = L"Código:";
			this->L_Codigo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Codigo
			// 
			this->TB_Codigo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Codigo->Enabled = false;
			this->TB_Codigo->Location = System::Drawing::Point(175, 30);
			this->TB_Codigo->Name = L"TB_Codigo";
			this->TB_Codigo->Size = System::Drawing::Size(250, 29);
			this->TB_Codigo->TabIndex = 10;
			// 
			// L_HoraFin
			// 
			this->L_HoraFin->BackColor = System::Drawing::Color::Moccasin;
			this->L_HoraFin->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_HoraFin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_HoraFin->ForeColor = System::Drawing::Color::Black;
			this->L_HoraFin->Location = System::Drawing::Point(10, 130);
			this->L_HoraFin->Name = L"L_HoraFin";
			this->L_HoraFin->Size = System::Drawing::Size(150, 30);
			this->L_HoraFin->TabIndex = 7;
			this->L_HoraFin->Text = L"Hora fin:";
			this->L_HoraFin->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_HoraInicio
			// 
			this->L_HoraInicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_HoraInicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_HoraInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_HoraInicio->ForeColor = System::Drawing::Color::Black;
			this->L_HoraInicio->Location = System::Drawing::Point(10, 80);
			this->L_HoraInicio->Name = L"L_HoraInicio";
			this->L_HoraInicio->Size = System::Drawing::Size(150, 30);
			this->L_HoraInicio->TabIndex = 5;
			this->L_HoraInicio->Text = L"Hora de inicio:";
			this->L_HoraInicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
	private: System::Void HorarioMantenimientoEditar_Load(System::Object^ sender, System::EventArgs^ e) {

		this->SizeChanged += (gcnew System::EventHandler(this, &HorarioMantenimientoEditar::HorarioMantenimientoEditar_SizeChanged));
		CentrarForm();
		this->TB_Codigo->Text = Convert::ToString(this->objetoHorario->getCodigo());
		this->TB_HoraInicio->Text = this->objetoHorario->getHoraInicio();
		this->TB_HoraFin->Text = (this->objetoHorario->getHoraSalida());
		this->TB_Turno->Text = (this->objetoHorario->getTurno());
	}

	private: System::Void B_Grabar_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ HoraInicio = this->TB_HoraInicio->Text;
		String^ HoraSalida = this->TB_HoraFin->Text;
		String^ Turno = this->TB_Turno->Text;

		if((HoraInicio!="") && (HoraSalida!="") && (Turno!="") && (this->TB_Codigo->Text!="")) {
			int Codigo = Convert::ToInt32(this->TB_Codigo->Text);

			HorarioController^ objHorarioController = gcnew HorarioController();
			objHorarioController->ActualizarHorario(Codigo, HoraInicio, HoraSalida, Turno);
			MessageBox::Show("El Horario ha sido Actualizado con exito");
			this->Close();
		}

	}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
	private: System::Void HorarioMantenimientoEditar_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	};
}