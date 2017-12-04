#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ContactsDBChangerForm
	/// </summary>
	public ref class ContactsDBChangerForm : public System::Windows::Forms::Form
	{
	public:
		ContactsDBChangerForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ContactsDBChangerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  UpdateBDButton;
	protected:
	private: System::Windows::Forms::Button^  AddDBButton;
	private: System::Windows::Forms::Button^  RemoveBDButton;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  ExitButton;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ContactsDBChangerForm::typeid));
			this->UpdateBDButton = (gcnew System::Windows::Forms::Button());
			this->AddDBButton = (gcnew System::Windows::Forms::Button());
			this->RemoveBDButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// UpdateBDButton
			// 
			this->UpdateBDButton->Location = System::Drawing::Point(781, 318);
			this->UpdateBDButton->Name = L"UpdateBDButton";
			this->UpdateBDButton->Size = System::Drawing::Size(122, 40);
			this->UpdateBDButton->TabIndex = 9;
			this->UpdateBDButton->Text = L"Обновление БД";
			this->UpdateBDButton->UseVisualStyleBackColor = true;
			// 
			// AddDBButton
			// 
			this->AddDBButton->Location = System::Drawing::Point(629, 318);
			this->AddDBButton->Name = L"AddDBButton";
			this->AddDBButton->Size = System::Drawing::Size(122, 40);
			this->AddDBButton->TabIndex = 8;
			this->AddDBButton->Text = L"Добавление в БД";
			this->AddDBButton->UseVisualStyleBackColor = true;
			// 
			// RemoveBDButton
			// 
			this->RemoveBDButton->Location = System::Drawing::Point(479, 318);
			this->RemoveBDButton->Name = L"RemoveBDButton";
			this->RemoveBDButton->Size = System::Drawing::Size(122, 40);
			this->RemoveBDButton->TabIndex = 7;
			this->RemoveBDButton->Text = L"Удаление из БД";
			this->RemoveBDButton->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Menu;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(935, 270);
			this->dataGridView1->TabIndex = 6;
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 318);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(105, 40);
			this->ExitButton->TabIndex = 5;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &ContactsDBChangerForm::ExitButton_Click);
			// 
			// ContactsDBChangerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(935, 380);
			this->Controls->Add(this->UpdateBDButton);
			this->Controls->Add(this->AddDBButton);
			this->Controls->Add(this->RemoveBDButton);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->ExitButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ContactsDBChangerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Изменение данных таблицы contacts";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
};
}
