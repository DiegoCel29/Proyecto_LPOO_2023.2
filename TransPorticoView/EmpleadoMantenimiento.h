#pragma once
#include "EmpleadoMantenimientoEditar.h"
#include "EmpleadoMantenimientoNuevo.h"
#include "PasajeroMantenimientoFoto.h"
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
	/// Resumen de EmpleadoMantenimiento
	/// </summary>
	public ref class EmpleadoMantenimiento : public System::Windows::Forms::Form
	{
	public:
		EmpleadoMantenimiento(void)
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
		~EmpleadoMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_Busqueda;
	private: System::Windows::Forms::Label^ L_Nombre;
	private: System::Windows::Forms::TextBox^ TB_Nombre;
	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::DataGridView^ DGV_Empleado;
	private: System::Windows::Forms::Button^ B_Editar;
	private: System::Windows::Forms::Button^ B_Borrar;
	private: System::Windows::Forms::Button^ B_Anadir;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Identificador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_RutaAsociada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGCV_ParaderoInicial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_ParaderoFinal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Tarifa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Button^ B_VER;
	private: System::Windows::Forms::Label^ label2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmpleadoMantenimiento::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->GB_Busqueda = (gcnew System::Windows::Forms::GroupBox());
			this->L_Nombre = (gcnew System::Windows::Forms::Label());
			this->TB_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->DGV_Empleado = (gcnew System::Windows::Forms::DataGridView());
			this->DGVC_Identificador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_RutaAsociada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGCV_ParaderoInicial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_ParaderoFinal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_Tarifa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->B_Editar = (gcnew System::Windows::Forms::Button());
			this->B_Borrar = (gcnew System::Windows::Forms::Button());
			this->B_Anadir = (gcnew System::Windows::Forms::Button());
			this->B_VER = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->GB_Busqueda->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Empleado))->BeginInit();
			this->SuspendLayout();
			// 
			// GB_Busqueda
			// 
			this->GB_Busqueda->BackColor = System::Drawing::Color::Transparent;
			this->GB_Busqueda->Controls->Add(this->L_Nombre);
			this->GB_Busqueda->Controls->Add(this->TB_Nombre);
			this->GB_Busqueda->Controls->Add(this->B_Buscar);
			this->GB_Busqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Busqueda->ForeColor = System::Drawing::Color::White;
			this->GB_Busqueda->Location = System::Drawing::Point(0, 0);
			this->GB_Busqueda->Margin = System::Windows::Forms::Padding(4);
			this->GB_Busqueda->Name = L"GB_Busqueda";
			this->GB_Busqueda->Padding = System::Windows::Forms::Padding(4);
			this->GB_Busqueda->Size = System::Drawing::Size(733, 98);
			this->GB_Busqueda->TabIndex = 9;
			this->GB_Busqueda->TabStop = false;
			this->GB_Busqueda->Text = L"Criterios de busqueda:";
			// 
			// L_Nombre
			// 
			this->L_Nombre->BackColor = System::Drawing::Color::Moccasin;
			this->L_Nombre->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Nombre->ForeColor = System::Drawing::Color::Black;
			this->L_Nombre->Location = System::Drawing::Point(13, 37);
			this->L_Nombre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Nombre->Name = L"L_Nombre";
			this->L_Nombre->Size = System::Drawing::Size(200, 37);
			this->L_Nombre->TabIndex = 9;
			this->L_Nombre->Text = L"Nombre :";
			this->L_Nombre->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Nombre
			// 
			this->TB_Nombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Nombre->Location = System::Drawing::Point(233, 37);
			this->TB_Nombre->Margin = System::Windows::Forms::Padding(4);
			this->TB_Nombre->Name = L"TB_Nombre";
			this->TB_Nombre->Size = System::Drawing::Size(333, 34);
			this->TB_Nombre->TabIndex = 10;
			// 
			// B_Buscar
			// 
			this->B_Buscar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Buscar.BackgroundImage")));
			this->B_Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Buscar->ForeColor = System::Drawing::Color::Black;
			this->B_Buscar->Location = System::Drawing::Point(587, 31);
			this->B_Buscar->Margin = System::Windows::Forms::Padding(4);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(133, 49);
			this->B_Buscar->TabIndex = 1;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &EmpleadoMantenimiento::B_Buscar_Click);
			// 
			// DGV_Empleado
			// 
			this->DGV_Empleado->AllowUserToDeleteRows = false;
			this->DGV_Empleado->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->DGV_Empleado->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Empleado->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Empleado->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Empleado->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Empleado->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Empleado->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->DGVC_Identificador,
					this->DGVC_RutaAsociada, this->DGCV_ParaderoInicial, this->DGVC_ParaderoFinal, this->DGVC_Tarifa, this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Empleado->DefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_Empleado->EnableHeadersVisualStyles = false;
			this->DGV_Empleado->Location = System::Drawing::Point(44, 352);
			this->DGV_Empleado->Margin = System::Windows::Forms::Padding(4);
			this->DGV_Empleado->Name = L"DGV_Empleado";
			this->DGV_Empleado->ReadOnly = true;
			this->DGV_Empleado->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			this->DGV_Empleado->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Empleado->Size = System::Drawing::Size(1333, 369);
			this->DGV_Empleado->TabIndex = 10;
			// 
			// DGVC_Identificador
			// 
			this->DGVC_Identificador->HeaderText = L"DNI";
			this->DGVC_Identificador->MinimumWidth = 6;
			this->DGVC_Identificador->Name = L"DGVC_Identificador";
			this->DGVC_Identificador->ReadOnly = true;
			this->DGVC_Identificador->Width = 82;
			// 
			// DGVC_RutaAsociada
			// 
			this->DGVC_RutaAsociada->HeaderText = L"Nombre";
			this->DGVC_RutaAsociada->MinimumWidth = 6;
			this->DGVC_RutaAsociada->Name = L"DGVC_RutaAsociada";
			this->DGVC_RutaAsociada->ReadOnly = true;
			this->DGVC_RutaAsociada->Width = 129;
			// 
			// DGCV_ParaderoInicial
			// 
			this->DGCV_ParaderoInicial->HeaderText = L"Apellido Paterno";
			this->DGCV_ParaderoInicial->MinimumWidth = 6;
			this->DGCV_ParaderoInicial->Name = L"DGCV_ParaderoInicial";
			this->DGCV_ParaderoInicial->ReadOnly = true;
			this->DGCV_ParaderoInicial->Width = 200;
			// 
			// DGVC_ParaderoFinal
			// 
			this->DGVC_ParaderoFinal->HeaderText = L"Apellido Materno";
			this->DGVC_ParaderoFinal->MinimumWidth = 6;
			this->DGVC_ParaderoFinal->Name = L"DGVC_ParaderoFinal";
			this->DGVC_ParaderoFinal->ReadOnly = true;
			this->DGVC_ParaderoFinal->Width = 204;
			// 
			// DGVC_Tarifa
			// 
			this->DGVC_Tarifa->HeaderText = L"Edad";
			this->DGVC_Tarifa->MinimumWidth = 6;
			this->DGVC_Tarifa->Name = L"DGVC_Tarifa";
			this->DGVC_Tarifa->ReadOnly = true;
			this->DGVC_Tarifa->Width = 98;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Genero";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 122;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Telefono";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 138;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tipo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 91;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Sueldo";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 118;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado de Contrato";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 225;
			// 
			// B_Editar
			// 
			this->B_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Editar.BackgroundImage")));
			this->B_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Editar->Location = System::Drawing::Point(1069, 295);
			this->B_Editar->Margin = System::Windows::Forms::Padding(4);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(133, 49);
			this->B_Editar->TabIndex = 13;
			this->B_Editar->Text = L"Editar";
			this->B_Editar->UseVisualStyleBackColor = true;
			this->B_Editar->Click += gcnew System::EventHandler(this, &EmpleadoMantenimiento::B_Editar_Click);
			// 
			// B_Borrar
			// 
			this->B_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Borrar.BackgroundImage")));
			this->B_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Borrar->Location = System::Drawing::Point(696, 295);
			this->B_Borrar->Margin = System::Windows::Forms::Padding(4);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(133, 49);
			this->B_Borrar->TabIndex = 12;
			this->B_Borrar->Text = L"Borrar";
			this->B_Borrar->UseVisualStyleBackColor = true;
			this->B_Borrar->Click += gcnew System::EventHandler(this, &EmpleadoMantenimiento::B_Borrar_Click);
			// 
			// B_Anadir
			// 
			this->B_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Anadir.BackgroundImage")));
			this->B_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Anadir->Location = System::Drawing::Point(269, 295);
			this->B_Anadir->Margin = System::Windows::Forms::Padding(4);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(133, 49);
			this->B_Anadir->TabIndex = 11;
			this->B_Anadir->Text = L"Añadir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			this->B_Anadir->Click += gcnew System::EventHandler(this, &EmpleadoMantenimiento::B_Anadir_Click);
			// 
			// B_VER
			// 
			this->B_VER->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_VER.BackgroundImage")));
			this->B_VER->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_VER->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_VER->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_VER->Location = System::Drawing::Point(827, 31);
			this->B_VER->Margin = System::Windows::Forms::Padding(27, 25, 27, 25);
			this->B_VER->Name = L"B_VER";
			this->B_VER->Size = System::Drawing::Size(133, 49);
			this->B_VER->TabIndex = 15;
			this->B_VER->Text = L"Ver";
			this->B_VER->UseVisualStyleBackColor = true;
			this->B_VER->Click += gcnew System::EventHandler(this, &EmpleadoMantenimiento::B_VER_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Moccasin;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(587, 184);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(407, 37);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Mantenimiento de los empleados";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EmpleadoMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1567, 880);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->B_VER);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Anadir);
			this->Controls->Add(this->DGV_Empleado);
			this->Controls->Add(this->GB_Busqueda);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"EmpleadoMantenimiento";
			this->Text = L"EmpleadoMantenimiento";
			this->Load += gcnew System::EventHandler(this, &EmpleadoMantenimiento::EmpleadoMantenimiento_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &EmpleadoMantenimiento::EmpleadoMantenimiento_SizeChanged);
			this->GB_Busqueda->ResumeLayout(false);
			this->GB_Busqueda->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Empleado))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void CentrarForm() {
	int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_Busqueda->Width)) / 2;
	int PosXDGV_Empleado = ((this->ClientSize.Width) - (this->DGV_Empleado->Width)) / 2;
	this->GB_Busqueda->Location = System::Drawing::Point(PosXGB_Busqueda - 200, 90);
	this->DGV_Empleado->Location = System::Drawing::Point(PosXDGV_Empleado, 205);
	this->B_Borrar->Location = System::Drawing::Point(PosXDGV_Empleado, 530);
	this->B_Editar->Location = System::Drawing::Point(PosXDGV_Empleado + 900, 530);
	this->B_VER->Location = System::Drawing::Point(PosXDGV_Empleado + 900, 125);
	this->label2->Location = System::Drawing::Point(PosXDGV_Empleado + 350, 25);
	this->B_Anadir->Location = System::Drawing::Point(PosXDGV_Empleado + 450, 530);

};
private: void mostrarGrilla(List<Empleado^>^ listaEmpleadoES) {
		this->DGV_Empleado->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaEmpleadoES->Count; i++) {
			Empleado^ objEmpleado = listaEmpleadoES[i];
			/*Esta filaGrilla representa una fila del data grid de la pantalla*/
			array<String^>^ filaGrilla = gcnew array<String^>(10);

			filaGrilla[0] = objEmpleado->GetDNI_Empleado();
			filaGrilla[1] = objEmpleado->GetNombre_Empleado();
			filaGrilla[2] = objEmpleado->GetApellidoPat_Empleado();
			filaGrilla[3] = objEmpleado->GetApellidoMat_Empleado();
			filaGrilla[4] = Convert::ToString(objEmpleado->GetEdad_Empleado());
			filaGrilla[5] = objEmpleado->GetGenero_Empleado();
			filaGrilla[6] = objEmpleado->GetTelefono_Empleado();
			filaGrilla[7] = objEmpleado->GetTipo_Empleado();
			filaGrilla[8] = Convert::ToString(objEmpleado->GetSueldo_Empleado());
			filaGrilla[9] = objEmpleado->GetEstadoContrato_Empleado();

			this->DGV_Empleado->Rows->Add(filaGrilla);
		}
	}
private: System::Void EmpleadoMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &EmpleadoMantenimiento::EmpleadoMantenimiento_SizeChanged));
	CentrarForm();
}
private: System::Void EmpleadoMantenimiento_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
private: System::Void B_Anadir_Click(System::Object^ sender, System::EventArgs^ e) {
	EmpleadoMantenimientoNuevo^ ventanaEmpleadoMantenimientoNuevo = gcnew EmpleadoMantenimientoNuevo();
	ventanaEmpleadoMantenimientoNuevo->ShowDialog();
}
private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ EmpleadoesBuscar = this->TB_Nombre->Text;
	EmpleadoController^ objEmpleadoController = gcnew EmpleadoController();
	List<Empleado^>^ listaEmpleadoES = objEmpleadoController->BuscarEmpleados(EmpleadoesBuscar);
	// Ahora voy a mostrar las carreras encontradas en la grilla
	mostrarGrilla(listaEmpleadoES);
}
private: System::Void B_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->DGV_Empleado->SelectedRows->Count != 0) {
		EmpleadoController^ objetoEmpleado;
		int filaSeleccionada = this->DGV_Empleado->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		String^ DNI_Eliminar_Empleado = this->DGV_Empleado->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		objetoEmpleado->EliminarEmpleado(DNI_Eliminar_Empleado);
		MessageBox::Show("El Empleado ha sido eliminado con éxito");
	}
}
private: System::Void B_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->DGV_Empleado->SelectedRows->Count != 0) {
		int filaSeleccionada = this->DGV_Empleado->SelectedRows[0]->Index;

		String^ DNI_EmpleadoMantenimientoEditar = this->DGV_Empleado->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

		EmpleadoController^ objEmpleadoController = gcnew EmpleadoController();
		Empleado^ objEmpleado = objEmpleadoController->BuscarEmpleadoDNI(DNI_EmpleadoMantenimientoEditar);
		EmpleadoMantenimientoEditar^ ventanaEditarEmpleado = gcnew EmpleadoMantenimientoEditar(objEmpleado);
		ventanaEditarEmpleado->ShowDialog();
	}
}
private: System::Void B_VER_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->DGV_Empleado->SelectedRows->Count != 0) {
		int filaSeleccionada = this->DGV_Empleado->SelectedRows[0]->Index;
		String^ DNI_Mostrar = this->DGV_Empleado->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		PasajeroController^ objPasajeroController = gcnew PasajeroController();
		Pasajero^ objPasajero = objPasajeroController->BuscarPasajeroDNI(DNI_Mostrar);
		PasajeroMantenimientoFoto^ ventanaMostrarPasajero = gcnew PasajeroMantenimientoFoto(objPasajero);
		ventanaMostrarPasajero->ShowDialog();
	}
}
};
}
