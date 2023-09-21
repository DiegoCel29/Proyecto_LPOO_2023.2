#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmMantenimientoPersona
	/// </summary>
	public ref class FrmMantenimientoPersona : public System::Windows::Forms::Form
	{
	public:
		FrmMantenimientoPersona(void)
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
		~FrmMantenimientoPersona()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Label^ LabelNombre;


	private: System::Windows::Forms::TextBox^ TB_Tipo;
	private: System::Windows::Forms::Button^ Boton_Buscar;
	private: System::Windows::Forms::DataGridView^ DGV_BuzonSugerencias;
	private: System::Windows::Forms::Button^ Boton_Anadir;
	private: System::Windows::Forms::Button^ Boton_Borrar;
	private: System::Windows::Forms::Button^ Boton_Editar;




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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->LabelNombre = (gcnew System::Windows::Forms::Label());
			this->TB_Tipo = (gcnew System::Windows::Forms::TextBox());
			this->Boton_Buscar = (gcnew System::Windows::Forms::Button());
			this->DGV_BuzonSugerencias = (gcnew System::Windows::Forms::DataGridView());
			this->Boton_Anadir = (gcnew System::Windows::Forms::Button());
			this->Boton_Borrar = (gcnew System::Windows::Forms::Button());
			this->Boton_Editar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BuzonSugerencias))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(887, 445);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &FrmMantenimientoPersona::listView1_SelectedIndexChanged);
			// 
			// LabelNombre
			// 
			this->LabelNombre->AutoSize = true;
			this->LabelNombre->BackColor = System::Drawing::Color::White;
			this->LabelNombre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LabelNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelNombre->Location = System::Drawing::Point(40, 30);
			this->LabelNombre->Name = L"LabelNombre";
			this->LabelNombre->Size = System::Drawing::Size(59, 16);
			this->LabelNombre->TabIndex = 1;
			this->LabelNombre->Text = L"Nombre:";
			// 
			// TB_Tipo
			// 
			this->TB_Tipo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Tipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Tipo->Location = System::Drawing::Point(120, 30);
			this->TB_Tipo->Name = L"TB_Tipo";
			this->TB_Tipo->Size = System::Drawing::Size(150, 22);
			this->TB_Tipo->TabIndex = 2;
			// 
			// Boton_Buscar
			// 
			this->Boton_Buscar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Boton_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Buscar->Location = System::Drawing::Point(300, 30);
			this->Boton_Buscar->Name = L"Boton_Buscar";
			this->Boton_Buscar->Size = System::Drawing::Size(75, 23);
			this->Boton_Buscar->TabIndex = 0;
			this->Boton_Buscar->Text = L"Buscar";
			this->Boton_Buscar->UseVisualStyleBackColor = false;
			// 
			// DGV_BuzonSugerencias
			// 
			this->DGV_BuzonSugerencias->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_BuzonSugerencias->Location = System::Drawing::Point(43, 100);
			this->DGV_BuzonSugerencias->Name = L"DGV_BuzonSugerencias";
			this->DGV_BuzonSugerencias->Size = System::Drawing::Size(825, 312);
			this->DGV_BuzonSugerencias->TabIndex = 3;
			// 
			// Boton_Anadir
			// 
			this->Boton_Anadir->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Boton_Anadir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Anadir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Anadir->Location = System::Drawing::Point(337, 418);
			this->Boton_Anadir->Name = L"Boton_Anadir";
			this->Boton_Anadir->Size = System::Drawing::Size(75, 23);
			this->Boton_Anadir->TabIndex = 4;
			this->Boton_Anadir->Text = L"Añadir";
			this->Boton_Anadir->UseVisualStyleBackColor = false;
			// 
			// Boton_Borrar
			// 
			this->Boton_Borrar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Boton_Borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Borrar->Location = System::Drawing::Point(418, 418);
			this->Boton_Borrar->Name = L"Boton_Borrar";
			this->Boton_Borrar->Size = System::Drawing::Size(75, 23);
			this->Boton_Borrar->TabIndex = 5;
			this->Boton_Borrar->Text = L"Borrar";
			this->Boton_Borrar->UseVisualStyleBackColor = false;
			// 
			// Boton_Editar
			// 
			this->Boton_Editar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Boton_Editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boton_Editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Editar->Location = System::Drawing::Point(499, 418);
			this->Boton_Editar->Name = L"Boton_Editar";
			this->Boton_Editar->Size = System::Drawing::Size(75, 23);
			this->Boton_Editar->TabIndex = 6;
			this->Boton_Editar->Text = L"Editar";
			this->Boton_Editar->UseVisualStyleBackColor = false;
			// 
			// FrmMantenimientoPersona
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 469);
			this->Controls->Add(this->Boton_Editar);
			this->Controls->Add(this->Boton_Borrar);
			this->Controls->Add(this->Boton_Anadir);
			this->Controls->Add(this->DGV_BuzonSugerencias);
			this->Controls->Add(this->Boton_Buscar);
			this->Controls->Add(this->TB_Tipo);
			this->Controls->Add(this->LabelNombre);
			this->Controls->Add(this->listView1);
			this->Name = L"FrmMantenimientoPersona";
			this->Text = L"FrmMantenimientoPersona";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BuzonSugerencias))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

