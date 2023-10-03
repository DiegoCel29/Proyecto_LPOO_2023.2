#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoController;
	using namespace System::Collections::Generic;
	using namespace TransPorticoModel;

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
	protected:

	protected:


	private: System::Windows::Forms::Button^ B_Borrar;

	private: System::Windows::Forms::Button^ B_Editar;
	private: System::Windows::Forms::Label^ L_ParaderoInicial;


	private: System::Windows::Forms::TextBox^ TB_;
	private: System::Windows::Forms::DataGridView^ DGV_Tarifario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Identificador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_RutaAsociada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_ParaderoInicial;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->B_Anadir = (gcnew System::Windows::Forms::Button());
			this->B_Borrar = (gcnew System::Windows::Forms::Button());
			this->B_Editar = (gcnew System::Windows::Forms::Button());
			this->L_ParaderoInicial = (gcnew System::Windows::Forms::Label());
			this->TB_ = (gcnew System::Windows::Forms::TextBox());
			this->DGV_Tarifario = (gcnew System::Windows::Forms::DataGridView());
			this->DGVC_Identificador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_RutaAsociada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_ParaderoInicial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_ParaderoFinal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_Tarifa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->B_Buscar->Location = System::Drawing::Point(690, 53);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(100, 40);
			this->B_Buscar->TabIndex = 1;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &TarifarioMantenimiento::button1_Click);
			// 
			// B_Anadir
			// 
			this->B_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Anadir.BackgroundImage")));
			this->B_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Anadir->Location = System::Drawing::Point(187, 377);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(100, 40);
			this->B_Anadir->TabIndex = 2;
			this->B_Anadir->Text = L"Añadir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			// 
			// B_Borrar
			// 
			this->B_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Borrar.BackgroundImage")));
			this->B_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Borrar->Location = System::Drawing::Point(397, 377);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(100, 40);
			this->B_Borrar->TabIndex = 3;
			this->B_Borrar->Text = L"Borrar";
			this->B_Borrar->UseVisualStyleBackColor = true;
			// 
			// B_Editar
			// 
			this->B_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Editar.BackgroundImage")));
			this->B_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Editar->Location = System::Drawing::Point(610, 377);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(100, 40);
			this->B_Editar->TabIndex = 4;
			this->B_Editar->Text = L"Editar";
			this->B_Editar->UseVisualStyleBackColor = true;
			// 
			// L_ParaderoInicial
			// 
			this->L_ParaderoInicial->AutoSize = true;
			this->L_ParaderoInicial->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoInicial->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoInicial->Location = System::Drawing::Point(123, 53);
			this->L_ParaderoInicial->Name = L"L_ParaderoInicial";
			this->L_ParaderoInicial->Size = System::Drawing::Size(146, 26);
			this->L_ParaderoInicial->TabIndex = 5;
			this->L_ParaderoInicial->Text = L"Paradero inicial:";
			// 
			// TB_
			// 
			this->TB_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_->Location = System::Drawing::Point(271, 59);
			this->TB_->Name = L"TB_";
			this->TB_->Size = System::Drawing::Size(270, 20);
			this->TB_->TabIndex = 6;
			// 
			// DGV_Tarifario
			// 
			this->DGV_Tarifario->AllowUserToAddRows = false;
			this->DGV_Tarifario->AllowUserToDeleteRows = false;
			this->DGV_Tarifario->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DGV_Tarifario->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Tarifario->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DGV_Tarifario->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Ivory;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Tarifario->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->DGV_Tarifario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Tarifario->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->DGVC_Identificador,
					this->DGVC_RutaAsociada, this->DGVC_ParaderoInicial, this->DGVC_ParaderoFinal, this->DGVC_Tarifa
			});
			this->DGV_Tarifario->EnableHeadersVisualStyles = false;
			this->DGV_Tarifario->Location = System::Drawing::Point(123, 108);
			this->DGV_Tarifario->Margin = System::Windows::Forms::Padding(10);
			this->DGV_Tarifario->Name = L"DGV_Tarifario";
			this->DGV_Tarifario->ReadOnly = true;
			this->DGV_Tarifario->RightToLeft = System::Windows::Forms::RightToLeft::No;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Ivory;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Tarifario->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->DGV_Tarifario->RowHeadersWidth = 40;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->DGV_Tarifario->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->DGV_Tarifario->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->DGV_Tarifario->RowTemplate->Height = 20;
			this->DGV_Tarifario->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Tarifario->Size = System::Drawing::Size(667, 256);
			this->DGV_Tarifario->TabIndex = 7;
			// 
			// DGVC_Identificador
			// 
			this->DGVC_Identificador->HeaderText = L"Identificador";
			this->DGVC_Identificador->Name = L"DGVC_Identificador";
			this->DGVC_Identificador->ReadOnly = true;
			// 
			// DGVC_RutaAsociada
			// 
			this->DGVC_RutaAsociada->HeaderText = L"Ruta asociada";
			this->DGVC_RutaAsociada->Name = L"DGVC_RutaAsociada";
			this->DGVC_RutaAsociada->ReadOnly = true;
			// 
			// DGVC_ParaderoInicial
			// 
			this->DGVC_ParaderoInicial->HeaderText = L"Paradero inicial";
			this->DGVC_ParaderoInicial->Name = L"DGVC_ParaderoInicial";
			this->DGVC_ParaderoInicial->ReadOnly = true;
			// 
			// DGVC_ParaderoFinal
			// 
			this->DGVC_ParaderoFinal->HeaderText = L"Paradero final";
			this->DGVC_ParaderoFinal->Name = L"DGVC_ParaderoFinal";
			this->DGVC_ParaderoFinal->ReadOnly = true;
			// 
			// DGVC_Tarifa
			// 
			this->DGVC_Tarifa->HeaderText = L"Tarifa";
			this->DGVC_Tarifa->Name = L"DGVC_Tarifa";
			this->DGVC_Tarifa->ReadOnly = true;
			// 
			// TarifarioMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(966, 536);
			this->Controls->Add(this->DGV_Tarifario);
			this->Controls->Add(this->TB_);
			this->Controls->Add(this->L_ParaderoInicial);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Anadir);
			this->Controls->Add(this->B_Buscar);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Name = L"TarifarioMantenimiento";
			this->Text = L"TarifarioMantenimiento";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Tarifario))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ MantenimientosRecorridosBuscar = this->TB_->Text;
		TarifarioController^ objTarifarioController = gcnew TarifarioController();
		List<Tarifario^>^ listaTarifario = objTarifarioController->BuscarTarifarioAll();
		// Ahora voy a mostrar las carreras encontradas en la grilla
		mostrarGrilla(listaTarifario);
	};
	private: void mostrarGrilla(List<Tarifario^>^ listaTarifario) {
		this->DGV_Tarifario->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaTarifario->Count; i++) {
			Tarifario^ objTarifario = listaTarifario[i];
			/*Esta filaGrilla representa una fila del data grid de la pantalla*/
			array<String^>^ filaGrilla = gcnew array<String^>(5);
			this->DGV_Tarifario->Rows->Add(filaGrilla);
		}
	};
	private: void CentrarForm() {
		int CentroX = (this->ClientSize.Width) / 2;
		int CentroY = (this->ClientSize.Height) / 2;


	};



	};
}
