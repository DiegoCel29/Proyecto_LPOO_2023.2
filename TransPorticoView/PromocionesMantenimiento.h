#pragma once
#include "PromocionesMantenimientoAnadir.h"
#include "PromocionesMantenimientoEditar.h"

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
	/// Resumen de PromocionesMantenimiento
	/// </summary>
	public ref class PromocionesMantenimiento : public System::Windows::Forms::Form
	{
	public:
		PromocionesMantenimiento(void)
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
		~PromocionesMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::Button^ B_Anadir;
	private: System::Windows::Forms::Button^ B_Borrar;
	private: System::Windows::Forms::Button^ B_Editar;
	private: System::Windows::Forms::Label^ L_ParaderoInicial;
	private: System::Windows::Forms::GroupBox^ GB_Busqueda;
	private: System::Windows::Forms::DataGridView^ DGV_Promociones;






	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Titulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGCV_Descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_FechaInicio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_FechaFin;
	private: System::Windows::Forms::DateTimePicker^ DTP_FechaInicio;
	private: System::Windows::Forms::DateTimePicker^ DTP_FechaFin;
	private: System::Windows::Forms::Label^ L_FechaInicio;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PromocionesMantenimiento::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->B_Anadir = (gcnew System::Windows::Forms::Button());
			this->B_Borrar = (gcnew System::Windows::Forms::Button());
			this->B_Editar = (gcnew System::Windows::Forms::Button());
			this->L_ParaderoInicial = (gcnew System::Windows::Forms::Label());
			this->GB_Busqueda = (gcnew System::Windows::Forms::GroupBox());
			this->DTP_FechaInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->DTP_FechaFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->L_FechaInicio = (gcnew System::Windows::Forms::Label());
			this->DGV_Promociones = (gcnew System::Windows::Forms::DataGridView());
			this->DGVC_Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_Titulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGCV_Descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_FechaInicio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_FechaFin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GB_Busqueda->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Promociones))->BeginInit();
			this->SuspendLayout();
			// 
			// B_Buscar
			// 
			this->B_Buscar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Buscar.BackgroundImage")));
			this->B_Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Buscar->ForeColor = System::Drawing::Color::Black;
			this->B_Buscar->Location = System::Drawing::Point(440, 50);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(100, 40);
			this->B_Buscar->TabIndex = 1;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &PromocionesMantenimiento::B_Buscar_Click);
			// 
			// B_Anadir
			// 
			this->B_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Anadir.BackgroundImage")));
			this->B_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Anadir->Location = System::Drawing::Point(0, 520);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(100, 40);
			this->B_Anadir->TabIndex = 2;
			this->B_Anadir->Text = L"A�adir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			this->B_Anadir->Click += gcnew System::EventHandler(this, &PromocionesMantenimiento::B_Anadir_Click);
			// 
			// B_Borrar
			// 
			this->B_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Borrar.BackgroundImage")));
			this->B_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Borrar->Location = System::Drawing::Point(320, 520);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(100, 40);
			this->B_Borrar->TabIndex = 3;
			this->B_Borrar->Text = L"Borrar";
			this->B_Borrar->UseVisualStyleBackColor = true;
			this->B_Borrar->Click += gcnew System::EventHandler(this, &PromocionesMantenimiento::B_Borrar_Click);
			// 
			// B_Editar
			// 
			this->B_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Editar.BackgroundImage")));
			this->B_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Editar->Location = System::Drawing::Point(600, 520);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(100, 40);
			this->B_Editar->TabIndex = 4;
			this->B_Editar->Text = L"Editar";
			this->B_Editar->UseVisualStyleBackColor = true;
			this->B_Editar->Click += gcnew System::EventHandler(this, &PromocionesMantenimiento::B_Editar_Click);
			// 
			// L_ParaderoInicial
			// 
			this->L_ParaderoInicial->BackColor = System::Drawing::Color::Moccasin;
			this->L_ParaderoInicial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_ParaderoInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_ParaderoInicial->ForeColor = System::Drawing::Color::Black;
			this->L_ParaderoInicial->Location = System::Drawing::Point(10, 80);
			this->L_ParaderoInicial->Name = L"L_ParaderoInicial";
			this->L_ParaderoInicial->Size = System::Drawing::Size(150, 30);
			this->L_ParaderoInicial->TabIndex = 5;
			this->L_ParaderoInicial->Text = L"Fecha fin:";
			this->L_ParaderoInicial->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// GB_Busqueda
			// 
			this->GB_Busqueda->BackColor = System::Drawing::Color::Transparent;
			this->GB_Busqueda->Controls->Add(this->DTP_FechaInicio);
			this->GB_Busqueda->Controls->Add(this->DTP_FechaFin);
			this->GB_Busqueda->Controls->Add(this->L_FechaInicio);
			this->GB_Busqueda->Controls->Add(this->L_ParaderoInicial);
			this->GB_Busqueda->Controls->Add(this->B_Buscar);
			this->GB_Busqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Busqueda->ForeColor = System::Drawing::Color::White;
			this->GB_Busqueda->Location = System::Drawing::Point(262, 0);
			this->GB_Busqueda->Name = L"GB_Busqueda";
			this->GB_Busqueda->Size = System::Drawing::Size(550, 130);
			this->GB_Busqueda->TabIndex = 8;
			this->GB_Busqueda->TabStop = false;
			this->GB_Busqueda->Text = L"Criterios de busqueda:";
			// 
			// DTP_FechaInicio
			// 
			this->DTP_FechaInicio->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DTP_FechaInicio->Location = System::Drawing::Point(175, 30);
			this->DTP_FechaInicio->Name = L"DTP_FechaInicio";
			this->DTP_FechaInicio->Size = System::Drawing::Size(250, 29);
			this->DTP_FechaInicio->TabIndex = 12;
			// 
			// DTP_FechaFin
			// 
			this->DTP_FechaFin->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DTP_FechaFin->Location = System::Drawing::Point(175, 80);
			this->DTP_FechaFin->Name = L"DTP_FechaFin";
			this->DTP_FechaFin->Size = System::Drawing::Size(250, 29);
			this->DTP_FechaFin->TabIndex = 11;
			// 
			// L_FechaInicio
			// 
			this->L_FechaInicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_FechaInicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_FechaInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_FechaInicio->ForeColor = System::Drawing::Color::Black;
			this->L_FechaInicio->Location = System::Drawing::Point(10, 30);
			this->L_FechaInicio->Name = L"L_FechaInicio";
			this->L_FechaInicio->Size = System::Drawing::Size(150, 30);
			this->L_FechaInicio->TabIndex = 9;
			this->L_FechaInicio->Text = L"Fecha inicio:";
			this->L_FechaInicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// DGV_Promociones
			// 
			this->DGV_Promociones->AllowUserToDeleteRows = false;
			this->DGV_Promociones->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Promociones->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Promociones->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Promociones->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Promociones->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Promociones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Promociones->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->DGVC_Codigo,
					this->DGVC_Titulo, this->DGCV_Descripcion, this->DGVC_FechaInicio, this->DGVC_FechaFin
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Promociones->DefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_Promociones->EnableHeadersVisualStyles = false;
			this->DGV_Promociones->Location = System::Drawing::Point(0, 200);
			this->DGV_Promociones->Name = L"DGV_Promociones";
			this->DGV_Promociones->ReadOnly = true;
			this->DGV_Promociones->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Promociones->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Promociones->Size = System::Drawing::Size(700, 300);
			this->DGV_Promociones->TabIndex = 9;
			// 
			// DGVC_Codigo
			// 
			this->DGVC_Codigo->HeaderText = L"Codigo";
			this->DGVC_Codigo->Name = L"DGVC_Codigo";
			this->DGVC_Codigo->ReadOnly = true;
			this->DGVC_Codigo->Visible = false;
			// 
			// DGVC_Titulo
			// 
			this->DGVC_Titulo->HeaderText = L"Titulo";
			this->DGVC_Titulo->Name = L"DGVC_Titulo";
			this->DGVC_Titulo->ReadOnly = true;
			// 
			// DGCV_Descripcion
			// 
			this->DGCV_Descripcion->HeaderText = L"Descripcion";
			this->DGCV_Descripcion->Name = L"DGCV_Descripcion";
			this->DGCV_Descripcion->ReadOnly = true;
			// 
			// DGVC_FechaInicio
			// 
			this->DGVC_FechaInicio->HeaderText = L"Fecha inicio";
			this->DGVC_FechaInicio->Name = L"DGVC_FechaInicio";
			this->DGVC_FechaInicio->ReadOnly = true;
			// 
			// DGVC_FechaFin
			// 
			this->DGVC_FechaFin->HeaderText = L"Fecha fin";
			this->DGVC_FechaFin->Name = L"DGVC_FechaFin";
			this->DGVC_FechaFin->ReadOnly = true;
			// 
			// PromocionesMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(966, 618);
			this->Controls->Add(this->DGV_Promociones);
			this->Controls->Add(this->GB_Busqueda);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Anadir);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->Name = L"PromocionesMantenimiento";
			this->Text = L"PromocionesMantenimiento";
			this->Load += gcnew System::EventHandler(this, &PromocionesMantenimiento::PromocionesMantenimiento_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &PromocionesMantenimiento::PromocionesMantenimiento_SizeChanged);
			this->GB_Busqueda->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Promociones))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ BuscarFechaInicio = this->DTP_FechaInicio->Text;
		String^ BuscarFechaFin = (this->DTP_FechaFin->Text);

		PromocionesController^ ObjPromocionesController = gcnew PromocionesController();
		List<Promociones^>^ ListPromocionesGeneral = ObjPromocionesController->BuscarPromocionAll();
		List<Promociones^>^ ListPromocionesBuscado = gcnew List<Promociones^>();

		ListPromocionesBuscado = ObjPromocionesController->BuscarPromocionFechaInicio(ListPromocionesGeneral, BuscarFechaInicio);
		ListPromocionesBuscado = ObjPromocionesController->BuscarPromocionFechaFin(ListPromocionesBuscado, BuscarFechaFin);
		MostrarGrilla(ListPromocionesBuscado);
	};
	private: void MostrarGrilla(List<Promociones^>^ ListPromociones) {

		this->DGV_Promociones->Rows->Clear();

		for (int i = 0; i < ListPromociones->Count; i++) {
			Promociones^ ObjPromociones = ListPromociones[i];

			array<String^>^ FilaGrilla = gcnew array<String^>(5);

			FilaGrilla[0] = Convert::ToString(ListPromociones[i]->GetCodigo());
			FilaGrilla[1] = ListPromociones[i]->GetTitulo();
			FilaGrilla[2] = ListPromociones[i]->GetDescripcion();
			FilaGrilla[3] = ListPromociones[i]->GetFechaInicio();
			FilaGrilla[4] = ListPromociones[i]->GetFechaFin();

			this->DGV_Promociones->Rows->Add(FilaGrilla);
		}
	};

	private: void CentrarForm() {
		int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_Busqueda->Width)) / 2;
		int PosXDGV_Promociones = ((this->ClientSize.Width) - (this->DGV_Promociones->Width)) / 2;

		this->GB_Busqueda->Location = System::Drawing::Point(PosXGB_Busqueda, 25);
		this->DGV_Promociones->Location = System::Drawing::Point(PosXDGV_Promociones, 225);
		this->B_Anadir->Location = System::Drawing::Point(PosXDGV_Promociones, 545);
		this->B_Borrar->Location = System::Drawing::Point(PosXDGV_Promociones + 320, 545);
		this->B_Editar->Location = System::Drawing::Point(PosXDGV_Promociones + 600, 545);
	};

	private: System::Void PromocionesMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &PromocionesMantenimiento::PromocionesMantenimiento_SizeChanged));
		CentrarForm();

	}
	private: System::Void PromocionesMantenimiento_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void B_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->DGV_Promociones->SelectedRows->Count != 0) {
			int FilaSeleccionada = this->DGV_Promociones->SelectedRows[0]->Index;
			int CodigoPromocionEliminar = Convert::ToInt32(this->DGV_Promociones->Rows[FilaSeleccionada]->Cells[0]->Value->ToString());

			PromocionesController^ ObjPromocionesController = gcnew PromocionesController;
			ObjPromocionesController->EliminarPromocion(CodigoPromocionEliminar);
			MessageBox::Show("La promocion seleccionada ha sido retirada, de la base de datos, con exito.");
		}
	}
	private: System::Void B_Anadir_Click(System::Object^ sender, System::EventArgs^ e) {
		PromocionesMantenimientoAnadir^ ObjPromocionesMantenimientoAnadir = gcnew PromocionesMantenimientoAnadir();
		ObjPromocionesMantenimientoAnadir->ShowDialog();
	}
	private: System::Void B_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->DGV_Promociones->SelectedRows->Count != 0) {
			int FilaSeleccionada = this->DGV_Promociones->SelectedRows[0]->Index;
			int CodigoPromocionEditar = Convert::ToInt32(this->DGV_Promociones->Rows[FilaSeleccionada]->Cells[0]->Value->ToString());

			PromocionesController^ ObjPromocionesController = gcnew PromocionesController();
			Promociones^ ObjPromociones = ObjPromocionesController->BuscarPromocionCodigo(CodigoPromocionEditar);

			PromocionesMantenimientoEditar^ ObjPromocionesMantenimientoEditar = gcnew PromocionesMantenimientoEditar(ObjPromociones);
			ObjPromocionesMantenimientoEditar->ShowDialog();
		}
	}
	};
}
