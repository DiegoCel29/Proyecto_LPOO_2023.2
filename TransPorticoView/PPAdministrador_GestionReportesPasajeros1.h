#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PPAdministrador_GestionReportesPasajeros
	/// </summary>
	public ref class PPAdministrador_GestionReportesPasajeros : public System::Windows::Forms::Form
	{
	public:
		PPAdministrador_GestionReportesPasajeros(void)
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
		~PPAdministrador_GestionReportesPasajeros()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::ComboBox^ CB_Ruta;
	protected:


	private: System::Windows::Forms::ComboBox^ CB_Mostrar;



	private: System::Windows::Forms::Label^ L_Paradero_Inicio;







	private: System::Windows::Forms::Label^ L_Paradero_Final;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Button^ B_Grabar;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PPAdministrador_GestionReportesPasajeros::typeid));
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->CB_Ruta = (gcnew System::Windows::Forms::ComboBox());
			this->CB_Mostrar = (gcnew System::Windows::Forms::ComboBox());
			this->L_Paradero_Inicio = (gcnew System::Windows::Forms::Label());
			this->L_Paradero_Final = (gcnew System::Windows::Forms::Label());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->CB_Ruta);
			this->GB_Datos->Controls->Add(this->CB_Mostrar);
			this->GB_Datos->Controls->Add(this->L_Paradero_Inicio);
			this->GB_Datos->Controls->Add(this->L_Paradero_Final);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(134, 79);
			this->GB_Datos->Margin = System::Windows::Forms::Padding(4);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Padding = System::Windows::Forms::Padding(4);
			this->GB_Datos->Size = System::Drawing::Size(614, 232);
			this->GB_Datos->TabIndex = 125;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos de Reporte:";
			// 
			// CB_Ruta
			// 
			this->CB_Ruta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Ruta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Ruta->FormattingEnabled = true;
			this->CB_Ruta->Location = System::Drawing::Point(247, 146);
			this->CB_Ruta->Margin = System::Windows::Forms::Padding(4);
			this->CB_Ruta->Name = L"CB_Ruta";
			this->CB_Ruta->Size = System::Drawing::Size(332, 37);
			this->CB_Ruta->TabIndex = 126;
			// 
			// CB_Mostrar
			// 
			this->CB_Mostrar->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Mostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Mostrar->FormattingEnabled = true;
			this->CB_Mostrar->Location = System::Drawing::Point(247, 66);
			this->CB_Mostrar->Margin = System::Windows::Forms::Padding(4);
			this->CB_Mostrar->Name = L"CB_Mostrar";
			this->CB_Mostrar->Size = System::Drawing::Size(332, 37);
			this->CB_Mostrar->TabIndex = 125;
			// 
			// L_Paradero_Inicio
			// 
			this->L_Paradero_Inicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_Paradero_Inicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Paradero_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Paradero_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Paradero_Inicio->ForeColor = System::Drawing::Color::Black;
			this->L_Paradero_Inicio->Location = System::Drawing::Point(13, 65);
			this->L_Paradero_Inicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Paradero_Inicio->Name = L"L_Paradero_Inicio";
			this->L_Paradero_Inicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Paradero_Inicio->Size = System::Drawing::Size(213, 37);
			this->L_Paradero_Inicio->TabIndex = 111;
			this->L_Paradero_Inicio->Text = L"Mostrar:";
			this->L_Paradero_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Paradero_Final
			// 
			this->L_Paradero_Final->BackColor = System::Drawing::Color::Moccasin;
			this->L_Paradero_Final->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Paradero_Final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Paradero_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Paradero_Final->ForeColor = System::Drawing::Color::Black;
			this->L_Paradero_Final->Location = System::Drawing::Point(13, 145);
			this->L_Paradero_Final->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Paradero_Final->Name = L"L_Paradero_Final";
			this->L_Paradero_Final->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Paradero_Final->Size = System::Drawing::Size(213, 37);
			this->L_Paradero_Final->TabIndex = 117;
			this->L_Paradero_Final->Text = L"Ruta:";
			this->L_Paradero_Final->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(462, 360);
			this->B_Cancelar->Margin = System::Windows::Forms::Padding(4);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(133, 49);
			this->B_Cancelar->TabIndex = 131;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			// 
			// B_Grabar
			// 
			this->B_Grabar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Grabar.BackgroundImage")));
			this->B_Grabar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Grabar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Grabar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Grabar->Location = System::Drawing::Point(258, 360);
			this->B_Grabar->Margin = System::Windows::Forms::Padding(4);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(133, 49);
			this->B_Grabar->TabIndex = 130;
			this->B_Grabar->Text = L"Grabar";
			this->B_Grabar->UseVisualStyleBackColor = true;
			// 
			// PPAdministrador_GestionReportesPasajeros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(874, 527);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Grabar);
			this->DoubleBuffered = true;
			this->Name = L"PPAdministrador_GestionReportesPasajeros";
			this->Text = L"GestionReportesPasajeros";
			this->GB_Datos->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
