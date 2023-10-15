#pragma once
#include "ParaderoMantenimientoAnadir.h"
#include "ParaderoMantenimientoEditar.h"

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
	/// Resumen de ParaderoMantenimiento
	/// </summary>
	public ref class ParaderoMantenimiento : public System::Windows::Forms::Form
	{
	public:
		ParaderoMantenimiento(void)
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
		~ParaderoMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ B_Anadir;
	private: System::Windows::Forms::Button^ B_Borrar;
	private: System::Windows::Forms::Button^ B_Editar;
	private: System::Windows::Forms::DataGridView^ DGV_Paraderos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::Label^ L_Nombre;
	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::TextBox^ TB_Nombre;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ParaderoMantenimiento::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->B_Anadir = (gcnew System::Windows::Forms::Button());
			this->B_Borrar = (gcnew System::Windows::Forms::Button());
			this->B_Editar = (gcnew System::Windows::Forms::Button());
			this->DGV_Paraderos = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->TB_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->L_Nombre = (gcnew System::Windows::Forms::Label());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Paraderos))->BeginInit();
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// B_Anadir
			// 
			this->B_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Anadir.BackgroundImage")));
			this->B_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Anadir->Location = System::Drawing::Point(175, 658);
			this->B_Anadir->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(133, 49);
			this->B_Anadir->TabIndex = 16;
			this->B_Anadir->Text = L"Añadir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			this->B_Anadir->Click += gcnew System::EventHandler(this, &ParaderoMantenimiento::B_Anadir_Click_1);
			// 
			// B_Borrar
			// 
			this->B_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Borrar.BackgroundImage")));
			this->B_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Borrar->Location = System::Drawing::Point(453, 658);
			this->B_Borrar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(133, 49);
			this->B_Borrar->TabIndex = 18;
			this->B_Borrar->Text = L"Editar";
			this->B_Borrar->UseVisualStyleBackColor = true;
			this->B_Borrar->Click += gcnew System::EventHandler(this, &ParaderoMantenimiento::B_Borrar_Click);
			// 
			// B_Editar
			// 
			this->B_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Editar.BackgroundImage")));
			this->B_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Editar->Location = System::Drawing::Point(757, 658);
			this->B_Editar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(133, 49);
			this->B_Editar->TabIndex = 17;
			this->B_Editar->Text = L"Borrar";
			this->B_Editar->UseVisualStyleBackColor = true;
			this->B_Editar->Click += gcnew System::EventHandler(this, &ParaderoMantenimiento::B_Editar_Click);
			// 
			// DGV_Paraderos
			// 
			this->DGV_Paraderos->AllowUserToDeleteRows = false;
			this->DGV_Paraderos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Paraderos->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Paraderos->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Paraderos->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Paraderos->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Paraderos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Paraderos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->Column7, this->Column8, this->Column9, this->Column10, this->Column11
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Paraderos->DefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_Paraderos->EnableHeadersVisualStyles = false;
			this->DGV_Paraderos->Location = System::Drawing::Point(51, 254);
			this->DGV_Paraderos->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->DGV_Paraderos->Name = L"DGV_Paraderos";
			this->DGV_Paraderos->ReadOnly = true;
			this->DGV_Paraderos->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Paraderos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Paraderos->Size = System::Drawing::Size(937, 369);
			this->DGV_Paraderos->TabIndex = 20;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Código";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Nombre";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Latitud";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Longitud";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Frecuencia";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Distancia";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->TB_Nombre);
			this->GB_Datos->Controls->Add(this->L_Nombre);
			this->GB_Datos->Controls->Add(this->B_Buscar);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(132, 120);
			this->GB_Datos->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->GB_Datos->Size = System::Drawing::Size(773, 98);
			this->GB_Datos->TabIndex = 19;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Criterios de busqueda:";
			// 
			// TB_Nombre
			// 
			this->TB_Nombre->Location = System::Drawing::Point(273, 37);
			this->TB_Nombre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_Nombre->Name = L"TB_Nombre";
			this->TB_Nombre->Size = System::Drawing::Size(332, 34);
			this->TB_Nombre->TabIndex = 6;
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
			this->L_Nombre->Size = System::Drawing::Size(240, 37);
			this->L_Nombre->TabIndex = 5;
			this->L_Nombre->Text = L"Nombre: ";
			this->L_Nombre->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_Buscar
			// 
			this->B_Buscar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Buscar.BackgroundImage")));
			this->B_Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Buscar->ForeColor = System::Drawing::Color::Black;
			this->B_Buscar->Location = System::Drawing::Point(627, 31);
			this->B_Buscar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(133, 49);
			this->B_Buscar->TabIndex = 1;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &ParaderoMantenimiento::B_Buscar_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Moccasin;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(326, 52);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(383, 37);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Manteniemiento de los paraderos";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ParaderoMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1029, 720);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->B_Anadir);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->DGV_Paraderos);
			this->Controls->Add(this->GB_Datos);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ParaderoMantenimiento";
			this->Text = L"ParaderoMantenimiento";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ParaderoMantenimiento::ParaderoMantenimiento_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &ParaderoMantenimiento::ParaderoMantenimiento_SizeChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Paraderos))->EndInit();
			this->GB_Datos->ResumeLayout(false);
			this->GB_Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ParaderoMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &ParaderoMantenimiento::ParaderoMantenimiento_SizeChanged));
		CentrarForm();
	}
	private: void mostrarGrilla(List<Paradero^>^ listaParadero) {
		this->DGV_Paraderos->Rows->Clear();
		for (int i = 0; i < listaParadero->Count; i++) {
			Paradero^ objParadero = listaParadero[i];
			array<String^>^ filaGrilla = gcnew array<String^>(6);
			filaGrilla[0] = Convert::ToString(objParadero->getCodigo());
			filaGrilla[1] = objParadero->getNombre();
			filaGrilla[2] = Convert::ToString(objParadero->getX_Paradero());
			filaGrilla[3] = Convert::ToString(objParadero->getY_Paradero());
			filaGrilla[4] = Convert::ToString(objParadero->getFrecuencia());
			filaGrilla[5] = Convert::ToString(objParadero->getDistancia());
			this->DGV_Paraderos->Rows->Add(filaGrilla);
		}
	}
	private: System::Void B_Anadir_Click_1(System::Object^ sender, System::EventArgs^ e) {
		ParaderoMantenimientoAnadir^ ventanaNuevoParadero = gcnew ParaderoMantenimientoAnadir();
		ventanaNuevoParadero->ShowDialog();
	}
	private: System::Void B_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->DGV_Paraderos->SelectedRows->Count != 0) {
			int filaSeleccionada = this->DGV_Paraderos->SelectedRows[0]->Index;
			int codigoEditar = Convert::ToInt32(this->DGV_Paraderos->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			ParaderoController^ objParaderoController = gcnew ParaderoController();
			Paradero^ objParadero = objParaderoController->buscarParaderoxCodigo(codigoEditar);
			ParaderoMantenimientoEditar^ ventanaEditarParadero = gcnew ParaderoMantenimientoEditar(objParadero);
			ventanaEditarParadero->ShowDialog();
		}
	}
	private: System::Void B_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		if(this->DGV_Paraderos->SelectedRows->Count != 0){
			ParaderoController^ objeto;
			int filaSeleccionada = this->DGV_Paraderos->SelectedRows[0]->Index;
			int codigoEliminar = Convert::ToInt32(this->DGV_Paraderos->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			objeto->eliminarParaderoFisico(codigoEliminar);
			MessageBox::Show("El paradero ha sido eliminado con éxito");
		}
	}
	private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Nombre = this->TB_Nombre->Text;
		ParaderoController^ objParaderoController = gcnew ParaderoController();
		objParaderoController->buscarParaderos(Nombre);
		List<Paradero^>^ listaParadero = objParaderoController->buscarParaderos(Nombre);
		mostrarGrilla(listaParadero);
	}
	private: System::Void ParaderoMantenimiento_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: void CentrarForm() {
		int PosXGB_CriteriosBusqueda = ((this->ClientSize.Width) - (this->GB_Datos->Width)) / 2;
		int PosXDGV_Mantenimiento = ((this->ClientSize.Width) - (this->DGV_Paraderos->Width)) / 2;

		this->GB_Datos->Location = System::Drawing::Point(PosXGB_CriteriosBusqueda, 25);
		this->DGV_Paraderos->Location = System::Drawing::Point(PosXDGV_Mantenimiento, 225);
		this->B_Anadir->Location = System::Drawing::Point(PosXDGV_Mantenimiento, 545);
		this->B_Editar->Location = System::Drawing::Point(PosXDGV_Mantenimiento + 320, 545);
		this->B_Borrar->Location = System::Drawing::Point(PosXDGV_Mantenimiento + 600, 545);
	};
	};
}
