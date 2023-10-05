#pragma once

namespace TransPorticoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TransPorticoModel;
	using namespace TransPorticoController;

	/// <summary>
	/// Resumen de AtajosMantenimientoEditar
	/// </summary>
	public ref class AtajosMantenimientoEditar : public System::Windows::Forms::Form
	{
	public:
		AtajosMantenimientoEditar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		AtajosMantenimientoEditar(Atajo^ objAtajos)
		{
			InitializeComponent();
			this->objAtajos = objAtajos;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~AtajosMantenimientoEditar()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

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
	private: System::Windows::Forms::TextBox^ TB_X_Final;


	private: Atajo^ objAtajos; /*Este atributo lo agregamos porque necesitamos manejar la informacion de los pasajeros*/
	private: System::Windows::Forms::Button^ B_Crear;
	private: System::Windows::Forms::Button^ B_Cancelar;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AtajosMantenimientoEditar::typeid));
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
			this->TB_X_Final = (gcnew System::Windows::Forms::TextBox());
			this->B_Crear = (gcnew System::Windows::Forms::Button());
			this->B_Cancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// L_Ruta_Asociada
			// 
			this->L_Ruta_Asociada->BackColor = System::Drawing::Color::Moccasin;
			this->L_Ruta_Asociada->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Ruta_Asociada->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Ruta_Asociada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Ruta_Asociada->Location = System::Drawing::Point(190, 440);
			this->L_Ruta_Asociada->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Ruta_Asociada->Name = L"L_Ruta_Asociada";
			this->L_Ruta_Asociada->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Ruta_Asociada->Size = System::Drawing::Size(267, 49);
			this->L_Ruta_Asociada->TabIndex = 83;
			this->L_Ruta_Asociada->Text = L"RutaAsociada:";
			this->L_Ruta_Asociada->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_Ruta_Asociada->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::L_Ruta_Asociada_Click);
			// 
			// TB_Ruta_Asociada
			// 
			this->TB_Ruta_Asociada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Ruta_Asociada->ForeColor = System::Drawing::Color::Black;
			this->TB_Ruta_Asociada->Location = System::Drawing::Point(464, 440);
			this->TB_Ruta_Asociada->Margin = System::Windows::Forms::Padding(4);
			this->TB_Ruta_Asociada->Name = L"TB_Ruta_Asociada";
			this->TB_Ruta_Asociada->Size = System::Drawing::Size(265, 41);
			this->TB_Ruta_Asociada->TabIndex = 82;
			this->TB_Ruta_Asociada->TextChanged += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::TB_Ruta_Asociada_TextChanged);
			// 
			// L_Y_Final
			// 
			this->L_Y_Final->BackColor = System::Drawing::Color::Moccasin;
			this->L_Y_Final->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Y_Final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Y_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Y_Final->Location = System::Drawing::Point(190, 387);
			this->L_Y_Final->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Y_Final->Name = L"L_Y_Final";
			this->L_Y_Final->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Y_Final->Size = System::Drawing::Size(267, 49);
			this->L_Y_Final->TabIndex = 81;
			this->L_Y_Final->Text = L"Y_Final:";
			this->L_Y_Final->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_Y_Final->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::L_Y_Final_Click);
			// 
			// TB_Y_Final
			// 
			this->TB_Y_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Y_Final->ForeColor = System::Drawing::Color::Black;
			this->TB_Y_Final->Location = System::Drawing::Point(464, 387);
			this->TB_Y_Final->Margin = System::Windows::Forms::Padding(4);
			this->TB_Y_Final->Name = L"TB_Y_Final";
			this->TB_Y_Final->Size = System::Drawing::Size(265, 41);
			this->TB_Y_Final->TabIndex = 80;
			this->TB_Y_Final->TextChanged += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::TB_Y_Final_TextChanged);
			// 
			// L_X_Final
			// 
			this->L_X_Final->BackColor = System::Drawing::Color::Moccasin;
			this->L_X_Final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_X_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_X_Final->Location = System::Drawing::Point(190, 325);
			this->L_X_Final->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_X_Final->Name = L"L_X_Final";
			this->L_X_Final->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_X_Final->Size = System::Drawing::Size(267, 49);
			this->L_X_Final->TabIndex = 79;
			this->L_X_Final->Text = L"X_Final:";
			this->L_X_Final->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_X_Final->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::L_X_Final_Click);
			// 
			// L_Paradero_Final
			// 
			this->L_Paradero_Final->BackColor = System::Drawing::Color::Moccasin;
			this->L_Paradero_Final->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Paradero_Final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Paradero_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Paradero_Final->Location = System::Drawing::Point(190, 268);
			this->L_Paradero_Final->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Paradero_Final->Name = L"L_Paradero_Final";
			this->L_Paradero_Final->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Paradero_Final->Size = System::Drawing::Size(267, 49);
			this->L_Paradero_Final->TabIndex = 78;
			this->L_Paradero_Final->Text = L"Paradero Final:";
			this->L_Paradero_Final->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_Paradero_Final->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::L_Paradero_Final_Click);
			// 
			// TB_Paradero_Final
			// 
			this->TB_Paradero_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Paradero_Final->ForeColor = System::Drawing::Color::Black;
			this->TB_Paradero_Final->Location = System::Drawing::Point(464, 268);
			this->TB_Paradero_Final->Margin = System::Windows::Forms::Padding(4);
			this->TB_Paradero_Final->Name = L"TB_Paradero_Final";
			this->TB_Paradero_Final->Size = System::Drawing::Size(265, 41);
			this->TB_Paradero_Final->TabIndex = 77;
			this->TB_Paradero_Final->TextChanged += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::TB_Paradero_Final_TextChanged);
			// 
			// L_Y_Inicio
			// 
			this->L_Y_Inicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_Y_Inicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Y_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Y_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Y_Inicio->Location = System::Drawing::Point(190, 212);
			this->L_Y_Inicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Y_Inicio->Name = L"L_Y_Inicio";
			this->L_Y_Inicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Y_Inicio->Size = System::Drawing::Size(267, 49);
			this->L_Y_Inicio->TabIndex = 76;
			this->L_Y_Inicio->Text = L"Y_Inicio:";
			this->L_Y_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_Y_Inicio->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::L_Y_Inicio_Click);
			// 
			// TB_Y_Inicio
			// 
			this->TB_Y_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Y_Inicio->ForeColor = System::Drawing::Color::Black;
			this->TB_Y_Inicio->Location = System::Drawing::Point(464, 212);
			this->TB_Y_Inicio->Margin = System::Windows::Forms::Padding(4);
			this->TB_Y_Inicio->Name = L"TB_Y_Inicio";
			this->TB_Y_Inicio->Size = System::Drawing::Size(265, 41);
			this->TB_Y_Inicio->TabIndex = 75;
			this->TB_Y_Inicio->TextChanged += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::TB_Y_Inicio_TextChanged);
			// 
			// L_X_Inicio
			// 
			this->L_X_Inicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_X_Inicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_X_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_X_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_X_Inicio->Location = System::Drawing::Point(190, 145);
			this->L_X_Inicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_X_Inicio->Name = L"L_X_Inicio";
			this->L_X_Inicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_X_Inicio->Size = System::Drawing::Size(267, 49);
			this->L_X_Inicio->TabIndex = 74;
			this->L_X_Inicio->Text = L"X_Inicio:";
			this->L_X_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_X_Inicio->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::L_X_Inicio_Click);
			// 
			// TB_X_Inicio
			// 
			this->TB_X_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_X_Inicio->ForeColor = System::Drawing::Color::Black;
			this->TB_X_Inicio->Location = System::Drawing::Point(464, 145);
			this->TB_X_Inicio->Margin = System::Windows::Forms::Padding(4);
			this->TB_X_Inicio->Name = L"TB_X_Inicio";
			this->TB_X_Inicio->Size = System::Drawing::Size(265, 41);
			this->TB_X_Inicio->TabIndex = 73;
			this->TB_X_Inicio->TextChanged += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::TB_X_Inicio_TextChanged);
			// 
			// L_Paradero_Inicio
			// 
			this->L_Paradero_Inicio->BackColor = System::Drawing::Color::Moccasin;
			this->L_Paradero_Inicio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Paradero_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Paradero_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_Paradero_Inicio->Location = System::Drawing::Point(190, 85);
			this->L_Paradero_Inicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Paradero_Inicio->Name = L"L_Paradero_Inicio";
			this->L_Paradero_Inicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Paradero_Inicio->Size = System::Drawing::Size(267, 49);
			this->L_Paradero_Inicio->TabIndex = 72;
			this->L_Paradero_Inicio->Text = L"Paradero de Inicio:";
			this->L_Paradero_Inicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_Paradero_Inicio->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::L_Paradero_Inicio_Click);
			// 
			// TB_Paradero_Inicio
			// 
			this->TB_Paradero_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Paradero_Inicio->ForeColor = System::Drawing::Color::Black;
			this->TB_Paradero_Inicio->Location = System::Drawing::Point(464, 85);
			this->TB_Paradero_Inicio->Margin = System::Windows::Forms::Padding(4);
			this->TB_Paradero_Inicio->Name = L"TB_Paradero_Inicio";
			this->TB_Paradero_Inicio->Size = System::Drawing::Size(265, 41);
			this->TB_Paradero_Inicio->TabIndex = 71;
			this->TB_Paradero_Inicio->TextChanged += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::TB_Paradero_Inicio_TextChanged);
			// 
			// L_Codigo
			// 
			this->L_Codigo->BackColor = System::Drawing::Color::Moccasin;
			this->L_Codigo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L_Codigo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L_Codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Codigo->Location = System::Drawing::Point(190, 31);
			this->L_Codigo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_Codigo->Name = L"L_Codigo";
			this->L_Codigo->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->L_Codigo->Size = System::Drawing::Size(267, 49);
			this->L_Codigo->TabIndex = 70;
			this->L_Codigo->Text = L"Codigo :";
			this->L_Codigo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->L_Codigo->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::L_Codigo_Click);
			// 
			// TB_Codigo
			// 
			this->TB_Codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Codigo->ForeColor = System::Drawing::Color::Black;
			this->TB_Codigo->Location = System::Drawing::Point(464, 28);
			this->TB_Codigo->Margin = System::Windows::Forms::Padding(4);
			this->TB_Codigo->Name = L"TB_Codigo";
			this->TB_Codigo->Size = System::Drawing::Size(265, 41);
			this->TB_Codigo->TabIndex = 69;
			this->TB_Codigo->TextChanged += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::TB_Codigo_TextChanged);
			// 
			// TB_X_Final
			// 
			this->TB_X_Final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_X_Final->ForeColor = System::Drawing::Color::Black;
			this->TB_X_Final->Location = System::Drawing::Point(342, 284);
			this->TB_X_Final->Margin = System::Windows::Forms::Padding(4);
			this->TB_X_Final->Name = L"TB_X_Final";
			this->TB_X_Final->Size = System::Drawing::Size(265, 41);
			this->TB_X_Final->TabIndex = 87;
			this->TB_X_Final->TextChanged += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::TB_X_Final_TextChanged);
			// 
			// B_Crear
			// 
			this->B_Crear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Crear.BackgroundImage")));
			this->B_Crear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->B_Crear->Location = System::Drawing::Point(407, 298);
			this->B_Crear->Name = L"B_Crear";
			this->B_Crear->Size = System::Drawing::Size(135, 39);
			this->B_Crear->TabIndex = 109;
			this->B_Crear->Text = L"Grabar";
			this->B_Crear->UseVisualStyleBackColor = true;
			this->B_Crear->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::B_Crear_Click_1);
			// 
			// B_Cancelar
			// 
			this->B_Cancelar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B_Cancelar.BackgroundImage")));
			this->B_Cancelar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->B_Cancelar->Location = System::Drawing::Point(407, 272);
			this->B_Cancelar->Name = L"B_Cancelar";
			this->B_Cancelar->Size = System::Drawing::Size(135, 39);
			this->B_Cancelar->TabIndex = 108;
			this->B_Cancelar->Text = L"Cancelar";
			this->B_Cancelar->UseVisualStyleBackColor = true;
			this->B_Cancelar->Click += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::B_Cancelar_Click_1);
			// 
			// AtajosMantenimientoEditar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1009, 674);
			this->Controls->Add(this->B_Crear);
			this->Controls->Add(this->B_Cancelar);
			this->Controls->Add(this->TB_X_Final);
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
			this->Name = L"AtajosMantenimientoEditar";
			this->Text = L"AtajosMantenimientoEditar";
			this->Load += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::AtajosMantenimientoEditar_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &AtajosMantenimientoEditar::AtajosMantenimientoEditar_SizeChanged);
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

private: System::Void B_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void AtajosMantenimientoEditar_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	CentrarForm();
}
private: System::Void AtajosMantenimientoEditar_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SizeChanged += (gcnew System::EventHandler(this, &AtajosMantenimientoEditar::AtajosMantenimientoEditar_SizeChanged));
	CentrarForm();
	this->TB_Codigo->Text = Convert::ToString(this->objAtajos->getCodigo_A());
	this->TB_X_Inicio->Text = Convert::ToString(this->objAtajos->getX_Inicio());
	this->TB_Y_Inicio->Text = Convert::ToString(this->objAtajos->getY_Inicio());
	this->TB_Paradero_Inicio->Text = this->objAtajos->getParadero_Inicio();
	this->TB_X_Final->Text = Convert::ToString(this->objAtajos->getX_Final());
	this->TB_Y_Final->Text = Convert::ToString(this->objAtajos->getY_Final());
	this->TB_Paradero_Final->Text = this->objAtajos->getParadero_Final();
	this->TB_Ruta_Asociada->Text = this->objAtajos->getRutaAsociada();
}
private: System::Void TB_Y_Inicio_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void L_Ruta_Asociada_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TB_Ruta_Asociada_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void L_Y_Final_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TB_Y_Final_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void L_X_Final_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void L_Paradero_Final_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TB_Paradero_Final_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void L_Y_Inicio_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TB_X_Final_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void L_X_Inicio_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TB_X_Inicio_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void L_Paradero_Inicio_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TB_Paradero_Inicio_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void L_Codigo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TB_Codigo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void B_Crear_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int codigo = Convert::ToInt32(this->TB_Codigo->Text);
	int X_Inicio = Convert::ToInt32(this->TB_X_Inicio->Text);
	int Y_Inicio = Convert::ToInt32(this->TB_Y_Inicio->Text);
	String^ Paradero_Inicio = this->TB_Paradero_Inicio->Text;
	int X_Final = Convert::ToInt32(this->TB_X_Inicio->Text);
	int Y_Final = Convert::ToInt32(this->TB_Y_Inicio->Text);
	String^ Paradero_Final = this->TB_Paradero_Final->Text;
	String^ RutaAsociada = this->TB_Ruta_Asociada->Text;
	Atajo^ objAtajo = gcnew Atajo(codigo, X_Inicio, Y_Inicio, Paradero_Inicio, X_Final, Y_Final, Paradero_Final, RutaAsociada);
	AtajosController^ objAtajosController = gcnew AtajosController();
	objAtajosController->actualizarAtajos(objAtajo);
	MessageBox::Show("Los atajos han sido actualizados con exito");
	this->Close();
}

private: System::Void B_Cancelar_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}