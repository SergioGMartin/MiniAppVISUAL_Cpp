#pragma once
#include "Inicio.h"
#include "Clientes.h"
#include "Ventas.h"
#include "Login.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			this->inicio = gcnew DinamicMenu::Inicio();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: DinamicMenu::Inicio^ inicio;
	public: System::Windows::Forms::Panel^ panel_lateral;
	protected:
	public: System::Windows::Forms::Button^ btn_ventas;
	public: System::Windows::Forms::Button^ btn_clientes;
	private: System::Windows::Forms::Button^ btn_inicio;
	private: System::Windows::Forms::Panel^ marginTop;
	private: System::Windows::Forms::Panel^ panel_container;
	public: System::Windows::Forms::Label^ label_cerrar;

	public:

	private: System::Windows::Forms::Button^ btn_entrar;
	private: System::Windows::Forms::Label^ label1;
	public:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->btn_ventas = (gcnew System::Windows::Forms::Button());
			this->btn_clientes = (gcnew System::Windows::Forms::Button());
			this->btn_inicio = (gcnew System::Windows::Forms::Button());
			this->marginTop = (gcnew System::Windows::Forms::Panel());
			this->label_cerrar = (gcnew System::Windows::Forms::Label());
			this->panel_container = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_entrar = (gcnew System::Windows::Forms::Button());
			this->panel_lateral->SuspendLayout();
			this->panel_container->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->panel_lateral->Controls->Add(this->btn_ventas);
			this->panel_lateral->Controls->Add(this->btn_clientes);
			this->panel_lateral->Controls->Add(this->btn_inicio);
			this->panel_lateral->Controls->Add(this->marginTop);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(290, 662);
			this->panel_lateral->TabIndex = 0;
			// 
			// btn_ventas
			// 
			this->btn_ventas->BackColor = System::Drawing::Color::White;
			this->btn_ventas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ventas->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ventas->Enabled = false;
			this->btn_ventas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ventas->Location = System::Drawing::Point(0, 323);
			this->btn_ventas->Name = L"btn_ventas";
			this->btn_ventas->Size = System::Drawing::Size(290, 50);
			this->btn_ventas->TabIndex = 3;
			this->btn_ventas->Text = L"Ventas";
			this->btn_ventas->UseVisualStyleBackColor = false;
			this->btn_ventas->Click += gcnew System::EventHandler(this, &Form1::btn_ventas_Click);
			// 
			// btn_clientes
			// 
			this->btn_clientes->BackColor = System::Drawing::Color::White;
			this->btn_clientes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clientes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_clientes->Enabled = false;
			this->btn_clientes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clientes->Location = System::Drawing::Point(0, 273);
			this->btn_clientes->Name = L"btn_clientes";
			this->btn_clientes->Size = System::Drawing::Size(290, 50);
			this->btn_clientes->TabIndex = 2;
			this->btn_clientes->Text = L"Clientes";
			this->btn_clientes->UseVisualStyleBackColor = false;
			this->btn_clientes->Click += gcnew System::EventHandler(this, &Form1::btn_clientes_Click);
			// 
			// btn_inicio
			// 
			this->btn_inicio->BackColor = System::Drawing::Color::White;
			this->btn_inicio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_inicio->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_inicio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_inicio->Location = System::Drawing::Point(0, 223);
			this->btn_inicio->Name = L"btn_inicio";
			this->btn_inicio->Size = System::Drawing::Size(290, 50);
			this->btn_inicio->TabIndex = 1;
			this->btn_inicio->Text = L"Inicio";
			this->btn_inicio->UseVisualStyleBackColor = false;
			this->btn_inicio->Click += gcnew System::EventHandler(this, &Form1::btn_inicio_Click);
			// 
			// marginTop
			// 
			this->marginTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->marginTop->Location = System::Drawing::Point(0, 0);
			this->marginTop->Name = L"marginTop";
			this->marginTop->Size = System::Drawing::Size(290, 223);
			this->marginTop->TabIndex = 0;
			// 
			// label_cerrar
			// 
			this->label_cerrar->AutoSize = true;
			this->label_cerrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_cerrar->ForeColor = System::Drawing::SystemColors::Info;
			this->label_cerrar->Location = System::Drawing::Point(809, 9);
			this->label_cerrar->Name = L"label_cerrar";
			this->label_cerrar->Size = System::Drawing::Size(18, 18);
			this->label_cerrar->TabIndex = 4;
			this->label_cerrar->Text = L"X";
			this->label_cerrar->Click += gcnew System::EventHandler(this, &Form1::label_cerrar_Click);
			// 
			// panel_container
			// 
			this->panel_container->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->panel_container->Controls->Add(this->label1);
			this->panel_container->Controls->Add(this->btn_entrar);
			this->panel_container->Controls->Add(this->label_cerrar);
			this->panel_container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_container->Location = System::Drawing::Point(290, 0);
			this->panel_container->Name = L"panel_container";
			this->panel_container->Size = System::Drawing::Size(839, 662);
			this->panel_container->TabIndex = 1;
			this->panel_container->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel_container_Paint);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(184, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(487, 181);
			this->label1->TabIndex = 7;
			this->label1->Text = L"BIENVENIDO";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn_entrar
			// 
			this->btn_entrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_entrar->FlatAppearance->BorderSize = 0;
			this->btn_entrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_entrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_entrar->Location = System::Drawing::Point(305, 273);
			this->btn_entrar->Name = L"btn_entrar";
			this->btn_entrar->Size = System::Drawing::Size(254, 60);
			this->btn_entrar->TabIndex = 6;
			this->btn_entrar->Text = L"Login";
			this->btn_entrar->UseVisualStyleBackColor = false;
			this->btn_entrar->Click += gcnew System::EventHandler(this, &Form1::btn_entrar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1129, 662);
			this->Controls->Add(this->panel_container);
			this->Controls->Add(this->panel_lateral);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel_lateral->ResumeLayout(false);
			this->panel_container->ResumeLayout(false);
			this->panel_container->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	template<class T>
	void openPanel(T formHijo) {
		if (this->panel_container->Controls->Count > 0) {
			for (int i = 0; i <= (this->panel_container->Controls->Count); i++) {
				this->panel_container->Controls->RemoveAt(0);
			}
		}
		formHijo->TopLevel = false;
		formHijo->Dock = DockStyle::Fill;
		this->panel_container->Controls->Add(formHijo);
		this->panel_container->Tag = formHijo;
		formHijo->Show();
	}

	private: System::Void btn_inicio_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel_container->Controls->RemoveAt(0);
		this->panel_container->Controls->Add(this->btn_entrar);
		this->panel_container->Controls->Add(this->label_cerrar);
		this->panel_container->Controls->Add(this->label1);
	}
	private: System::Void btn_clientes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel_container->Controls->RemoveAt(0);
		this->openPanel(gcnew DinamicMenu::Clientes);
	}
	private: System::Void btn_ventas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel_container->Controls->RemoveAt(0);
		this->openPanel(gcnew DinamicMenu::Ventas);
	}
	private: System::Void panel_container_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void label_cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btn_entrar_Click(System::Object^ sender, System::EventArgs^ e) {
		DinamicMenu::Login^ login = gcnew DinamicMenu::Login();
		if (this->btn_entrar->Text == "Login") {
			this->Visible = false;
			login->ShowDialog();
			if (login->log->Equals(true)) {
				this->btn_clientes->Enabled = true;
				this->btn_ventas->Enabled = true;
				this->label1->Text = "BIENVENIDO " + login->txt_login->Text;
				this->btn_entrar->Text = "Logout";
			}
			this->Visible = true;
		}
		else if (this->btn_entrar->Text == "Logout") {
			String^  nombre = this->label1->Text;
			MessageBox::Show(L"Good Bye " + nombre->Substring(11, (nombre->Length)-11));
			login->log = false;
			this->btn_clientes->Enabled = false;
			this->btn_ventas->Enabled = false;
			this->label1->Text = "BIENVENIDO";
			this->btn_entrar->Text = "Login";
		}
		
	}
};
}
