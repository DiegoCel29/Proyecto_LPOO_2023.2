#pragma once
#include "CrearCuenta.h"
#include "Editar_Pasajero.h"
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
	/// Resumen de MantenimientoPasajero
	/// </summary>
	public ref class MantenimientoPasajero : public System::Windows::Forms::Form
	{
	public:
		MantenimientoPasajero(void)
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
		~MantenimientoPasajero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::TextBox^ TB_Nombre;
	protected:

	private: System::Windows::Forms::Label^ L_Nombre;

	private: System::Windows::Forms::GroupBox^ GB_Busqueda;
	private: System::Windows::Forms::DataGridView^ DGV_Pasajero;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Identificador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_RutaAsociada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGCV_ParaderoInicial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_ParaderoFinal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Tarifa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MantenimientoPasajero::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->TB_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->L_Nombre = (gcnew System::Windows::Forms::Label());
			this->GB_Busqueda = (gcnew System::Windows::Forms::GroupBox());
			this->DGV_Pasajero = (gcnew System::Windows::Forms::DataGridView());
			this->DGVC_Identificador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_RutaAsociada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGCV_ParaderoInicial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_ParaderoFinal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_Tarifa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->B_Editar = (gcnew System::Windows::Forms::Button());
			this->B_Borrar = (gcnew System::Windows::Forms::Button());
			this->B_Anadir = (gcnew System::Windows::Forms::Button());
			this->GB_Busqueda->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Pasajero))->BeginInit();
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
			this->B_Buscar->Location = System::Drawing::Point(574, 35);
			this->B_Buscar->Margin = System::Windows::Forms::Padding(4);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(133, 49);
			this->B_Buscar->TabIndex = 1;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = true;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &MantenimientoPasajero::B_Buscar_Click);
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
			this->L_Nombre->Text = L"Nombre: ";
			this->L_Nombre->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->GB_Busqueda->Location = System::Drawing::Point(279, 46);
			this->GB_Busqueda->Margin = System::Windows::Forms::Padding(4);
			this->GB_Busqueda->Name = L"GB_Busqueda";
			this->GB_Busqueda->Padding = System::Windows::Forms::Padding(4);
			this->GB_Busqueda->Size = System::Drawing::Size(733, 100);
			this->GB_Busqueda->TabIndex = 9;
			this->GB_Busqueda->TabStop = false;
			this->GB_Busqueda->Text = L"Criterios de busqueda:";
			// 
			// DGV_Pasajero
			// 
			this->DGV_Pasajero->AllowUserToDeleteRows = false;
			this->DGV_Pasajero->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Pasajero->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Pasajero->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Pasajero->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Pasajero->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_Pasajero->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Pasajero->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->DGVC_Identificador,
					this->DGVC_RutaAsociada, this->DGCV_ParaderoInicial, this->DGVC_ParaderoFinal, this->DGVC_Tarifa, this->Column1, this->Column2,
					this->Column3, this->Column4
			});
			this->DGV_Pasajero->EnableHeadersVisualStyles = false;
			this->DGV_Pasajero->Location = System::Drawing::Point(109, 154);
			this->DGV_Pasajero->Margin = System::Windows::Forms::Padding(4);
			this->DGV_Pasajero->Name = L"DGV_Pasajero";
			this->DGV_Pasajero->ReadOnly = true;
			this->DGV_Pasajero->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Pasajero->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Pasajero->Size = System::Drawing::Size(1123, 369);
			this->DGV_Pasajero->TabIndex = 10;
			// 
			// DGVC_Identificador
			// 
			this->DGVC_Identificador->HeaderText = L"DNI";
			this->DGVC_Identificador->MinimumWidth = 6;
			this->DGVC_Identificador->Name = L"DGVC_Identificador";
			this->DGVC_Identificador->ReadOnly = true;
			// 
			// DGVC_RutaAsociada
			// 
			this->DGVC_RutaAsociada->HeaderText = L"Nombre";
			this->DGVC_RutaAsociada->MinimumWidth = 6;
			this->DGVC_RutaAsociada->Name = L"DGVC_RutaAsociada";
			this->DGVC_RutaAsociada->ReadOnly = true;
			// 
			// DGCV_ParaderoInicial
			// 
			this->DGCV_ParaderoInicial->HeaderText = L"Apellido Paterno";
			this->DGCV_ParaderoInicial->MinimumWidth = 6;
			this->DGCV_ParaderoInicial->Name = L"DGCV_ParaderoInicial";
			this->DGCV_ParaderoInicial->ReadOnly = true;
			// 
			// DGVC_ParaderoFinal
			// 
			this->DGVC_ParaderoFinal->HeaderText = L"Apellido Materno";
			this->DGVC_ParaderoFinal->MinimumWidth = 6;
			this->DGVC_ParaderoFinal->Name = L"DGVC_ParaderoFinal";
			this->DGVC_ParaderoFinal->ReadOnly = true;
			// 
			// DGVC_Tarifa
			// 
			this->DGVC_Tarifa->HeaderText = L"Edad";
			this->DGVC_Tarifa->MinimumWidth = 6;
			this->DGVC_Tarifa->Name = L"DGVC_Tarifa";
			this->DGVC_Tarifa->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Genero";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Telefono";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Contraseña";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha de Cumpleaños";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// B_Editar
			// 
			this->B_Editar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Editar.BackgroundImage")));
			this->B_Editar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Editar->Location = System::Drawing::Point(981, 273);
			this->B_Editar->Margin = System::Windows::Forms::Padding(4);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(133, 49);
			this->B_Editar->TabIndex = 13;
			this->B_Editar->Text = L"Editar";
			this->B_Editar->UseVisualStyleBackColor = true;
			this->B_Editar->Click += gcnew System::EventHandler(this, &MantenimientoPasajero::B_Editar_Click);
			// 
			// B_Borrar
			// 
			this->B_Borrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Borrar.BackgroundImage")));
			this->B_Borrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Borrar->Location = System::Drawing::Point(608, 273);
			this->B_Borrar->Margin = System::Windows::Forms::Padding(4);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(133, 49);
			this->B_Borrar->TabIndex = 12;
			this->B_Borrar->Text = L"Borrar";
			this->B_Borrar->UseVisualStyleBackColor = true;
			this->B_Borrar->Click += gcnew System::EventHandler(this, &MantenimientoPasajero::B_Borrar_Click);
			// 
			// B_Anadir
			// 
			this->B_Anadir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Anadir.BackgroundImage")));
			this->B_Anadir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Anadir->Location = System::Drawing::Point(181, 273);
			this->B_Anadir->Margin = System::Windows::Forms::Padding(4);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(133, 49);
			this->B_Anadir->TabIndex = 11;
			this->B_Anadir->Text = L"Añadir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			this->B_Anadir->Click += gcnew System::EventHandler(this, &MantenimientoPasajero::B_Anadir_Click);
			// 
			// MantenimientoPasajero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1295, 594);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Anadir);
			this->Controls->Add(this->DGV_Pasajero);
			this->Controls->Add(this->GB_Busqueda);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MantenimientoPasajero";
			this->Text = L"MantenimientoPasajero";
			this->Load += gcnew System::EventHandler(this, &MantenimientoPasajero::MantenimientoPasajero_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MantenimientoPasajero::MantenimientoPasajero_SizeChanged);
			this->GB_Busqueda->ResumeLayout(false);
			this->GB_Busqueda->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Pasajero))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_Busqueda->Width)) / 2;
		int PosXDGV_Tarifario = ((this->ClientSize.Width) - (this->DGV_Pasajero->Width)) / 2;

		this->GB_Busqueda->Location = System::Drawing::Point(PosXGB_Busqueda, 25);
		this->DGV_Pasajero->Location = System::Drawing::Point(PosXDGV_Tarifario, 225);
		this->B_Anadir->Location = System::Drawing::Point(PosXDGV_Tarifario, 545);
		this->B_Borrar->Location = System::Drawing::Point(PosXDGV_Tarifario + 320, 545);
		this->B_Editar->Location = System::Drawing::Point(PosXDGV_Tarifario + 600, 545);
	};
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ParaderosBuscar = this->TB_Nombre->Text;
	PasajeroController^ objPasajeroController = gcnew PasajeroController();
	List<Pasajero^>^ listaPASAJEROS = objPasajeroController->BuscarPasajeros(ParaderosBuscar);
	// Ahora voy a mostrar las carreras encontradas en la grilla
	mostrarGrilla(listaPASAJEROS);
}
private: void mostrarGrilla(List<Pasajero^>^ listaPASAJEROS) {
	this->DGV_Pasajero->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaPASAJEROS->Count; i++) {
		Pasajero^ objPasajero = listaPASAJEROS[i];
		/*Esta filaGrilla representa una fila del data grid de la pantalla*/
		array<String^>^ filaGrilla = gcnew array<String^>(9);
		filaGrilla[0] = objPasajero->GetDNI_Pasajero();
		filaGrilla[1] = objPasajero->GetNombre_Pasajero();
		filaGrilla[2] = objPasajero->GetApellidoPat_Pasajero();
		filaGrilla[3] = objPasajero->GetApellidoMat_Pasajero();
		filaGrilla[4] = Convert::ToString(objPasajero->GetEdad_Pasajero());
		filaGrilla[5] = objPasajero->GetGenero_Pasajero();
		filaGrilla[6] = objPasajero->GetTelefono_Pasajero();
		filaGrilla[7] = objPasajero->GetContrasena_Pasajero();
		filaGrilla[8] = objPasajero->GetFechaNacimiento_Pasajero();
		this->DGV_Pasajero->Rows->Add(filaGrilla);
	}
}
private: System::Void MantenimientoPasajero_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &MantenimientoPasajero::MantenimientoPasajero_SizeChanged));
	CentrarForm();
}

private: System::Void B_Anadir_Click(System::Object^ sender, System::EventArgs^ e) {
	CrearCuenta^ VentanaCrearCuenta = gcnew CrearCuenta();
	VentanaCrearCuenta->ShowDialog();
	this->Show();
}

private: System::Void B_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {
	PasajeroController^ objetoPasajero;
	int filaSeleccionada = this->DGV_Pasajero->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	String^ DNI_Eliminar = this->DGV_Pasajero->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	objetoPasajero->EliminarPasajeroFisico(DNI_Eliminar);
	MessageBox::Show("El Pasajero ha sido eliminado con éxito");
}
private: System::Void B_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->DGV_Pasajero->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	String^ DNI_Editar = this->DGV_Pasajero->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	PasajeroController^ objPasajeroController = gcnew PasajeroController();
	Pasajero^ objPasajero = objPasajeroController->BuscarPasajeroDNI(DNI_Editar);
	Editar_Pasajero^ ventanaEditarPasajero = gcnew Editar_Pasajero(objPasajero);
	ventanaEditarPasajero->ShowDialog();
}
private: System::Void MantenimientoPasajero_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
};
}
//DNI, Nombre, ApellidoPat, ApellidoMat, Edad, Genero, Telefono, Contrasena,Fecha Nacimiento//