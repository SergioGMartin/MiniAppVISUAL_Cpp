#pragma once
#include "DB.h"
#include "Modificar.h"

namespace DinamicMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Clientes
	/// </summary>
	public ref class Clientes : public System::Windows::Forms::Form
	{
	public:
		Clientes(void)
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
		~Clientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::TextBox^ txt_edad;
	private: System::Windows::Forms::TextBox^ txt_carrera;
	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ data_grid;

	private: DB^ data;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Label^ label_user;
	private: System::Windows::Forms::Label^ label_cerrar;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->txt_carrera = (gcnew System::Windows::Forms::TextBox());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->label_user = (gcnew System::Windows::Forms::Label());
			this->label_cerrar = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(489, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nom";
			// 
			// txt_nombre
			// 
			this->txt_nombre->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(494, 106);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(254, 41);
			this->txt_nombre->TabIndex = 2;
			// 
			// txt_edad
			// 
			this->txt_edad->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_edad->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_edad->Location = System::Drawing::Point(494, 209);
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(254, 41);
			this->txt_edad->TabIndex = 3;
			// 
			// txt_carrera
			// 
			this->txt_carrera->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_carrera->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_carrera->Location = System::Drawing::Point(494, 316);
			this->txt_carrera->Name = L"txt_carrera";
			this->txt_carrera->Size = System::Drawing::Size(254, 41);
			this->txt_carrera->TabIndex = 4;
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_guardar->FlatAppearance->BorderSize = 0;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->Location = System::Drawing::Point(494, 452);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(254, 60);
			this->btn_guardar->TabIndex = 5;
			this->btn_guardar->Text = L"Enregistrer";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Clientes::btn_guardar_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(489, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 30);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Formation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(489, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 30);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Âge";
			// 
			// data_grid
			// 
			this->data_grid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->data_grid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_grid->Location = System::Drawing::Point(51, 72);
			this->data_grid->Name = L"data_grid";
			this->data_grid->ReadOnly = true;
			this->data_grid->RowHeadersVisible = false;
			this->data_grid->RowHeadersWidth = 51;
			this->data_grid->RowTemplate->Height = 24;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(388, 440);
			this->data_grid->TabIndex = 8;
			this->data_grid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Clientes::data_grid_CellClick);
			this->data_grid->DoubleClick += gcnew System::EventHandler(this, &Clientes::data_grid_DoubleClick);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::Orange;
			this->btn_eliminar->FlatAppearance->BorderSize = 0;
			this->btn_eliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminar->Location = System::Drawing::Point(51, 533);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(132, 39);
			this->btn_eliminar->TabIndex = 10;
			this->btn_eliminar->Text = L"Supprimer";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &Clientes::btn_eliminar_Click);
			// 
			// label_user
			// 
			this->label_user->AutoSize = true;
			this->label_user->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_user->Location = System::Drawing::Point(189, 543);
			this->label_user->Name = L"label_user";
			this->label_user->Size = System::Drawing::Size(121, 22);
			this->label_user->TabIndex = 11;
			this->label_user->Text = L"Sélectionné:";
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
			this->label_cerrar->TabIndex = 12;
			this->label_cerrar->Text = L"X";
			this->label_cerrar->Click += gcnew System::EventHandler(this, &Clientes::label_cerrar_Click);
			// 
			// Clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->ClientSize = System::Drawing::Size(821, 615);
			this->Controls->Add(this->label_cerrar);
			this->Controls->Add(this->label_user);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->data_grid);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->txt_carrera);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Clientes";
			this->Text = L"Clientes";
			this->Load += gcnew System::EventHandler(this, &Clientes::Clientes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Clientes_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta() {
		this->data->OpenCon();
		this->data_grid->DataSource = this->data->getData();
		this->data->CloseCon();
	}
	private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->OpenCon();
		this->data->AddClient(this->txt_nombre->Text, this->txt_edad->Text, this->txt_carrera->Text);
		this->data->CloseCon();
		this->vaciar();
		this->Consulta();
	}
	private: System::Void data_grid_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
		String^ edad = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
		String^ carrera = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
		DinamicMenu::Modificar^ formMod = gcnew DinamicMenu::Modificar();
		formMod->txt_nombre->Text = nombre;
		formMod->txt_edad->Text = edad;
		formMod->txt_carrera->Text = carrera;
		formMod->ShowDialog();
		DB^ data = gcnew DB();
		data->OpenCon();
		data->Modificar(formMod->txt_nombre->Text, formMod->txt_edad->Text, formMod->txt_carrera->Text, nombre);
		data->CloseCon();
		this->Consulta();
	}

	private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
		DB^ data = gcnew DB();
		data->OpenCon();
		data->Eliminar(nombre);
		data->CloseCon();
		this->Consulta();
		label_user->Text = "Sélectionné:";
	}
	private: System::Void data_grid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ nombre = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
		label_user->Text = "Sélectionné: " + nombre;
	}
	private: System::Void label_cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ParentForm->Close();
	}

	private: void vaciar() {
		this->txt_nombre->Text = "";
		this->txt_edad->Text = "";
		this->txt_carrera->Text = "";
	}
};
}
