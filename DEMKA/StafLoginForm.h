#include "GlobalClass.h"
#include "MainForm.h"
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
	/// Сводка для StafLoginForm
	/// </summary>
	public ref class StafLoginForm : public System::Windows::Forms::Form
	{
	public:
		StafLoginForm(void)
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
		~StafLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  LoginBox;
	private: System::Windows::Forms::TextBox^  PasswordBox;

	protected:

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  LoginButton;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StafLoginForm::typeid));
			this->LoginBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// LoginBox
			// 
			this->LoginBox->Location = System::Drawing::Point(81, 23);
			this->LoginBox->Name = L"LoginBox";
			this->LoginBox->Size = System::Drawing::Size(100, 20);
			this->LoginBox->TabIndex = 0;
			// 
			// PasswordBox
			// 
			this->PasswordBox->Location = System::Drawing::Point(81, 61);
			this->PasswordBox->Name = L"PasswordBox";
			this->PasswordBox->Size = System::Drawing::Size(100, 20);
			this->PasswordBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Пароль";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->LoginButton);
			this->groupBox1->Controls->Add(this->LoginBox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->PasswordBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(31, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(221, 163);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод данных";
			// 
			// LoginButton
			// 
			this->LoginButton->Location = System::Drawing::Point(47, 101);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(134, 40);
			this->LoginButton->TabIndex = 4;
			this->LoginButton->Text = L"Вход";
			this->LoginButton->UseVisualStyleBackColor = true;
			this->LoginButton->Click += gcnew System::EventHandler(this, &StafLoginForm::LoginButton_Click);
			// 
			// StafLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(285, 192);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StafLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация";
			this->Load += gcnew System::EventHandler(this, &StafLoginForm::StafLoginForm_Load);
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

	private: bool StaffSQLChecker(String^ login_str, String^ password_str) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ MD5login_str = getMD5String(login_str);
		String^ MD5password_str = getMD5String(password_str);
		array<String^>^ validation_arr;
		String^ SQL_STRING = "SELECT * FROM staff WHERE login ='"+ MD5login_str+"' AND password ='"+MD5password_str+"';";

		validation_arr = gcnew array<String^>(3);
		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();
		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQL_STRING;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();

		while (data->Read())
			for (int cell_index = 0; cell_index < data->FieldCount; cell_index++)
				validation_arr[cell_index] = data->GetValue(cell_index)->ToString();
		db->Close();

		if ((validation_arr[1] != "") && (validation_arr[2] != ""))
			return true;
		return false;

	}
	
	private: System::Void LoginButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (StaffSQLChecker(LoginBox->Text, PasswordBox->Text)) {
			MessageBox::Show("Успешная авторизация");
			MainForm^MainForm_obj = gcnew MainForm();
			MainForm_obj->ShowDialog();
			this->Close();
		}
		else
			MessageBox::Show("Неверный пароль!");

	}

	private: System::Void StafLoginForm_Load(System::Object^  sender, System::EventArgs^  e){
		GlobalClass::SQLGlobalPatch = "Data Source=../database_vs.db";
		SQLiteConnection ^db = gcnew SQLiteConnection();

		try
		{
			db->ConnectionString = GlobalClass::SQLGlobalPatch;
			db->Open();
			SQLiteCommand ^cmdInsertValue = db->CreateCommand();

			cmdInsertValue->CommandText = "CREATE TABLE IF NOT EXISTS staff" +
				"(ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, login TEXT, password TEXT);" +
				"INSERT INTO staff(login,password) SELECT '21-23-2F-29-7A-57-A5-A7-43-89-4A-0E-4A-80-1F-C3', '21-23-2F-29-7A-57-A5-A7-43-89-4A-0E-4A-80-1F-C3'"+
				"WHERE NOT EXISTS(SELECT 1 FROM staff WHERE login = '21-23-2F-29-7A-57-A5-A7-43-89-4A-0E-4A-80-1F-C3'); ";

			cmdInsertValue->ExecuteNonQuery();
			db->Close();
		}
		finally
		{
			delete (IDisposable^)db;
		}
	}
};
}
