#include <msclr\marshal_cppstd.h>
#include "ParentsContactForm.h"
#include "GlobalClass.h"
#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace System::Text;
	using namespace Globals;

	/// <summary>
	/// ������ ��� MoreStudentInfoForm
	/// </summary>
	public ref class MoreStudentInfoForm : public System::Windows::Forms::Form
	{
	public:
		MoreStudentInfoForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MoreStudentInfoForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;

	protected:




	private: System::Windows::Forms::Button^  NextButton;




	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  AdressBox;
	private: System::Windows::Forms::TextBox^  EmailBox;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  ExitButton;






	private: System::Windows::Forms::TextBox^  PhoneBox;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MoreStudentInfoForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->PhoneBox = (gcnew System::Windows::Forms::TextBox());
			this->AdressBox = (gcnew System::Windows::Forms::TextBox());
			this->EmailBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�����:";
			// 
			// NextButton
			// 
			this->NextButton->Location = System::Drawing::Point(183, 147);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(125, 43);
			this->NextButton->TabIndex = 20;
			this->NextButton->Text = L"=>";
			this->NextButton->UseVisualStyleBackColor = true;
			this->NextButton->Click += gcnew System::EventHandler(this, &MoreStudentInfoForm::NextButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->PhoneBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->AdressBox);
			this->groupBox1->Controls->Add(this->EmailBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 129);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"���������� ���������� �����������";
			// 
			// PhoneBox
			// 
			this->PhoneBox->Location = System::Drawing::Point(135, 93);
			this->PhoneBox->Name = L"PhoneBox";
			this->PhoneBox->Size = System::Drawing::Size(143, 20);
			this->PhoneBox->TabIndex = 9;
			this->PhoneBox->TextChanged += gcnew System::EventHandler(this, &MoreStudentInfoForm::PhoneBox_TextChanged);
			// 
			// AdressBox
			// 
			this->AdressBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->AdressBox->Location = System::Drawing::Point(135, 31);
			this->AdressBox->Name = L"AdressBox";
			this->AdressBox->Size = System::Drawing::Size(143, 20);
			this->AdressBox->TabIndex = 1;
			this->AdressBox->TextChanged += gcnew System::EventHandler(this, &MoreStudentInfoForm::AdressBox_TextChanged);
			// 
			// EmailBox
			// 
			this->EmailBox->Location = System::Drawing::Point(135, 59);
			this->EmailBox->Name = L"EmailBox";
			this->EmailBox->Size = System::Drawing::Size(143, 20);
			this->EmailBox->TabIndex = 5;
			this->EmailBox->TextChanged += gcnew System::EventHandler(this, &MoreStudentInfoForm::EmailBox_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"�������:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"E-mail:";
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 147);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(125, 43);
			this->ExitButton->TabIndex = 22;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MoreStudentInfoForm::MenuButton_Click);
			// 
			// MoreStudentInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(316, 196);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->ExitButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MoreStudentInfoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Load += gcnew System::EventHandler(this, &MoreStudentInfoForm::MoreStudentInfoForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	array<bool>^ valid_array;

	private: int ID_getter() {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ columnIndex;

		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();

		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = "SELECT * FROM students WHERE ID = (SELECT MAX(ID) FROM students);";
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();
		while (data->Read())
		{
			columnIndex = data->GetValue(0)->ToString();
		}
		db->Close();
		return System::Convert::ToInt32(columnIndex);

	}

	private: int valid_checker() {
		for (int i = 0; i < valid_array->Length; i++)
			if (valid_array[i] == false)
				return 1;
		return 0;
	}
	
	private: System::Void NextButton_Click(System::Object^  sender, System::EventArgs^  e) {

		if (valid_checker() == 0) {
			SQLiteConnection ^db = gcnew SQLiteConnection();
			try
			{
				db->ConnectionString = GlobalClass::SQLGlobalPatch;
				db->Open();
				SQLiteCommand ^cmdInsertValue = db->CreateCommand();
				cmdInsertValue->CommandText =
					"CREATE TABLE IF NOT EXISTS contacts(" +
					"ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL," +
					"student_id INTEGER UNIQUE NOT NULL," +
					"adress TEXT," +
					"e_mail TEXT," +
					"telephone TEXT," +
					"FOREIGN KEY(student_id) REFERENCES students(ID) ON DELETE CASCADE);" +

					"INSERT INTO contacts VALUES(NULL," + System::Convert::ToString(ID_getter()) + ", '" + AdressBox->Text + "', '" + EmailBox->Text + "', '" + PhoneBox->Text + "');";
				
				cmdInsertValue->ExecuteNonQuery();
				db->Close();
			}
			finally
			{
				delete (IDisposable^)db;
			}
			if (MessageBox::Show("���������� ������ ������� ��������!\n������ ������ ���������� ������ ���������?", "���������� ������ ���������", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
			{
				DEMKA::ParentsContactForm^ParentsContactForm_obj = gcnew DEMKA::ParentsContactForm();
				this->Hide();
				ParentsContactForm_obj->Text = this->Text;
				ParentsContactForm_obj->StudentAdress = AdressBox->Text;
				ParentsContactForm_obj->ShowDialog();
			}
			else
				this->Hide();
		}
		else
			MessageBox::Show("��������� ������������ ����� ������!");
	}
	private: System::Void MenuButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
	private: System::Void MoreStudentInfoForm_Load(System::Object^  sender, System::EventArgs^  e) {
	valid_array = gcnew array<bool>(3);
	for (int i = 0; i < valid_array->Length; i++)
		valid_array[i] = false;
}
	private: System::Void AdressBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		valid_array[0] = (AdressBox->Text != "") ? true : false;
	}

	private: System::Void EmailBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		System::String^ buf_str = EmailBox->Text;
		std::string Email_str = msclr::interop::marshal_as<std::string>(buf_str);
		valid_array[1] = (GlobalClass::is_valid_email(Email_str)) ? true : false;
		EmailBox->ForeColor = GlobalClass::is_valid_email(Email_str) ? System::Drawing::SystemColors::WindowText : System::Drawing::Color::Red;
	}

	private: System::Void PhoneBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		System::String^ buf_str = PhoneBox->Text;
		std::string Phone_str = msclr::interop::marshal_as<std::string>(buf_str);
		bool boolflag = GlobalClass::is_valid_number(Phone_str) && Phone_str.size() == 11 && Phone_str[0] == '7';
		valid_array[2] = (boolflag) ? true : false;
		PhoneBox->ForeColor = (boolflag) ? System::Drawing::SystemColors::WindowText : System::Drawing::Color::Red;
	}
};
}
