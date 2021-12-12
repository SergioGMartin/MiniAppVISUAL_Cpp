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
	/// Description résumée de Modificar
	/// </summary>
	public ref class Modificar : public System::Windows::Forms::Form
	{
	public:
		Modificar(void)
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
		~Modificar()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ txt_nombre;
	public: System::Windows::Forms::TextBox^ txt_edad;
	public: System::Windows::Forms::TextBox^ txt_carrera;
	protected:
	private: DB^ data;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::Button^ btn_cancelar;

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
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->txt_carrera = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			this->txt_nombre->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(231, 81);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(254, 41);
			this->txt_nombre->TabIndex = 3;
			// 
			// txt_edad
			// 
			this->txt_edad->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_edad->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_edad->Location = System::Drawing::Point(231, 162);
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(254, 41);
			this->txt_edad->TabIndex = 4;
			// 
			// txt_carrera
			// 
			this->txt_carrera->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_carrera->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_carrera->Location = System::Drawing::Point(231, 245);
			this->txt_carrera->Name = L"txt_carrera";
			this->txt_carrera->Size = System::Drawing::Size(254, 41);
			this->txt_carrera->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(92, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 30);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(92, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 30);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Âge";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(92, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 30);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Formation";
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->btn_guardar->FlatAppearance->BorderSize = 0;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->Location = System::Drawing::Point(104, 351);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(162, 39);
			this->btn_guardar->TabIndex = 9;
			this->btn_guardar->Text = L"Enregistrer";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Modificar::btn_guardar_Click);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::OrangeRed;
			this->btn_cancelar->FlatAppearance->BorderSize = 0;
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->Location = System::Drawing::Point(323, 351);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(162, 39);
			this->btn_cancelar->TabIndex = 10;
			this->btn_cancelar->Text = L"Annuler";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &Modificar::btn_cancelar_Click);
			// 
			// Modificar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->ClientSize = System::Drawing::Size(594, 481);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_carrera);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->txt_nombre);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Modifier";
			this->Text = L"Modifier";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(L"Modifié avec succès.");
		this->Close();
	}
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

};
}
