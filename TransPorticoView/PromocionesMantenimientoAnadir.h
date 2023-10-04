#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace TransPorticoModel;
	using namespace TransPorticoController;

	/// <summary>
	/// Resumen de PromocionesMantenimientoAnadir
	/// </summary>
	public ref class PromocionesMantenimientoAnadir : public System::Windows::Forms::Form
	{
	public:
		PromocionesMantenimientoAnadir(void)
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
		~PromocionesMantenimientoAnadir()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ B_Grabar;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Label^ L_Descripcion;

	private: System::Windows::Forms::GroupBox^ GB_Datos;

	private: System::Windows::Forms::Label^ L_Titulo;
	private: System::Windows::Forms::TextBox^ TB_Titulo;


	private: System::Windows::Forms::Label^ L_FechaInicio;


	private: System::Windows::Forms::Label^ L_FechaFin;
	private: System::Windows::Forms::TextBox^ TB_Descripcion;
	private: System::Windows::Forms::DateTimePicker^ DTP_FechaInicio;
	private: System::Windows::Forms::DateTimePicker^ DTP_FechaFin;
	private: System::Windows::Forms::TextBox^ TB_Codigo;
	private: System::Windows::Forms::Label^ L_Codigo;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PromocionesMantenimientoAnadir::typeid));
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->L_Descripcion = (gcnew System::Windows::Forms::Label());
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->TB_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->L_Codigo = (gcnew System::Windows::Forms::Label());
			this->DTP_FechaInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->DTP_FechaFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->TB_Descripcion = (gcnew System::Windows::Forms::TextBox());
			this->L_FechaFin = (gcnew System::Windows::Forms::Label());
			this->L_Titulo = (gcnew System::Windows::Forms::Label());
			this->TB_Titulo = (gcnew System::Windows::Forms::TextBox());
			this->L_FechaInicio = (gcnew System::Windows::Forms::Label());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// B_Grabar
			// 
			this->B_Grabar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Grabar.BackgroundImage")));
			this->B_Grabar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Grabar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Grabar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Grabar->Location = System::Drawing::Point(0, 360);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(100, 40);
			this->B_Grabar->TabIndex = 2;
			this->B_Grabar->Text = L"Grabar";
			this->B_Grabar->UseVisualStyleBackColor = true;
			this->B_Grabar->Click += gcnew System::EventHandler(this, &PromocionesMantenimientoAnadir::B_Grabar_Click);
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(350, 360);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(100, 40);
			this->B_Cancelar->TabIndex = 3;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &PromocionesMantenimientoAnadir::B_Cancelar_Click);
			// 
			// L_Descripcion
			// 
			this->L_Descripcion->BackColor = System::Drawing::Color::Moccasin;
			this->L_Descripcion->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Descripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Descripcion->ForeColor = System::Drawing::Color::Black;
			this->L_Descripcion->Location = System::Drawing::Point(10, 145);
			this->L_Descripcion->Name = L"L_Descripcion";
			this->L_Descripcion->Size = System::Drawing::Size(150, 30);
			this->L_Descripcion->TabIndex = 5;
			this->L_Descripcion->Text = L"Descripcion:";
			this->L_Descripcion->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->TB_Codigo);
			this->GB_Datos->Controls->Add(this->L_Codigo);
			this->GB_Datos->Controls->Add(this->DTP_FechaInicio);
			this->GB_Datos->Controls->Add(this->DTP_FechaFin);
			this->GB_Datos->Controls->Add(this->TB_Descripcion);
			this->GB_Datos->Controls->Add(this->L_FechaFin);
			this->GB_Datos->Controls->Add(this->L_Titulo);
			this->GB_Datos->Controls->Add(this->TB_Titulo);
			this->GB_Datos->Controls->Add(this->L_FechaInicio);
			this->GB_Datos->Controls->Add(this->L_Descripcion);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(0, 25);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Size = System::Drawing::Size(450, 310);
			this->GB_Datos->TabIndex = 8;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos de la tarifa:";
			// 
			// TB_Codigo
			// 
			this->TB_Codigo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Codigo->Location = System::Drawing::Point(175, 30);
			this->TB_Codigo->Name = L"TB_Codigo";
			this->TB_Codigo->ReadOnly = true;
			this->TB_Codigo->Size = System::Drawing::Size(250, 29);
			this->TB_Codigo->TabIndex = 22;
			// 
			// L_Codigo
			// 
			this->L_Codigo->BackColor = System::Drawing::Color::Moccasin;
			this->L_Codigo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Codigo->ForeColor = System::Drawing::Color::Black;
			this->L_Codigo->Location = System::Drawing::Point(10, 30);
			this->L_Codigo->Name = L"L_Codigo";
			this->L_Codigo->Size = System::Drawing::Size(150, 30);
			this->L_Codigo->TabIndex = 21;
			this->L_Codigo->Text = L"Codigo:";
			this->L_Codigo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// DTP_FechaInicio
			// 
			this->DTP_FechaInicio->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DTP_FechaInicio->Location = System::Drawing::Point(175, 210);
			this->DTP_FechaInicio->Name = L"DTP_FechaInicio";
			this->DTP_FechaInicio->Size = System::Drawing::Size(250, 29);
			this->DTP_FechaInicio->TabIndex = 20;
			// 
			// DTP_FechaFin
			// 
			this->DTP_FechaFin->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DTP_FechaFin->Location = System::Drawing::Point(175, 260);
			this->DTP_FechaFin->Name = L"DTP_FechaFin";
			this->DTP_FechaFin->Size = System::Drawing::Size(250, 29);
			this->DTP_FechaFin->TabIndex = 19;
			// 
			// TB_Descripcion
			// 
			this->TB_Descripcion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Descripcion->Location = System::Drawing::Point(175, 130);
			this->TB_Descripcion->Multiline = true;
			this->TB_Descripcion->Name = L"TB_Descripcion";
			this->TB_Descripcion->Size = System::Drawing::Size(250, 60);
			this->TB_Descripcion->TabIndex = 18;
			// 
			// L_FechaFin
			// 
			this->L_FechaFin->BackColor = System::Drawing::Color::Moccasin;
			this->L_FechaFin->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_FechaFin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_FechaFin->ForeColor = System::Drawing::Color::Black;
			this->L_FechaFin->Location = System::Drawing::Point(10, 260);
			this->L_FechaFin->Name = L"L_FechaFin";
			this->L_FechaFin->Size = System::Drawing::Size(150, 30);
			this->L_FechaFin->TabIndex = 15;
			this->L_FechaFin->Text = L"Fecha fin:";
			this->L_FechaFin->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Titulo
			// 
			this->L_Titulo->BackColor = System::Drawing::Color::Moccasin;
			this->L_Titulo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Titulo->ForeColor = System::Drawing::Color::Black;
			this->L_Titulo->Location = System::Drawing::Point(10, 80);
			this->L_Titulo->Name = L"L_Titulo";
			this->L_Titulo->Size = System::Drawing::Size(150, 30);
			this->L_Titulo->TabIndex = 9;
			this->L_Titulo->Text = L"Titulo:";
			this->L_Titulo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Titulo
			// 
			this->TB_Titulo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Titulo->Location = System::Drawing::Point(175, 80);
			this->TB_Titulo->Name = L"TB_Titulo";
			this->TB_Titulo->Size = System::Drawing::Size(250, 29);
			this->TB_Titulo->TabIndex = 10;
			// 
			// L_FechaInicio
			// 
			this->L_FechaInicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_FechaInicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_FechaInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_FechaInicio->ForeColor = System::Drawing::Color::Black;
			this->L_FechaInicio->Location = System::Drawing::Point(10, 210);
			this->L_FechaInicio->Name = L"L_FechaInicio";
			this->L_FechaInicio->Size = System::Drawing::Size(150, 30);
			this->L_FechaInicio->TabIndex = 7;
			this->L_FechaInicio->Text = L"Fecha inicio:";
			this->L_FechaInicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// PromocionesMantenimientoAnadir
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(966, 618);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->B_Grabar);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->Name = L"PromocionesMantenimientoAnadir";
			this->Text = L"Crear nueva promocion";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &PromocionesMantenimientoAnadir::PromocionesMantenimientoAnadir_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &PromocionesMantenimientoAnadir::PromocionesMantenimientoAnadir_SizeChanged);
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Datos = ((this->ClientSize.Width) - (this->GB_Datos->Width)) / 2;

		this->GB_Datos->Location = System::Drawing::Point(PosXGB_Datos, 25);
		this->B_Grabar->Location = System::Drawing::Point(PosXGB_Datos, 360);
		this->B_Cancelar->Location = System::Drawing::Point(PosXGB_Datos + 350, 360);
	};
	private: System::Void PromocionesMantenimientoAnadir_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &PromocionesMantenimientoAnadir::PromocionesMantenimientoAnadir_SizeChanged));
		CentrarForm();

		PromocionesController^ ObjPromocionesController = gcnew PromocionesController();
		List<Promociones^>^ ListPromociones = ObjPromocionesController->BuscarPromocionAll();
		int UltimoCodigo = ListPromociones->Count;
		this->TB_Codigo->Text = Convert::ToString(UltimoCodigo + 1);
	};
	private: System::Void PromocionesMantenimientoAnadir_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	};
	private: System::Void B_Grabar_Click(System::Object^ sender, System::EventArgs^ e) {

		int Codigo = Convert::ToInt32(this->TB_Codigo->Text);
		String^ Titulo = this->TB_Titulo->Text;
		String^ Descripcion = this->TB_Descripcion->Text;
		String^ FechaInicio = this->DTP_FechaInicio->Text;
		String^ FechaFin = this->DTP_FechaFin->Text;

		if (FechaInicio != FechaFin) {
			Promociones^ ObjPromocion = gcnew Promociones(Codigo, Titulo, Descripcion, FechaInicio, FechaFin);
			PromocionesController^ ObjPromocionesController = gcnew PromocionesController();
			ObjPromocionesController->AgregarPromocion(ObjPromocion);
			MessageBox::Show("La nueva promocion se ha agregado con éxito.");
			this->Close();
		}
		else {
			MessageBox::Show("La fecha de inicio no puede ser la misma que la fecha de fin. Intentar nuevamente.");
		}
	}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
