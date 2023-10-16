#pragma once
#include "AutobusMantenimientoAnadir.h"
#include "AutobusMantenimientoEditar.h"
#include "MantenimientoMantenimiento.h"
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
	using namespace TransPorticoController;
	/// <summary>
	/// Resumen de AutobusMantenimiento
	/// </summary>
	public ref class AutobusMantenimiento : public System::Windows::Forms::Form
	{
	public:
		AutobusMantenimiento(void)
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
		~AutobusMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DGV_Autobus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC4;
	private: System::Windows::Forms::GroupBox^ GB_Busqueda;
	private: System::Windows::Forms::Label^ L_Placa;
	private: System::Windows::Forms::TextBox^ TB_Ruta;
	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::Button^ B_Editar;
	private: System::Windows::Forms::Button^ B_Borrar;
	private: System::Windows::Forms::Button^ B_Anadir;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ DGV_Mantenimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;



























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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AutobusMantenimiento::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->DGV_Autobus = (gcnew System::Windows::Forms::DataGridView());
			this->DGVC0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GB_Busqueda = (gcnew System::Windows::Forms::GroupBox());
			this->L_Placa = (gcnew System::Windows::Forms::Label());
			this->TB_Ruta = (gcnew System::Windows::Forms::TextBox());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->B_Editar = (gcnew System::Windows::Forms::Button());
			this->B_Borrar = (gcnew System::Windows::Forms::Button());
			this->B_Anadir = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->DGV_Mantenimiento = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Autobus))->BeginInit();
			this->GB_Busqueda->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Mantenimiento))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// DGV_Autobus
			// 
			this->DGV_Autobus->AllowUserToDeleteRows = false;
			this->DGV_Autobus->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Autobus->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Autobus->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Autobus->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Autobus->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->DGV_Autobus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Autobus->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->DGVC0, this->DGVC1,
					this->DGVC2, this->DGVC3, this->DGVC4
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Autobus->DefaultCellStyle = dataGridViewCellStyle5;
			this->DGV_Autobus->EnableHeadersVisualStyles = false;
			this->DGV_Autobus->Location = System::Drawing::Point(19, 191);
			this->DGV_Autobus->Margin = System::Windows::Forms::Padding(4);
			this->DGV_Autobus->Name = L"DGV_Autobus";
			this->DGV_Autobus->ReadOnly = true;
			this->DGV_Autobus->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Autobus->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Autobus->Size = System::Drawing::Size(832, 291);
			this->DGV_Autobus->TabIndex = 14;
			// 
			// DGVC0
			// 
			this->DGVC0->HeaderText = L"Código";
			this->DGVC0->MinimumWidth = 6;
			this->DGVC0->Name = L"DGVC0";
			this->DGVC0->ReadOnly = true;
			// 
			// DGVC1
			// 
			this->DGVC1->HeaderText = L"Placa";
			this->DGVC1->MinimumWidth = 6;
			this->DGVC1->Name = L"DGVC1";
			this->DGVC1->ReadOnly = true;
			// 
			// DGVC2
			// 
			this->DGVC2->HeaderText = L"Cantidad de asientos disponibles";
			this->DGVC2->MinimumWidth = 6;
			this->DGVC2->Name = L"DGVC2";
			this->DGVC2->ReadOnly = true;
			// 
			// DGVC3
			// 
			this->DGVC3->HeaderText = L"Cantidad de pasajeros";
			this->DGVC3->MinimumWidth = 6;
			this->DGVC3->Name = L"DGVC3";
			this->DGVC3->ReadOnly = true;
			// 
			// DGVC4
			// 
			this->DGVC4->HeaderText = L"Capacidad";
			this->DGVC4->MinimumWidth = 6;
			this->DGVC4->Name = L"DGVC4";
			this->DGVC4->ReadOnly = true;
			// 
			// GB_Busqueda
			// 
			this->GB_Busqueda->BackColor = System::Drawing::Color::Transparent;
			this->GB_Busqueda->Controls->Add(this->L_Placa);
			this->GB_Busqueda->Controls->Add(this->TB_Ruta);
			this->GB_Busqueda->Controls->Add(this->B_Buscar);
			this->GB_Busqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Busqueda->ForeColor = System::Drawing::Color::White;
			this->GB_Busqueda->Location = System::Drawing::Point(57, 72);
			this->GB_Busqueda->Margin = System::Windows::Forms::Padding(4);
			this->GB_Busqueda->Name = L"GB_Busqueda";
			this->GB_Busqueda->Padding = System::Windows::Forms::Padding(4);
			this->GB_Busqueda->Size = System::Drawing::Size(760, 98);
			this->GB_Busqueda->TabIndex = 13;
			this->GB_Busqueda->TabStop = false;
			this->GB_Busqueda->Text = L"Criterios de busqueda:";
			// 
			// L_Placa
			// 
			this->L_Placa->BackColor = System::Drawing::Color::Moccasin;
			this->L_Placa->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Placa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Placa->ForeColor = System::Drawing::Color::Black;
			this->L_Placa->Location = System::Drawing::Point(13, 37);
			this->L_Placa->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Placa->Name = L"L_Placa";
			this->L_Placa->Size = System::Drawing::Size(200, 37);
			this->L_Placa->TabIndex = 9;
			this->L_Placa->Text = L"Placa:";
			this->L_Placa->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Ruta
			// 
			this->TB_Ruta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Ruta->Location = System::Drawing::Point(233, 37);
			this->TB_Ruta->Margin = System::Windows::Forms::Padding(4);
			this->TB_Ruta->Name = L"TB_Ruta";
			this->TB_Ruta->Size = System::Drawing::Size(333, 34);
			this->TB_Ruta->TabIndex = 10;
			// 
			// B_Buscar
			// 
			this->B_Buscar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Buscar.BackgroundImage")));
			this->B_Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Buscar->ForeColor = System::Drawing::Color::Black;
			this->B_Buscar->Location = System::Drawing::Point(600, 31);
			this->B_Buscar->Margin = System::Windows::Forms::Padding(4);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(133, 49);
			this->B_Buscar->TabIndex = 1;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &AutobusMantenimiento::B_Buscar_Click);
			// 
			// B_Editar
			// 
			this->B_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Editar.BackgroundImage")));
			this->B_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Editar->Location = System::Drawing::Point(599, 509);
			this->B_Editar->Margin = System::Windows::Forms::Padding(4);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(133, 49);
			this->B_Editar->TabIndex = 12;
			this->B_Editar->Text = L"Editar";
			this->B_Editar->UseVisualStyleBackColor = true;
			this->B_Editar->Click += gcnew System::EventHandler(this, &AutobusMantenimiento::B_Editar_Click);
			// 
			// B_Borrar
			// 
			this->B_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Borrar.BackgroundImage")));
			this->B_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Borrar->Location = System::Drawing::Point(373, 509);
			this->B_Borrar->Margin = System::Windows::Forms::Padding(4);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(133, 49);
			this->B_Borrar->TabIndex = 11;
			this->B_Borrar->Text = L"Borrar";
			this->B_Borrar->UseVisualStyleBackColor = true;
			this->B_Borrar->Click += gcnew System::EventHandler(this, &AutobusMantenimiento::B_Borrar_Click);
			// 
			// B_Anadir
			// 
			this->B_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Anadir.BackgroundImage")));
			this->B_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Anadir->Location = System::Drawing::Point(151, 509);
			this->B_Anadir->Margin = System::Windows::Forms::Padding(4);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(133, 49);
			this->B_Anadir->TabIndex = 10;
			this->B_Anadir->Text = L"Añadir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			this->B_Anadir->Click += gcnew System::EventHandler(this, &AutobusMantenimiento::B_Anadir_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Moccasin;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(631, 9);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(411, 46);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Manteniemiento de los paraderos";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Moccasin;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(163, 48);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 37);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Autobus:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(328, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 34);
			this->textBox1->TabIndex = 6;
			// 
			// DGV_Mantenimiento
			// 
			this->DGV_Mantenimiento->AllowUserToDeleteRows = false;
			this->DGV_Mantenimiento->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Mantenimiento->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Mantenimiento->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Mantenimiento->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Mantenimiento->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->DGV_Mantenimiento->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Mantenimiento->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->Column2, this->Column3
			});
			this->DGV_Mantenimiento->EnableHeadersVisualStyles = false;
			this->DGV_Mantenimiento->Location = System::Drawing::Point(24, 119);
			this->DGV_Mantenimiento->Margin = System::Windows::Forms::Padding(4);
			this->DGV_Mantenimiento->Name = L"DGV_Mantenimiento";
			this->DGV_Mantenimiento->ReadOnly = true;
			this->DGV_Mantenimiento->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Mantenimiento->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Mantenimiento->Size = System::Drawing::Size(639, 195);
			this->DGV_Mantenimiento->TabIndex = 46;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tipo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Hora";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Fecha";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Código";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(280, 337);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 43);
			this->button1->TabIndex = 47;
			this->button1->Text = L"Ver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AutobusMantenimiento::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->DGV_Mantenimiento);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(908, 72);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(693, 410);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Mantenimientos asociados";
			// 
			// AutobusMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1661, 680);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->DGV_Autobus);
			this->Controls->Add(this->GB_Busqueda);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Anadir);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AutobusMantenimiento";
			this->Text = L"AutobusMantenimiento";
			this->Load += gcnew System::EventHandler(this, &AutobusMantenimiento::AutobusMantenimiento_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &AutobusMantenimiento::AutobusMantenimiento_SizeChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Autobus))->EndInit();
			this->GB_Busqueda->ResumeLayout(false);
			this->GB_Busqueda->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Mantenimiento))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_Busqueda->Width)) / 2;
		int PosXDGV_Empleado = ((this->ClientSize.Width) - (this->DGV_Autobus->Width)) / 2;
		this->label2->Location = System::Drawing::Point(PosXGB_Busqueda+50, 3);
		this->GB_Busqueda->Location = System::Drawing::Point(PosXGB_Busqueda-85, 65);
		this->DGV_Autobus->Location = System::Drawing::Point(PosXDGV_Empleado-290, 200);
		this->B_Anadir->Location = System::Drawing::Point(PosXDGV_Empleado-290, 455);
		this->B_Borrar->Location = System::Drawing::Point(PosXDGV_Empleado-110, 455);
		this->B_Editar->Location = System::Drawing::Point(PosXDGV_Empleado+60, 455);
		this->groupBox2->Location = System::Drawing::Point(PosXDGV_Empleado+500, 150);
	};
	private: void mostrarGrilla(List<Autobus^>^ listaBuses) {
		this->DGV_Autobus->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaBuses->Count; i++) {
			Autobus^ objBus = listaBuses[i];
			/*Esta filaGrilla representa una fila del data grid de la pantalla*/

			array<String^>^ filaGrilla = gcnew array<String^>(9);
			filaGrilla[0] = Convert::ToString(objBus->GetCodigo());
			filaGrilla[1] = objBus->GetPlaca();
			filaGrilla[2] = Convert::ToString(objBus->GetCantAsientos());
			filaGrilla[3] = Convert::ToString(objBus->GetCantPasajeros());
			filaGrilla[4] = Convert::ToString(objBus->GetCapacidad());
			filaGrilla[5] = Convert::ToString(objBus->GetX_Autobus());
			filaGrilla[6] = Convert::ToString(objBus->GetY_Autobus());
			filaGrilla[7] = Convert::ToString(objBus->GetVelocidad());

			this->DGV_Autobus->Rows->Add(filaGrilla);
		}
	}
	private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ AutobusBuscar = this->TB_Ruta->Text;
		AutobusController^ objAutobus = gcnew AutobusController();
		List<Autobus^>^ listaBuses = objAutobus->buscarAutobus(AutobusBuscar);
		// Ahora voy a mostrar las carreras encontradas en la grilla
		mostrarGrilla(listaBuses);
	}
	private: System::Void B_Anadir_Click(System::Object^ sender, System::EventArgs^ e) {
		AutobusMantenimientoAnadir^ VentanaAgregarAutobuses = gcnew AutobusMantenimientoAnadir;
		VentanaAgregarAutobuses->ShowDialog();
	}
	private: System::Void B_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->DGV_Autobus->SelectedRows->Count != 0) {
			int filaSeleccionada = this->DGV_Autobus->SelectedRows[0]->Index;
			int codigoAeliminar = Convert::ToInt32(this->DGV_Autobus->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			AutobusController^ objetoAutobusController = gcnew AutobusController;
			objetoAutobusController->EliminarAutobus(codigoAeliminar);
			List<Autobus^>^ listaAutobuses = objetoAutobusController->buscarAutobusall();
			mostrarGrilla(listaAutobuses);
		}
	}
	private: System::Void B_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->DGV_Autobus->SelectedRows->Count != 0) {
			int filaSeleccionada = this->DGV_Autobus->SelectedRows[0]->Index;
			int codigoAeditar = Convert::ToInt32(this->DGV_Autobus->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			AutobusController^ objetocontroller = gcnew AutobusController;
			Autobus^ objetoBus = objetocontroller->buscarBus(codigoAeditar);
			AutobusMantenimientoEditar^ ventanaEditar = gcnew AutobusMantenimientoEditar(objetoBus);
			ventanaEditar->ShowDialog();
		}
	}
	private: System::Void AutobusMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &AutobusMantenimiento::AutobusMantenimiento_SizeChanged));
		CentrarForm();
	}
	private: System::Void AutobusMantenimiento_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MantenimientoMantenimiento^ VentanaMantenimientoBuses = gcnew MantenimientoMantenimiento;
	VentanaMantenimientoBuses->ShowDialog();
}
};
}
