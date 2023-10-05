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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	protected:



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ParaderoMantenimiento::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(175, 659);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 49);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Añadir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ParaderoMantenimiento::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(453, 659);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 49);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ParaderoMantenimiento::button3_Click_1);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(757, 659);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 49);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Borrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ParaderoMantenimiento::button4_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
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
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(51, 254);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(937, 369);
			this->dataGridView1->TabIndex = 20;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ParaderoMantenimiento::dataGridView1_CellContentClick_1);
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
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(157, 86);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(733, 124);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de busqueda:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &ParaderoMantenimiento::groupBox1_Enter_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(244, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(259, 34);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ParaderoMantenimiento::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Moccasin;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(66, 60);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 37);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Nombre: ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Click += gcnew System::EventHandler(this, &ParaderoMantenimiento::label1_Click_1);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(582, 53);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ParaderoMantenimiento::button1_Click_1);
			// 
			// ParaderoMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1030, 858);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ParaderoMantenimiento";
			this->Text = L"ParaderoMantenimiento";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ParaderoMantenimiento::ParaderoMantenimiento_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &ParaderoMantenimiento::ParaderoMantenimiento_SizeChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ParaderoMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &ParaderoMantenimiento::ParaderoMantenimiento_SizeChanged));
		CentrarForm();
	}
	private: void mostrarGrilla(List<Paradero^>^ listaParadero) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaParadero->Count; i++) {
			Paradero^ objParadero = listaParadero[i];
			array<String^>^ filaGrilla = gcnew array<String^>(6);
			filaGrilla[0] = Convert::ToString(objParadero->getCodigo());
			filaGrilla[1] = objParadero->getNombre();
			filaGrilla[2] = Convert::ToString(objParadero->getX_Paradero());
			filaGrilla[3] = Convert::ToString(objParadero->getY_Paradero());
			filaGrilla[4] = Convert::ToString(objParadero->getFrecuencia());
			filaGrilla[5] = Convert::ToString(objParadero->getDistancia());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		ParaderoMantenimientoAnadir^ ventanaNuevoParadero = gcnew ParaderoMantenimientoAnadir();
		ventanaNuevoParadero->ShowDialog();
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		ParaderoController^ objParaderoController = gcnew ParaderoController();
		Paradero^ objParadero = objParaderoController->buscarParaderoxCodigo(codigoEditar);
		ParaderoMantenimientoEditar^ ventanaEditarParadero = gcnew ParaderoMantenimientoEditar(objParadero);
		ventanaEditarParadero->ShowDialog();
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		ParaderoController^ objeto;
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		objeto->eliminarParaderoFisico(codigoEliminar);
		MessageBox::Show("El paradero ha sido eliminado con éxito");
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ Nombre = this->textBox1->Text;
		ParaderoController^ objParaderoController = gcnew ParaderoController();
		objParaderoController->buscarParaderos(Nombre);
		List<Paradero^>^ listaParadero = objParaderoController->buscarParaderos(Nombre);
		mostrarGrilla(listaParadero);
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void groupBox1_Enter_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ParaderoMantenimiento_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: void CentrarForm() {
		int PosXGB_CriteriosBusqueda = ((this->ClientSize.Width) - (this->groupBox1->Width)) / 2;
		int PosXDGV_Mantenimiento = ((this->ClientSize.Width) - (this->dataGridView1->Width)) / 2;

		this->groupBox1->Location = System::Drawing::Point(PosXGB_CriteriosBusqueda, 25);
		this->dataGridView1->Location = System::Drawing::Point(PosXDGV_Mantenimiento, 225);
		this->button2->Location = System::Drawing::Point(PosXDGV_Mantenimiento, 545);
		this->button4->Location = System::Drawing::Point(PosXDGV_Mantenimiento + 320, 545);
		this->button3->Location = System::Drawing::Point(PosXDGV_Mantenimiento + 600, 545);
	};
	};
}
