#pragma once
#include "AtajosMantenimientoAnadir.h"
#include "AtajosMantenimientoEditar.h"

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
	/// Resumen de AtajoMantenimiento
	/// </summary>
	public ref class AtajoMantenimiento : public System::Windows::Forms::Form
	{
	public:
		AtajoMantenimiento(void)
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
		~AtajoMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_Busqueda;
	private: System::Windows::Forms::Label^ L_Paradero_Inicio;

	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::DataGridView^ DGV_Atajos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Identificador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_RutaAsociada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGCV_ParaderoInicial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_ParaderoFinal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Tarifa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ B_Editar;
	private: System::Windows::Forms::Button^ B_Borrar;
	private: System::Windows::Forms::Button^ B_Anadir;
	private: System::Windows::Forms::ComboBox^ CB_ParaderoInicial;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AtajoMantenimiento::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->GB_Busqueda = (gcnew System::Windows::Forms::GroupBox());
			this->L_Paradero_Inicio = (gcnew System::Windows::Forms::Label());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->DGV_Atajos = (gcnew System::Windows::Forms::DataGridView());
			this->DGVC_Identificador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_RutaAsociada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGCV_ParaderoInicial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_ParaderoFinal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_Tarifa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->B_Editar = (gcnew System::Windows::Forms::Button());
			this->B_Borrar = (gcnew System::Windows::Forms::Button());
			this->B_Anadir = (gcnew System::Windows::Forms::Button());
			this->CB_ParaderoInicial = (gcnew System::Windows::Forms::ComboBox());
			this->GB_Busqueda->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Atajos))->BeginInit();
			this->SuspendLayout();
			// 
			// GB_Busqueda
			// 
			this->GB_Busqueda->BackColor = System::Drawing::Color::Transparent;
			this->GB_Busqueda->Controls->Add(this->CB_ParaderoInicial);
			this->GB_Busqueda->Controls->Add(this->L_Paradero_Inicio);
			this->GB_Busqueda->Controls->Add(this->B_Buscar);
			this->GB_Busqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Busqueda->ForeColor = System::Drawing::Color::White;
			this->GB_Busqueda->Location = System::Drawing::Point(0, 0);
			this->GB_Busqueda->Name = L"GB_Busqueda";
			this->GB_Busqueda->Size = System::Drawing::Size(580, 80);
			this->GB_Busqueda->TabIndex = 9;
			this->GB_Busqueda->TabStop = false;
			this->GB_Busqueda->Text = L"Criterios de busqueda:";
			// 
			// L_Paradero_Inicio
			// 
			this->L_Paradero_Inicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_Paradero_Inicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Paradero_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Paradero_Inicio->ForeColor = System::Drawing::Color::Black;
			this->L_Paradero_Inicio->Location = System::Drawing::Point(10, 30);
			this->L_Paradero_Inicio->Name = L"L_Paradero_Inicio";
			this->L_Paradero_Inicio->Size = System::Drawing::Size(180, 30);
			this->L_Paradero_Inicio->TabIndex = 9;
			this->L_Paradero_Inicio->Text = L"Paradero de Inicio:";
			this->L_Paradero_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_Buscar
			// 
			this->B_Buscar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Buscar.BackgroundImage")));
			this->B_Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Buscar->ForeColor = System::Drawing::Color::Black;
			this->B_Buscar->Location = System::Drawing::Point(470, 25);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(100, 40);
			this->B_Buscar->TabIndex = 1;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &AtajoMantenimiento::B_Buscar_Click);
			// 
			// DGV_Atajos
			// 
			this->DGV_Atajos->AllowUserToDeleteRows = false;
			this->DGV_Atajos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->DGV_Atajos->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Atajos->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Atajos->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Atajos->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->DGV_Atajos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Atajos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->DGVC_Identificador,
					this->DGVC_RutaAsociada, this->DGCV_ParaderoInicial, this->DGVC_ParaderoFinal, this->DGVC_Tarifa, this->Column1, this->Column2,
					this->Column3
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Atajos->DefaultCellStyle = dataGridViewCellStyle8;
			this->DGV_Atajos->EnableHeadersVisualStyles = false;
			this->DGV_Atajos->Location = System::Drawing::Point(12, 322);
			this->DGV_Atajos->Name = L"DGV_Atajos";
			this->DGV_Atajos->ReadOnly = true;
			this->DGV_Atajos->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			this->DGV_Atajos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Atajos->Size = System::Drawing::Size(800, 300);
			this->DGV_Atajos->TabIndex = 10;
			// 
			// DGVC_Identificador
			// 
			this->DGVC_Identificador->HeaderText = L"Codigo";
			this->DGVC_Identificador->MinimumWidth = 6;
			this->DGVC_Identificador->Name = L"DGVC_Identificador";
			this->DGVC_Identificador->ReadOnly = true;
			this->DGVC_Identificador->Width = 95;
			// 
			// DGVC_RutaAsociada
			// 
			this->DGVC_RutaAsociada->HeaderText = L"X_Inicio";
			this->DGVC_RutaAsociada->MinimumWidth = 6;
			this->DGVC_RutaAsociada->Name = L"DGVC_RutaAsociada";
			this->DGVC_RutaAsociada->ReadOnly = true;
			this->DGVC_RutaAsociada->Width = 102;
			// 
			// DGCV_ParaderoInicial
			// 
			this->DGCV_ParaderoInicial->HeaderText = L"Y_Inicio";
			this->DGCV_ParaderoInicial->MinimumWidth = 6;
			this->DGCV_ParaderoInicial->Name = L"DGCV_ParaderoInicial";
			this->DGCV_ParaderoInicial->ReadOnly = true;
			// 
			// DGVC_ParaderoFinal
			// 
			this->DGVC_ParaderoFinal->HeaderText = L"Paradero de Inicio";
			this->DGVC_ParaderoFinal->MinimumWidth = 6;
			this->DGVC_ParaderoFinal->Name = L"DGVC_ParaderoFinal";
			this->DGVC_ParaderoFinal->ReadOnly = true;
			this->DGVC_ParaderoFinal->Width = 131;
			// 
			// DGVC_Tarifa
			// 
			this->DGVC_Tarifa->HeaderText = L"X_Final";
			this->DGVC_Tarifa->MinimumWidth = 6;
			this->DGVC_Tarifa->Name = L"DGVC_Tarifa";
			this->DGVC_Tarifa->ReadOnly = true;
			this->DGVC_Tarifa->Width = 99;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Y_Final";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 97;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Paradero Final";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 143;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ruta Asociada";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 141;
			// 
			// B_Editar
			// 
			this->B_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Editar.BackgroundImage")));
			this->B_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Editar->Location = System::Drawing::Point(756, 249);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(100, 40);
			this->B_Editar->TabIndex = 13;
			this->B_Editar->Text = L"Editar";
			this->B_Editar->UseVisualStyleBackColor = true;
			this->B_Editar->Click += gcnew System::EventHandler(this, &AtajoMantenimiento::B_Editar_Click);
			// 
			// B_Borrar
			// 
			this->B_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Borrar.BackgroundImage")));
			this->B_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Borrar->Location = System::Drawing::Point(476, 249);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(100, 40);
			this->B_Borrar->TabIndex = 12;
			this->B_Borrar->Text = L"Borrar";
			this->B_Borrar->UseVisualStyleBackColor = true;
			this->B_Borrar->Click += gcnew System::EventHandler(this, &AtajoMantenimiento::B_Borrar_Click);
			// 
			// B_Anadir
			// 
			this->B_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Anadir.BackgroundImage")));
			this->B_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Anadir->Location = System::Drawing::Point(156, 249);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(100, 40);
			this->B_Anadir->TabIndex = 11;
			this->B_Anadir->Text = L"Añadir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			this->B_Anadir->Click += gcnew System::EventHandler(this, &AtajoMantenimiento::B_Anadir_Click);
			// 
			// CB_ParaderoInicial
			// 
			this->CB_ParaderoInicial->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_ParaderoInicial->FormattingEnabled = true;
			this->CB_ParaderoInicial->Location = System::Drawing::Point(205, 29);
			this->CB_ParaderoInicial->Name = L"CB_ParaderoInicial";
			this->CB_ParaderoInicial->Size = System::Drawing::Size(250, 32);
			this->CB_ParaderoInicial->TabIndex = 19;
			// 
			// AtajoMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1012, 537);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Anadir);
			this->Controls->Add(this->DGV_Atajos);
			this->Controls->Add(this->GB_Busqueda);
			this->DoubleBuffered = true;
			this->Name = L"AtajoMantenimiento";
			this->Text = L"AtajoMantenimiento";
			this->Load += gcnew System::EventHandler(this, &AtajoMantenimiento::AtajoMantenimiento_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &AtajoMantenimiento::AtajoMantenimiento_SizeChanged);
			this->GB_Busqueda->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Atajos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void CentrarForm() {
	int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_Busqueda->Width)) / 2;
	int PosXDGV_Empleado = ((this->ClientSize.Width) - (this->DGV_Atajos->Width)) / 2;
	this->GB_Busqueda->Location = System::Drawing::Point(PosXGB_Busqueda, 25);
	this->DGV_Atajos->Location = System::Drawing::Point(PosXDGV_Empleado, 130);
	this->B_Anadir->Location = System::Drawing::Point(PosXDGV_Empleado, 455);
	this->B_Borrar->Location = System::Drawing::Point(PosXDGV_Empleado + 380, 455);
	this->B_Editar->Location = System::Drawing::Point(PosXDGV_Empleado + 700, 455);
};
private: System::Void AtajoMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &AtajoMantenimiento::AtajoMantenimiento_SizeChanged));
	CentrarForm();
	this->CB_ParaderoInicial->Items->Clear();
	ParaderoController^ ObjParaderoController = gcnew ParaderoController();
	List<Paradero^>^ ListParaderos = ObjParaderoController->buscarAll();
	for (int i = 0; i < ListParaderos->Count; i++) {
		this->CB_ParaderoInicial->Items->Add(ListParaderos[i]->getNombre());
	}
}
private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ AtajoBuscar = this->CB_ParaderoInicial->Text;
	AtajosController^ objAtajoController = gcnew AtajosController();
	List<Atajo^>^ listaATAJOS = objAtajoController->buscarAtajos(AtajoBuscar);
	// Ahora voy a mostrar las carreras encontradas en la grilla
	mostrarGrilla(listaATAJOS);
}
private: void mostrarGrilla(List<Atajo^>^ listaATAJOS) {
			this->DGV_Atajos->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
			for (int i = 0; i < listaATAJOS->Count; i++) {
				Atajo^ objAtajo = listaATAJOS[i];
				/*Esta filaGrilla representa una fila del data grid de la pantalla*/
				array<String^>^ filaGrilla = gcnew array<String^>(8);
				filaGrilla[0] = Convert::ToString(objAtajo->getCodigo_A());
				filaGrilla[1] = Convert::ToString(objAtajo->getX_Inicio());
				filaGrilla[2] = Convert::ToString(objAtajo->getY_Inicio());
				filaGrilla[3] = objAtajo->getParadero_Inicio();
				filaGrilla[4] = Convert::ToString(objAtajo->getX_Final());
				filaGrilla[5] = Convert::ToString(objAtajo->getY_Final());
				filaGrilla[6] = objAtajo->getParadero_Final();
				filaGrilla[7] = objAtajo->getRutaAsociada();

				this->DGV_Atajos->Rows->Add(filaGrilla);
			}
		}
private: System::Void B_Anadir_Click(System::Object^ sender, System::EventArgs^ e) {
	AtajosMantenimientoAnadir^ VentanaCrearAtajos = gcnew AtajosMantenimientoAnadir();
	VentanaCrearAtajos->ShowDialog();
	this->Show();
}
private: System::Void B_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->DGV_Atajos->SelectedRows->Count != 0) {
		AtajosController^ objetoAtajos;
		int filaSeleccionada = this->DGV_Atajos->SelectedRows[0]->Index;
		int codigo = Convert::ToInt32(this->DGV_Atajos->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		objetoAtajos->eliminarAtajosFisico(codigo);
		MessageBox::Show("El Atajo ha sido eliminado con éxito");
	}
}
private: System::Void B_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->DGV_Atajos->SelectedRows->Count != 0) {
		int filaSeleccionada = this->DGV_Atajos->SelectedRows[0]->Index;
		int codigo = Convert::ToInt32(this->DGV_Atajos->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		AtajosController^ objAtajosController = gcnew AtajosController();
		Atajo^ objAtajos = objAtajosController->buscarAtajosxCodigo(codigo);
		AtajosMantenimientoEditar^ ventanaEditarAtajo = gcnew AtajosMantenimientoEditar(objAtajos);
		ventanaEditarAtajo->ShowDialog();
	}
}
private: System::Void AtajoMantenimiento_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
};
}
