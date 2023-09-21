#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace TransPorticoController;
	using namespace TransPorticoModel;

	/// <summary>
	/// Resumen de FrmMantenimientoTarjeta
	/// </summary>
	public ref class FrmMantenimientoTarjeta : public System::Windows::Forms::Form
	{
	public:
		FrmMantenimientoTarjeta(void)
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
		~FrmMantenimientoTarjeta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelTitular;
	protected:



	private: System::Windows::Forms::Button^ Boton_Buscar;
	private: System::Windows::Forms::DataGridView^ DGV_Tarjeta;

	private: System::Windows::Forms::Button^ Boton_Anadir;
	private: System::Windows::Forms::Button^ Boton_Borrar;
	private: System::Windows::Forms::Button^ Boton_Editar;
	private: System::Windows::Forms::GroupBox^ GB_CriteriosBusqueda;
	private: System::Windows::Forms::TextBox^ TB_Titular;
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
			this->LabelTitular = (gcnew System::Windows::Forms::Label());
			this->Boton_Buscar = (gcnew System::Windows::Forms::Button());
			this->DGV_Tarjeta = (gcnew System::Windows::Forms::DataGridView());
			this->Boton_Anadir = (gcnew System::Windows::Forms::Button());
			this->Boton_Borrar = (gcnew System::Windows::Forms::Button());
			this->Boton_Editar = (gcnew System::Windows::Forms::Button());
			this->GB_CriteriosBusqueda = (gcnew System::Windows::Forms::GroupBox());
			this->TB_Titular = (gcnew System::Windows::Forms::TextBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Tarjeta))->BeginInit();
			this->GB_CriteriosBusqueda->SuspendLayout();
			this->SuspendLayout();
			// 
			// LabelTitular
			// 
			this->LabelTitular->AutoSize = true;
			this->LabelTitular->BackColor = System::Drawing::Color::Transparent;
			this->LabelTitular->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LabelTitular->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelTitular->Location = System::Drawing::Point(15, 40);
			this->LabelTitular->Name = L"LabelTitular";
			this->LabelTitular->Size = System::Drawing::Size(47, 16);
			this->LabelTitular->TabIndex = 1;
			this->LabelTitular->Text = L"Titular:";
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
			this->Boton_Buscar->Click += gcnew System::EventHandler(this, &FrmMantenimientoTarjeta::Boton_Buscar_Click);
			// 
			// DGV_Tarjeta
			// 
			this->DGV_Tarjeta->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Tarjeta->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->DGV_Tarjeta->Location = System::Drawing::Point(43, 100);
			this->DGV_Tarjeta->Name = L"DGV_Tarjeta";
			this->DGV_Tarjeta->Size = System::Drawing::Size(825, 312);
			this->DGV_Tarjeta->TabIndex = 3;
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
			this->GB_CriteriosBusqueda->Controls->Add(this->TB_Titular);
			this->GB_CriteriosBusqueda->Controls->Add(this->Boton_Buscar);
			this->GB_CriteriosBusqueda->Controls->Add(this->LabelTitular);
			this->GB_CriteriosBusqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_CriteriosBusqueda->Location = System::Drawing::Point(43, 12);
			this->GB_CriteriosBusqueda->Name = L"GB_CriteriosBusqueda";
			this->GB_CriteriosBusqueda->Size = System::Drawing::Size(825, 82);
			this->GB_CriteriosBusqueda->TabIndex = 7;
			this->GB_CriteriosBusqueda->TabStop = false;
			this->GB_CriteriosBusqueda->Text = L"Criterios de Busqueda";
			// 
			// TB_Titular
			// 
			this->TB_Titular->Location = System::Drawing::Point(95, 40);
			this->TB_Titular->Name = L"TB_Titular";
			this->TB_Titular->Size = System::Drawing::Size(150, 22);
			this->TB_Titular->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Titular";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Identificador";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Saldo";
			this->Column4->Name = L"Column4";
			// 
			// FrmMantenimientoTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 469);
			this->Controls->Add(this->GB_CriteriosBusqueda);
			this->Controls->Add(this->Boton_Editar);
			this->Controls->Add(this->Boton_Borrar);
			this->Controls->Add(this->Boton_Anadir);
			this->Controls->Add(this->DGV_Tarjeta);
			this->Name = L"FrmMantenimientoTarjeta";
			this->Text = L"FrmMantenimientoTarjeta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Tarjeta))->EndInit();
			this->GB_CriteriosBusqueda->ResumeLayout(false);
			this->GB_CriteriosBusqueda->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Boton_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ BuscarTitular = this->TB_Titular->Text; /* Se selecciona el texto*/
		TarjetaController^ ObjTarjetaController = gcnew TarjetaController();
		List<Tarjeta^>^ ListaTarjetas = ObjTarjetaController->BuscarTarjeta(BuscarTitular);
		MostrarGrilla(ListaTarjetas);
	}
	private: void MostrarGrilla(List<Tarjeta^>^ ListaTarjetas) {
		this->DGV_Tarjeta->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < ListaTarjetas->Count; i++) {
			Tarjeta^ ObjTarjeta = ListaTarjetas[i];

			array<String^>^ FilaGrilla = gcnew array<String^>(4);

			FilaGrilla[0] = Convert::ToString(ObjTarjeta->GetCodigo());
			FilaGrilla[1] = ObjTarjeta->GetTitular();
			FilaGrilla[2] = ObjTarjeta->GetIdentificador();
			FilaGrilla[3] = Convert::ToString(ObjTarjeta->GetSaldo());

			this->DGV_Tarjeta->Rows->Add(FilaGrilla);
		}
	}
};
}
