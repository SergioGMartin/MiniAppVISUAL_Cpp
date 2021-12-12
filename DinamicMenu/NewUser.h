#pragma once
#include "DB.h"

namespace DinamicMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de NewUser
	/// </summary>
	public ref class NewUser : public System::Windows::Forms::Form
	{
	public:
		NewUser(void)
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
		~NewUser()
		{
			if (components)
			{
				delete components;
			}
		}
	public: Boolean^ close = false;
	private: DB^ data;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_creer;
	protected:

	private: System::Windows::Forms::TextBox^ txt_pass;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ txt_login;
	private:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_pass2;
	public:

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label_close;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_creer = (gcnew System::Windows::Forms::Button());
			this->txt_pass = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_login = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_pass2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_close = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(345, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Login";
			this->label3->Click += gcnew System::EventHandler(this, &NewUser::label3_Click);
			// 
			// btn_creer
			// 
			this->btn_creer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_creer->FlatAppearance->BorderSize = 0;
			this->btn_creer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_creer->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_creer->Location = System::Drawing::Point(79, 376);
			this->btn_creer->Name = L"btn_creer";
			this->btn_creer->Size = System::Drawing::Size(273, 60);
			this->btn_creer->TabIndex = 16;
			this->btn_creer->Text = L"Créer compte";
			this->btn_creer->UseVisualStyleBackColor = false;
			this->btn_creer->Click += gcnew System::EventHandler(this, &NewUser::btn_creer_Click);
			// 
			// txt_pass
			// 
			this->txt_pass->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_pass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pass->Location = System::Drawing::Point(77, 180);
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->PasswordChar = '*';
			this->txt_pass->Size = System::Drawing::Size(274, 41);
			this->txt_pass->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(71, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 30);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Password";
			// 
			// txt_login
			// 
			this->txt_login->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_login->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_login->Location = System::Drawing::Point(77, 82);
			this->txt_login->Name = L"txt_login";
			this->txt_login->Size = System::Drawing::Size(274, 41);
			this->txt_login->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(71, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 30);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Username";
			// 
			// txt_pass2
			// 
			this->txt_pass2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_pass2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pass2->Location = System::Drawing::Point(77, 278);
			this->txt_pass2->Name = L"txt_pass2";
			this->txt_pass2->PasswordChar = '*';
			this->txt_pass2->Size = System::Drawing::Size(274, 41);
			this->txt_pass2->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(71, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(218, 30);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Repeat password";
			// 
			// label_close
			// 
			this->label_close->AutoSize = true;
			this->label_close->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_close->Location = System::Drawing::Point(394, 9);
			this->label_close->Name = L"label_close";
			this->label_close->Size = System::Drawing::Size(17, 17);
			this->label_close->TabIndex = 21;
			this->label_close->Text = L"X";
			this->label_close->Click += gcnew System::EventHandler(this, &NewUser::label_close_Click);
			// 
			// NewUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->ClientSize = System::Drawing::Size(423, 486);
			this->Controls->Add(this->label_close);
			this->Controls->Add(this->txt_pass2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_creer);
			this->Controls->Add(this->txt_pass);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_login);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"NewUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NewUser";
			this->Load += gcnew System::EventHandler(this, &NewUser::NewUser_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NewUser_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_creer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->txt_pass->Text == this->txt_pass2->Text) {
			data->OpenCon();
			data->AddUser(this->txt_login->Text, this->txt_pass->Text);
			data->CloseCon();
			MessageBox::Show(L"Utilisateur créé avec succès.");
			this->Close();
		}
		else {
			MessageBox::Show(L"Les mots de passe ne sont pas identiques.");
		}

	}
	private: System::Void label_close_Click(System::Object^ sender, System::EventArgs^ e) {
		close = true;
		this->Close();
	}
};
}
