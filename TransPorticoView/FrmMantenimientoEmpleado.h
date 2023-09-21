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
	/// Resumen de FrmMantenimientoEmpleado
	/// </summary>
	public ref class FrmMantenimientoEmpleado : public System::Windows::Forms::Form
	{
	public:
		FrmMantenimientoEmpleado(void)
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
		~FrmMantenimientoEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelNombre;
	protected:



	private: System::Windows::Forms::Button^ Boton_Buscar;
	private: System::Windows::Forms::DataGridView^ DGV_Empleados;

	private: System::Windows::Forms::Button^ Boton_Anadir;
	private: System::Windows::Forms::Button^ Boton_Borrar;
	private: System::Windows::Forms::Button^ Boton_Editar;
	private: System::Windows::Forms::GroupBox^ GB_CriteriosBusqueda;
	private: System::Windows::Forms::TextBox^ TB_Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;





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
			this->LabelNombre = (gcnew System::Windows::Forms::Label());
			this->Boton_Buscar = (gcnew System::Windows::Forms::Button());
			this->DGV_Empleados = (gcnew System::Windows::Forms::DataGridView());
			this->Boton_Anadir = (gcnew System::Windows::Forms::Button());
			this->Boton_Borrar = (gcnew System::Windows::Forms::Button());
			this->Boton_Editar = (gcnew System::Windows::Forms::Button());
			this->GB_CriteriosBusqueda = (gcnew System::Windows::Forms::GroupBox());
			this->TB_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Empleados))->BeginInit();
			this->GB_CriteriosBusqueda->SuspendLayout();
			this->SuspendLayout();
			// 
			// LabelNombre
			// 
			this->LabelNombre->AutoSize = true;
			this->LabelNombre->BackColor = System::Drawing::Color::Transparent;
			this->LabelNombre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LabelNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelNombre->Location = System::Drawing::Point(15, 40);
			this->LabelNombre->Name = L"LabelNombre";
			this->LabelNombre->Size = System::Drawing::Size(59, 16);
			this->LabelNombre->TabIndex = 1;
			this->LabelNombre->Text = L"Nombre:";
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
			this->Boton_Buscar->Click += gcnew System::EventHandler(this, &FrmMantenimientoEmpleado::Boton_Buscar_Click);
			// 
			// DGV_Empleados
			// 
			this->DGV_Empleados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Empleados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11
			});
			this->DGV_Empleados->Location = System::Drawing::Point(43, 100);
			this->DGV_Empleados->Name = L"DGV_Empleados";
			this->DGV_Empleados->Size = System::Drawing::Size(825, 312);
			this->DGV_Empleados->TabIndex = 3;
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
			this->GB_CriteriosBusqueda->Controls->Add(this->TB_Nombre);
			this->GB_CriteriosBusqueda->Controls->Add(this->Boton_Buscar);
			this->GB_CriteriosBusqueda->Controls->Add(this->LabelNombre);
			this->GB_CriteriosBusqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_CriteriosBusqueda->Location = System::Drawing::Point(43, 12);
			this->GB_CriteriosBusqueda->Name = L"GB_CriteriosBusqueda";
			this->GB_CriteriosBusqueda->Size = System::Drawing::Size(825, 82);
			this->GB_CriteriosBusqueda->TabIndex = 7;
			this->GB_CriteriosBusqueda->TabStop = false;
			this->GB_CriteriosBusqueda->Text = L"Criterios de Busqueda";
			// 
			// TB_Nombre
			// 
			this->TB_Nombre->Location = System::Drawing::Point(95, 40);
			this->TB_Nombre->Name = L"TB_Nombre";
			this->TB_Nombre->Size = System::Drawing::Size(150, 22);
			this->TB_Nombre->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombres";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"ApellidoPat";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ApellidoMat";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"DNI";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Genero";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Telefono";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Contraseña";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Sueldo";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Id Personal";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Contratado";
			this->Column11->Name = L"Column11";
			// 
			// FrmMantenimientoEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 469);
			this->Controls->Add(this->GB_CriteriosBusqueda);
			this->Controls->Add(this->Boton_Editar);
			this->Controls->Add(this->Boton_Borrar);
			this->Controls->Add(this->Boton_Anadir);
			this->Controls->Add(this->DGV_Empleados);
			this->Name = L"FrmMantenimientoEmpleado";
			this->Text = L"FrmMantenimientoEmpleado";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Empleados))->EndInit();
			this->GB_CriteriosBusqueda->ResumeLayout(false);
			this->GB_CriteriosBusqueda->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Boton_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ BuscarNombre = this->TB_Nombre->Text; /* Se selecciona el texto*/
		EmpleadoController^ ObjEmpleadoController = gcnew EmpleadoController();
		List<Empleado^>^ ListaEmpleados = ObjEmpleadoController->BuscarEmpleado(BuscarNombre);
		MostrarGrilla(ListaEmpleados);
	}
	private: void MostrarGrilla(List<Empleado^>^ ListaEmpleados) {
		this->DGV_Empleados->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < ListaEmpleados->Count; i++) {
			Empleado^ ObjEmpleado = ListaEmpleados[i];

			array<String^>^ FilaGrilla = gcnew array<String^>(9);

			FilaGrilla[0] = Convert::ToString(ObjEmpleado->GetCodigo());
			FilaGrilla[1] = ObjEmpleado->GetNombreE();
			FilaGrilla[2] = ObjEmpleado->GetApellidoPatE();
			FilaGrilla[3] = ObjEmpleado->GetApellidoMatE();
			FilaGrilla[4] = ObjEmpleado->GetDNIE();
			FilaGrilla[5] = Convert::ToString(ObjEmpleado->GetEdadE());
			FilaGrilla[6] = ObjEmpleado->GetGeneroE();
			FilaGrilla[7] = ObjEmpleado->GetTelefonoE();
			FilaGrilla[8] = ObjEmpleado->GetIdPersonal();

			this->DGV_Empleados->Rows->Add(FilaGrilla);
		}
	}
};
}
