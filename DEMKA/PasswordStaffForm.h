#include "GlobalClass.h"
#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SQLite;
	using namespace System::Security::Cryptography;
	using namespace System::Text;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// Сводка для PasswordStaffForm
	/// </summary>
	public ref class PasswordStaffForm : public System::Windows::Forms::Form
	{
	public:
		PasswordStaffForm(void)
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
		~PasswordStaffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  StaffNewPasswordBox;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  StaffOldPasswordBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  StaffLoginBox;
	private: System::Windows::Forms::Button^  ChangePasswordButton;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PasswordStaffForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->StaffNewPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->StaffOldPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StaffLoginBox = (gcnew System::Windows::Forms::TextBox());
			this->ChangePasswordButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->StaffNewPasswordBox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->StaffOldPasswordBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->StaffLoginBox);
			this->groupBox1->Location = System::Drawing::Point(9, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 126);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод данных";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Новый пароль:";
			// 
			// StaffNewPasswordBox
			// 
			this->StaffNewPasswordBox->Location = System::Drawing::Point(142, 81);
			this->StaffNewPasswordBox->Name = L"StaffNewPasswordBox";
			this->StaffNewPasswordBox->Size = System::Drawing::Size(100, 20);
			this->StaffNewPasswordBox->TabIndex = 4;
			this->StaffNewPasswordBox->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Старый пароль:";
			// 
			// StaffOldPasswordBox
			// 
			this->StaffOldPasswordBox->Location = System::Drawing::Point(142, 55);
			this->StaffOldPasswordBox->Name = L"StaffOldPasswordBox";
			this->StaffOldPasswordBox->Size = System::Drawing::Size(100, 20);
			this->StaffOldPasswordBox->TabIndex = 2;
			this->StaffOldPasswordBox->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Логин:";
			// 
			// StaffLoginBox
			// 
			this->StaffLoginBox->Location = System::Drawing::Point(142, 29);
			this->StaffLoginBox->Name = L"StaffLoginBox";
			this->StaffLoginBox->Size = System::Drawing::Size(100, 20);
			this->StaffLoginBox->TabIndex = 0;
			// 
			// ChangePasswordButton
			// 
			this->ChangePasswordButton->Location = System::Drawing::Point(163, 144);
			this->ChangePasswordButton->Name = L"ChangePasswordButton";
			this->ChangePasswordButton->Size = System::Drawing::Size(113, 32);
			this->ChangePasswordButton->TabIndex = 3;
			this->ChangePasswordButton->Text = L"=>";
			this->ChangePasswordButton->UseVisualStyleBackColor = true;
			this->ChangePasswordButton->Click += gcnew System::EventHandler(this, &PasswordStaffForm::ChangePasswordButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(13, 144);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(113, 32);
			this->ExitButton->TabIndex = 5;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &PasswordStaffForm::ExitButton_Click);
			// 
			// PasswordStaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 187);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->ChangePasswordButton);
			this->Controls->Add(this->ExitButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PasswordStaffForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Изенение пароля";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: String^ getMD5String(String^ inputString)
	{
		array<Byte>^ byteArray = Encoding::ASCII->GetBytes(inputString);
		MD5CryptoServiceProvider^ md5provider = gcnew MD5CryptoServiceProvider();
		array<Byte>^ byteArrayHash = md5provider->ComputeHash(byteArray);
		return BitConverter::ToString(byteArrayHash);
	}


	private: bool StaffLoginSQLChecker(String^ login_str, String^ password_str) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ BufChecker = "DEMKA";
		String^ MD5login_str = getMD5String(login_str);
		String^ MD5password_str = getMD5String(password_str);
		String^ SQL_STRING = "SELECT * FROM staff WHERE login ='" + MD5login_str + "' AND password ='" + MD5password_str + "';";
		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();
		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQL_STRING;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();

		while (data->Read())
			BufChecker = data->GetValue(0)->ToString();
		db->Close();
		if (BufChecker != "DEMKA")
			return true;
		return false;

	}

	private: void UpdateStaffPasswordSQL(String^ login_str, String^ password_str) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ MD5login_str = getMD5String(login_str);
		String^ MD5NewPassword_str = getMD5String(password_str);
		String^ SQL_STRING = "UPDATE staff SET password= '" + MD5NewPassword_str + "' WHERE login = '" + MD5login_str+"';";

		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();
		SQLiteCommand ^cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = SQL_STRING;
		cmdInsertValue->ExecuteNonQuery();
		db->Close();
		MessageBox::Show("Успешное обновление пароля пользователя " + login_str + " !");

	}

	private: bool StaffExistLoginSQLChecker(String^ login_str) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ MD5login_str = getMD5String(login_str);
		String^ BufValidationStr = "DEMKA";
		String^ SQL_STRING = "SELECT * FROM staff WHERE login ='" + MD5login_str + "';";

		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();
		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQL_STRING;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();

		while (data->Read())
			BufValidationStr = data->GetValue(0)->ToString();
		db->Close();

		if (BufValidationStr != "DEMKA")
			return true;
		return false;

	}
	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void ChangePasswordButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (StaffExistLoginSQLChecker(StaffLoginBox->Text)) {
			if (StaffLoginSQLChecker(StaffLoginBox->Text, StaffOldPasswordBox->Text))
				UpdateStaffPasswordSQL(StaffLoginBox->Text, StaffNewPasswordBox->Text);
			else
				MessageBox::Show("Старый пароль введен неверно");
		}
		else
			MessageBox::Show("Пользователя " + StaffLoginBox->Text + " не существует!");

	}
};
}
