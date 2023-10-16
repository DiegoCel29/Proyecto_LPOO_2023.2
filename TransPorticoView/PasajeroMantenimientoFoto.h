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
	/// Resumen de PasajeroMantenimientoFoto
	/// </summary>
	public ref class PasajeroMantenimientoFoto : public System::Windows::Forms::Form
	{
	public:
		PasajeroMantenimientoFoto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		PasajeroMantenimientoFoto(Pasajero^ objPasajero)
		{
			InitializeComponent();
			this->objPasajero = objPasajero;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PasajeroMantenimientoFoto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::Label^ L_DNI;
	private: System::Windows::Forms::TextBox^ TB_DNI;
	private: System::Windows::Forms::Label^ L_Nombres;
	private: System::Windows::Forms::Label^ L_ApellidoPat;
	private: System::Windows::Forms::Label^ L_ApellidoMat;
	private: System::Windows::Forms::TextBox^ TB_Nombres;
	private: System::Windows::Forms::TextBox^ TB_ApellidoMat;
	private: System::Windows::Forms::TextBox^ TB_ApellidoPat;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Pasajero^ objPasajero;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PasajeroMantenimientoFoto::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->L_DNI = (gcnew System::Windows::Forms::Label());
			this->TB_DNI = (gcnew System::Windows::Forms::TextBox());
			this->L_Nombres = (gcnew System::Windows::Forms::Label());
			this->L_ApellidoPat = (gcnew System::Windows::Forms::Label());
			this->L_ApellidoMat = (gcnew System::Windows::Forms::Label());
			this->TB_Nombres = (gcnew System::Windows::Forms::TextBox());
			this->TB_ApellidoMat = (gcnew System::Windows::Forms::TextBox());
			this->TB_ApellidoPat = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->GB_Datos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->GB_Datos);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Location = System::Drawing::Point(87, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(878, 709);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// GB_Datos
			// 
			this->GB_Datos->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->L_DNI);
			this->GB_Datos->Controls->Add(this->TB_DNI);
			this->GB_Datos->Controls->Add(this->L_Nombres);
			this->GB_Datos->Controls->Add(this->L_ApellidoPat);
			this->GB_Datos->Controls->Add(this->L_ApellidoMat);
			this->GB_Datos->Controls->Add(this->TB_Nombres);
			this->GB_Datos->Controls->Add(this->TB_ApellidoMat);
			this->GB_Datos->Controls->Add(this->TB_ApellidoPat);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(91, 413);
			this->GB_Datos->Margin = System::Windows::Forms::Padding(4);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Padding = System::Windows::Forms::Padding(4);
			this->GB_Datos->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->GB_Datos->Size = System::Drawing::Size(658, 273);
			this->GB_Datos->TabIndex = 46;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos del pasajero:";
			// 
			// L_DNI
			// 
			this->L_DNI->BackColor = System::Drawing::Color::Moccasin;
			this->L_DNI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_DNI->ForeColor = System::Drawing::Color::Black;
			this->L_DNI->Location = System::Drawing::Point(13, 214);
			this->L_DNI->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_DNI->Name = L"L_DNI";
			this->L_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_DNI->Size = System::Drawing::Size(213, 37);
			this->L_DNI->TabIndex = 14;
			this->L_DNI->Text = L"DNI:";
			this->L_DNI->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_DNI
			// 
			this->TB_DNI->Enabled = false;
			this->TB_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_DNI->ForeColor = System::Drawing::Color::Black;
			this->TB_DNI->Location = System::Drawing::Point(247, 214);
			this->TB_DNI->Margin = System::Windows::Forms::Padding(4);
			this->TB_DNI->Name = L"TB_DNI";
			this->TB_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_DNI->Size = System::Drawing::Size(332, 34);
			this->TB_DNI->TabIndex = 13;
			// 
			// L_Nombres
			// 
			this->L_Nombres->BackColor = System::Drawing::Color::Moccasin;
			this->L_Nombres->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Nombres->ForeColor = System::Drawing::Color::Black;
			this->L_Nombres->Location = System::Drawing::Point(13, 37);
			this->L_Nombres->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Nombres->Name = L"L_Nombres";
			this->L_Nombres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Nombres->Size = System::Drawing::Size(213, 37);
			this->L_Nombres->TabIndex = 6;
			this->L_Nombres->Text = L"Nombres:";
			this->L_Nombres->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_ApellidoPat
			// 
			this->L_ApellidoPat->BackColor = System::Drawing::Color::Moccasin;
			this->L_ApellidoPat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoPat->ForeColor = System::Drawing::Color::Black;
			this->L_ApellidoPat->Location = System::Drawing::Point(13, 98);
			this->L_ApellidoPat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_ApellidoPat->Name = L"L_ApellidoPat";
			this->L_ApellidoPat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoPat->Size = System::Drawing::Size(213, 37);
			this->L_ApellidoPat->TabIndex = 8;
			this->L_ApellidoPat->Text = L"Apellido Paterno:";
			this->L_ApellidoPat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_ApellidoMat
			// 
			this->L_ApellidoMat->BackColor = System::Drawing::Color::Moccasin;
			this->L_ApellidoMat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ApellidoMat->ForeColor = System::Drawing::Color::Black;
			this->L_ApellidoMat->Location = System::Drawing::Point(13, 160);
			this->L_ApellidoMat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_ApellidoMat->Name = L"L_ApellidoMat";
			this->L_ApellidoMat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_ApellidoMat->Size = System::Drawing::Size(213, 37);
			this->L_ApellidoMat->TabIndex = 10;
			this->L_ApellidoMat->Text = L"Apellido Materno:";
			this->L_ApellidoMat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Nombres
			// 
			this->TB_Nombres->Enabled = false;
			this->TB_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Nombres->ForeColor = System::Drawing::Color::Black;
			this->TB_Nombres->Location = System::Drawing::Point(247, 37);
			this->TB_Nombres->Margin = System::Windows::Forms::Padding(4);
			this->TB_Nombres->Name = L"TB_Nombres";
			this->TB_Nombres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_Nombres->Size = System::Drawing::Size(332, 34);
			this->TB_Nombres->TabIndex = 5;
			// 
			// TB_ApellidoMat
			// 
			this->TB_ApellidoMat->Enabled = false;
			this->TB_ApellidoMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoMat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoMat->Location = System::Drawing::Point(247, 160);
			this->TB_ApellidoMat->Margin = System::Windows::Forms::Padding(4);
			this->TB_ApellidoMat->Name = L"TB_ApellidoMat";
			this->TB_ApellidoMat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_ApellidoMat->Size = System::Drawing::Size(332, 34);
			this->TB_ApellidoMat->TabIndex = 9;
			// 
			// TB_ApellidoPat
			// 
			this->TB_ApellidoPat->Enabled = false;
			this->TB_ApellidoPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_ApellidoPat->ForeColor = System::Drawing::Color::Black;
			this->TB_ApellidoPat->Location = System::Drawing::Point(247, 98);
			this->TB_ApellidoPat->Margin = System::Windows::Forms::Padding(4);
			this->TB_ApellidoPat->Name = L"TB_ApellidoPat";
			this->TB_ApellidoPat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_ApellidoPat->Size = System::Drawing::Size(332, 34);
			this->TB_ApellidoPat->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(229, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(390, 331);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &PasajeroMantenimientoFoto::pictureBox1_Click);
			// 
			// PasajeroMantenimientoFoto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1057, 772);
			this->Controls->Add(this->groupBox1);
			this->Name = L"PasajeroMantenimientoFoto";
			this->Text = L"PasajeroMantenimientoFoto";
			this->Load += gcnew System::EventHandler(this, &PasajeroMantenimientoFoto::PasajeroMantenimientoFoto_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &PasajeroMantenimientoFoto::PasajeroMantenimientoFoto_SizeChanged);
			this->groupBox1->ResumeLayout(false);
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PasajeroMantenimientoFoto_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &PasajeroMantenimientoFoto::PasajeroMantenimientoFoto_SizeChanged));
		CentrarForm();
		this->TB_Nombres->Text = this->objPasajero->GetNombre_Pasajero();
		this->TB_ApellidoPat->Text = this->objPasajero->GetApellidoPat_Pasajero();
		this->TB_ApellidoMat->Text = this->objPasajero->GetApellidoMat_Pasajero();
		this->TB_DNI->Text = this->objPasajero->GetDNI_Pasajero();
		this->pictureBox1->Image = Image::FromFile(objPasajero->GetDNI_Pasajero() + ".jpg");
	}
    private: void CentrarForm() {
	int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->groupBox1->Width)) / 2;
	this->groupBox1->Location = System::Drawing::Point(PosXGB_Busqueda, 25);
    };
private: System::Void PasajeroMantenimientoFoto_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
