#pragma once
#include "FrmPantallaAdministrador.h"
#include "OlvidoContrasena.h"
#include "CrearCuenta.h"


namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoController;

	/// <summary>
	/// Resumen de PantallaIngreso
	/// </summary>
	public ref class PantallaIngreso : public System::Windows::Forms::Form
	{
	public:
		PantallaIngreso(void)
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
		~PantallaIngreso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ B_BotonIngresar;
	protected:

	private: System::Windows::Forms::Label^ L_OlvidoContrasena;
	private: System::Windows::Forms::TextBox^ TB_DNI;
	private: System::Windows::Forms::TextBox^ TB_Contrasena;
	private: System::Windows::Forms::Label^ L_DNI;
	private: System::Windows::Forms::Label^ L_Contrasena;
	private: System::Windows::Forms::Button^ B_CrearCuenta;
	private: System::Windows::Forms::CheckedListBox^ Fondo_pequeno;
	private: System::Windows::Forms::Label^ Bienvenido;


	private: System::Windows::Forms::PictureBox^ Logo;






	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PantallaIngreso::typeid));
			this->B_BotonIngresar = (gcnew System::Windows::Forms::Button());
			this->L_OlvidoContrasena = (gcnew System::Windows::Forms::Label());
			this->TB_DNI = (gcnew System::Windows::Forms::TextBox());
			this->TB_Contrasena = (gcnew System::Windows::Forms::TextBox());
			this->L_DNI = (gcnew System::Windows::Forms::Label());
			this->L_Contrasena = (gcnew System::Windows::Forms::Label());
			this->B_CrearCuenta = (gcnew System::Windows::Forms::Button());
			this->Fondo_pequeno = (gcnew System::Windows::Forms::CheckedListBox());
			this->Bienvenido = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// B_BotonIngresar
			// 
			this->B_BotonIngresar->BackColor = System::Drawing::SystemColors::Control;
			this->B_BotonIngresar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_BotonIngresar->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->B_BotonIngresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_BotonIngresar->Location = System::Drawing::Point(540, 481);
			this->B_BotonIngresar->Margin = System::Windows::Forms::Padding(4);
			this->B_BotonIngresar->Name = L"B_BotonIngresar";
			this->B_BotonIngresar->Size = System::Drawing::Size(267, 49);
			this->B_BotonIngresar->TabIndex = 0;
			this->B_BotonIngresar->Text = L"Iniciar sesi�n";
			this->B_BotonIngresar->UseVisualStyleBackColor = false;
			this->B_BotonIngresar->Click += gcnew System::EventHandler(this, &PantallaIngreso::BotonIngresar_Click);
			// 
			// L_OlvidoContrasena
			// 
			this->L_OlvidoContrasena->AutoSize = true;
			this->L_OlvidoContrasena->BackColor = System::Drawing::Color::OldLace;
			this->L_OlvidoContrasena->Cursor = System::Windows::Forms::Cursors::Hand;
			this->L_OlvidoContrasena->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->L_OlvidoContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->L_OlvidoContrasena->ForeColor = System::Drawing::Color::Black;
			this->L_OlvidoContrasena->Location = System::Drawing::Point(549, 545);
			this->L_OlvidoContrasena->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_OlvidoContrasena->Name = L"L_OlvidoContrasena";
			this->L_OlvidoContrasena->Size = System::Drawing::Size(240, 25);
			this->L_OlvidoContrasena->TabIndex = 1;
			this->L_OlvidoContrasena->Text = L"�Olvidaste tu contrase�a\?";
			this->L_OlvidoContrasena->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->L_OlvidoContrasena->Click += gcnew System::EventHandler(this, &PantallaIngreso::L_OlvidoContrasena_Click);
			this->L_OlvidoContrasena->MouseLeave += gcnew System::EventHandler(this, &PantallaIngreso::L_OlvidoContrasena_MouseLeave);
			this->L_OlvidoContrasena->MouseHover += gcnew System::EventHandler(this, &PantallaIngreso::L_OlvidoContrasena_MouseHover);
			// 
			// TB_DNI
			// 
			this->TB_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_DNI->ForeColor = System::Drawing::Color::Black;
			this->TB_DNI->Location = System::Drawing::Point(540, 317);
			this->TB_DNI->Margin = System::Windows::Forms::Padding(4);
			this->TB_DNI->Name = L"TB_DNI";
			this->TB_DNI->Size = System::Drawing::Size(265, 49);
			this->TB_DNI->TabIndex = 2;
			// 
			// TB_Contrasena
			// 
			this->TB_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Contrasena->ForeColor = System::Drawing::Color::Black;
			this->TB_Contrasena->Location = System::Drawing::Point(540, 411);
			this->TB_Contrasena->Margin = System::Windows::Forms::Padding(4);
			this->TB_Contrasena->Name = L"TB_Contrasena";
			this->TB_Contrasena->PasswordChar = '*';
			this->TB_Contrasena->Size = System::Drawing::Size(265, 49);
			this->TB_Contrasena->TabIndex = 3;
			// 
			// L_DNI
			// 
			this->L_DNI->BackColor = System::Drawing::Color::OldLace;
			this->L_DNI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_DNI->Location = System::Drawing::Point(452, 317);
			this->L_DNI->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_DNI->Name = L"L_DNI";
			this->L_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_DNI->Size = System::Drawing::Size(80, 37);
			this->L_DNI->TabIndex = 4;
			this->L_DNI->Text = L"DNI:";
			this->L_DNI->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Contrasena
			// 
			this->L_Contrasena->BackColor = System::Drawing::Color::OldLace;
			this->L_Contrasena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Contrasena->Location = System::Drawing::Point(354, 419);
			this->L_Contrasena->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Contrasena->Name = L"L_Contrasena";
			this->L_Contrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Contrasena->Size = System::Drawing::Size(178, 37);
			this->L_Contrasena->TabIndex = 5;
			this->L_Contrasena->Text = L"Contrase�a:";
			this->L_Contrasena->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_CrearCuenta
			// 
			this->B_CrearCuenta->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_CrearCuenta->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->B_CrearCuenta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_CrearCuenta->Location = System::Drawing::Point(540, 598);
			this->B_CrearCuenta->Margin = System::Windows::Forms::Padding(4);
			this->B_CrearCuenta->Name = L"B_CrearCuenta";
			this->B_CrearCuenta->Size = System::Drawing::Size(267, 49);
			this->B_CrearCuenta->TabIndex = 6;
			this->B_CrearCuenta->Text = L"Crear cuenta nueva";
			this->B_CrearCuenta->UseVisualStyleBackColor = false;
			this->B_CrearCuenta->Click += gcnew System::EventHandler(this, &PantallaIngreso::B_CrearCuenta_Click);
			// 
			// Fondo_pequeno
			// 
			this->Fondo_pequeno->BackColor = System::Drawing::SystemColors::Control;
			this->Fondo_pequeno->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Fondo_pequeno->FormattingEnabled = true;
			this->Fondo_pequeno->Location = System::Drawing::Point(315, 21);
			this->Fondo_pequeno->Name = L"Fondo_pequeno";
			this->Fondo_pequeno->Size = System::Drawing::Size(713, 682);
			this->Fondo_pequeno->TabIndex = 7;
			this->Fondo_pequeno->SelectedIndexChanged += gcnew System::EventHandler(this, &PantallaIngreso::checkedListBox1_SelectedIndexChanged);
			// 
			// Bienvenido
			// 
			this->Bienvenido->AutoSize = true;
			this->Bienvenido->BackColor = System::Drawing::Color::OldLace;
			this->Bienvenido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bienvenido->Location = System::Drawing::Point(582, 248);
			this->Bienvenido->Name = L"Bienvenido";
			this->Bienvenido->Size = System::Drawing::Size(196, 38);
			this->Bienvenido->TabIndex = 8;
			this->Bienvenido->Text = L"�Bienvenido!";
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::SystemColors::Control;
			this->Logo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(571, 67);
			this->Logo->Margin = System::Windows::Forms::Padding(1);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(234, 164);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 9;
			this->Logo->TabStop = false;
			// 
			// PantallaIngreso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1340, 738);
			this->Controls->Add(this->TB_DNI);
			this->Controls->Add(this->TB_Contrasena);
			this->Controls->Add(this->B_BotonIngresar);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->Bienvenido);
			this->Controls->Add(this->B_CrearCuenta);
			this->Controls->Add(this->L_Contrasena);
			this->Controls->Add(this->L_DNI);
			this->Controls->Add(this->L_OlvidoContrasena);
			this->Controls->Add(this->Fondo_pequeno);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PantallaIngreso";
			this->Text = L"PantallaIngreso";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &PantallaIngreso::PantallaIngreso_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Aqui se debe de 
	private: System::Void BotonIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		bool Registrado = false;
		//Leera y guardara los datos ingresados
		String^ DNI_Ver = TB_DNI->Text;
		String^ ContrasenaVer = TB_Contrasena->Text;
		//Se define la variable que guardara a la contrasena correcta
		String^ ContrasenaCorrec;
		String^ Tipo;
		//Empezaremos a ver si el usuario existe, se creara un controller de persona
		PersonaController^ ObjPersonaController = gcnew PersonaController();

		ObjPersonaController->VerificarPersona(DNI_Ver, &ContrasenaCorrec, &Tipo, &Registrado);

		if (Registrado == false) {
			TB_DNI->Text = "";
			MessageBox::Show("El DNI ingresado no est� conectado a una cuenta.");
		}
		else {
			if (ContrasenaVer == ContrasenaCorrec) {
				if (Tipo == "Pasajero") {

				}
				else if (Tipo == "Conductor") {

				}
				else if (Tipo == "Administrador") {
					this->TB_DNI->Text = "";
					this->TB_Contrasena->Text = "";
					FrmPantallaAdministrador^ VentanaAdministrador = gcnew FrmPantallaAdministrador();
					VentanaAdministrador->Show();
					this->Hide();
				}
				else {
					MessageBox::Show("Su cuenta presenta un error, comunicarse con atencion al cliente.\n Error 401");
				}
			}
			else {
				this->TB_DNI->Text = "";
				this->TB_Contrasena->Text = "";
				MessageBox::Show("La contrase�a ingresada es incorrecta.");
			}
		}
	}
	private: System::Void L_OlvidoContrasena_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->L_OlvidoContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline));
	}
	private: System::Void L_OlvidoContrasena_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->L_OlvidoContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular));
	}
	private: System::Void CentrarForm() {
		int CentroX = (this->ClientSize.Width - L_OlvidoContrasena->Width) / 2;
		int CentroY = (this->ClientSize.Height) / 2;
		this->L_DNI->Location = System::Drawing::Point(CentroX-70, CentroY - 35);
		this->TB_DNI->Location = System::Drawing::Point(CentroX, CentroY - 35);
		this->L_Contrasena->Location = System::Drawing::Point(CentroX-140, CentroY +30);
		this->TB_Contrasena->Location = System::Drawing::Point(CentroX, CentroY + 30);
		this->B_BotonIngresar->Location = System::Drawing::Point(CentroX, CentroY + 95);
		this->L_OlvidoContrasena->Location = System::Drawing::Point(CentroX+2, CentroY + 140);
		this->B_CrearCuenta->Location = System::Drawing::Point(CentroX, CentroY + 195);
		this->Fondo_pequeno->Location = System::Drawing::Point(CentroX-175, CentroY-270);
		this->Logo->Location = System::Drawing::Point(CentroX+13, CentroY - 250);
		this->Bienvenido->Location = System::Drawing::Point(CentroX+19, CentroY - 110);
		
	}
	private: System::Void PantallaIngreso_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this,&PantallaIngreso::PantallaIngreso_SizeChaged));
		CentrarForm();
	}
	private: System::Void PantallaIngreso_SizeChaged(System::Object^ sender, System::EventArgs^ e) {
		CentrarForm();
	}
	private: System::Void L_OlvidoContrasena_Click(System::Object^ sender, System::EventArgs^ e) {
		OlvidoContrasena^ VentanaOlvidoContrasena = gcnew OlvidoContrasena();
		VentanaOlvidoContrasena->ShowDialog();
	}
	private: System::Void B_CrearCuenta_Click(System::Object^ sender, System::EventArgs^ e) {
		CrearCuenta^ VentanaCrearCuenta = gcnew CrearCuenta();
		this->Hide();
		VentanaCrearCuenta->ShowDialog();
		this->Show();
	}
	
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
