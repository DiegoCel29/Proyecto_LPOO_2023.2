#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PPAdministrador_MantenimientoBuses
	/// </summary>
	public ref class PPAdministrador_MantenimientoBuses : public System::Windows::Forms::Form
	{
	public:
		PPAdministrador_MantenimientoBuses(void)
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
		~PPAdministrador_MantenimientoBuses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ B_Cancelar;
	protected:
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	private: System::Windows::Forms::ComboBox^ CB_Ruta;
	private: System::Windows::Forms::ComboBox^ CB_Ordenar;
	private: System::Windows::Forms::Label^ L_Ordenar;
	private: System::Windows::Forms::Label^ L_Paradero_Final;
	private: System::Windows::Forms::Button^ B_Ingresar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PPAdministrador_MantenimientoBuses::typeid));
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->CB_Ruta = (gcnew System::Windows::Forms::ComboBox());
			this->CB_Ordenar = (gcnew System::Windows::Forms::ComboBox());
			this->L_Ordenar = (gcnew System::Windows::Forms::Label());
			this->L_Paradero_Final = (gcnew System::Windows::Forms::Label());
			this->B_Ingresar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(455, 453);
			this->B_Cancelar->Margin = System::Windows::Forms::Padding(4);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(133, 49);
			this->B_Cancelar->TabIndex = 134;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->CB_Ruta);
			this->GB_Datos->Controls->Add(this->CB_Ordenar);
			this->GB_Datos->Controls->Add(this->L_Ordenar);
			this->GB_Datos->Controls->Add(this->L_Paradero_Final);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(127, 172);
			this->GB_Datos->Margin = System::Windows::Forms::Padding(4);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Padding = System::Windows::Forms::Padding(4);
			this->GB_Datos->Size = System::Drawing::Size(614, 232);
			this->GB_Datos->TabIndex = 132;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"Datos de Mantenimiento:";
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
			// CB_Ordenar
			// 
			this->CB_Ordenar->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Ordenar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Ordenar->FormattingEnabled = true;
			this->CB_Ordenar->Location = System::Drawing::Point(247, 66);
			this->CB_Ordenar->Margin = System::Windows::Forms::Padding(4);
			this->CB_Ordenar->Name = L"CB_Ordenar";
			this->CB_Ordenar->Size = System::Drawing::Size(332, 37);
			this->CB_Ordenar->TabIndex = 125;
			// 
			// L_Ordenar
			// 
			this->L_Ordenar->BackColor = System::Drawing::Color::Moccasin;
			this->L_Ordenar->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Ordenar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Ordenar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Ordenar->ForeColor = System::Drawing::Color::Black;
			this->L_Ordenar->Location = System::Drawing::Point(13, 65);
			this->L_Ordenar->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Ordenar->Name = L"L_Ordenar";
			this->L_Ordenar->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Ordenar->Size = System::Drawing::Size(213, 37);
			this->L_Ordenar->TabIndex = 111;
			this->L_Ordenar->Text = L"Ordenar:";
			this->L_Ordenar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			// B_Ingresar
			// 
			this->B_Ingresar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Ingresar.BackgroundImage")));
			this->B_Ingresar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Ingresar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Ingresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Ingresar->Location = System::Drawing::Point(251, 453);
			this->B_Ingresar->Margin = System::Windows::Forms::Padding(4);
			this->B_Ingresar->Name = L"B_Ingresar";
			this->B_Ingresar->Size = System::Drawing::Size(133, 49);
			this->B_Ingresar->TabIndex = 133;
			this->B_Ingresar->Text = L"Ingresar";
			this->B_Ingresar->UseVisualStyleBackColor = true;
			// 
			// PPAdministrador_MantenimientoBuses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(869, 675);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Ingresar);
			this->DoubleBuffered = true;
			this->Name = L"PPAdministrador_MantenimientoBuses";
			this->Text = L"PPAdministrador_MantenimientoBuses";
			this->GB_Datos->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
