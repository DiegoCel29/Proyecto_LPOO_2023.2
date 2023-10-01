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
	private: System::Windows::Forms::Button^ B_BotonIngresar;
	protected:

	private: System::Windows::Forms::Label^ L_OlvidoContrasena;
	private: System::Windows::Forms::TextBox^ TB_DNI;
	private: System::Windows::Forms::TextBox^ TB_Contrasena;
	private: System::Windows::Forms::Label^ L_DNI;
	private: System::Windows::Forms::Label^ L_Contrasena;
	private: System::Windows::Forms::Button^ B_CrearCuenta;





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
			this->B_BotonIngresar = (gcnew System::Windows::Forms::Button());
			this->L_OlvidoContrasena = (gcnew System::Windows::Forms::Label());
			this->TB_DNI = (gcnew System::Windows::Forms::TextBox());
			this->TB_Contrasena = (gcnew System::Windows::Forms::TextBox());
			this->L_DNI = (gcnew System::Windows::Forms::Label());
			this->L_Contrasena = (gcnew System::Windows::Forms::Label());
			this->B_CrearCuenta = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// B_BotonIngresar
			// 
			this->B_BotonIngresar->BackColor = System::Drawing::Color::Yellow;
			this->B_BotonIngresar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_BotonIngresar->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->B_BotonIngresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_BotonIngresar->Location = System::Drawing::Point(12, 178);
			this->B_BotonIngresar->Name = L"B_BotonIngresar";
			this->B_BotonIngresar->Size = System::Drawing::Size(200, 40);
			this->B_BotonIngresar->TabIndex = 0;
			this->B_BotonIngresar->Text = L"Iniciar sesión";
			this->B_BotonIngresar->UseVisualStyleBackColor = false;
			this->B_BotonIngresar->Click += gcnew System::EventHandler(this, &FrmPantallaIngreso::BotonIngresar_Click);
			// 
			// L_OlvidoContrasena
			// 
			this->L_OlvidoContrasena->AutoSize = true;
			this->L_OlvidoContrasena->BackColor = System::Drawing::Color::Transparent;
			this->L_OlvidoContrasena->Cursor = System::Windows::Forms::Cursors::Hand;
			this->L_OlvidoContrasena->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->L_OlvidoContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->L_OlvidoContrasena->ForeColor = System::Drawing::Color::Blue;
			this->L_OlvidoContrasena->Location = System::Drawing::Point(13, 232);
			this->L_OlvidoContrasena->Name = L"L_OlvidoContrasena";
			this->L_OlvidoContrasena->Size = System::Drawing::Size(194, 20);
			this->L_OlvidoContrasena->TabIndex = 1;
			this->L_OlvidoContrasena->Text = L"¿Olvidaste tu contraseña\?";
			this->L_OlvidoContrasena->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->L_OlvidoContrasena->Click += gcnew System::EventHandler(this, &FrmPantallaIngreso::L_OlvidoContrasena_Click);
			this->L_OlvidoContrasena->MouseLeave += gcnew System::EventHandler(this, &FrmPantallaIngreso::L_OlvidoContrasena_MouseLeave);
			this->L_OlvidoContrasena->MouseHover += gcnew System::EventHandler(this, &FrmPantallaIngreso::L_OlvidoContrasena_MouseHover);
			// 
			// TB_DNI
			// 
			this->TB_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_DNI->ForeColor = System::Drawing::Color::Black;
			this->TB_DNI->Location = System::Drawing::Point(12, 45);
			this->TB_DNI->Name = L"TB_DNI";
			this->TB_DNI->Size = System::Drawing::Size(200, 40);
			this->TB_DNI->TabIndex = 2;
			// 
			// TB_Contrasena
			// 
			this->TB_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Contrasena->ForeColor = System::Drawing::Color::Black;
			this->TB_Contrasena->Location = System::Drawing::Point(12, 121);
			this->TB_Contrasena->Name = L"TB_Contrasena";
			this->TB_Contrasena->PasswordChar = '*';
			this->TB_Contrasena->Size = System::Drawing::Size(200, 40);
			this->TB_Contrasena->TabIndex = 3;
			// 
			// L_DNI
			// 
			this->L_DNI->BackColor = System::Drawing::Color::Transparent;
			this->L_DNI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_DNI->Location = System::Drawing::Point(12, 9);
			this->L_DNI->Name = L"L_DNI";
			this->L_DNI->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_DNI->Size = System::Drawing::Size(200, 30);
			this->L_DNI->TabIndex = 4;
			this->L_DNI->Text = L"DNI:";
			this->L_DNI->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Contrasena
			// 
			this->L_Contrasena->BackColor = System::Drawing::Color::Transparent;
			this->L_Contrasena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Contrasena->Location = System::Drawing::Point(12, 88);
			this->L_Contrasena->Name = L"L_Contrasena";
			this->L_Contrasena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Contrasena->Size = System::Drawing::Size(200, 30);
			this->L_Contrasena->TabIndex = 5;
			this->L_Contrasena->Text = L"Contraseña:";
			this->L_Contrasena->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// B_CrearCuenta
			// 
			this->B_CrearCuenta->BackColor = System::Drawing::Color::Yellow;
			this->B_CrearCuenta->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_CrearCuenta->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->B_CrearCuenta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_CrearCuenta->Location = System::Drawing::Point(12, 273);
			this->B_CrearCuenta->Name = L"B_CrearCuenta";
			this->B_CrearCuenta->Size = System::Drawing::Size(200, 40);
			this->B_CrearCuenta->TabIndex = 6;
			this->B_CrearCuenta->Text = L"Crear cuenta nueva";
			this->B_CrearCuenta->UseVisualStyleBackColor = false;
			this->B_CrearCuenta->Click += gcnew System::EventHandler(this, &FrmPantallaIngreso::B_CrearCuenta_Click);
			// 
			// FrmPantallaIngreso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(963, 540);
			this->Controls->Add(this->B_CrearCuenta);
			this->Controls->Add(this->L_Contrasena);
			this->Controls->Add(this->L_DNI);
			this->Controls->Add(this->TB_Contrasena);
			this->Controls->Add(this->TB_DNI);
			this->Controls->Add(this->L_OlvidoContrasena);
			this->Controls->Add(this->B_BotonIngresar);
			this->DoubleBuffered = true;
			this->Name = L"FrmPantallaIngreso";
			this->Text = L"FrmPantallaIngreso";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FrmPantallaIngreso::FrmPantallaIngreso_Load);
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
			MessageBox::Show("El DNI ingresado no está conectado a una cuenta.");
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
				MessageBox::Show("La contraseña ingresada es incorrecta.");
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
		this->L_DNI->Location = System::Drawing::Point(CentroX, CentroY - 130);
		this->TB_DNI->Location = System::Drawing::Point(CentroX, CentroY - 95);
		this->L_Contrasena->Location = System::Drawing::Point(CentroX, CentroY - 50);
		this->TB_Contrasena->Location = System::Drawing::Point(CentroX, CentroY - 15);
		this->B_BotonIngresar->Location = System::Drawing::Point(CentroX, CentroY + 45);
		this->L_OlvidoContrasena->Location = System::Drawing::Point(CentroX, CentroY + 85);
		this->B_CrearCuenta->Location = System::Drawing::Point(CentroX, CentroY + 135);
		
	}
	private: System::Void FrmPantallaIngreso_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SizeChanged += (gcnew System::EventHandler(this,&FrmPantallaIngreso::FrmPantallaIngreso_SizeChaged));
		CentrarForm();
	}
	private: System::Void FrmPantallaIngreso_SizeChaged(System::Object^ sender, System::EventArgs^ e) {
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
	
};
}
