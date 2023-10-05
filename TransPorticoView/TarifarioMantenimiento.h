#pragma once
#include "TarifarioMantenimientoAnadir.h"
#include "TarifarioMantenimientoEditar.h"

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
	/// Resumen de TarifarioMantenimiento
	/// </summary>
	public ref class TarifarioMantenimiento : public System::Windows::Forms::Form
	{
	public:
		TarifarioMantenimiento(void)
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
		~TarifarioMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::Button^ B_Anadir;
	private: System::Windows::Forms::Button^ B_Borrar;
	private: System::Windows::Forms::Button^ B_Editar;
	private: System::Windows::Forms::Label^ L_ParaderoInicial;
	private: System::Windows::Forms::GroupBox^ GB_Busqueda;
	private: System::Windows::Forms::ComboBox^ CB_ParaderoInicial;
	private: System::Windows::Forms::Label^ L_Ruta;
	private: System::Windows::Forms::TextBox^ TB_Ruta;
	private: System::Windows::Forms::Label^ L_Tarifa;
	private: System::Windows::Forms::TextBox^ TB_Tarifa;
	private: System::Windows::Forms::DataGridView^ DGV_Tarifario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Identificador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_RutaAsociada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGCV_ParaderoInicial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_ParaderoFinal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Tarifa;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TarifarioMantenimiento::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->B_Anadir = (gcnew System::Windows::Forms::Button());
			this->B_Borrar = (gcnew System::Windows::Forms::Button());
			this->B_Editar = (gcnew System::Windows::Forms::Button());
			this->L_ParaderoInicial = (gcnew System::Windows::Forms::Label());
			this->GB_Busqueda = (gcnew System::Windows::Forms::GroupBox());
			this->CB_ParaderoInicial = (gcnew System::Windows::Forms::ComboBox());
			this->L_Ruta = (gcnew System::Windows::Forms::Label());
			this->TB_Ruta = (gcnew System::Windows::Forms::TextBox());
			this->L_Tarifa = (gcnew System::Windows::Forms::Label());
			this->TB_Tarifa = (gcnew System::Windows::Forms::TextBox());
			this->DGV_Tarifario = (gcnew System::Windows::Forms::DataGridView());
			this->DGVC_Identificador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_RutaAsociada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGCV_ParaderoInicial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_ParaderoFinal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_Tarifa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GB_Busqueda->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Tarifario))->BeginInit();
			this->SuspendLayout();
			// 
			// B_Buscar
			// 
			this->B_Buscar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Buscar.BackgroundImage")));
			this->B_Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Buscar->ForeColor = System::Drawing::Color::Black;
			this->B_Buscar->Location = System::Drawing::Point(440, 75);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(100, 40);
			this->B_Buscar->TabIndex = 1;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &TarifarioMantenimiento::B_Buscar_Click);
			// 
			// B_Anadir
			// 
			this->B_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Anadir.BackgroundImage")));
			this->B_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Anadir->Location = System::Drawing::Point(0, 520);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(100, 40);
			this->B_Anadir->TabIndex = 2;
			this->B_Anadir->Text = L"Añadir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			this->B_Anadir->Click += gcnew System::EventHandler(this, &TarifarioMantenimiento::B_Anadir_Click);
			// 
			// B_Borrar
			// 
			this->B_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Borrar.BackgroundImage")));
			this->B_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Borrar->Location = System::Drawing::Point(320, 520);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(100, 40);
			this->B_Borrar->TabIndex = 3;
			this->B_Borrar->Text = L"Borrar";
			this->B_Borrar->UseVisualStyleBackColor = true;
			this->B_Borrar->Click += gcnew System::EventHandler(this, &TarifarioMantenimiento::B_Borrar_Click);
			// 
			// B_Editar
			// 
			this->B_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Editar.BackgroundImage")));
			this->B_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Editar->Location = System::Drawing::Point(600, 520);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(100, 40);
			this->B_Editar->TabIndex = 4;
			this->B_Editar->Text = L"Editar";
			this->B_Editar->UseVisualStyleBackColor = true;
			this->B_Editar->Click += gcnew System::EventHandler(this, &TarifarioMantenimiento::B_Editar_Click);
			// 
			// L_ParaderoInicial
			// 
			this->L_ParaderoInicial->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoInicial->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoInicial->Location = System::Drawing::Point(10, 80);
			this->L_ParaderoInicial->Name = L"L_ParaderoInicial";
			this->L_ParaderoInicial->Size = System::Drawing::Size(150, 30);
			this->L_ParaderoInicial->TabIndex = 5;
			this->L_ParaderoInicial->Text = L"Paradero inicial:";
			this->L_ParaderoInicial->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// GB_Busqueda
			// 
			this->GB_Busqueda->BackColor = System::Drawing::Color::Transparent;
			this->GB_Busqueda->Controls->Add(this->CB_ParaderoInicial);
			this->GB_Busqueda->Controls->Add(this->L_Ruta);
			this->GB_Busqueda->Controls->Add(this->TB_Ruta);
			this->GB_Busqueda->Controls->Add(this->L_Tarifa);
			this->GB_Busqueda->Controls->Add(this->TB_Tarifa);
			this->GB_Busqueda->Controls->Add(this->L_ParaderoInicial);
			this->GB_Busqueda->Controls->Add(this->B_Buscar);
			this->GB_Busqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Busqueda->ForeColor = System::Drawing::Color::White;
			this->GB_Busqueda->Location = System::Drawing::Point(281, 26);
			this->GB_Busqueda->Name = L"GB_Busqueda";
			this->GB_Busqueda->Size = System::Drawing::Size(550, 180);
			this->GB_Busqueda->TabIndex = 8;
			this->GB_Busqueda->TabStop = false;
			this->GB_Busqueda->Text = L"Criterios de busqueda:";
			// 
			// CB_ParaderoInicial
			// 
			this->CB_ParaderoInicial->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_ParaderoInicial->FormattingEnabled = true;
			this->CB_ParaderoInicial->Location = System::Drawing::Point(175, 80);
			this->CB_ParaderoInicial->Name = L"CB_ParaderoInicial";
			this->CB_ParaderoInicial->Size = System::Drawing::Size(250, 32);
			this->CB_ParaderoInicial->TabIndex = 11;
			// 
			// L_Ruta
			// 
			this->L_Ruta->BackColor = System::Drawing::Color::Moccasin;
			this->L_Ruta->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Ruta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Ruta->ForeColor = System::Drawing::Color::Black;
			this->L_Ruta->Location = System::Drawing::Point(10, 30);
			this->L_Ruta->Name = L"L_Ruta";
			this->L_Ruta->Size = System::Drawing::Size(150, 30);
			this->L_Ruta->TabIndex = 9;
			this->L_Ruta->Text = L"Ruta:";
			this->L_Ruta->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Ruta
			// 
			this->TB_Ruta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Ruta->Location = System::Drawing::Point(175, 30);
			this->TB_Ruta->Name = L"TB_Ruta";
			this->TB_Ruta->Size = System::Drawing::Size(250, 29);
			this->TB_Ruta->TabIndex = 10;
			// 
			// L_Tarifa
			// 
			this->L_Tarifa->BackColor = System::Drawing::Color::Moccasin;
			this->L_Tarifa->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Tarifa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Tarifa->ForeColor = System::Drawing::Color::Black;
			this->L_Tarifa->Location = System::Drawing::Point(10, 130);
			this->L_Tarifa->Name = L"L_Tarifa";
			this->L_Tarifa->Size = System::Drawing::Size(150, 30);
			this->L_Tarifa->TabIndex = 7;
			this->L_Tarifa->Text = L"Costo:";
			this->L_Tarifa->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Tarifa
			// 
			this->TB_Tarifa->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Tarifa->Location = System::Drawing::Point(175, 130);
			this->TB_Tarifa->Name = L"TB_Tarifa";
			this->TB_Tarifa->Size = System::Drawing::Size(250, 29);
			this->TB_Tarifa->TabIndex = 8;
			// 
			// DGV_Tarifario
			// 
			this->DGV_Tarifario->AllowUserToDeleteRows = false;
			this->DGV_Tarifario->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->DGV_Tarifario->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Tarifario->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Tarifario->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Tarifario->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Tarifario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Tarifario->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->DGVC_Identificador,
					this->DGVC_RutaAsociada, this->DGCV_ParaderoInicial, this->DGVC_ParaderoFinal, this->DGVC_Tarifa
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Tarifario->DefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_Tarifario->EnableHeadersVisualStyles = false;
			this->DGV_Tarifario->Location = System::Drawing::Point(0, 200);
			this->DGV_Tarifario->Name = L"DGV_Tarifario";
			this->DGV_Tarifario->ReadOnly = true;
			this->DGV_Tarifario->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Tarifario->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Tarifario->Size = System::Drawing::Size(700, 300);
			this->DGV_Tarifario->TabIndex = 9;
			// 
			// DGVC_Identificador
			// 
			this->DGVC_Identificador->HeaderText = L"Identificador";
			this->DGVC_Identificador->MinimumWidth = 6;
			this->DGVC_Identificador->Name = L"DGVC_Identificador";
			this->DGVC_Identificador->ReadOnly = true;
			this->DGVC_Identificador->Width = 135;
			// 
			// DGVC_RutaAsociada
			// 
			this->DGVC_RutaAsociada->HeaderText = L"Ruta asociada";
			this->DGVC_RutaAsociada->MinimumWidth = 6;
			this->DGVC_RutaAsociada->Name = L"DGVC_RutaAsociada";
			this->DGVC_RutaAsociada->ReadOnly = true;
			this->DGVC_RutaAsociada->Width = 152;
			// 
			// DGCV_ParaderoInicial
			// 
			this->DGCV_ParaderoInicial->HeaderText = L"Paradero inicial";
			this->DGCV_ParaderoInicial->MinimumWidth = 6;
			this->DGCV_ParaderoInicial->Name = L"DGCV_ParaderoInicial";
			this->DGCV_ParaderoInicial->ReadOnly = true;
			this->DGCV_ParaderoInicial->Width = 163;
			// 
			// DGVC_ParaderoFinal
			// 
			this->DGVC_ParaderoFinal->HeaderText = L"Paradero final";
			this->DGVC_ParaderoFinal->MinimumWidth = 6;
			this->DGVC_ParaderoFinal->Name = L"DGVC_ParaderoFinal";
			this->DGVC_ParaderoFinal->ReadOnly = true;
			this->DGVC_ParaderoFinal->Width = 149;
			// 
			// DGVC_Tarifa
			// 
			this->DGVC_Tarifa->HeaderText = L"Tarifa";
			this->DGVC_Tarifa->MinimumWidth = 6;
			this->DGVC_Tarifa->Name = L"DGVC_Tarifa";
			this->DGVC_Tarifa->ReadOnly = true;
			this->DGVC_Tarifa->Width = 80;
			// 
			// TarifarioMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1056, 666);
			this->Controls->Add(this->DGV_Tarifario);
			this->Controls->Add(this->GB_Busqueda);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Anadir);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->Name = L"TarifarioMantenimiento";
			this->Text = L"TarifarioMantenimiento";
			this->Load += gcnew System::EventHandler(this, &TarifarioMantenimiento::TarifarioMantenimiento_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &TarifarioMantenimiento::TarifarioMantenimiento_SizeChanged);
			this->GB_Busqueda->ResumeLayout(false);
			this->GB_Busqueda->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Tarifario))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ BuscarRuta = this->TB_Ruta->Text;
		String^ BuscarParaderoInicial = this->CB_ParaderoInicial->Text;
		String^ BuscarCosto = this->TB_Tarifa->Text;

		
		TarifarioController^ ObjTarifarioController = gcnew TarifarioController();
		List<Tarifario^>^ ListTarifarioGeneral = ObjTarifarioController->BuscarTarifarioAll();
		List<Tarifario^>^ ListTarifarioBuscado = gcnew List<Tarifario^>();

		
		ListTarifarioBuscado = ObjTarifarioController->BuscarTarifariosRuta(ListTarifarioGeneral, BuscarRuta);
		ListTarifarioBuscado = ObjTarifarioController->BuscarTarifariosParaderoInicial(ListTarifarioBuscado, BuscarParaderoInicial);
		ListTarifarioBuscado = ObjTarifarioController->BuscarTarifariosTarifa(ListTarifarioBuscado, BuscarCosto);
		MostrarGrilla(ListTarifarioBuscado);
	};
	private: void MostrarGrilla(List<Tarifario^>^ ListTarifario) {

		this->DGV_Tarifario->Rows->Clear();

		for (int i = 0; i < ListTarifario->Count; i++) {
			Tarifario^ ObjTarifario = ListTarifario[i];

			array<String^>^ FilaGrilla = gcnew array<String^>(5);

			FilaGrilla[0] = ListTarifario[i]->GetIdentificador();
			FilaGrilla[1] = ListTarifario[i]->GetRutaAsociada();
			FilaGrilla[2] = ListTarifario[i]->GetParaderoInicial();
			FilaGrilla[3] = ListTarifario[i]->GetParaderoFinal();
			FilaGrilla[4] = Convert::ToString(ListTarifario[i]->GetTarifa());

			this->DGV_Tarifario->Rows->Add(FilaGrilla);
		}
	};

	private: void CentrarForm() {
		int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_Busqueda->Width))/ 2;
		int PosXDGV_Tarifario = ((this->ClientSize.Width) - (this->DGV_Tarifario->Width)) / 2;

		this->GB_Busqueda->Location = System::Drawing::Point(PosXGB_Busqueda, 25);
		this->DGV_Tarifario->Location = System::Drawing::Point(PosXDGV_Tarifario, 225);
		this->B_Anadir->Location = System::Drawing::Point(PosXDGV_Tarifario, 545);
		this->B_Borrar->Location = System::Drawing::Point(PosXDGV_Tarifario + 320, 545);
		this->B_Editar->Location = System::Drawing::Point(PosXDGV_Tarifario + 600, 545);
	};

	private: System::Void TarifarioMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &TarifarioMantenimiento::TarifarioMantenimiento_SizeChanged));
	CentrarForm();
	//
	// Poner paraderos en el ComboBox
	//
	ParaderoController^ ObjParaderoController = gcnew ParaderoController;
	List<Paradero^>^ ListParaderos = ObjParaderoController->buscarAll();
	this->CB_ParaderoInicial->Items->Clear();
	for (int i = 0; i < ListParaderos->Count; i++) {
		this->CB_ParaderoInicial->Items->Add(ListParaderos[i]->getNombre());
	}

}
	private: System::Void TarifarioMantenimiento_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
	private: System::Void B_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->DGV_Tarifario->SelectedRows->Count != 0) {
			int FilaSeleccionada = this->DGV_Tarifario->SelectedRows[0]->Index;
			String^ IdentificadorTarifaEliminar = this->DGV_Tarifario->Rows[FilaSeleccionada]->Cells[0]->Value->ToString();

			TarifarioController^ ObjTarifarioController = gcnew TarifarioController;
			ObjTarifarioController->EliminarTarifario(IdentificadorTarifaEliminar);
			MessageBox::Show("La tarifa seleccionada ha sido retirada, de la base de datos, con exito.");
		}
	}
	private: System::Void B_Anadir_Click(System::Object^ sender, System::EventArgs^ e) {
		TarifarioMantenimientoAnadir^ ObjTarifarioMantenimientoAnadir = gcnew TarifarioMantenimientoAnadir();
		ObjTarifarioMantenimientoAnadir->ShowDialog();
	}
	private: System::Void B_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->DGV_Tarifario->SelectedRows->Count != 0) {
			int FilaSeleccionada = this->DGV_Tarifario->SelectedRows[0]->Index;
			String^ IdentificadorTarifaEditar = this->DGV_Tarifario->Rows[FilaSeleccionada]->Cells[0]->Value->ToString();

			TarifarioController^ ObjTarifarioController = gcnew TarifarioController();
			Tarifario^ ObjTarifario = ObjTarifarioController->BuscarTarifarioIdentificador(IdentificadorTarifaEditar);
			
			TarifarioMantenimientoEditar^ ObjTarifarioMantenimientoEditar = gcnew TarifarioMantenimientoEditar(ObjTarifario);
			ObjTarifarioMantenimientoEditar->ShowDialog();
		}
	}
};
}