#include "AddNewStaffForm.h"
#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainStaffForm
	/// </summary>
	public ref class MainStaffForm : public System::Windows::Forms::Form
	{
	public:
		MainStaffForm(void)
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
		~MainStaffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  RemoveStaffButton;
	protected:

	private: System::Windows::Forms::Button^  PasswordStaffButton;
	protected:

	private: System::Windows::Forms::Button^  AddNewStaffButton;

	private: System::Windows::Forms::Button^  MenuButton;
	private: System::Windows::Forms::GroupBox^  groupBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainStaffForm::typeid));
			this->RemoveStaffButton = (gcnew System::Windows::Forms::Button());
			this->PasswordStaffButton = (gcnew System::Windows::Forms::Button());
			this->AddNewStaffButton = (gcnew System::Windows::Forms::Button());
			this->MenuButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// RemoveStaffButton
			// 
			this->RemoveStaffButton->Location = System::Drawing::Point(45, 155);
			this->RemoveStaffButton->Name = L"RemoveStaffButton";
			this->RemoveStaffButton->Size = System::Drawing::Size(148, 47);
			this->RemoveStaffButton->TabIndex = 2;
			this->RemoveStaffButton->Text = L"Удаление пользователя";
			this->RemoveStaffButton->UseVisualStyleBackColor = true;
			// 
			// PasswordStaffButton
			// 
			this->PasswordStaffButton->Location = System::Drawing::Point(45, 85);
			this->PasswordStaffButton->Name = L"PasswordStaffButton";
			this->PasswordStaffButton->Size = System::Drawing::Size(148, 49);
			this->PasswordStaffButton->TabIndex = 1;
			this->PasswordStaffButton->Text = L"Смена пароля пользователя";
			this->PasswordStaffButton->UseVisualStyleBackColor = true;
			// 
			// AddNewStaffButton
			// 
			this->AddNewStaffButton->Location = System::Drawing::Point(45, 19);
			this->AddNewStaffButton->Name = L"AddNewStaffButton";
			this->AddNewStaffButton->Size = System::Drawing::Size(148, 49);
			this->AddNewStaffButton->TabIndex = 0;
			this->AddNewStaffButton->Text = L"Добавление нового пользователя";
			this->AddNewStaffButton->UseVisualStyleBackColor = true;
			this->AddNewStaffButton->Click += gcnew System::EventHandler(this, &MainStaffForm::AddNewStaffButton_Click);
			// 
			// MenuButton
			// 
			this->MenuButton->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->MenuButton->Location = System::Drawing::Point(12, 238);
			this->MenuButton->Name = L"MenuButton";
			this->MenuButton->Size = System::Drawing::Size(89, 33);
			this->MenuButton->TabIndex = 31;
			this->MenuButton->Text = L"<=";
			this->MenuButton->UseVisualStyleBackColor = true;
			this->MenuButton->Click += gcnew System::EventHandler(this, &MainStaffForm::MenuButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->RemoveStaffButton);
			this->groupBox1->Controls->Add(this->PasswordStaffButton);
			this->groupBox1->Controls->Add(this->AddNewStaffButton);
			this->groupBox1->Location = System::Drawing::Point(31, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(240, 218);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Действия с пользователями АИС";
			// 
			// MainStaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(294, 278);
			this->Controls->Add(this->MenuButton);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainStaffForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Управление пользователями";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MenuButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}

	private: System::Void AddNewStaffButton_Click(System::Object^  sender, System::EventArgs^  e) {
		DEMKA::AddNewStaffForm^AddNewStaffForm_obj = gcnew DEMKA::AddNewStaffForm();
		this->Hide();
		AddNewStaffForm_obj->ShowDialog();
		this->Show();
	}
};
}
