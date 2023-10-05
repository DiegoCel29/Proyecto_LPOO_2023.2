#pragma once
#include "MantenimientoMantenimientoAnadir.h"
#include "MantenimientoMantenimientoEditar.h"
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
	/// Resumen de MantenimientoMantenimiento
	/// </summary>
	public ref class MantenimientoMantenimiento : public System::Windows::Forms::Form
	{
	public:
		MantenimientoMantenimiento(void)
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
		~MantenimientoMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Boton_Anadir;
	protected:
	private: System::Windows::Forms::Button^ Boton_Editar;
	private: System::Windows::Forms::Button^ Boton_Borrar;
	private: System::Windows::Forms::DataGridView^ DGV_Mantenimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::GroupBox^ GB_CriteriosBusqueda;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	private: System::Windows::Forms::Label^ LabelIrMantenimiento;
	private: System::Windows::Forms::Button^ Boton_Buscar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MantenimientoMantenimiento::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Boton_Anadir = (gcnew System::Windows::Forms::Button());
			this->Boton_Editar = (gcnew System::Windows::Forms::Button());
			this->Boton_Borrar = (gcnew System::Windows::Forms::Button());
			this->DGV_Mantenimiento = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GB_CriteriosBusqueda = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->LabelIrMantenimiento = (gcnew System::Windows::Forms::Label());
			this->Boton_Buscar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Mantenimiento))->BeginInit();
			this->GB_CriteriosBusqueda->SuspendLayout();
			this->SuspendLayout();
			// 
			// Boton_Anadir
			// 
			this->Boton_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Boton_Anadir.BackgroundImage")));
			this->Boton_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Boton_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Anadir->Location = System::Drawing::Point(132, 668);
			this->Boton_Anadir->Margin = System::Windows::Forms::Padding(4);
			this->Boton_Anadir->Name = L"Boton_Anadir";
			this->Boton_Anadir->Size = System::Drawing::Size(133, 49);
			this->Boton_Anadir->TabIndex = 41;
			this->Boton_Anadir->Text = L"Añadir";
			this->Boton_Anadir->UseVisualStyleBackColor = true;
			this->Boton_Anadir->Click += gcnew System::EventHandler(this, &MantenimientoMantenimiento::Boton_Anadir_Click);
			// 
			// Boton_Editar
			// 
			this->Boton_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Boton_Editar.BackgroundImage")));
			this->Boton_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Boton_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Editar->Location = System::Drawing::Point(714, 668);
			this->Boton_Editar->Margin = System::Windows::Forms::Padding(4);
			this->Boton_Editar->Name = L"Boton_Editar";
			this->Boton_Editar->Size = System::Drawing::Size(133, 49);
			this->Boton_Editar->TabIndex = 43;
			this->Boton_Editar->Text = L"Editar";
			this->Boton_Editar->UseVisualStyleBackColor = true;
			this->Boton_Editar->Click += gcnew System::EventHandler(this, &MantenimientoMantenimiento::Boton_Editar_Click);
			// 
			// Boton_Borrar
			// 
			this->Boton_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Boton_Borrar.BackgroundImage")));
			this->Boton_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Boton_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Borrar->Location = System::Drawing::Point(416, 668);
			this->Boton_Borrar->Margin = System::Windows::Forms::Padding(4);
			this->Boton_Borrar->Name = L"Boton_Borrar";
			this->Boton_Borrar->Size = System::Drawing::Size(133, 49);
			this->Boton_Borrar->TabIndex = 42;
			this->Boton_Borrar->Text = L"Borrar";
			this->Boton_Borrar->UseVisualStyleBackColor = true;
			this->Boton_Borrar->Click += gcnew System::EventHandler(this, &MantenimientoMantenimiento::Boton_Borrar_Click);
			// 
			// DGV_Mantenimiento
			// 
			this->DGV_Mantenimiento->AllowUserToDeleteRows = false;
			this->DGV_Mantenimiento->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Mantenimiento->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Mantenimiento->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Mantenimiento->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Mantenimiento->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Mantenimiento->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Mantenimiento->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->Column1, this->Column2, this->Column3
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Mantenimiento->DefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_Mantenimiento->EnableHeadersVisualStyles = false;
			this->DGV_Mantenimiento->Location = System::Drawing::Point(31, 247);
			this->DGV_Mantenimiento->Margin = System::Windows::Forms::Padding(4);
			this->DGV_Mantenimiento->Name = L"DGV_Mantenimiento";
			this->DGV_Mantenimiento->ReadOnly = true;
			this->DGV_Mantenimiento->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Mantenimiento->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Mantenimiento->Size = System::Drawing::Size(937, 369);
			this->DGV_Mantenimiento->TabIndex = 45;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Código";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Fecha";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Hora";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tipo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// GB_CriteriosBusqueda
			// 
			this->GB_CriteriosBusqueda->BackColor = System::Drawing::Color::Transparent;
			this->GB_CriteriosBusqueda->Controls->Add(this->dateTimePicker);
			this->GB_CriteriosBusqueda->Controls->Add(this->LabelIrMantenimiento);
			this->GB_CriteriosBusqueda->Controls->Add(this->Boton_Buscar);
			this->GB_CriteriosBusqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_CriteriosBusqueda->ForeColor = System::Drawing::Color::White;
			this->GB_CriteriosBusqueda->Location = System::Drawing::Point(132, 78);
			this->GB_CriteriosBusqueda->Margin = System::Windows::Forms::Padding(4);
			this->GB_CriteriosBusqueda->Name = L"GB_CriteriosBusqueda";
			this->GB_CriteriosBusqueda->Padding = System::Windows::Forms::Padding(4);
			this->GB_CriteriosBusqueda->Size = System::Drawing::Size(733, 124);
			this->GB_CriteriosBusqueda->TabIndex = 44;
			this->GB_CriteriosBusqueda->TabStop = false;
			this->GB_CriteriosBusqueda->Text = L"Criterios de busqueda:";
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker->Location = System::Drawing::Point(229, 60);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 34);
			this->dateTimePicker->TabIndex = 2;
			// 
			// LabelIrMantenimiento
			// 
			this->LabelIrMantenimiento->BackColor = System::Drawing::Color::Moccasin;
			this->LabelIrMantenimiento->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->LabelIrMantenimiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LabelIrMantenimiento->ForeColor = System::Drawing::Color::Black;
			this->LabelIrMantenimiento->Location = System::Drawing::Point(66, 60);
			this->LabelIrMantenimiento->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelIrMantenimiento->Name = L"LabelIrMantenimiento";
			this->LabelIrMantenimiento->Size = System::Drawing::Size(110, 37);
			this->LabelIrMantenimiento->TabIndex = 5;
			this->LabelIrMantenimiento->Text = L"Fecha: ";
			this->LabelIrMantenimiento->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Boton_Buscar
			// 
			this->Boton_Buscar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Boton_Buscar.BackgroundImage")));
			this->Boton_Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Boton_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Buscar->ForeColor = System::Drawing::Color::Black;
			this->Boton_Buscar->Location = System::Drawing::Point(582, 53);
			this->Boton_Buscar->Margin = System::Windows::Forms::Padding(4);
			this->Boton_Buscar->Name = L"Boton_Buscar";
			this->Boton_Buscar->Size = System::Drawing::Size(133, 49);
			this->Boton_Buscar->TabIndex = 1;
			this->Boton_Buscar->Text = L"Buscar";
			this->Boton_Buscar->UseVisualStyleBackColor = true;
			this->Boton_Buscar->Click += gcnew System::EventHandler(this, &MantenimientoMantenimiento::Boton_Buscar_Click);
			// 
			// MantenimientoMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 735);
			this->Controls->Add(this->Boton_Anadir);
			this->Controls->Add(this->Boton_Editar);
			this->Controls->Add(this->Boton_Borrar);
			this->Controls->Add(this->DGV_Mantenimiento);
			this->Controls->Add(this->GB_CriteriosBusqueda);
			this->Name = L"MantenimientoMantenimiento";
			this->Text = L"MantenimientoMantenimiento";
			this->Load += gcnew System::EventHandler(this, &MantenimientoMantenimiento::MantenimientoMantenimiento_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MantenimientoMantenimiento::MantenimientoMantenimiento_SizeChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Mantenimiento))->EndInit();
			this->GB_CriteriosBusqueda->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_CriteriosBusqueda = ((this->ClientSize.Width) - (this->GB_CriteriosBusqueda->Width)) / 2;
		int PosXDGV_Mantenimiento = ((this->ClientSize.Width) - (this->DGV_Mantenimiento->Width)) / 2;

		this->GB_CriteriosBusqueda->Location = System::Drawing::Point(PosXGB_CriteriosBusqueda, 25);
		this->DGV_Mantenimiento->Location = System::Drawing::Point(PosXDGV_Mantenimiento, 225);
		this->Boton_Anadir->Location = System::Drawing::Point(PosXDGV_Mantenimiento, 545);
		this->Boton_Borrar->Location = System::Drawing::Point(PosXDGV_Mantenimiento + 320, 545);
		this->Boton_Editar->Location = System::Drawing::Point(PosXDGV_Mantenimiento + 600, 545);
	};
	private: System::Void MantenimientoMantenimiento_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void MantenimientoMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &MantenimientoMantenimiento::MantenimientoMantenimiento_SizeChanged));
		CentrarForm();
	}
	private: System::Void Boton_Anadir_Click(System::Object^ sender, System::EventArgs^ e) {
		MantenimientoMantenimientoAnadir^ ventanaNuevoMantenimiento = gcnew MantenimientoMantenimientoAnadir();
		ventanaNuevoMantenimiento->ShowDialog();
	}
	private: System::Void Boton_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->DGV_Mantenimiento->SelectedRows[0]->Index;
		int codigoEditar = Convert::ToInt32(this->DGV_Mantenimiento->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		MantenimientoController^ objMantenimientoController = gcnew MantenimientoController();
		Mantenimiento^ objMantenimiento = objMantenimientoController->buscarMantenimientoxCodigo(codigoEditar);
		MantenimientoMantenimientoEditar^ ventanaEditarMantenimiento = gcnew MantenimientoMantenimientoEditar(objMantenimiento);
		ventanaEditarMantenimiento->ShowDialog();

	}
	private: System::Void Boton_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {
		MantenimientoController^ objeto;
		int filaSeleccionada = this->DGV_Mantenimiento->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		int codigoEliminar = Convert::ToInt32(this->DGV_Mantenimiento->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		objeto->eliminarMantenimientoFisico(codigoEliminar);
		MessageBox::Show("El mantenimiento ha sido eliminado con éxito");
	}
	private: System::Void Boton_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ BuscarIrMantenimiento = this->dateTimePicker->Text; /* Se selecciona el texto*/
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
			FilaGrilla[1] = ObjMantenimiento->GetFechaMantenimiento();
			FilaGrilla[2] = ObjMantenimiento->GetTipoMantenimiento();
			FilaGrilla[3] = ObjMantenimiento->GetDescripcionMantenimiento();
			this->DGV_Mantenimiento->Rows->Add(FilaGrilla);
		}
	}

	};
}
