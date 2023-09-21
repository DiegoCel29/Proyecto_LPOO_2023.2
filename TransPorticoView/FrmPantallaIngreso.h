#pragma once
#include "FrmPantallaAdministrador.h"

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmPantallaIngreso
	/// </summary>
	public ref class FrmPantallaIngreso : public System::Windows::Forms::Form
	{
	public:
		FrmPantallaIngreso(void)
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
		~FrmPantallaIngreso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BotonIngresar;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmPantallaIngreso::typeid));
			this->BotonIngresar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BotonIngresar
			// 
			this->BotonIngresar->BackColor = System::Drawing::Color::Yellow;
			this->BotonIngresar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotonIngresar->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->BotonIngresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotonIngresar->Location = System::Drawing::Point(381, 450);
			this->BotonIngresar->Name = L"BotonIngresar";
			this->BotonIngresar->Size = System::Drawing::Size(200, 30);
			this->BotonIngresar->TabIndex = 0;
			this->BotonIngresar->Text = L"INICIAR SESION";
			this->BotonIngresar->UseVisualStyleBackColor = false;
			this->BotonIngresar->Click += gcnew System::EventHandler(this, &FrmPantallaIngreso::BotonIngresar_Click);
			// 
			// FrmPantallaIngreso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(963, 540);
			this->Controls->Add(this->BotonIngresar);
			this->DoubleBuffered = true;
			this->Name = L"FrmPantallaIngreso";
			this->Text = L"FrmPantallaIngreso";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BotonIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmPantallaAdministrador^ VentanaAdministrador = gcnew FrmPantallaAdministrador();
		VentanaAdministrador->Show();
		this->Hide();
	}
	};
}
