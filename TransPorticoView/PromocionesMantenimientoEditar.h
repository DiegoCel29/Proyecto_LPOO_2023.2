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
	/// Resumen de PromocionesMantenimientoEditar
	/// </summary>
	public ref class PromocionesMantenimientoEditar : public System::Windows::Forms::Form
	{
	public:
		PromocionesMantenimientoEditar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		PromocionesMantenimientoEditar(Promociones^ ObjPromociones) {
			InitializeComponent();
			this->ObjPromociones = ObjPromociones;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PromocionesMantenimientoEditar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Promociones^ ObjPromociones;
	private: System::Windows::Forms::Button^ B_Grabar;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::ComboBox^ CB_Estado;
	private: System::Windows::Forms::Label^ L_Estado;
	private: System::Windows::Forms::TextBox^ TB_Paradero;
	private: System::Windows::Forms::Label^ L_Paradero;
	private: System::Windows::Forms::TextBox^ TB_Descuento;
	private: System::Windows::Forms::Label^ L_Descuento;
	private: System::Windows::Forms::TextBox^ TB_Aforo;
	private: System::Windows::Forms::TextBox^ TB_Codigo;
	private: System::Windows::Forms::Label^ L_Codigo;
	private: System::Windows::Forms::DateTimePicker^ DTP_FechaPromocion;
	private: System::Windows::Forms::TextBox^ TB_Descripcion;
	private: System::Windows::Forms::Label^ L_Aforo;
	private: System::Windows::Forms::Label^ L_Titulo;
	private: System::Windows::Forms::TextBox^ TB_Titulo;
	private: System::Windows::Forms::Label^ L_FechaPromocion;
	private: System::Windows::Forms::Label^ L_Descripcion;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PromocionesMantenimientoEditar::typeid));
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->CB_Estado = (gcnew System::Windows::Forms::ComboBox());
			this->L_Estado = (gcnew System::Windows::Forms::Label());
			this->TB_Paradero = (gcnew System::Windows::Forms::TextBox());
			this->L_Paradero = (gcnew System::Windows::Forms::Label());
			this->TB_Descuento = (gcnew System::Windows::Forms::TextBox());
			this->L_Descuento = (gcnew System::Windows::Forms::Label());
			this->TB_Aforo = (gcnew System::Windows::Forms::TextBox());
			this->TB_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->L_Codigo = (gcnew System::Windows::Forms::Label());
			this->DTP_FechaPromocion = (gcnew System::Windows::Forms::DateTimePicker());
			this->TB_Descripcion = (gcnew System::Windows::Forms::TextBox());
			this->L_Aforo = (gcnew System::Windows::Forms::Label());
			this->L_Titulo = (gcnew System::Windows::Forms::Label());
			this->TB_Titulo = (gcnew System::Windows::Forms::TextBox());
			this->L_FechaPromocion = (gcnew System::Windows::Forms::Label());
			this->L_Descripcion = (gcnew System::Windows::Forms::Label());
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
			this->B_Grabar->Location = System::Drawing::Point(0, 350);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(100, 40);
			this->B_Grabar->TabIndex = 2;
			this->B_Grabar->Text = L"Grabar";
			this->B_Grabar->UseVisualStyleBackColor = true;
			this->B_Grabar->Click += gcnew System::EventHandler(this, &PromocionesMantenimientoEditar::B_Grabar_Click);
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(350, 350);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(100, 40);
			this->B_Cancelar->TabIndex = 3;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &PromocionesMantenimientoEditar::B_Cancelar_Click);
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->CB_Estado);
			this->GB_Datos->Controls->Add(this->L_Estado);
			this->GB_Datos->Controls->Add(this->TB_Paradero);
			this->GB_Datos->Controls->Add(this->L_Paradero);
			this->GB_Datos->Controls->Add(this->TB_Descuento);
			this->GB_Datos->Controls->Add(this->L_Descuento);
			this->GB_Datos->Controls->Add(this->TB_Aforo);
			this->GB_Datos->Controls->Add(this->TB_Codigo);
			this->GB_Datos->Controls->Add(this->L_Codigo);
			this->GB_Datos->Controls->Add(this->DTP_FechaPromocion);
			this->GB_Datos->Controls->Add(this->TB_Descripcion);
			this->GB_Datos->Controls->Add(this->L_Aforo);
			this->GB_Datos->Controls->Add(this->L_Titulo);
			this->GB_Datos->Controls->Add(this->TB_Titulo);
			this->GB_Datos->Controls->Add(this->L_FechaPromocion);
			this->GB_Datos->Controls->Add(this->L_Descripcion);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(12, 12);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Size = System::Drawing::Size(450, 460);
			this->GB_Datos->TabIndex = 9;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos de la Promocion:";
			// 
			// CB_Estado
			// 
			this->CB_Estado->FormattingEnabled = true;
			this->CB_Estado->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Si", L"No" });
			this->CB_Estado->Location = System::Drawing::Point(175, 409);
			this->CB_Estado->Name = L"CB_Estado";
			this->CB_Estado->Size = System::Drawing::Size(250, 32);
			this->CB_Estado->TabIndex = 29;
			// 
			// L_Estado
			// 
			this->L_Estado->BackColor = System::Drawing::Color::Moccasin;
			this->L_Estado->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Estado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Estado->ForeColor = System::Drawing::Color::Black;
			this->L_Estado->Location = System::Drawing::Point(10, 410);
			this->L_Estado->Name = L"L_Estado";
			this->L_Estado->Size = System::Drawing::Size(150, 30);
			this->L_Estado->TabIndex = 28;
			this->L_Estado->Text = L"Estado:";
			this->L_Estado->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Paradero
			// 
			this->TB_Paradero->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Paradero->Location = System::Drawing::Point(175, 360);
			this->TB_Paradero->Name = L"TB_Paradero";
			this->TB_Paradero->Size = System::Drawing::Size(250, 29);
			this->TB_Paradero->TabIndex = 27;
			// 
			// L_Paradero
			// 
			this->L_Paradero->BackColor = System::Drawing::Color::Moccasin;
			this->L_Paradero->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Paradero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Paradero->ForeColor = System::Drawing::Color::Black;
			this->L_Paradero->Location = System::Drawing::Point(10, 360);
			this->L_Paradero->Name = L"L_Paradero";
			this->L_Paradero->Size = System::Drawing::Size(150, 30);
			this->L_Paradero->TabIndex = 26;
			this->L_Paradero->Text = L"Paradero:";
			this->L_Paradero->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Descuento
			// 
			this->TB_Descuento->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Descuento->Location = System::Drawing::Point(175, 310);
			this->TB_Descuento->Name = L"TB_Descuento";
			this->TB_Descuento->Size = System::Drawing::Size(250, 29);
			this->TB_Descuento->TabIndex = 25;
			// 
			// L_Descuento
			// 
			this->L_Descuento->BackColor = System::Drawing::Color::Moccasin;
			this->L_Descuento->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Descuento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Descuento->ForeColor = System::Drawing::Color::Black;
			this->L_Descuento->Location = System::Drawing::Point(10, 310);
			this->L_Descuento->Name = L"L_Descuento";
			this->L_Descuento->Size = System::Drawing::Size(150, 30);
			this->L_Descuento->TabIndex = 24;
			this->L_Descuento->Text = L"Descuento:";
			this->L_Descuento->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Aforo
			// 
			this->TB_Aforo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Aforo->Location = System::Drawing::Point(175, 260);
			this->TB_Aforo->Name = L"TB_Aforo";
			this->TB_Aforo->Size = System::Drawing::Size(250, 29);
			this->TB_Aforo->TabIndex = 23;
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
			// DTP_FechaPromocion
			// 
			this->DTP_FechaPromocion->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DTP_FechaPromocion->Location = System::Drawing::Point(175, 210);
			this->DTP_FechaPromocion->Name = L"DTP_FechaPromocion";
			this->DTP_FechaPromocion->Size = System::Drawing::Size(250, 29);
			this->DTP_FechaPromocion->TabIndex = 20;
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
			// L_Aforo
			// 
			this->L_Aforo->BackColor = System::Drawing::Color::Moccasin;
			this->L_Aforo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Aforo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Aforo->ForeColor = System::Drawing::Color::Black;
			this->L_Aforo->Location = System::Drawing::Point(10, 260);
			this->L_Aforo->Name = L"L_Aforo";
			this->L_Aforo->Size = System::Drawing::Size(150, 30);
			this->L_Aforo->TabIndex = 15;
			this->L_Aforo->Text = L"Aforo:";
			this->L_Aforo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			// L_FechaPromocion
			// 
			this->L_FechaPromocion->BackColor = System::Drawing::Color::Moccasin;
			this->L_FechaPromocion->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_FechaPromocion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_FechaPromocion->ForeColor = System::Drawing::Color::Black;
			this->L_FechaPromocion->Location = System::Drawing::Point(10, 210);
			this->L_FechaPromocion->Name = L"L_FechaPromocion";
			this->L_FechaPromocion->Size = System::Drawing::Size(150, 30);
			this->L_FechaPromocion->TabIndex = 7;
			this->L_FechaPromocion->Text = L"Fecha:";
			this->L_FechaPromocion->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			// PromocionesMantenimientoEditar
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
			this->Name = L"PromocionesMantenimientoEditar";
			this->Text = L"Editar promocion";
			this->Load += gcnew System::EventHandler(this, &PromocionesMantenimientoEditar::PromocionesMantenimientoEditar_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &PromocionesMantenimientoEditar::PromocionesMantenimientoEditar_SizeChanged);
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Datos = ((this->ClientSize.Width) - (this->GB_Datos->Width)) / 2;

		this->GB_Datos->Location = System::Drawing::Point(PosXGB_Datos, 25);
		this->B_Grabar->Location = System::Drawing::Point(PosXGB_Datos, 350);
		this->B_Cancelar->Location = System::Drawing::Point(PosXGB_Datos + 350, 350);
	};
	private: System::Void PromocionesMantenimientoEditar_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &PromocionesMantenimientoEditar::PromocionesMantenimientoEditar_SizeChanged));
		CentrarForm();

		this->TB_Codigo->Text = Convert::ToString(this->ObjPromociones->GetCodigo());
		this->TB_Titulo->Text = this->ObjPromociones->GetTitulo();
		this->TB_Descripcion->Text = this->ObjPromociones->GetDescripcion();
		this->DTP_FechaPromocion->Text = this->ObjPromociones->GetFechaPromocion();
		this->TB_Aforo->Text = Convert::ToString(this->ObjPromociones->GetAforoPromocion());
		this->TB_Descuento->Text = Convert::ToString(this->ObjPromociones->GetCantDescuento());
		this->TB_Paradero->Text = this->ObjPromociones->GetParaderoAsociado()->getNombre();
		this->CB_Estado->Text = Convert::ToString(this->ObjPromociones->GetEstado());

	};
	private: System::Void PromocionesMantenimientoEditar_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void B_Grabar_Click(System::Object^ sender, System::EventArgs^ e) {

		ParaderoController^ ObjParaderoController = gcnew ParaderoController();

		this->ObjPromociones->SetTitulo(this->TB_Titulo->Text);
		this->ObjPromociones->SetDescripcion(this->TB_Descripcion->Text);
		this->ObjPromociones->SetFechaPromocion(this->DTP_FechaPromocion->Text);
		this->ObjPromociones->SetAforoPromocion(Convert::ToInt32(this->TB_Aforo->Text));
		this->ObjPromociones->SetCantDescuento(Convert::ToInt32(this->TB_Descuento->Text));
		this->ObjPromociones->SetParaderoAsociado(ObjParaderoController->buscarParaderoxCodigo(Convert::ToInt32(this->TB_Paradero->Text)));
		this->ObjPromociones->SetEstado(Convert::ToBoolean(this->CB_Estado->Text));

		PromocionesController^ ObjPromocionesController = gcnew PromocionesController();
		ObjPromocionesController->ActualizarPromocion(ObjPromociones);
		MessageBox::Show("La promocion se ha actualizado con éxito");
		this->Close();
	}
	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
