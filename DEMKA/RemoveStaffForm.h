#include "GlobalClass.h"
#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SQLite;
	using namespace System::Text;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// Сводка для RemoveStaffForm
	/// </summary>
	public ref class RemoveStaffForm : public System::Windows::Forms::Form
	{
	public:
		RemoveStaffForm(void)
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
		~RemoveStaffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  MasterPasswordBox;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  StaffPasswordBox;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  StaffLoginBox;
	private: System::Windows::Forms::Button^  StaffRemoveButton;


	private: System::Windows::Forms::Button^  ExitButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RemoveStaffForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->MasterPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->StaffPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StaffLoginBox = (gcnew System::Windows::Forms::TextBox());
			this->StaffRemoveButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->MasterPasswordBox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->StaffPasswordBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->StaffLoginBox);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 111);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод данных";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Мастер-пароль:";
			// 
			// MasterPasswordBox
			// 
			this->MasterPasswordBox->Location = System::Drawing::Point(142, 81);
			this->MasterPasswordBox->Name = L"MasterPasswordBox";
			this->MasterPasswordBox->Size = System::Drawing::Size(100, 20);
			this->MasterPasswordBox->TabIndex = 4;
			this->MasterPasswordBox->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Пароль пользователя:";
			// 
			// StaffPasswordBox
			// 
			this->StaffPasswordBox->Location = System::Drawing::Point(142, 55);
			this->StaffPasswordBox->Name = L"StaffPasswordBox";
			this->StaffPasswordBox->Size = System::Drawing::Size(100, 20);
			this->StaffPasswordBox->TabIndex = 2;
			this->StaffPasswordBox->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Логин пользователя:";
			// 
			// StaffLoginBox
			// 
			this->StaffLoginBox->Location = System::Drawing::Point(142, 29);
			this->StaffLoginBox->Name = L"StaffLoginBox";
			this->StaffLoginBox->Size = System::Drawing::Size(100, 20);
			this->StaffLoginBox->TabIndex = 0;
			// 
			// StaffRemoveButton
			// 
			this->StaffRemoveButton->Location = System::Drawing::Point(166, 129);
			this->StaffRemoveButton->Name = L"StaffRemoveButton";
			this->StaffRemoveButton->Size = System::Drawing::Size(113, 32);
			this->StaffRemoveButton->TabIndex = 6;
			this->StaffRemoveButton->Text = L"=>";
			this->StaffRemoveButton->UseVisualStyleBackColor = true;
			this->StaffRemoveButton->Click += gcnew System::EventHandler(this, &RemoveStaffForm::StaffRemoveButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 129);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(113, 32);
			this->ExitButton->TabIndex = 8;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &RemoveStaffForm::ExitButton_Click);
			// 
			// RemoveStaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 173);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->StaffRemoveButton);
			this->Controls->Add(this->ExitButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RemoveStaffForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Удаление пользователя";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void EmptyAllTextBox() {
		StaffLoginBox->Text = "";
		StaffPasswordBox->Text = "";
		MasterPasswordBox->Text = "";
	}

	private: void RemoveStaffSQL(String^ login_str, String^ password_str) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ MD5login_str = GlobalClass::getMD5String(login_str);
		String^ MD5password_str = GlobalClass::getMD5String(password_str);
		String^ SQL_STRING = "DELETE FROM staff WHERE login = '" + MD5login_str + "' AND password = '"+ MD5password_str+"';";

		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();
		SQLiteCommand ^cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = SQL_STRING;
		cmdInsertValue->ExecuteNonQuery();
		db->Close();
		MessageBox::Show("Успешное удаление пользователя АИС");

	}

	private: bool StaffPasswordSQLChecker(String^ password_str) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ MD5password_str = GlobalClass::getMD5String(password_str);
		String^ BufValidationStr = "DEMKA";
		String^ SQL_STRING = "SELECT * FROM staff WHERE password ='" + MD5password_str + "';";

		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();
		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQL_STRING;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();

		while (data->Read())
			BufValidationStr = data->GetValue(2)->ToString();
		db->Close();
		if (BufValidationStr != "DEMKA")
			return true;
		return false;

	}
	private: bool StaffLoginSQLChecker(String^ login_str) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ MD5login_str = GlobalClass::getMD5String(login_str);
		String^ BufValidationStr = "DEMKA";
		String^ SQL_STRING = "SELECT * FROM staff WHERE login ='" + MD5login_str + "';";

		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();
		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQL_STRING;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();

		while (data->Read())
			BufValidationStr = data->GetValue(1)->ToString();
		db->Close();
		if (BufValidationStr != "DEMKA")
			return true;
		return false;

	}

	private: bool MasterPasswordChecker(String^ master_str) {
		return (GlobalClass::getMD5String(master_str)==GlobalClass::MasterGlobalPassword) ? true : false;
	}

	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}

	private: System::Void StaffRemoveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((StaffLoginSQLChecker(StaffLoginBox->Text)) && (StaffPasswordSQLChecker(StaffPasswordBox->Text)) && (MasterPasswordChecker(MasterPasswordBox->Text)))
			RemoveStaffSQL(StaffLoginBox->Text, StaffPasswordBox->Text);

		else if (MasterPasswordChecker(MasterPasswordBox->Text) == false)
			MessageBox::Show("Мастер-пароль введен неверно!");
		else
			MessageBox::Show("Внимание!\nДля удаления пользователя из АИС требуется:\n-Имя пользователя\n-Пароль пользователя\n-Мастер-пароль\nЕсли один из этих параметров недоступен, то УДАЛЕНИЕ ПОЛЬЗОВАТЕЛЯ НЕВОЗМОЖНО");
		EmptyAllTextBox();
	}
};
}
