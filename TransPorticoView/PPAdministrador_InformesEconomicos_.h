#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PPAdministrador_InformesEconomicos_
	/// </summary>
	public ref class PPAdministrador_InformesEconomicos_ : public System::Windows::Forms::Form
	{
	public:
		PPAdministrador_InformesEconomicos_(void)
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
		~PPAdministrador_InformesEconomicos_()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_Datos;
	protected:
	private: System::Windows::Forms::ComboBox^ CB_Mes;
	private: System::Windows::Forms::ComboBox^ CB_Ruta;

	private: System::Windows::Forms::Label^ L_Ruta;

	private: System::Windows::Forms::ComboBox^ CB_A�o;
	private: System::Windows::Forms::Label^ L_Mes;

	private: System::Windows::Forms::Label^ L_A�o;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Button^ B_Grabar;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PPAdministrador_InformesEconomicos_::typeid));
			this->GB_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->CB_Mes = (gcnew System::Windows::Forms::ComboBox());
			this->CB_Ruta = (gcnew System::Windows::Forms::ComboBox());
			this->L_Ruta = (gcnew System::Windows::Forms::Label());
			this->CB_A�o = (gcnew System::Windows::Forms::ComboBox());
			this->L_Mes = (gcnew System::Windows::Forms::Label());
			this->L_A�o = (gcnew System::Windows::Forms::Label());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->B_Grabar = (gcnew System::Windows::Forms::Button());
			this->GB_Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// GB_Datos
			// 
			this->GB_Datos->BackColor = System::Drawing::Color::Transparent;
			this->GB_Datos->Controls->Add(this->CB_Mes);
			this->GB_Datos->Controls->Add(this->CB_Ruta);
			this->GB_Datos->Controls->Add(this->L_Ruta);
			this->GB_Datos->Controls->Add(this->CB_A�o);
			this->GB_Datos->Controls->Add(this->L_Mes);
			this->GB_Datos->Controls->Add(this->L_A�o);
			this->GB_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_Datos->ForeColor = System::Drawing::Color::White;
			this->GB_Datos->Location = System::Drawing::Point(68, 47);
			this->GB_Datos->Margin = System::Windows::Forms::Padding(4);
			this->GB_Datos->Name = L"GB_Datos";
			this->GB_Datos->Padding = System::Windows::Forms::Padding(4);
			this->GB_Datos->Size = System::Drawing::Size(605, 254);
			this->GB_Datos->TabIndex = 14;
			this->GB_Datos->TabStop = false;
			this->GB_Datos->Text = L"B�squeda";
			// 
			// CB_Mes
			// 
			this->CB_Mes->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Mes->FormattingEnabled = true;
			this->CB_Mes->Location = System::Drawing::Point(240, 121);
			this->CB_Mes->Margin = System::Windows::Forms::Padding(4);
			this->CB_Mes->Name = L"CB_Mes";
			this->CB_Mes->Size = System::Drawing::Size(332, 37);
			this->CB_Mes->TabIndex = 18;
			// 
			// CB_Ruta
			// 
			this->CB_Ruta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Ruta->FormattingEnabled = true;
			this->CB_Ruta->Location = System::Drawing::Point(240, 183);
			this->CB_Ruta->Margin = System::Windows::Forms::Padding(4);
			this->CB_Ruta->Name = L"CB_Ruta";
			this->CB_Ruta->Size = System::Drawing::Size(332, 37);
			this->CB_Ruta->TabIndex = 17;
			// 
			// L_Ruta
			// 
			this->L_Ruta->BackColor = System::Drawing::Color::Moccasin;
			this->L_Ruta->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Ruta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Ruta->ForeColor = System::Drawing::Color::Black;
			this->L_Ruta->Location = System::Drawing::Point(20, 183);
			this->L_Ruta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Ruta->Name = L"L_Ruta";
			this->L_Ruta->Size = System::Drawing::Size(200, 37);
			this->L_Ruta->TabIndex = 15;
			this->L_Ruta->Text = L"Ruta:";
			this->L_Ruta->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// CB_A�o
			// 
			this->CB_A�o->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_A�o->FormattingEnabled = true;
			this->CB_A�o->Location = System::Drawing::Point(240, 59);
			this->CB_A�o->Margin = System::Windows::Forms::Padding(4);
			this->CB_A�o->Name = L"CB_A�o";
			this->CB_A�o->Size = System::Drawing::Size(332, 37);
			this->CB_A�o->TabIndex = 11;
			this->CB_A�o->SelectedIndexChanged += gcnew System::EventHandler(this, &PPAdministrador_InformesEconomicos_::CB_A�o_SelectedIndexChanged);
			// 
			// L_Mes
			// 
			this->L_Mes->BackColor = System::Drawing::Color::Moccasin;
			this->L_Mes->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Mes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Mes->ForeColor = System::Drawing::Color::Black;
			this->L_Mes->Location = System::Drawing::Point(20, 121);
			this->L_Mes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Mes->Name = L"L_Mes";
			this->L_Mes->Size = System::Drawing::Size(200, 37);
			this->L_Mes->TabIndex = 7;
			this->L_Mes->Text = L"Mes:";
			this->L_Mes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_A�o
			// 
			this->L_A�o->BackColor = System::Drawing::Color::Moccasin;
			this->L_A�o->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_A�o->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_A�o->ForeColor = System::Drawing::Color::Black;
			this->L_A�o->Location = System::Drawing::Point(20, 58);
			this->L_A�o->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_A�o->Name = L"L_A�o";
			this->L_A�o->Size = System::Drawing::Size(200, 37);
			this->L_A�o->TabIndex = 5;
			this->L_A�o->Text = L"A�o:";
			this->L_A�o->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->Location = System::Drawing::Point(406, 373);
			this->B_Cancelar->Margin = System::Windows::Forms::Padding(4);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(133, 49);
			this->B_Cancelar->TabIndex = 13;
			this->B_Cancelar->Text = L"Regresar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			// 
			// B_Grabar
			// 
			this->B_Grabar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Grabar.BackgroundImage")));
			this->B_Grabar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->B_Grabar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Grabar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Grabar->Location = System::Drawing::Point(185, 373);
			this->B_Grabar->Margin = System::Windows::Forms::Padding(4);
			this->B_Grabar->Name = L"B_Grabar";
			this->B_Grabar->Size = System::Drawing::Size(133, 49);
			this->B_Grabar->TabIndex = 12;
			this->B_Grabar->Text = L"Ingresar";
			this->B_Grabar->UseVisualStyleBackColor = true;
			// 
			// PPAdministrador_InformesEconomicos_
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(735, 516);
			this->Controls->Add(this->GB_Datos);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->B_Grabar);
			this->DoubleBuffered = true;
			this->Name = L"PPAdministrador_InformesEconomicos_";
			this->Text = L"PPAdministrador_InformesEconomicos_";
			this->GB_Datos->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CB_A�o_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
