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
	/// Resumen de FrmMantenimientoInformeEconomico
	/// </summary>
	public ref class FrmMantenimientoInformeEconomico : public System::Windows::Forms::Form
	{
	public:
		FrmMantenimientoInformeEconomico(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~FrmMantenimientoInformeEconomico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelAnho;
	protected:



	private: System::Windows::Forms::Button^ Boton_Buscar;
	private: System::Windows::Forms::DataGridView^ DGV_InformeEconomico;

	private: System::Windows::Forms::Button^ Boton_Anadir;
	private: System::Windows::Forms::Button^ Boton_Borrar;
	private: System::Windows::Forms::Button^ Boton_Editar;
	private: System::Windows::Forms::GroupBox^ GB_CriteriosBusqueda;







	private: System::Windows::Forms::ComboBox^ ComboBox_Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;















	protected:


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LabelAnho = (gcnew System::Windows::Forms::Label());
			this->Boton_Buscar = (gcnew System::Windows::Forms::Button());
			this->DGV_InformeEconomico = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Boton_Anadir = (gcnew System::Windows::Forms::Button());
			this->Boton_Borrar = (gcnew System::Windows::Forms::Button());
			this->Boton_Editar = (gcnew System::Windows::Forms::Button());
			this->GB_CriteriosBusqueda = (gcnew System::Windows::Forms::GroupBox());
			this->ComboBox_Tipo = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_InformeEconomico))->BeginInit();
			this->GB_CriteriosBusqueda->SuspendLayout();
			this->SuspendLayout();
			// 
			// LabelAnho
			// 
			this->LabelAnho->AutoSize = true;
			this->LabelAnho->BackColor = System::Drawing::Color::Transparent;
			this->LabelAnho->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LabelAnho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelAnho->Location = System::Drawing::Point(15, 40);
			this->LabelAnho->Name = L"LabelAnho";
			this->LabelAnho->Size = System::Drawing::Size(37, 16);
			this->LabelAnho->TabIndex = 1;
			this->LabelAnho->Text = L"A�o: ";
			// 
			// Boton_Buscar
			// 
			this->Boton_Buscar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Boton_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Buscar->Location = System::Drawing::Point(275, 40);
			this->Boton_Buscar->Name = L"Boton_Buscar";
			this->Boton_Buscar->Size = System::Drawing::Size(75, 23);
			this->Boton_Buscar->TabIndex = 0;
			this->Boton_Buscar->Text = L"Buscar";
			this->Boton_Buscar->UseVisualStyleBackColor = false;
			this->Boton_Buscar->Click += gcnew System::EventHandler(this, &FrmMantenimientoInformeEconomico::Boton_Buscar_Click);
			// 
			// DGV_InformeEconomico
			// 
			this->DGV_InformeEconomico->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_InformeEconomico->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->DGV_InformeEconomico->Location = System::Drawing::Point(43, 100);
			this->DGV_InformeEconomico->Name = L"DGV_InformeEconomico";
			this->DGV_InformeEconomico->Size = System::Drawing::Size(825, 312);
			this->DGV_InformeEconomico->TabIndex = 3;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"A�o";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ingresos";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Salario del administrador";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Salario del conductor";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Costo de mantenimientos";
			this->Column6->Name = L"Column6";
			// 
			// Boton_Anadir
			// 
			this->Boton_Anadir->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Boton_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Anadir->Location = System::Drawing::Point(337, 418);
			this->Boton_Anadir->Name = L"Boton_Anadir";
			this->Boton_Anadir->Size = System::Drawing::Size(75, 23);
			this->Boton_Anadir->TabIndex = 4;
			this->Boton_Anadir->Text = L"A�adir";
			this->Boton_Anadir->UseVisualStyleBackColor = false;
			// 
			// Boton_Borrar
			// 
			this->Boton_Borrar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Boton_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Borrar->Location = System::Drawing::Point(418, 418);
			this->Boton_Borrar->Name = L"Boton_Borrar";
			this->Boton_Borrar->Size = System::Drawing::Size(75, 23);
			this->Boton_Borrar->TabIndex = 5;
			this->Boton_Borrar->Text = L"Borrar";
			this->Boton_Borrar->UseVisualStyleBackColor = false;
			// 
			// Boton_Editar
			// 
			this->Boton_Editar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Boton_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Editar->Location = System::Drawing::Point(499, 418);
			this->Boton_Editar->Name = L"Boton_Editar";
			this->Boton_Editar->Size = System::Drawing::Size(75, 23);
			this->Boton_Editar->TabIndex = 6;
			this->Boton_Editar->Text = L"Editar";
			this->Boton_Editar->UseVisualStyleBackColor = false;
			// 
			// GB_CriteriosBusqueda
			// 
			this->GB_CriteriosBusqueda->Controls->Add(this->ComboBox_Tipo);
			this->GB_CriteriosBusqueda->Controls->Add(this->Boton_Buscar);
			this->GB_CriteriosBusqueda->Controls->Add(this->LabelAnho);
			this->GB_CriteriosBusqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_CriteriosBusqueda->Location = System::Drawing::Point(43, 12);
			this->GB_CriteriosBusqueda->Name = L"GB_CriteriosBusqueda";
			this->GB_CriteriosBusqueda->Size = System::Drawing::Size(825, 82);
			this->GB_CriteriosBusqueda->TabIndex = 7;
			this->GB_CriteriosBusqueda->TabStop = false;
			this->GB_CriteriosBusqueda->Text = L"Criterios de Busqueda";
			// 
			// ComboBox_Tipo
			// 
			this->ComboBox_Tipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboBox_Tipo->FormattingEnabled = true;
			this->ComboBox_Tipo->Location = System::Drawing::Point(95, 40);
			this->ComboBox_Tipo->Name = L"ComboBox_Tipo";
			this->ComboBox_Tipo->Size = System::Drawing::Size(150, 24);
			this->ComboBox_Tipo->TabIndex = 3;
			// 
			// FrmMantenimientoInformeEconomico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 469);
			this->Controls->Add(this->GB_CriteriosBusqueda);
			this->Controls->Add(this->Boton_Editar);
			this->Controls->Add(this->Boton_Borrar);
			this->Controls->Add(this->Boton_Anadir);
			this->Controls->Add(this->DGV_InformeEconomico);
			this->Name = L"FrmMantenimientoInformeEconomico";
			this->Text = L"FrmMantenimientoInformeEconomico";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_InformeEconomico))->EndInit();
			this->GB_CriteriosBusqueda->ResumeLayout(false);
			this->GB_CriteriosBusqueda->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Boton_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ BuscarRuta = this->ComboBox_Tipo->Text; /* Se selecciona el texto*/
		InformeEconomicoController^ ObjInformeEconomicoController = gcnew InformeEconomicoController();
		List<InformeEconomico^>^ ListaInformeEconomico = ObjInformeEconomicoController->BuscarInforme(BuscarRuta);
		MostrarGrilla(ListaInformeEconomico);
	}
	private: void MostrarGrilla(List<InformeEconomico^>^ ListaInformeEconomico) {
		this->DGV_InformeEconomico->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < ListaInformeEconomico->Count; i++) {
			InformeEconomico^ objInformeEconomico = ListaInformeEconomico[i];

			array<String^>^ FilaGrilla = gcnew array<String^>(6);

			FilaGrilla[0] = Convert::ToString(objInformeEconomico->GetCodigo());
			FilaGrilla[1] = objInformeEconomico->GetAnhio();
			FilaGrilla[2] = Convert::ToString(objInformeEconomico->GetIngresos());
			FilaGrilla[3] = Convert::ToString(objInformeEconomico->GetSalarioAdministrador());
			FilaGrilla[4] = Convert::ToString(objInformeEconomico->GetSalarioConductor());
			FilaGrilla[5] = Convert::ToString(objInformeEconomico->GetCostoMantenimientos());

			this->DGV_InformeEconomico->Rows->Add(FilaGrilla);
		}
	}
	};
}
