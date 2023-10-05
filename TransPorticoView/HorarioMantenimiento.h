#pragma once
#include "HorarioMantenimientoAnadir.h"
#include "HorarioMantenimientoEditar.h"
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
	/// Resumen de HorarioMantenimiento
	/// </summary>
	public ref class HorarioMantenimiento : public System::Windows::Forms::Form
	{
	public:
		HorarioMantenimiento(void)
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
		~HorarioMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_Busqueda;
	private: System::Windows::Forms::TextBox^ TB_Turno;
	private: System::Windows::Forms::Label^ L_ParaderoInicial;
	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::DataGridView^ DGV_Horario;
	private: System::Windows::Forms::Button^ B_Anadir;
	private: System::Windows::Forms::Button^ B_Borrar;
	private: System::Windows::Forms::Button^ B_Editar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Identificador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_RutaAsociada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGCV_ParaderoInicial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_ParaderoFinal;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HorarioMantenimiento::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->GB_Busqueda = (gcnew System::Windows::Forms::GroupBox());
			this->TB_Turno = (gcnew System::Windows::Forms::TextBox());
			this->L_ParaderoInicial = (gcnew System::Windows::Forms::Label());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->DGV_Horario = (gcnew System::Windows::Forms::DataGridView());
			this->DGVC_Identificador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_RutaAsociada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGCV_ParaderoInicial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_ParaderoFinal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->B_Anadir = (gcnew System::Windows::Forms::Button());
			this->B_Borrar = (gcnew System::Windows::Forms::Button());
			this->B_Editar = (gcnew System::Windows::Forms::Button());
			this->GB_Busqueda->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Horario))->BeginInit();
			this->SuspendLayout();
			// 
			// GB_Busqueda
			// 
			this->GB_Busqueda->BackColor = System::Drawing::Color::Transparent;
			this->GB_Busqueda->Controls->Add(this->TB_Turno);
			this->GB_Busqueda->Controls->Add(this->L_ParaderoInicial);
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
			// TB_Turno
			// 
			this->TB_Turno->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Turno->Location = System::Drawing::Point(175, 30);
			this->TB_Turno->Name = L"TB_Turno";
			this->TB_Turno->Size = System::Drawing::Size(250, 29);
			this->TB_Turno->TabIndex = 10;
			// 
			// L_ParaderoInicial
			// 
			this->L_ParaderoInicial->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoInicial->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoInicial->Location = System::Drawing::Point(10, 30);
			this->L_ParaderoInicial->Name = L"L_ParaderoInicial";
			this->L_ParaderoInicial->Size = System::Drawing::Size(150, 30);
			this->L_ParaderoInicial->TabIndex = 5;
			this->L_ParaderoInicial->Text = L"Turno";
			this->L_ParaderoInicial->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_Buscar
			// 
			this->B_Buscar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Buscar.BackgroundImage")));
			this->B_Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Buscar->ForeColor = System::Drawing::Color::Black;
			this->B_Buscar->Location = System::Drawing::Point(450, 25);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(100, 40);
			this->B_Buscar->TabIndex = 1;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &HorarioMantenimiento::B_Buscar_Click);
			// 
			// DGV_Horario
			// 
			this->DGV_Horario->AllowUserToDeleteRows = false;
			this->DGV_Horario->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Horario->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Horario->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Horario->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Horario->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Horario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Horario->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->DGVC_Identificador,
					this->DGVC_RutaAsociada, this->DGCV_ParaderoInicial, this->DGVC_ParaderoFinal
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Horario->DefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_Horario->EnableHeadersVisualStyles = false;
			this->DGV_Horario->Location = System::Drawing::Point(122, 164);
			this->DGV_Horario->Name = L"DGV_Horario";
			this->DGV_Horario->ReadOnly = true;
			this->DGV_Horario->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Horario->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Horario->Size = System::Drawing::Size(700, 300);
			this->DGV_Horario->TabIndex = 10;
			// 
			// DGVC_Identificador
			// 
			this->DGVC_Identificador->HeaderText = L"Código";
			this->DGVC_Identificador->MinimumWidth = 6;
			this->DGVC_Identificador->Name = L"DGVC_Identificador";
			this->DGVC_Identificador->ReadOnly = true;
			// 
			// DGVC_RutaAsociada
			// 
			this->DGVC_RutaAsociada->HeaderText = L"Hora de Inicio";
			this->DGVC_RutaAsociada->MinimumWidth = 6;
			this->DGVC_RutaAsociada->Name = L"DGVC_RutaAsociada";
			this->DGVC_RutaAsociada->ReadOnly = true;
			// 
			// DGCV_ParaderoInicial
			// 
			this->DGCV_ParaderoInicial->HeaderText = L"Hora fin";
			this->DGCV_ParaderoInicial->MinimumWidth = 6;
			this->DGCV_ParaderoInicial->Name = L"DGCV_ParaderoInicial";
			this->DGCV_ParaderoInicial->ReadOnly = true;
			// 
			// DGVC_ParaderoFinal
			// 
			this->DGVC_ParaderoFinal->HeaderText = L"Turno";
			this->DGVC_ParaderoFinal->MinimumWidth = 6;
			this->DGVC_ParaderoFinal->Name = L"DGVC_ParaderoFinal";
			this->DGVC_ParaderoFinal->ReadOnly = true;
			// 
			// B_Anadir
			// 
			this->B_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Anadir.BackgroundImage")));
			this->B_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Anadir->Location = System::Drawing::Point(220, 511);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(100, 40);
			this->B_Anadir->TabIndex = 12;
			this->B_Anadir->Text = L"Añadir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			this->B_Anadir->Click += gcnew System::EventHandler(this, &HorarioMantenimiento::B_Anadir_Click);
			// 
			// B_Borrar
			// 
			this->B_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Borrar.BackgroundImage")));
			this->B_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Borrar->Location = System::Drawing::Point(628, 511);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(100, 40);
			this->B_Borrar->TabIndex = 13;
			this->B_Borrar->Text = L"Borrar";
			this->B_Borrar->UseVisualStyleBackColor = true;
			this->B_Borrar->Click += gcnew System::EventHandler(this, &HorarioMantenimiento::B_Borrar_Click);
			// 
			// B_Editar
			// 
			this->B_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Editar.BackgroundImage")));
			this->B_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Editar->Location = System::Drawing::Point(421, 511);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(100, 40);
			this->B_Editar->TabIndex = 14;
			this->B_Editar->Text = L"Editar";
			this->B_Editar->UseVisualStyleBackColor = true;
			this->B_Editar->Click += gcnew System::EventHandler(this, &HorarioMantenimiento::B_Editar_Click);
			// 
			// HorarioMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(980, 610);
			this->Controls->Add(this->B_Anadir);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->DGV_Horario);
			this->Controls->Add(this->GB_Busqueda);
			this->DoubleBuffered = true;
			this->Name = L"HorarioMantenimiento";
			this->Text = L"HorarioMantenimiento";
			this->Load += gcnew System::EventHandler(this, &HorarioMantenimiento::HorarioMantenimiento_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &HorarioMantenimiento::HorarioMantenimiento_SizeChanged);
			this->GB_Busqueda->ResumeLayout(false);
			this->GB_Busqueda->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Horario))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_Busqueda->Width)) / 2;
		int PosXDGV_Empleado = ((this->ClientSize.Width) - (this->DGV_Horario->Width)) / 2;
		this->GB_Busqueda->Location = System::Drawing::Point(PosXGB_Busqueda, 25);
		this->DGV_Horario->Location = System::Drawing::Point(PosXDGV_Empleado, 130);
		this->B_Anadir->Location = System::Drawing::Point(PosXDGV_Empleado, 455);
		this->B_Borrar->Location = System::Drawing::Point(PosXDGV_Empleado + 330, 455);
		this->B_Editar->Location = System::Drawing::Point(PosXDGV_Empleado + 600, 455);
	};
	private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Turno = this->TB_Turno->Text;
		HorarioController^ objHorarioController = gcnew HorarioController();
		objHorarioController->buscarHorarios(Turno);
		List<Horario^>^ listaHorarios = objHorarioController->buscarHorarios(Turno);
		mostrarGrilla(listaHorarios);

	}
	private: void mostrarGrilla(List<Horario^>^ listaHorarios) {
		this->DGV_Horario->Rows->Clear();
		for (int i = 0; i < listaHorarios->Count; i++) {
			Horario^ objHorario = listaHorarios[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = Convert::ToString(objHorario->getCodigo());
			filaGrilla[1] = objHorario->getHoraInicio();
			filaGrilla[2] = objHorario->getHoraSalida();
			filaGrilla[3] = objHorario->getTurno();
			this->DGV_Horario->Rows->Add(filaGrilla);
		}
	}
	private: System::Void B_Anadir_Click(System::Object^ sender, System::EventArgs^ e) {
		HorarioMantenimientoAnadir^ VentanaAgregarHorario = gcnew HorarioMantenimientoAnadir;
		VentanaAgregarHorario->ShowDialog();
	}
	private: System::Void B_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {
		if(this->DGV_Horario->SelectedRows->Count != 0) {
			int filaSeleccionada = this->DGV_Horario->SelectedRows[0]->Index;
			int codigoAeliminar = Convert::ToInt32(this->DGV_Horario->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			HorarioController^ objetoHorarioController = gcnew HorarioController;
			objetoHorarioController->EliminarHorario(codigoAeliminar);
			List<Horario^>^ listaHorario = objetoHorarioController->buscarHorariosall();
			mostrarGrilla(listaHorario);
		}

	}
	private: System::Void B_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->DGV_Horario->SelectedRows->Count != 0) {
			int filaSeleccionada = this->DGV_Horario->SelectedRows[0]->Index;
			int codigoAeditar = Convert::ToInt32(this->DGV_Horario->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			HorarioController^ objetocontroller = gcnew HorarioController;
			Horario^ objetoHorario = objetocontroller->buscarHorarios(codigoAeditar);

			HorarioMantenimientoEditar^ ventanaEditar = gcnew HorarioMantenimientoEditar(objetoHorario);
			ventanaEditar->ShowDialog();
		}
	}
	private: System::Void HorarioMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &HorarioMantenimiento::HorarioMantenimiento_SizeChanged));
		CentrarForm();
	}
	private: System::Void HorarioMantenimiento_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	};
}