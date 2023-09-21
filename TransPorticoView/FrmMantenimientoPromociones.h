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
	/// Resumen de FrmMantenimientoPromociones
	/// </summary>
	public ref class FrmMantenimientoPromociones : public System::Windows::Forms::Form
	{
	public:
		FrmMantenimientoPromociones(void)
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
		~FrmMantenimientoPromociones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelTitulo;
	protected:



	private: System::Windows::Forms::Button^ Boton_Buscar;
	private: System::Windows::Forms::DataGridView^ DGV_Promociones;

	private: System::Windows::Forms::Button^ Boton_Anadir;
	private: System::Windows::Forms::Button^ Boton_Borrar;
	private: System::Windows::Forms::Button^ Boton_Editar;
	private: System::Windows::Forms::GroupBox^ GB_CriteriosBusqueda;
	private: System::Windows::Forms::ComboBox^ ComboBox_Titulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;





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
			this->LabelTitulo = (gcnew System::Windows::Forms::Label());
			this->Boton_Buscar = (gcnew System::Windows::Forms::Button());
			this->DGV_Promociones = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Boton_Anadir = (gcnew System::Windows::Forms::Button());
			this->Boton_Borrar = (gcnew System::Windows::Forms::Button());
			this->Boton_Editar = (gcnew System::Windows::Forms::Button());
			this->GB_CriteriosBusqueda = (gcnew System::Windows::Forms::GroupBox());
			this->ComboBox_Titulo = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Promociones))->BeginInit();
			this->GB_CriteriosBusqueda->SuspendLayout();
			this->SuspendLayout();
			// 
			// LabelTitulo
			// 
			this->LabelTitulo->AutoSize = true;
			this->LabelTitulo->BackColor = System::Drawing::Color::Transparent;
			this->LabelTitulo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LabelTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelTitulo->Location = System::Drawing::Point(15, 40);
			this->LabelTitulo->Name = L"LabelTitulo";
			this->LabelTitulo->Size = System::Drawing::Size(46, 16);
			this->LabelTitulo->TabIndex = 1;
			this->LabelTitulo->Text = L"Titulo: ";
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
			this->Boton_Buscar->Click += gcnew System::EventHandler(this, &FrmMantenimientoPromociones::Boton_Buscar_Click);
			// 
			// DGV_Promociones
			// 
			this->DGV_Promociones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Promociones->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->DGV_Promociones->Location = System::Drawing::Point(43, 100);
			this->DGV_Promociones->Name = L"DGV_Promociones";
			this->DGV_Promociones->Size = System::Drawing::Size(825, 312);
			this->DGV_Promociones->TabIndex = 3;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Titulo";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fecha de Inicio";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha de Fin";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Descripcion";
			this->Column5->Name = L"Column5";
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
			this->GB_CriteriosBusqueda->Controls->Add(this->ComboBox_Titulo);
			this->GB_CriteriosBusqueda->Controls->Add(this->Boton_Buscar);
			this->GB_CriteriosBusqueda->Controls->Add(this->LabelTitulo);
			this->GB_CriteriosBusqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_CriteriosBusqueda->Location = System::Drawing::Point(43, 12);
			this->GB_CriteriosBusqueda->Name = L"GB_CriteriosBusqueda";
			this->GB_CriteriosBusqueda->Size = System::Drawing::Size(825, 82);
			this->GB_CriteriosBusqueda->TabIndex = 7;
			this->GB_CriteriosBusqueda->TabStop = false;
			this->GB_CriteriosBusqueda->Text = L"Criterios de Busqueda";
			// 
			// ComboBox_Titulo
			// 
			this->ComboBox_Titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboBox_Titulo->FormattingEnabled = true;
			this->ComboBox_Titulo->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Todo", L"Tres cuartos", L"Un decimo", L"Mitad" });
			this->ComboBox_Titulo->Location = System::Drawing::Point(95, 40);
			this->ComboBox_Titulo->Name = L"ComboBox_Titulo";
			this->ComboBox_Titulo->Size = System::Drawing::Size(150, 24);
			this->ComboBox_Titulo->TabIndex = 4;
			// 
			// FrmMantenimientoPromociones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 469);
			this->Controls->Add(this->GB_CriteriosBusqueda);
			this->Controls->Add(this->Boton_Editar);
			this->Controls->Add(this->Boton_Borrar);
			this->Controls->Add(this->Boton_Anadir);
			this->Controls->Add(this->DGV_Promociones);
			this->Name = L"FrmMantenimientoPromociones";
			this->Text = L"FrmMantenimientoPromociones";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Promociones))->EndInit();
			this->GB_CriteriosBusqueda->ResumeLayout(false);
			this->GB_CriteriosBusqueda->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Boton_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ BuscarTitulo = this->ComboBox_Titulo->Text; /* Se selecciona el texto*/
		PromocionesController^ ObjPromocionesController = gcnew PromocionesController();
		List<Promociones^>^ ListaPromociones = ObjPromocionesController->BuscarPromocion(BuscarTitulo);
		MostrarGrilla(ListaPromociones);

	}
	private: void MostrarGrilla(List<Promociones^>^ ListaPromociones) {
		this->DGV_Promociones->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < ListaPromociones->Count; i++) {
			Promociones^ ObjPromociones = ListaPromociones[i];

			array<String^>^ FilaGrilla = gcnew array<String^>(5);

			FilaGrilla[0] = Convert::ToString(ObjPromociones->GetCodigo());
			FilaGrilla[1] = ObjPromociones->GetTitulo();
			FilaGrilla[2] = ObjPromociones->GetFechaInicio();
			FilaGrilla[3] = ObjPromociones->GetFechaFin();
			FilaGrilla[4] = ObjPromociones->GetDescripcion();

			this->DGV_Promociones->Rows->Add(FilaGrilla);
		}
	}
};
}