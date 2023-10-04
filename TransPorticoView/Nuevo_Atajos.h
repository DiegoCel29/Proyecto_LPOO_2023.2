#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoController;
	using namespace TransPorticoModel;
	/// <summary>
	/// Resumen de Nuevo_Atajos
	/// </summary>
	public ref class Nuevo_Atajos : public System::Windows::Forms::Form
	{
	public:
		Nuevo_Atajos(void)
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
		~Nuevo_Atajos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TB_X_Final;
	protected:
	private: System::Windows::Forms::Button^ B_Crear;
	private: System::Windows::Forms::Button^ B_Cancelar;
	private: System::Windows::Forms::Label^ L_Ruta_Asociada;
	private: System::Windows::Forms::TextBox^ TB_Ruta_Asociada;
	private: System::Windows::Forms::Label^ L_Y_Final;
	private: System::Windows::Forms::TextBox^ TB_Y_Final;
	private: System::Windows::Forms::Label^ L_X_Final;
	private: System::Windows::Forms::Label^ L_Paradero_Final;
	private: System::Windows::Forms::TextBox^ TB_Paradero_Final;
	private: System::Windows::Forms::Label^ L_Y_Inicio;
	private: System::Windows::Forms::TextBox^ TB_Y_Inicio;
	private: System::Windows::Forms::Label^ L_X_Inicio;
	private: System::Windows::Forms::TextBox^ TB_X_Inicio;
	private: System::Windows::Forms::Label^ L_Paradero_Inicio;
	private: System::Windows::Forms::TextBox^ TB_Paradero_Inicio;
	private: System::Windows::Forms::Label^ L_Codigo;
	private: System::Windows::Forms::TextBox^ TB_Codigo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

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
			this->TB_X_Final = (gcnew System::Windows::Forms::TextBox());
			this->B_Crear = (gcnew System::Windows::Forms::Button());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->L_Ruta_Asociada = (gcnew System::Windows::Forms::Label());
			this->TB_Ruta_Asociada = (gcnew System::Windows::Forms::TextBox());
			this->L_Y_Final = (gcnew System::Windows::Forms::Label());
			this->TB_Y_Final = (gcnew System::Windows::Forms::TextBox());
			this->L_X_Final = (gcnew System::Windows::Forms::Label());
			this->L_Paradero_Final = (gcnew System::Windows::Forms::Label());
			this->TB_Paradero_Final = (gcnew System::Windows::Forms::TextBox());
			this->L_Y_Inicio = (gcnew System::Windows::Forms::Label());
			this->TB_Y_Inicio = (gcnew System::Windows::Forms::TextBox());
			this->L_X_Inicio = (gcnew System::Windows::Forms::Label());
			this->TB_X_Inicio = (gcnew System::Windows::Forms::TextBox());
			this->L_Paradero_Inicio = (gcnew System::Windows::Forms::Label());
			this->TB_Paradero_Inicio = (gcnew System::Windows::Forms::TextBox());
			this->L_Codigo = (gcnew System::Windows::Forms::Label());
			this->TB_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// TB_X_Final
			// 
			this->TB_X_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_X_Final->ForeColor = System::Drawing::Color::Black;
			this->TB_X_Final->Location = System::Drawing::Point(440, 367);
			this->TB_X_Final->Margin = System::Windows::Forms::Padding(4);
			this->TB_X_Final->Name = L"TB_X_Final";
			this->TB_X_Final->Size = System::Drawing::Size(265, 41);
			this->TB_X_Final->TabIndex = 105;
			// 
			// B_Crear
			// 
			this->B_Crear->BackColor = System::Drawing::Color::DodgerBlue;
			this->B_Crear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_Crear->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->B_Crear->FlatAppearance->BorderSize = 0;
			this->B_Crear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Crear->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->B_Crear->Location = System::Drawing::Point(593, 615);
			this->B_Crear->Margin = System::Windows::Forms::Padding(4);
			this->B_Crear->Name = L"B_Crear";
			this->B_Crear->Size = System::Drawing::Size(120, 49);
			this->B_Crear->TabIndex = 104;
			this->B_Crear->Text = L"Grabar";
			this->B_Crear->UseVisualStyleBackColor = false;
			this->B_Crear->Click += gcnew System::EventHandler(this, &Nuevo_Atajos::B_Crear_Click);
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
			this->B_Cancelar->Location = System::Drawing::Point(392, 615);
			this->B_Cancelar->Margin = System::Windows::Forms::Padding(4);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(120, 49);
			this->B_Cancelar->TabIndex = 103;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = false;
			// 
			// L_Ruta_Asociada
			// 
			this->L_Ruta_Asociada->BackColor = System::Drawing::Color::OldLace;
			this->L_Ruta_Asociada->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Ruta_Asociada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Ruta_Asociada->Location = System::Drawing::Point(288, 523);
			this->L_Ruta_Asociada->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Ruta_Asociada->Name = L"L_Ruta_Asociada";
			this->L_Ruta_Asociada->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Ruta_Asociada->Size = System::Drawing::Size(267, 49);
			this->L_Ruta_Asociada->TabIndex = 102;
			this->L_Ruta_Asociada->Text = L"RutaAsociada:";
			this->L_Ruta_Asociada->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Ruta_Asociada
			// 
			this->TB_Ruta_Asociada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Ruta_Asociada->ForeColor = System::Drawing::Color::Black;
			this->TB_Ruta_Asociada->Location = System::Drawing::Point(562, 523);
			this->TB_Ruta_Asociada->Margin = System::Windows::Forms::Padding(4);
			this->TB_Ruta_Asociada->Name = L"TB_Ruta_Asociada";
			this->TB_Ruta_Asociada->PasswordChar = '*';
			this->TB_Ruta_Asociada->Size = System::Drawing::Size(265, 41);
			this->TB_Ruta_Asociada->TabIndex = 101;
			// 
			// L_Y_Final
			// 
			this->L_Y_Final->BackColor = System::Drawing::Color::OldLace;
			this->L_Y_Final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Y_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Y_Final->Location = System::Drawing::Point(288, 470);
			this->L_Y_Final->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Y_Final->Name = L"L_Y_Final";
			this->L_Y_Final->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Y_Final->Size = System::Drawing::Size(267, 49);
			this->L_Y_Final->TabIndex = 100;
			this->L_Y_Final->Text = L"Y_Final:";
			this->L_Y_Final->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Y_Final
			// 
			this->TB_Y_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Y_Final->ForeColor = System::Drawing::Color::Black;
			this->TB_Y_Final->Location = System::Drawing::Point(562, 470);
			this->TB_Y_Final->Margin = System::Windows::Forms::Padding(4);
			this->TB_Y_Final->Name = L"TB_Y_Final";
			this->TB_Y_Final->Size = System::Drawing::Size(265, 41);
			this->TB_Y_Final->TabIndex = 99;
			// 
			// L_X_Final
			// 
			this->L_X_Final->BackColor = System::Drawing::Color::OldLace;
			this->L_X_Final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_X_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_X_Final->Location = System::Drawing::Point(288, 408);
			this->L_X_Final->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_X_Final->Name = L"L_X_Final";
			this->L_X_Final->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_X_Final->Size = System::Drawing::Size(267, 49);
			this->L_X_Final->TabIndex = 98;
			this->L_X_Final->Text = L"X_Final:";
			this->L_X_Final->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// L_Paradero_Final
			// 
			this->L_Paradero_Final->BackColor = System::Drawing::Color::OldLace;
			this->L_Paradero_Final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Paradero_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Paradero_Final->Location = System::Drawing::Point(288, 351);
			this->L_Paradero_Final->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Paradero_Final->Name = L"L_Paradero_Final";
			this->L_Paradero_Final->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Paradero_Final->Size = System::Drawing::Size(267, 49);
			this->L_Paradero_Final->TabIndex = 97;
			this->L_Paradero_Final->Text = L"Paradero Final:";
			this->L_Paradero_Final->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Paradero_Final
			// 
			this->TB_Paradero_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Paradero_Final->ForeColor = System::Drawing::Color::Black;
			this->TB_Paradero_Final->Location = System::Drawing::Point(562, 351);
			this->TB_Paradero_Final->Margin = System::Windows::Forms::Padding(4);
			this->TB_Paradero_Final->Name = L"TB_Paradero_Final";
			this->TB_Paradero_Final->Size = System::Drawing::Size(265, 41);
			this->TB_Paradero_Final->TabIndex = 96;
			// 
			// L_Y_Inicio
			// 
			this->L_Y_Inicio->BackColor = System::Drawing::Color::OldLace;
			this->L_Y_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Y_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Y_Inicio->Location = System::Drawing::Point(288, 295);
			this->L_Y_Inicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Y_Inicio->Name = L"L_Y_Inicio";
			this->L_Y_Inicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Y_Inicio->Size = System::Drawing::Size(267, 49);
			this->L_Y_Inicio->TabIndex = 95;
			this->L_Y_Inicio->Text = L"Y_Inicio:";
			this->L_Y_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Y_Inicio
			// 
			this->TB_Y_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Y_Inicio->ForeColor = System::Drawing::Color::Black;
			this->TB_Y_Inicio->Location = System::Drawing::Point(562, 295);
			this->TB_Y_Inicio->Margin = System::Windows::Forms::Padding(4);
			this->TB_Y_Inicio->Name = L"TB_Y_Inicio";
			this->TB_Y_Inicio->Size = System::Drawing::Size(265, 41);
			this->TB_Y_Inicio->TabIndex = 94;
			// 
			// L_X_Inicio
			// 
			this->L_X_Inicio->BackColor = System::Drawing::Color::OldLace;
			this->L_X_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_X_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_X_Inicio->Location = System::Drawing::Point(288, 228);
			this->L_X_Inicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_X_Inicio->Name = L"L_X_Inicio";
			this->L_X_Inicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_X_Inicio->Size = System::Drawing::Size(267, 49);
			this->L_X_Inicio->TabIndex = 93;
			this->L_X_Inicio->Text = L"X_Inicio:";
			this->L_X_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_X_Inicio
			// 
			this->TB_X_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_X_Inicio->ForeColor = System::Drawing::Color::Black;
			this->TB_X_Inicio->Location = System::Drawing::Point(562, 228);
			this->TB_X_Inicio->Margin = System::Windows::Forms::Padding(4);
			this->TB_X_Inicio->Name = L"TB_X_Inicio";
			this->TB_X_Inicio->Size = System::Drawing::Size(265, 41);
			this->TB_X_Inicio->TabIndex = 92;
			// 
			// L_Paradero_Inicio
			// 
			this->L_Paradero_Inicio->BackColor = System::Drawing::Color::OldLace;
			this->L_Paradero_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Paradero_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Paradero_Inicio->Location = System::Drawing::Point(288, 168);
			this->L_Paradero_Inicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Paradero_Inicio->Name = L"L_Paradero_Inicio";
			this->L_Paradero_Inicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Paradero_Inicio->Size = System::Drawing::Size(267, 49);
			this->L_Paradero_Inicio->TabIndex = 91;
			this->L_Paradero_Inicio->Text = L"Paradero de Inicio:";
			this->L_Paradero_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Paradero_Inicio
			// 
			this->TB_Paradero_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Paradero_Inicio->ForeColor = System::Drawing::Color::Black;
			this->TB_Paradero_Inicio->Location = System::Drawing::Point(562, 168);
			this->TB_Paradero_Inicio->Margin = System::Windows::Forms::Padding(4);
			this->TB_Paradero_Inicio->Name = L"TB_Paradero_Inicio";
			this->TB_Paradero_Inicio->Size = System::Drawing::Size(265, 41);
			this->TB_Paradero_Inicio->TabIndex = 90;
			// 
			// L_Codigo
			// 
			this->L_Codigo->BackColor = System::Drawing::Color::OldLace;
			this->L_Codigo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Codigo->Location = System::Drawing::Point(288, 114);
			this->L_Codigo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Codigo->Name = L"L_Codigo";
			this->L_Codigo->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Codigo->Size = System::Drawing::Size(267, 49);
			this->L_Codigo->TabIndex = 89;
			this->L_Codigo->Text = L"Codigo :";
			this->L_Codigo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TB_Codigo
			// 
			this->TB_Codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Codigo->ForeColor = System::Drawing::Color::Black;
			this->TB_Codigo->Location = System::Drawing::Point(562, 111);
			this->TB_Codigo->Margin = System::Windows::Forms::Padding(4);
			this->TB_Codigo->Name = L"TB_Codigo";
			this->TB_Codigo->Size = System::Drawing::Size(265, 41);
			this->TB_Codigo->TabIndex = 88;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkBlue;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(100, 775);
			this->panel1->TabIndex = 106;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkBlue;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(1014, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(100, 775);
			this->panel2->TabIndex = 107;
			// 
			// Nuevo_Atajos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1114, 775);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->TB_X_Final);
			this->Controls->Add(this->B_Crear);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->L_Ruta_Asociada);
			this->Controls->Add(this->TB_Ruta_Asociada);
			this->Controls->Add(this->L_Y_Final);
			this->Controls->Add(this->TB_Y_Final);
			this->Controls->Add(this->L_X_Final);
			this->Controls->Add(this->L_Paradero_Final);
			this->Controls->Add(this->TB_Paradero_Final);
			this->Controls->Add(this->L_Y_Inicio);
			this->Controls->Add(this->TB_Y_Inicio);
			this->Controls->Add(this->L_X_Inicio);
			this->Controls->Add(this->TB_X_Inicio);
			this->Controls->Add(this->L_Paradero_Inicio);
			this->Controls->Add(this->TB_Paradero_Inicio);
			this->Controls->Add(this->L_Codigo);
			this->Controls->Add(this->TB_Codigo);
			this->Name = L"Nuevo_Atajos";
			this->Text = L"Nuevo_Atajos";
			this->Load += gcnew System::EventHandler(this, &Nuevo_Atajos::Nuevo_Atajos_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Nuevo_Atajos::Nuevo_Atajos_SizeChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void CentrarForm() {
			int CentroX = (this->ClientSize.Width) / 2;
			int CentroY = (this->ClientSize.Height) / 2;
			this->L_Codigo->Location = System::Drawing::Point(CentroX - 205, 80);
			this->TB_Codigo->Location = System::Drawing::Point(CentroX + 5, 80);
			this->L_Paradero_Inicio->Location = System::Drawing::Point(CentroX - 205, 130);
			this->TB_Paradero_Inicio->Location = System::Drawing::Point(CentroX + 5, 130);
			this->L_X_Inicio->Location = System::Drawing::Point(CentroX - 205, 180);
			this->TB_X_Inicio->Location = System::Drawing::Point(CentroX + 5, 180);
			this->L_Y_Inicio->Location = System::Drawing::Point(CentroX - 205, 230);
			this->TB_Y_Inicio->Location = System::Drawing::Point(CentroX + 5, 230);
			this->L_Paradero_Final->Location = System::Drawing::Point(CentroX - 205, 280);
			this->TB_Paradero_Final->Location = System::Drawing::Point(CentroX + 5, 280);
			this->L_X_Final->Location = System::Drawing::Point(CentroX - 205, 330);
			this->TB_X_Final->Location = System::Drawing::Point(CentroX + 5, 330);
			this->L_Y_Final->Location = System::Drawing::Point(CentroX - 205, 380);
			this->TB_Y_Final->Location = System::Drawing::Point(CentroX + 5, 380);
			this->L_Ruta_Asociada->Location = System::Drawing::Point(CentroX - 205, 430);
			this->TB_Ruta_Asociada->Location = System::Drawing::Point(CentroX + 5, 430);
			this->B_Cancelar->Location = System::Drawing::Point(CentroX - 125, 480);
			this->B_Crear->Location = System::Drawing::Point(CentroX + 35, 480);
		}
	private: System::Void B_Crear_Click(System::Object^ sender, System::EventArgs^ e) {

		int codigo = Convert::ToInt32(this->TB_Codigo->Text);
		int X_Inicio = Convert::ToInt32(this->TB_X_Inicio->Text);
		int Y_Inicio = Convert::ToInt32(this->TB_Y_Inicio->Text);
		String^ Paradero_Inicio = this->TB_Paradero_Inicio->Text;
		int X_Final = Convert::ToInt32(this->TB_X_Inicio->Text);
		int Y_Final = Convert::ToInt32(this->TB_Y_Inicio->Text);
		String^ Paradero_Final = this->TB_Paradero_Final->Text;
		String^ RutaAsociada = this->TB_Ruta_Asociada->Text;

		AtajosController^ ObjAtajosController = gcnew AtajosController();
		Atajo^ ObjAtajos = gcnew Atajo(codigo,X_Inicio,Y_Inicio,Paradero_Inicio,X_Final,Y_Final,Paradero_Final,RutaAsociada);
		ObjAtajosController->agregarAtajos(ObjAtajos);

		MessageBox::Show("Atajo creada con exito.");
		this->Close();
	}

private: System::Void Nuevo_Atajos_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}

private: System::Void Nuevo_Atajos_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &Nuevo_Atajos::Nuevo_Atajos_SizeChanged));
	CentrarForm();
}
};
}
