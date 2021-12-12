#pragma once

namespace DinamicMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	//private: Form^ padre;





	private: System::Windows::Forms::Label^ label_cerrar;
	private: System::Windows::Forms::Button^ btn_entrar;
	protected:

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
			this->label_cerrar = (gcnew System::Windows::Forms::Label());
			this->btn_entrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_cerrar
			// 
			this->label_cerrar->AutoSize = true;
			this->label_cerrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_cerrar->ForeColor = System::Drawing::SystemColors::Info;
			this->label_cerrar->Location = System::Drawing::Point(791, 9);
			this->label_cerrar->Name = L"label_cerrar";
			this->label_cerrar->Size = System::Drawing::Size(18, 18);
			this->label_cerrar->TabIndex = 13;
			this->label_cerrar->Text = L"X";
			this->label_cerrar->Click += gcnew System::EventHandler(this, &Inicio::label_cerrar_Click);
			// 
			// btn_entrar
			// 
			this->btn_entrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_entrar->FlatAppearance->BorderSize = 0;
			this->btn_entrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_entrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_entrar->Location = System::Drawing::Point(283, 277);
			this->btn_entrar->Name = L"btn_entrar";
			this->btn_entrar->Size = System::Drawing::Size(254, 60);
			this->btn_entrar->TabIndex = 14;
			this->btn_entrar->Text = L"Acceder";
			this->btn_entrar->UseVisualStyleBackColor = false;
			this->btn_entrar->Click += gcnew System::EventHandler(this, &Inicio::btn_entrar_Click);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->ClientSize = System::Drawing::Size(821, 615);
			this->Controls->Add(this->btn_entrar);
			this->Controls->Add(this->label_cerrar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Inicio_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label_cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ParentForm->Close();
	}
	public: System::Void btn_entrar_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
