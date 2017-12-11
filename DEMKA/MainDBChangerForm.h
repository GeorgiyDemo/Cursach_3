#include "DBChangerForm.h"
#include "ContactsDBChangerForm.h"
#include "ParentsDBChangerForm.h"
#include "MainStaffForm.h"
#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainDBChangerForm
	/// </summary>
	public ref class MainDBChangerForm : public System::Windows::Forms::Form
	{
	public:
		MainDBChangerForm(void)
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
		~MainDBChangerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ParentsTableButton;
	protected:

	protected:






	private: System::Windows::Forms::Button^  ContactsTableButton;

	private: System::Windows::Forms::Button^  StudentsTableButton;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  MenuButton;
	private: System::Windows::Forms::Button^  StaffManagmentButton;
	private: System::Windows::Forms::GroupBox^  groupBox2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainDBChangerForm::typeid));
			this->ParentsTableButton = (gcnew System::Windows::Forms::Button());
			this->ContactsTableButton = (gcnew System::Windows::Forms::Button());
			this->StudentsTableButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->MenuButton = (gcnew System::Windows::Forms::Button());
			this->StaffManagmentButton = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// ParentsTableButton
			// 
			this->ParentsTableButton->Location = System::Drawing::Point(45, 153);
			this->ParentsTableButton->Name = L"ParentsTableButton";
			this->ParentsTableButton->Size = System::Drawing::Size(148, 47);
			this->ParentsTableButton->TabIndex = 2;
			this->ParentsTableButton->Text = L"Таблица \"parents\"";
			this->ParentsTableButton->UseVisualStyleBackColor = true;
			this->ParentsTableButton->Click += gcnew System::EventHandler(this, &MainDBChangerForm::ParentsTableButton_Click);
			// 
			// ContactsTableButton
			// 
			this->ContactsTableButton->Location = System::Drawing::Point(45, 85);
			this->ContactsTableButton->Name = L"ContactsTableButton";
			this->ContactsTableButton->Size = System::Drawing::Size(148, 49);
			this->ContactsTableButton->TabIndex = 1;
			this->ContactsTableButton->Text = L"Таблица \"contacts\"";
			this->ContactsTableButton->UseVisualStyleBackColor = true;
			this->ContactsTableButton->Click += gcnew System::EventHandler(this, &MainDBChangerForm::ContactsTableButton_Click);
			// 
			// StudentsTableButton
			// 
			this->StudentsTableButton->Location = System::Drawing::Point(45, 19);
			this->StudentsTableButton->Name = L"StudentsTableButton";
			this->StudentsTableButton->Size = System::Drawing::Size(148, 49);
			this->StudentsTableButton->TabIndex = 0;
			this->StudentsTableButton->Text = L"Таблица \"students\"";
			this->StudentsTableButton->UseVisualStyleBackColor = true;
			this->StudentsTableButton->Click += gcnew System::EventHandler(this, &MainDBChangerForm::StudentsTableButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ParentsTableButton);
			this->groupBox1->Controls->Add(this->ContactsTableButton);
			this->groupBox1->Controls->Add(this->StudentsTableButton);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(240, 218);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			// 
			// MenuButton
			// 
			this->MenuButton->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->MenuButton->Location = System::Drawing::Point(12, 339);
			this->MenuButton->Name = L"MenuButton";
			this->MenuButton->Size = System::Drawing::Size(89, 33);
			this->MenuButton->TabIndex = 29;
			this->MenuButton->Text = L"<=";
			this->MenuButton->UseVisualStyleBackColor = true;
			this->MenuButton->Click += gcnew System::EventHandler(this, &MainDBChangerForm::button1_Click);
			// 
			// StaffManagmentButton
			// 
			this->StaffManagmentButton->Location = System::Drawing::Point(47, 19);
			this->StaffManagmentButton->Name = L"StaffManagmentButton";
			this->StaffManagmentButton->Size = System::Drawing::Size(148, 47);
			this->StaffManagmentButton->TabIndex = 30;
			this->StaffManagmentButton->Text = L"Управление пользователями АИС";
			this->StaffManagmentButton->UseVisualStyleBackColor = true;
			this->StaffManagmentButton->Click += gcnew System::EventHandler(this, &MainDBChangerForm::StaffManagmentButton_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->StaffManagmentButton);
			this->groupBox2->Location = System::Drawing::Point(12, 239);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(240, 81);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			// 
			// MainDBChangerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(267, 390);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->MenuButton);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainDBChangerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выбор таблицы";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void StudentsTableButton_Click(System::Object^  sender, System::EventArgs^  e) {
		DEMKA::DBChangerForm^DBChangerForm_obj = gcnew DEMKA::DBChangerForm();
		this->Hide();
		DBChangerForm_obj->ShowDialog();
		this->Show();
	}
	private: System::Void ContactsTableButton_Click(System::Object^  sender, System::EventArgs^  e) {
		DEMKA::ContactsDBChangerForm^ContactsDBChangerForm_obj = gcnew DEMKA::ContactsDBChangerForm();
		this->Hide();
		ContactsDBChangerForm_obj->ShowDialog();
		this->Show();
	}
	private: System::Void ParentsTableButton_Click(System::Object^  sender, System::EventArgs^  e) {
		DEMKA::ParentsDBChangerForm^ParentsDBChangerForm_obj = gcnew DEMKA::ParentsDBChangerForm();
		this->Hide();
		ParentsDBChangerForm_obj->ShowDialog();
		this->Show();
	}
	private: System::Void StaffManagmentButton_Click(System::Object^  sender, System::EventArgs^  e) {
		DEMKA::MainStaffForm^MainStaffForm_obj = gcnew DEMKA::MainStaffForm();
		this->Hide();
		MainStaffForm_obj->ShowDialog();
		this->Show();
	}
};
}
