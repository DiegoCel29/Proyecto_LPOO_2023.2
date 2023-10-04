#pragma once
#include "Nuevo_Atajos.h"
#include "Editar_Atajos.h"

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
	/// Resumen de MantenimientoAtajo
	/// </summary>
	public ref class MantenimientoAtajo : public System::Windows::Forms::Form
	{
	public:
		MantenimientoAtajo(void)
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
		~MantenimientoAtajo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_Busqueda;
	private: System::Windows::Forms::Label^ L_Paradero_Inicio;
	private: System::Windows::Forms::TextBox^ TB_Paradero_Inicio;
	protected:






	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::DataGridView^ DGV_Tarifarios;

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

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MantenimientoAtajo::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->GB_Busqueda = (gcnew System::Windows::Forms::GroupBox());
			this->L_Paradero_Inicio = (gcnew System::Windows::Forms::Label());
			this->TB_Paradero_Inicio = (gcnew System::Windows::Forms::TextBox());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->DGV_Tarifarios = (gcnew System::Windows::Forms::DataGridView());
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
			this->GB_Busqueda->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Tarifarios))->BeginInit();
			this->SuspendLayout();
			// 
			// GB_Busqueda
			// 
			this->GB_Busqueda->BackColor = System::Drawing::Color::Transparent;
			this->GB_Busqueda->Controls->Add(this->L_Paradero_Inicio);
			this->GB_Busqueda->Controls->Add(this->TB_Paradero_Inicio);
			this->GB_Busqueda->Controls->Add(this->B_Buscar);
			this->GB_Busqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Busqueda->ForeColor = System::Drawing::Color::White;
			this->GB_Busqueda->Location = System::Drawing::Point(308, 219);
			this->GB_Busqueda->Margin = System::Windows::Forms::Padding(4);
			this->GB_Busqueda->Name = L"GB_Busqueda";
			this->GB_Busqueda->Padding = System::Windows::Forms::Padding(4);
			this->GB_Busqueda->Size = System::Drawing::Size(860, 102);
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
			this->L_Paradero_Inicio->Location = System::Drawing::Point(13, 37);
			this->L_Paradero_Inicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Paradero_Inicio->Name = L"L_Paradero_Inicio";
			this->L_Paradero_Inicio->Size = System::Drawing::Size(266, 37);
			this->L_Paradero_Inicio->TabIndex = 9;
			this->L_Paradero_Inicio->Text = L"Paradero de Inicio :";
			this->L_Paradero_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Paradero_Inicio
			// 
			this->TB_Paradero_Inicio->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Paradero_Inicio->Location = System::Drawing::Point(304, 40);
			this->TB_Paradero_Inicio->Margin = System::Windows::Forms::Padding(4);
			this->TB_Paradero_Inicio->Name = L"TB_Paradero_Inicio";
			this->TB_Paradero_Inicio->Size = System::Drawing::Size(407, 34);
			this->TB_Paradero_Inicio->TabIndex = 10;
			// 
			// B_Buscar
			// 
			this->B_Buscar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Buscar.BackgroundImage")));
			this->B_Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Buscar->ForeColor = System::Drawing::Color::Black;
			this->B_Buscar->Location = System::Drawing::Point(719, 32);
			this->B_Buscar->Margin = System::Windows::Forms::Padding(4);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(133, 49);
			this->B_Buscar->TabIndex = 1;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &MantenimientoAtajo::B_Buscar_Click);
			// 
			// DGV_Tarifarios
			// 
			this->DGV_Tarifarios->AllowUserToDeleteRows = false;
			this->DGV_Tarifarios->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Tarifarios->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Tarifarios->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Tarifarios->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Tarifarios->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Tarifarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Tarifarios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->DGVC_Identificador,
					this->DGVC_RutaAsociada, this->DGCV_ParaderoInicial, this->DGVC_ParaderoFinal, this->DGVC_Tarifa, this->Column1, this->Column2,
					this->Column3
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Tarifarios->DefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_Tarifarios->EnableHeadersVisualStyles = false;
			this->DGV_Tarifarios->Location = System::Drawing::Point(208, 146);
			this->DGV_Tarifarios->Margin = System::Windows::Forms::Padding(4);
			this->DGV_Tarifarios->Name = L"DGV_Tarifarios";
			this->DGV_Tarifarios->ReadOnly = true;
			this->DGV_Tarifarios->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Tarifarios->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Tarifarios->Size = System::Drawing::Size(989, 369);
			this->DGV_Tarifarios->TabIndex = 10;
			// 
			// DGVC_Identificador
			// 
			this->DGVC_Identificador->HeaderText = L"Codigo";
			this->DGVC_Identificador->MinimumWidth = 6;
			this->DGVC_Identificador->Name = L"DGVC_Identificador";
			this->DGVC_Identificador->ReadOnly = true;
			// 
			// DGVC_RutaAsociada
			// 
			this->DGVC_RutaAsociada->HeaderText = L"X_Inicio";
			this->DGVC_RutaAsociada->MinimumWidth = 6;
			this->DGVC_RutaAsociada->Name = L"DGVC_RutaAsociada";
			this->DGVC_RutaAsociada->ReadOnly = true;
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
			// 
			// DGVC_Tarifa
			// 
			this->DGVC_Tarifa->HeaderText = L"X_Final";
			this->DGVC_Tarifa->MinimumWidth = 6;
			this->DGVC_Tarifa->Name = L"DGVC_Tarifa";
			this->DGVC_Tarifa->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Y_Final";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Paradero Final";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ruta Asociada";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// B_Editar
			// 
			this->B_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Editar.BackgroundImage")));
			this->B_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Editar->Location = System::Drawing::Point(1008, 306);
			this->B_Editar->Margin = System::Windows::Forms::Padding(4);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(133, 49);
			this->B_Editar->TabIndex = 13;
			this->B_Editar->Text = L"Editar";
			this->B_Editar->UseVisualStyleBackColor = true;
			this->B_Editar->Click += gcnew System::EventHandler(this, &MantenimientoAtajo::B_Editar_Click);
			// 
			// B_Borrar
			// 
			this->B_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Borrar.BackgroundImage")));
			this->B_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Borrar->Location = System::Drawing::Point(635, 306);
			this->B_Borrar->Margin = System::Windows::Forms::Padding(4);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(133, 49);
			this->B_Borrar->TabIndex = 12;
			this->B_Borrar->Text = L"Borrar";
			this->B_Borrar->UseVisualStyleBackColor = true;
			this->B_Borrar->Click += gcnew System::EventHandler(this, &MantenimientoAtajo::B_Borrar_Click);
			// 
			// B_Anadir
			// 
			this->B_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Anadir.BackgroundImage")));
			this->B_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Anadir->Location = System::Drawing::Point(208, 306);
			this->B_Anadir->Margin = System::Windows::Forms::Padding(4);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(133, 49);
			this->B_Anadir->TabIndex = 11;
			this->B_Anadir->Text = L"Añadir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			this->B_Anadir->Click += gcnew System::EventHandler(this, &MantenimientoAtajo::B_Anadir_Click);
			// 
			// MantenimientoAtajo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1349, 661);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Anadir);
			this->Controls->Add(this->DGV_Tarifarios);
			this->Controls->Add(this->GB_Busqueda);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MantenimientoAtajo";
			this->Text = L"MantenimientoAtajo";
			this->Load += gcnew System::EventHandler(this, &MantenimientoAtajo::MantenimientoAtajo_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MantenimientoAtajo::MantenimientoAtajo_SizeChanged);
			this->GB_Busqueda->ResumeLayout(false);
			this->GB_Busqueda->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Tarifarios))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void CentrarForm() {
	int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_Busqueda->Width)) / 2;
	int PosXDGV_Tarifario = ((this->ClientSize.Width) - (this->DGV_Tarifarios->Width)) / 2;

	this->GB_Busqueda->Location = System::Drawing::Point(PosXGB_Busqueda, 25);
	this->DGV_Tarifarios->Location = System::Drawing::Point(PosXDGV_Tarifario, 225);
	this->B_Anadir->Location = System::Drawing::Point(PosXDGV_Tarifario, 545);
	this->B_Borrar->Location = System::Drawing::Point(PosXDGV_Tarifario + 320, 545);
	this->B_Editar->Location = System::Drawing::Point(PosXDGV_Tarifario + 600, 545);
};
private: System::Void MantenimientoAtajo_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &MantenimientoAtajo::MantenimientoAtajo_SizeChanged));
	CentrarForm();
}
private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ AtajoBuscar = this->TB_Paradero_Inicio->Text;
	AtajosController^ objAtajoController = gcnew AtajosController();
	List<Atajo^>^ listaATAJOS = objAtajoController->buscarAtajos(AtajoBuscar);
	// Ahora voy a mostrar las carreras encontradas en la grilla
	mostrarGrilla(listaATAJOS);
}
private: void mostrarGrilla(List<Atajo^>^ listaATAJOS) {
			this->DGV_Tarifarios->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
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

				this->DGV_Tarifarios->Rows->Add(filaGrilla);
			}
		}
private: System::Void B_Anadir_Click(System::Object^ sender, System::EventArgs^ e) {
	Nuevo_Atajos^ VentanaCrearAtajos = gcnew Nuevo_Atajos();
	VentanaCrearAtajos->ShowDialog();
	this->Show();
}
private: System::Void B_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {
	AtajosController^ objetoAtajos;
	int filaSeleccionada = this->DGV_Tarifarios->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigo = Convert::ToInt32(this->DGV_Tarifarios->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	objetoAtajos->eliminarAtajosFisico(codigo);
	MessageBox::Show("El Atajo ha sido eliminado con éxito");
}
private: System::Void B_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->DGV_Tarifarios->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigo = Convert::ToInt32(this->DGV_Tarifarios->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	AtajosController^ objAtajosController = gcnew AtajosController();
	Atajo^ objAtajos = objAtajosController->buscarAtajosxCodigo(codigo);
	Editar_Atajos^ ventanaEditarAtajo = gcnew Editar_Atajos(objAtajos);
	ventanaEditarAtajo->ShowDialog();
}
private: System::Void MantenimientoAtajo_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
};
}
