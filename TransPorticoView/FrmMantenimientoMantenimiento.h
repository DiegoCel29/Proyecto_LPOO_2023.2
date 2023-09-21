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
	/// Resumen de FrmMantenimientoMantenimiento
	/// </summary>
	public ref class FrmMantenimientoMantenimiento : public System::Windows::Forms::Form
	{
	public:
		FrmMantenimientoMantenimiento(void)
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
		~FrmMantenimientoMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelIrMantenimiento;
	protected:



	private: System::Windows::Forms::Button^ Boton_Buscar;
	private: System::Windows::Forms::DataGridView^ DGV_Mantenimiento;

	private: System::Windows::Forms::Button^ Boton_Anadir;
	private: System::Windows::Forms::Button^ Boton_Borrar;
	private: System::Windows::Forms::Button^ Boton_Editar;
	private: System::Windows::Forms::GroupBox^ GB_CriteriosBusqueda;







	private: System::Windows::Forms::ComboBox^ ComboBox_Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;




	protected:


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
			this->LabelIrMantenimiento = (gcnew System::Windows::Forms::Label());
			this->Boton_Buscar = (gcnew System::Windows::Forms::Button());
			this->DGV_Mantenimiento = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Boton_Anadir = (gcnew System::Windows::Forms::Button());
			this->Boton_Borrar = (gcnew System::Windows::Forms::Button());
			this->Boton_Editar = (gcnew System::Windows::Forms::Button());
			this->GB_CriteriosBusqueda = (gcnew System::Windows::Forms::GroupBox());
			this->ComboBox_Tipo = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Mantenimiento))->BeginInit();
			this->GB_CriteriosBusqueda->SuspendLayout();
			this->SuspendLayout();
			// 
			// LabelIrMantenimiento
			// 
			this->LabelIrMantenimiento->AutoSize = true;
			this->LabelIrMantenimiento->BackColor = System::Drawing::Color::Transparent;
			this->LabelIrMantenimiento->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LabelIrMantenimiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LabelIrMantenimiento->Location = System::Drawing::Point(15, 40);
			this->LabelIrMantenimiento->Name = L"LabelIrMantenimiento";
			this->LabelIrMantenimiento->Size = System::Drawing::Size(115, 16);
			this->LabelIrMantenimiento->TabIndex = 1;
			this->LabelIrMantenimiento->Text = L"Ir a mantenimiento";
			// 
			// Boton_Buscar
			// 
			this->Boton_Buscar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Boton_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Buscar->Location = System::Drawing::Point(305, 37);
			this->Boton_Buscar->Name = L"Boton_Buscar";
			this->Boton_Buscar->Size = System::Drawing::Size(75, 23);
			this->Boton_Buscar->TabIndex = 0;
			this->Boton_Buscar->Text = L"Buscar";
			this->Boton_Buscar->UseVisualStyleBackColor = false;
			this->Boton_Buscar->Click += gcnew System::EventHandler(this, &FrmMantenimientoMantenimiento::Boton_Buscar_Click);
			// 
			// DGV_Mantenimiento
			// 
			this->DGV_Mantenimiento->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Mantenimiento->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->DGV_Mantenimiento->Location = System::Drawing::Point(43, 100);
			this->DGV_Mantenimiento->Name = L"DGV_Mantenimiento";
			this->DGV_Mantenimiento->Size = System::Drawing::Size(825, 312);
			this->DGV_Mantenimiento->TabIndex = 3;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Hora";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo";
			this->Column4->Name = L"Column4";
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
			this->Boton_Anadir->Text = L"Añadir";
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
			this->GB_CriteriosBusqueda->Controls->Add(this->LabelIrMantenimiento);
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
			this->ComboBox_Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Si", L"No" });
			this->ComboBox_Tipo->Location = System::Drawing::Point(136, 37);
			this->ComboBox_Tipo->Name = L"ComboBox_Tipo";
			this->ComboBox_Tipo->Size = System::Drawing::Size(150, 24);
			this->ComboBox_Tipo->TabIndex = 3;
			// 
			// FrmMantenimientoMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 469);
			this->Controls->Add(this->GB_CriteriosBusqueda);
			this->Controls->Add(this->Boton_Editar);
			this->Controls->Add(this->Boton_Borrar);
			this->Controls->Add(this->Boton_Anadir);
			this->Controls->Add(this->DGV_Mantenimiento);
			this->Name = L"FrmMantenimientoMantenimiento";
			this->Text = L"FrmMantenimientoMantenimiento";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Mantenimiento))->EndInit();
			this->GB_CriteriosBusqueda->ResumeLayout(false);
			this->GB_CriteriosBusqueda->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Boton_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ BuscarIrMantenimiento = this->ComboBox_Tipo->Text; /* Se selecciona el texto*/
		MantenimientoController^ ObjMantenimientoController = gcnew MantenimientoController();
		List<Mantenimiento^>^ ListaMantenimientos = ObjMantenimientoController->BuscarMantenimiento(BuscarIrMantenimiento);
		MostrarGrilla(ListaMantenimientos);
	}

	private: void MostrarGrilla(List<Mantenimiento^>^ ListaMantenimientos) {
		this->DGV_Mantenimiento->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < ListaMantenimientos->Count; i++) {
			Mantenimiento^ ObjMantenimiento = ListaMantenimientos[i];

			array<String^>^ FilaGrilla = gcnew array<String^>(4);

			FilaGrilla[0] = Convert::ToString(ObjMantenimiento->GetCodigo());
			FilaGrilla[1] = ObjMantenimiento->GetIrMantenimiento();
			FilaGrilla[2] = ObjMantenimiento->GetTipoMantenimiento();
			FilaGrilla[3] = ObjMantenimiento->GetDescripcionMantenimiento();

			this->DGV_Mantenimiento->Rows->Add(FilaGrilla);
		}
	}
	};
}
