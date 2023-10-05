#pragma once
#include <stdlib.h>
#include <time.h>

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoController;

	/// <summary>
	/// Resumen de OlvidoContrasena
	/// </summary>
	public ref class OlvidoContrasena : public System::Windows::Forms::Form
	{
	public:
		OlvidoContrasena(void)
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
		~OlvidoContrasena()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ L_Info;
	private: System::Windows::Forms::Label^ L_Info2;
	private: System::Windows::Forms::Label^ L_Numero;
	private: System::Windows::Forms::TextBox^ TB_Numero;
	private: System::Windows::Forms::Button^ B_Buscar;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::TextBox^ TB_CodigoRecup;
	private: System::Windows::Forms::TextBox^ TB_Codigo;
	private: System::Windows::Forms::Label^ L_Codigo;
	private: System::Windows::Forms::Button^ B_Seguir;
	private: System::Windows::Forms::TextBox^ TB_NuevaContrasena;
	private: System::Windows::Forms::Label^ L_NuevaContrasena;
	private: System::Windows::Forms::Label^ L_RepetirContrasena;
	private: System::Windows::Forms::TextBox^ TB_RepetirContrasena;
	private: System::Windows::Forms::Button^ B_Seguir2;
	private: System::Windows::Forms::Button^ B_Cancelar2;
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
			this->L_Info = (gcnew System::Windows::Forms::Label());
			this->L_Info2 = (gcnew System::Windows::Forms::Label());
			this->L_Numero = (gcnew System::Windows::Forms::Label());
			this->TB_Numero = (gcnew System::Windows::Forms::TextBox());
			this->B_Buscar = (gcnew System::Windows::Forms::Button());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->TB_CodigoRecup = (gcnew System::Windows::Forms::TextBox());
			this->TB_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->L_Codigo = (gcnew System::Windows::Forms::Label());
			this->B_Seguir = (gcnew System::Windows::Forms::Button());
			this->TB_NuevaContrasena = (gcnew System::Windows::Forms::TextBox());
			this->L_NuevaContrasena = (gcnew System::Windows::Forms::Label());
			this->L_RepetirContrasena = (gcnew System::Windows::Forms::Label());
			this->TB_RepetirContrasena = (gcnew System::Windows::Forms::TextBox());
			this->B_Seguir2 = (gcnew System::Windows::Forms::Button());
			this->B_Cancelar2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// L_Info
			// 
			this->L_Info->BackColor = System::Drawing::Color::Transparent;
			this->L_Info->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Info->Location = System::Drawing::Point(225, 35);
			this->L_Info->Name = L"L_Info";
			this->L_Info->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Info->Size = System::Drawing::Size(340, 70);
			this->L_Info->TabIndex = 5;
			this->L_Info->Text = L"Recupera tu cuenta";
			this->L_Info->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Info2
			// 
			this->L_Info2->BackColor = System::Drawing::Color::Transparent;
			this->L_Info2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Info2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Info2->Location = System::Drawing::Point(227, 105);
			this->L_Info2->Name = L"L_Info2";
			this->L_Info2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Info2->Size = System::Drawing::Size(340, 80);
			this->L_Info2->TabIndex = 6;
			this->L_Info2->Text = L"Ingrese su número de celular, asociado, para buscar tu cuenta.";
			this->L_Info2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Numero
			// 
			this->L_Numero->BackColor = System::Drawing::Color::Transparent;
			this->L_Numero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Numero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Numero->Location = System::Drawing::Point(227, 200);
			this->L_Numero->Name = L"L_Numero";
			this->L_Numero->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Numero->Size = System::Drawing::Size(340, 30);
			this->L_Numero->TabIndex = 7;
			this->L_Numero->Text = L"Número de celular:";
			this->L_Numero->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Numero
			// 
			this->TB_Numero->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Numero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Numero->ForeColor = System::Drawing::Color::Black;
			this->TB_Numero->Location = System::Drawing::Point(227, 230);
			this->TB_Numero->Name = L"TB_Numero";
			this->TB_Numero->Size = System::Drawing::Size(340, 40);
			this->TB_Numero->TabIndex = 8;
			// 
			// B_Buscar
			// 
			this->B_Buscar->BackColor = System::Drawing::Color::DodgerBlue;
			this->B_Buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Buscar->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->B_Buscar->FlatAppearance->BorderSize = 0;
			this->B_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Buscar->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->B_Buscar->Location = System::Drawing::Point(477, 290);
			this->B_Buscar->Name = L"B_Buscar";
			this->B_Buscar->Size = System::Drawing::Size(90, 40);
			this->B_Buscar->TabIndex = 9;
			this->B_Buscar->Text = L"Buscar";
			this->B_Buscar->UseVisualStyleBackColor = false;
			this->B_Buscar->Click += gcnew System::EventHandler(this, &OlvidoContrasena::B_Buscar_Click);
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackColor = System::Drawing::Color::DodgerBlue;
			this->B_Cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->B_Cancelar->FlatAppearance->BorderSize = 0;
			this->B_Cancelar->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->B_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->B_Cancelar->Location = System::Drawing::Point(380, 290);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(90, 40);
			this->B_Cancelar->TabIndex = 10;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = false;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &OlvidoContrasena::B_Cancelar_Click);
			// 
			// TB_CodigoRecup
			// 
			this->TB_CodigoRecup->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_CodigoRecup->Enabled = false;
			this->TB_CodigoRecup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_CodigoRecup->ForeColor = System::Drawing::Color::Black;
			this->TB_CodigoRecup->Location = System::Drawing::Point(12, 12);
			this->TB_CodigoRecup->Name = L"TB_CodigoRecup";
			this->TB_CodigoRecup->Size = System::Drawing::Size(170, 40);
			this->TB_CodigoRecup->TabIndex = 11;
			this->TB_CodigoRecup->Visible = false;
			// 
			// TB_Codigo
			// 
			this->TB_Codigo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_Codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Codigo->ForeColor = System::Drawing::Color::Black;
			this->TB_Codigo->Location = System::Drawing::Point(227, 230);
			this->TB_Codigo->Name = L"TB_Codigo";
			this->TB_Codigo->Size = System::Drawing::Size(340, 40);
			this->TB_Codigo->TabIndex = 12;
			this->TB_Codigo->Visible = false;
			// 
			// L_Codigo
			// 
			this->L_Codigo->BackColor = System::Drawing::Color::Transparent;
			this->L_Codigo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Codigo->Location = System::Drawing::Point(227, 200);
			this->L_Codigo->Name = L"L_Codigo";
			this->L_Codigo->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Codigo->Size = System::Drawing::Size(340, 30);
			this->L_Codigo->TabIndex = 13;
			this->L_Codigo->Text = L"Código:";
			this->L_Codigo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_Codigo->Visible = false;
			// 
			// B_Seguir
			// 
			this->B_Seguir->BackColor = System::Drawing::Color::DodgerBlue;
			this->B_Seguir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Seguir->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->B_Seguir->FlatAppearance->BorderSize = 0;
			this->B_Seguir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Seguir->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->B_Seguir->Location = System::Drawing::Point(477, 290);
			this->B_Seguir->Name = L"B_Seguir";
			this->B_Seguir->Size = System::Drawing::Size(90, 40);
			this->B_Seguir->TabIndex = 14;
			this->B_Seguir->Text = L"Seguir";
			this->B_Seguir->UseVisualStyleBackColor = false;
			this->B_Seguir->Visible = false;
			this->B_Seguir->Click += gcnew System::EventHandler(this, &OlvidoContrasena::B_Seguir_Click);
			// 
			// TB_NuevaContrasena
			// 
			this->TB_NuevaContrasena->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_NuevaContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_NuevaContrasena->ForeColor = System::Drawing::Color::Black;
			this->TB_NuevaContrasena->Location = System::Drawing::Point(227, 230);
			this->TB_NuevaContrasena->Name = L"TB_NuevaContrasena";
			this->TB_NuevaContrasena->PasswordChar = '*';
			this->TB_NuevaContrasena->Size = System::Drawing::Size(340, 40);
			this->TB_NuevaContrasena->TabIndex = 15;
			this->TB_NuevaContrasena->Visible = false;
			// 
			// L_NuevaContrasena
			// 
			this->L_NuevaContrasena->BackColor = System::Drawing::Color::Transparent;
			this->L_NuevaContrasena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_NuevaContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_NuevaContrasena->Location = System::Drawing::Point(227, 200);
			this->L_NuevaContrasena->Name = L"L_NuevaContrasena";
			this->L_NuevaContrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_NuevaContrasena->Size = System::Drawing::Size(340, 30);
			this->L_NuevaContrasena->TabIndex = 16;
			this->L_NuevaContrasena->Text = L"Nueva contraseña:";
			this->L_NuevaContrasena->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_NuevaContrasena->Visible = false;
			// 
			// L_RepetirContrasena
			// 
			this->L_RepetirContrasena->BackColor = System::Drawing::Color::Transparent;
			this->L_RepetirContrasena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_RepetirContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_RepetirContrasena->Location = System::Drawing::Point(227, 270);
			this->L_RepetirContrasena->Name = L"L_RepetirContrasena";
			this->L_RepetirContrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_RepetirContrasena->Size = System::Drawing::Size(340, 30);
			this->L_RepetirContrasena->TabIndex = 17;
			this->L_RepetirContrasena->Text = L"Repetir contraseña:";
			this->L_RepetirContrasena->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_RepetirContrasena->Visible = false;
			// 
			// TB_RepetirContrasena
			// 
			this->TB_RepetirContrasena->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_RepetirContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_RepetirContrasena->ForeColor = System::Drawing::Color::Black;
			this->TB_RepetirContrasena->Location = System::Drawing::Point(227, 300);
			this->TB_RepetirContrasena->Name = L"TB_RepetirContrasena";
			this->TB_RepetirContrasena->PasswordChar = '*';
			this->TB_RepetirContrasena->Size = System::Drawing::Size(340, 40);
			this->TB_RepetirContrasena->TabIndex = 18;
			this->TB_RepetirContrasena->Visible = false;
			// 
			// B_Seguir2
			// 
			this->B_Seguir2->BackColor = System::Drawing::Color::DodgerBlue;
			this->B_Seguir2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Seguir2->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->B_Seguir2->FlatAppearance->BorderSize = 0;
			this->B_Seguir2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Seguir2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->B_Seguir2->Location = System::Drawing::Point(477, 360);
			this->B_Seguir2->Name = L"B_Seguir2";
			this->B_Seguir2->Size = System::Drawing::Size(90, 40);
			this->B_Seguir2->TabIndex = 19;
			this->B_Seguir2->Text = L"Seguir";
			this->B_Seguir2->UseVisualStyleBackColor = false;
			this->B_Seguir2->Visible = false;
			this->B_Seguir2->Click += gcnew System::EventHandler(this, &OlvidoContrasena::B_Seguir2_Click);
			// 
			// B_Cancelar2
			// 
			this->B_Cancelar2->BackColor = System::Drawing::Color::DodgerBlue;
			this->B_Cancelar2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Cancelar2->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->B_Cancelar2->FlatAppearance->BorderSize = 0;
			this->B_Cancelar2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->B_Cancelar2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Cancelar2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->B_Cancelar2->Location = System::Drawing::Point(380, 360);
			this->B_Cancelar2->Name = L"B_Cancelar2";
			this->B_Cancelar2->Size = System::Drawing::Size(90, 40);
			this->B_Cancelar2->TabIndex = 20;
			this->B_Cancelar2->Text = L"Cancelar";
			this->B_Cancelar2->UseVisualStyleBackColor = false;
			this->B_Cancelar2->Visible = false;
			this->B_Cancelar2->Click += gcnew System::EventHandler(this, &OlvidoContrasena::B_Cancelar2_Click);
			// 
			// OlvidoContrasena
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->B_Cancelar2);
			this->Controls->Add(this->B_Seguir2);
			this->Controls->Add(this->L_NuevaContrasena);
			this->Controls->Add(this->TB_NuevaContrasena);
			this->Controls->Add(this->B_Seguir);
			this->Controls->Add(this->L_Codigo);
			this->Controls->Add(this->TB_Codigo);
			this->Controls->Add(this->TB_CodigoRecup);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->B_Buscar);
			this->Controls->Add(this->TB_Numero);
			this->Controls->Add(this->L_Numero);
			this->Controls->Add(this->L_Info2);
			this->Controls->Add(this->L_Info);
			this->Controls->Add(this->TB_RepetirContrasena);
			this->Controls->Add(this->L_RepetirContrasena);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"OlvidoContrasena";
			this->Text = L"Recuperar Contrasena";
			this->Load += gcnew System::EventHandler(this, &OlvidoContrasena::OlvidoContrasena_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &OlvidoContrasena::OlvidoContrasena_SizeChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void CentrarForm() {
		int CentroX = (this->ClientSize.Width - TB_Numero->Width) / 2;
		this->L_Info->Location = System::Drawing::Point(CentroX, 35);
		this->L_Info2->Location = System::Drawing::Point(CentroX, 105);
		this->L_Numero->Location = System::Drawing::Point(CentroX, 200);
		this->TB_Numero->Location = System::Drawing::Point(CentroX, 230);
		this->L_Codigo->Location = System::Drawing::Point(CentroX, 200);
		this->TB_Codigo->Location = System::Drawing::Point(CentroX, 230);
		this->L_NuevaContrasena->Location = System::Drawing::Point(CentroX, 200);
		this->TB_NuevaContrasena->Location = System::Drawing::Point(CentroX, 230);
		this->L_RepetirContrasena->Location = System::Drawing::Point(CentroX, 270);
		this->TB_RepetirContrasena->Location = System::Drawing::Point(CentroX, 300);
		this->B_Cancelar->Location = System::Drawing::Point(CentroX + 153, 290);
		this->B_Cancelar2->Location = System::Drawing::Point(CentroX + 153, 360);
		this->B_Buscar->Location = System::Drawing::Point(CentroX + 250, 290);
		this->B_Seguir->Location = System::Drawing::Point(CentroX + 250, 290);
		this->B_Seguir2->Location = System::Drawing::Point(CentroX + 250, 360);
	}
	private: System::Void OlvidoContrasena_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this, &OlvidoContrasena::OlvidoContrasena_SizeChanged));
		CentrarForm();
	}
	private: System::Void OlvidoContrasena_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}

	private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void B_Cancelar2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void B_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		//Se guarda el numero a verificar
		String^ TelefonoVer = this->TB_Numero->Text;
		bool Registrado = false;
		//Se crea un controller y se busca el numero

		PasajeroController^ ObjPasajeroController = gcnew PasajeroController();
		Registrado = ObjPasajeroController->ExistePasajeroTelefono(TelefonoVer);

		if (Registrado == true) {
			srand(time(NULL));
			String^ CodigoRecup = Convert::ToString(10000 + rand() % (90000));
			this->TB_CodigoRecup->Text = CodigoRecup;
			this->L_Numero->Visible = false;
			this->TB_Numero->Visible = false;
			this->B_Buscar->Visible = false;
			this->B_Seguir->Visible = true;
			this->TB_CodigoRecup->Visible = true;
			this->L_Codigo->Visible = true;
			this->TB_Codigo->Visible = true;
			this->L_Info2->Text = "Comprueba si recibiste un mensaje de texto con tu código de 5 dígitos.";
		}
		else {
			TB_Numero->Text = "";
			MessageBox::Show("El número de celular ingresado es incorrecto.");
		}

	}
	private: System::Void B_Seguir_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->TB_Codigo->Text == this->TB_CodigoRecup->Text) {
			this->B_Seguir->Visible = false;
			this->TB_CodigoRecup->Visible = false;
			this->L_Codigo->Visible = false;
			this->TB_Codigo->Visible = false;
			this->B_Cancelar->Visible = false;
			this->L_NuevaContrasena->Visible = true;
			this->TB_NuevaContrasena->Visible = true;
			this->L_RepetirContrasena->Visible = true;
			this->TB_RepetirContrasena->Visible = true;
			this->B_Seguir2->Visible = true;
			this->B_Cancelar2->Visible = true;
			this->L_Info2->Text = "Crea una contraseña nueva de seis caracteres como mínimo.";
		}
		else {
			MessageBox::Show("El codigo de recuperacion es erroneo.");
		}
	}
	private: System::Void B_Seguir2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->TB_NuevaContrasena->Text == this->TB_RepetirContrasena->Text) {
			if ((this->TB_NuevaContrasena->Text->Length) >= 6) {

				PasajeroController^ ObjPasajeroController = gcnew PasajeroController();
				ObjPasajeroController->CambiarPasajeroContrasena(this->TB_Numero->Text, this->TB_NuevaContrasena->Text);
				MessageBox::Show("La contraseña ha sido cambiada correctamente.");
				this->Close();

			}
			else {
				MessageBox::Show("La contraseña debe ser de al menos 6 caracteres");
			}
		}
		else {
			MessageBox::Show("Las contraseñas no son identicas.");
		}
	}
};
}
