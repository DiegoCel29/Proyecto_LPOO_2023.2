#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pantalla_Horario_Conductor
	/// </summary>
	public ref class Pantalla_Horario_Conductor : public System::Windows::Forms::Form
	{
	public:
		Pantalla_Horario_Conductor(void)
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
		~Pantalla_Horario_Conductor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_HORARIO;
	private: System::Windows::Forms::DataGridView^ DGV_Promociones;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::Button^ B_REGRESAR;
	private: System::Windows::Forms::Label^ L_FechaInicio;
	private: System::Windows::Forms::DateTimePicker^ DTP_FechaFin;
	private: System::Windows::Forms::Button^ B_Buscar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pantalla_Horario_Conductor::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->GB_HORARIO = (gcnew System::Windows::Forms::GroupBox());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->DTP_FechaFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->L_FechaInicio = (gcnew System::Windows::Forms::Label());
			this->B_REGRESAR = (gcnew System::Windows::Forms::Button());
			this->DGV_Promociones = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GB_HORARIO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Promociones))->BeginInit();
			this->SuspendLayout();
			// 
			// GB_HORARIO
			// 
			this->GB_HORARIO->BackColor = System::Drawing::Color::Transparent;
			this->GB_HORARIO->Controls->Add(this->B_Buscar);
			this->GB_HORARIO->Controls->Add(this->DTP_FechaFin);
			this->GB_HORARIO->Controls->Add(this->L_FechaInicio);
			this->GB_HORARIO->Controls->Add(this->B_REGRESAR);
			this->GB_HORARIO->Controls->Add(this->DGV_Promociones);
			this->GB_HORARIO->Location = System::Drawing::Point(41, 39);
			this->GB_HORARIO->Name = L"GB_HORARIO";
			this->GB_HORARIO->Size = System::Drawing::Size(1158, 643);
			this->GB_HORARIO->TabIndex = 0;
			this->GB_HORARIO->TabStop = false;
			// 
			// B_Buscar
			// 
			this->B_Buscar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Buscar.BackgroundImage")));
			this->B_Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Buscar->ForeColor = System::Drawing::Color::Black;
			this->B_Buscar->Location = System::Drawing::Point(751, 35);
			this->B_Buscar->Margin = System::Windows::Forms::Padding(4);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(133, 49);
			this->B_Buscar->TabIndex = 14;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			// 
			// DTP_FechaFin
			// 
			this->DTP_FechaFin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DTP_FechaFin->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DTP_FechaFin->Location = System::Drawing::Point(375, 40);
			this->DTP_FechaFin->Margin = System::Windows::Forms::Padding(4);
			this->DTP_FechaFin->Name = L"DTP_FechaFin";
			this->DTP_FechaFin->Size = System::Drawing::Size(332, 34);
			this->DTP_FechaFin->TabIndex = 13;
			// 
			// L_FechaInicio
			// 
			this->L_FechaInicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_FechaInicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_FechaInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_FechaInicio->ForeColor = System::Drawing::Color::Black;
			this->L_FechaInicio->Location = System::Drawing::Point(102, 37);
			this->L_FechaInicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_FechaInicio->Name = L"L_FechaInicio";
			this->L_FechaInicio->Size = System::Drawing::Size(200, 37);
			this->L_FechaInicio->TabIndex = 12;
			this->L_FechaInicio->Text = L"Fecha inicio:";
			this->L_FechaInicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_REGRESAR
			// 
			this->B_REGRESAR->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_REGRESAR.BackgroundImage")));
			this->B_REGRESAR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_REGRESAR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_REGRESAR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_REGRESAR->Location = System::Drawing::Point(531, 518);
			this->B_REGRESAR->Margin = System::Windows::Forms::Padding(4);
			this->B_REGRESAR->Name = L"B_REGRESAR";
			this->B_REGRESAR->Size = System::Drawing::Size(133, 49);
			this->B_REGRESAR->TabIndex = 11;
			this->B_REGRESAR->Text = L"Regresar";
			this->B_REGRESAR->UseVisualStyleBackColor = true;
			this->B_REGRESAR->Click += gcnew System::EventHandler(this, &Pantalla_Horario_Conductor::B_REGRESAR_Click);
			// 
			// DGV_Promociones
			// 
			this->DGV_Promociones->AllowUserToDeleteRows = false;
			this->DGV_Promociones->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Promociones->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Promociones->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Promociones->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Promociones->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Promociones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Promociones->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Promociones->DefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_Promociones->EnableHeadersVisualStyles = false;
			this->DGV_Promociones->Location = System::Drawing::Point(45, 124);
			this->DGV_Promociones->Margin = System::Windows::Forms::Padding(4);
			this->DGV_Promociones->Name = L"DGV_Promociones";
			this->DGV_Promociones->ReadOnly = true;
			this->DGV_Promociones->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Promociones->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Promociones->Size = System::Drawing::Size(1058, 369);
			this->DGV_Promociones->TabIndex = 10;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Lunes";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Martes";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Miercoles";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Jueves";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Viernes";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Sabado";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Domingo";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Pantalla_Horario_Conductor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1232, 727);
			this->Controls->Add(this->GB_HORARIO);
			this->Name = L"Pantalla_Horario_Conductor";
			this->Text = L"Pantalla_Horario_Conductor";
			this->Load += gcnew System::EventHandler(this, &Pantalla_Horario_Conductor::Pantalla_Horario_Conductor_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Pantalla_Horario_Conductor::Pantalla_Horario_Conductor_SizeChanged);
			this->GB_HORARIO->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Promociones))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_HORARIO->Width)) / 2;
		this->GB_HORARIO->Location = System::Drawing::Point(PosXGB_Busqueda, 25);
	};
	private: System::Void B_REGRESAR_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Pantalla_Horario_Conductor_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &Pantalla_Horario_Conductor::Pantalla_Horario_Conductor_SizeChanged));
	CentrarForm();
}

private: System::Void Pantalla_Horario_Conductor_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
};
}
