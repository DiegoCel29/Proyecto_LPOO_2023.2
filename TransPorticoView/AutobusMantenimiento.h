#pragma once
#include "AutobusMantenimientoAnadir.h"
#include "AutobusMantenimientoEditar.h"
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Identificador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_RutaAsociada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGCV_ParaderoInicial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_ParaderoFinal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DGVC_Tarifa;
	private: System::Windows::Forms::GroupBox^ GB_Busqueda;
	private: System::Windows::Forms::Label^ L_Ruta;
	private: System::Windows::Forms::TextBox^ TB_Ruta;
	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::Button^ B_Editar;
	private: System::Windows::Forms::Button^ B_Borrar;
	private: System::Windows::Forms::Button^ B_Anadir;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AutobusMantenimiento::typeid));
			this->DGV_Autobus = (gcnew System::Windows::Forms::DataGridView());
			this->DGVC_Identificador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_RutaAsociada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGCV_ParaderoInicial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_ParaderoFinal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DGVC_Tarifa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GB_Busqueda = (gcnew System::Windows::Forms::GroupBox());
			this->L_Ruta = (gcnew System::Windows::Forms::Label());
			this->TB_Ruta = (gcnew System::Windows::Forms::TextBox());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->B_Editar = (gcnew System::Windows::Forms::Button());
			this->B_Borrar = (gcnew System::Windows::Forms::Button());
			this->B_Anadir = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Autobus))->BeginInit();
			this->GB_Busqueda->SuspendLayout();
			this->SuspendLayout();
			// 
			// DGV_Autobus
			// 
			this->DGV_Autobus->AllowUserToDeleteRows = false;
			this->DGV_Autobus->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGV_Autobus->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGV_Autobus->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DGV_Autobus->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::OliveDrab;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_Autobus->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->DGV_Autobus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Autobus->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->DGVC_Identificador,
					this->DGVC_RutaAsociada, this->DGCV_ParaderoInicial, this->DGVC_ParaderoFinal, this->DGVC_Tarifa
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_Autobus->DefaultCellStyle = dataGridViewCellStyle4;
			this->DGV_Autobus->EnableHeadersVisualStyles = false;
			this->DGV_Autobus->Location = System::Drawing::Point(76, 118);
			this->DGV_Autobus->Name = L"DGV_Autobus";
			this->DGV_Autobus->ReadOnly = true;
			this->DGV_Autobus->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->DGV_Autobus->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_Autobus->Size = System::Drawing::Size(783, 300);
			this->DGV_Autobus->TabIndex = 14;
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
			this->DGVC_RutaAsociada->HeaderText = L"Placa";
			this->DGVC_RutaAsociada->MinimumWidth = 6;
			this->DGVC_RutaAsociada->Name = L"DGVC_RutaAsociada";
			this->DGVC_RutaAsociada->ReadOnly = true;
			// 
			// DGCV_ParaderoInicial
			// 
			this->DGCV_ParaderoInicial->HeaderText = L"Cantidad de asientos disponibles";
			this->DGCV_ParaderoInicial->MinimumWidth = 6;
			this->DGCV_ParaderoInicial->Name = L"DGCV_ParaderoInicial";
			this->DGCV_ParaderoInicial->ReadOnly = true;
			// 
			// DGVC_ParaderoFinal
			// 
			this->DGVC_ParaderoFinal->HeaderText = L"Cantidad de pasajeros";
			this->DGVC_ParaderoFinal->MinimumWidth = 6;
			this->DGVC_ParaderoFinal->Name = L"DGVC_ParaderoFinal";
			this->DGVC_ParaderoFinal->ReadOnly = true;
			// 
			// DGVC_Tarifa
			// 
			this->DGVC_Tarifa->HeaderText = L"Capacidad";
			this->DGVC_Tarifa->MinimumWidth = 6;
			this->DGVC_Tarifa->Name = L"DGVC_Tarifa";
			this->DGVC_Tarifa->ReadOnly = true;
			// 
			// GB_Busqueda
			// 
			this->GB_Busqueda->BackColor = System::Drawing::Color::Transparent;
			this->GB_Busqueda->Controls->Add(this->L_Ruta);
			this->GB_Busqueda->Controls->Add(this->TB_Ruta);
			this->GB_Busqueda->Controls->Add(this->B_Buscar);
			this->GB_Busqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Busqueda->ForeColor = System::Drawing::Color::White;
			this->GB_Busqueda->Location = System::Drawing::Point(136, 12);
			this->GB_Busqueda->Name = L"GB_Busqueda";
			this->GB_Busqueda->Size = System::Drawing::Size(584, 91);
			this->GB_Busqueda->TabIndex = 13;
			this->GB_Busqueda->TabStop = false;
			this->GB_Busqueda->Text = L"Criterios de busqueda:";
			// 
			// L_Ruta
			// 
			this->L_Ruta->BackColor = System::Drawing::Color::Moccasin;
			this->L_Ruta->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Ruta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Ruta->ForeColor = System::Drawing::Color::Black;
			this->L_Ruta->Location = System::Drawing::Point(6, 30);
			this->L_Ruta->Name = L"L_Ruta";
			this->L_Ruta->Size = System::Drawing::Size(150, 30);
			this->L_Ruta->TabIndex = 9;
			this->L_Ruta->Text = L"Placa:";
			this->L_Ruta->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Ruta
			// 
			this->TB_Ruta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Ruta->Location = System::Drawing::Point(175, 30);
			this->TB_Ruta->Name = L"TB_Ruta";
			this->TB_Ruta->Size = System::Drawing::Size(250, 29);
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
			this->B_Buscar->Location = System::Drawing::Point(451, 25);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(100, 40);
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
			this->B_Editar->Location = System::Drawing::Point(562, 440);
			this->B_Editar->Name = L"B_Editar";
			this->B_Editar->Size = System::Drawing::Size(100, 40);
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
			this->B_Borrar->Location = System::Drawing::Point(392, 440);
			this->B_Borrar->Name = L"B_Borrar";
			this->B_Borrar->Size = System::Drawing::Size(100, 40);
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
			this->B_Anadir->Location = System::Drawing::Point(226, 440);
			this->B_Anadir->Name = L"B_Anadir";
			this->B_Anadir->Size = System::Drawing::Size(100, 40);
			this->B_Anadir->TabIndex = 10;
			this->B_Anadir->Text = L"Añadir";
			this->B_Anadir->UseVisualStyleBackColor = true;
			this->B_Anadir->Click += gcnew System::EventHandler(this, &AutobusMantenimiento::B_Anadir_Click);
			// 
			// AutobusMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(900, 492);
			this->Controls->Add(this->DGV_Autobus);
			this->Controls->Add(this->GB_Busqueda);
			this->Controls->Add(this->B_Editar);
			this->Controls->Add(this->B_Borrar);
			this->Controls->Add(this->B_Anadir);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AutobusMantenimiento";
			this->Text = L"AutobusMantenimiento";
			this->Load += gcnew System::EventHandler(this, &AutobusMantenimiento::AutobusMantenimiento_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &AutobusMantenimiento::AutobusMantenimiento_SizeChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Autobus))->EndInit();
			this->GB_Busqueda->ResumeLayout(false);
			this->GB_Busqueda->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CentrarForm() {
		int PosXGB_Busqueda = ((this->ClientSize.Width) - (this->GB_Busqueda->Width)) / 2;
		int PosXDGV_Empleado = ((this->ClientSize.Width) - (this->DGV_Autobus->Width)) / 2;
		this->GB_Busqueda->Location = System::Drawing::Point(PosXGB_Busqueda, 25);
		this->DGV_Autobus->Location = System::Drawing::Point(PosXDGV_Empleado, 130);
		this->B_Anadir->Location = System::Drawing::Point(PosXDGV_Empleado, 455);
		this->B_Borrar->Location = System::Drawing::Point(PosXDGV_Empleado + 380, 455);
		this->B_Editar->Location = System::Drawing::Point(PosXDGV_Empleado + 700, 455);
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
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	
	
	
	



//Nuevo Buscar
private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ AutobusBuscar = this->TB_Ruta->Text;
	AutobusController^ objAutobus = gcnew AutobusController();
	List<Autobus^>^ listaBuses = objAutobus->buscarAutobus(AutobusBuscar);
	// Ahora voy a mostrar las carreras encontradas en la grilla
	mostrarGrilla(listaBuses);

}
//Boton para ir a la ventana agregar
private: System::Void B_Anadir_Click(System::Object^ sender, System::EventArgs^ e) {
	AutobusMantenimientoAnadir^ VentanaAgregarAutobuses = gcnew AutobusMantenimientoAnadir;
	VentanaAgregarAutobuses->ShowDialog();
}
 //Botn para eliminar
private: System::Void B_Borrar_Click(System::Object^ sender, System::EventArgs^ e) {
	//¿Como se cual es la fila uqe he seleccionado para eliminarla?
	int filaSeleccionada = this->DGV_Autobus->SelectedRows[0]->Index;
	//Si quiero eliminar 2 seria SelectedRows[1] , 3 SelectedRows[2]
	//Ya tengo la fila que selecioné en la variable
	int codigoAeliminar = Convert::ToInt32(this->DGV_Autobus->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	//Ya tengo el codigo a eliminar
	AutobusController^ objetoAutobusController = gcnew AutobusController;
	objetoAutobusController->EliminarAutobus(codigoAeliminar);
	List<Autobus^>^ listaAutobuses = objetoAutobusController->buscarAutobusall();
	mostrarGrilla(listaAutobuses);
}
private: System::Void B_Editar_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->DGV_Autobus->SelectedRows[0]->Index;
	int codigoAeditar = Convert::ToInt32(this->DGV_Autobus->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	AutobusController^ objetocontroller = gcnew AutobusController;
	Autobus^ objetoBus = objetocontroller->buscarBus(codigoAeditar);
	AutobusMantenimientoEditar^ ventanaEditar = gcnew AutobusMantenimientoEditar(objetoBus);
	ventanaEditar->ShowDialog();
}
private: System::Void AutobusMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &AutobusMantenimiento::AutobusMantenimiento_SizeChanged));
	CentrarForm();
}
private: System::Void AutobusMantenimiento_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
};
}
