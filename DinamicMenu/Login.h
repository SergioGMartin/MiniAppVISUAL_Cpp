#pragma once
#include "DB.h"
#include "NewUser.h"

namespace DinamicMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_login;
	protected:
	private: System::Windows::Forms::TextBox^ txt_pass;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ txt_login;
	private: System::Windows::Forms::Label^ label1;
	private: DB^ data;
	public: Boolean^ log=false;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->txt_pass = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_login = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_login
			// 
			this->btn_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_login->FlatAppearance->BorderSize = 0;
			this->btn_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_login->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login->Location = System::Drawing::Point(73, 341);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(273, 60);
			this->btn_login->TabIndex = 9;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = false;
			this->btn_login->Click += gcnew System::EventHandler(this, &Login::btn_login_Click);
			// 
			// txt_pass
			// 
			this->txt_pass->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_pass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pass->Location = System::Drawing::Point(72, 218);
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->PasswordChar = '*';
			this->txt_pass->Size = System::Drawing::Size(274, 41);
			this->txt_pass->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(66, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 34);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Password";
			// 
			// txt_login
			// 
			this->txt_login->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_login->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_login->Location = System::Drawing::Point(72, 83);
			this->txt_login->Name = L"txt_login";
			this->txt_login->Size = System::Drawing::Size(274, 41);
			this->txt_login->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 34);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(358, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Accueil";
			this->label3->Click += gcnew System::EventHandler(this, &Login::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Info;
			this->label4->Location = System::Drawing::Point(129, 418);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 21);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Créer un compte";
			this->label4->Click += gcnew System::EventHandler(this, &Login::label4_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->ClientSize = System::Drawing::Size(423, 486);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_login);
			this->Controls->Add(this->txt_pass);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_login);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
		data->OpenCon();
		log = data->GetByName(this->txt_login->Text, this->txt_pass->Text);
		data->CloseCon();
		if (log->Equals(true)) {
			this->Close();
		}
		else {
			MessageBox::Show(L"Usuario incorrecto.");
		}
	}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		DinamicMenu::NewUser^ newUser = gcnew DinamicMenu::NewUser();
		this->Visible = false;
		newUser->ShowDialog();
		if (newUser->close->Equals(true)) {
			this->Close();
		}
		else {
			this->Visible = true;
		}
		
	}
};
}
