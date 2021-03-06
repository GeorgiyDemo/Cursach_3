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
	using namespace System::Text;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// ������ ��� StafLoginForm
	/// </summary>
	public ref class StafLoginForm : public System::Windows::Forms::Form
	{
	public:
		StafLoginForm(void)
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
			this->PasswordBox->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"������";
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
			this->groupBox1->Text = L"���� ������";
			// 
			// LoginButton
			// 
			this->LoginButton->Location = System::Drawing::Point(47, 101);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(134, 40);
			this->LoginButton->TabIndex = 4;
			this->LoginButton->Text = L"����";
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
			this->Text = L"�����������";
			this->Load += gcnew System::EventHandler(this, &StafLoginForm::StafLoginForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: void EmptyAllTextBox() {
		LoginBox->Text = "";
		PasswordBox->Text = "";
	}

	private: bool StaffSQLChecker(String^ login_str, String^ password_str){

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ BufChecker = "DEMKA";
		String^ MD5Base64login_str = GlobalClass::getMD5String(GlobalClass::toBase64(login_str));
		String^ MD5Base64password_str = GlobalClass::getMD5String(GlobalClass::toBase64(password_str));
		String^ SQL_STRING = "SELECT * FROM staff WHERE login ='"+ MD5Base64login_str +"' AND password ='"+ MD5Base64password_str+"';";
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
	
	private: System::Void LoginButton_Click(System::Object^  sender, System::EventArgs^  e) {

		if ((StaffSQLChecker(LoginBox->Text, PasswordBox->Text)) == true) {
			MessageBox::Show("�������� �����������");
			MainForm^MainForm_obj = gcnew MainForm();
			MainForm_obj->ShowDialog();
			this->Close();
		}
		else{
			MessageBox::Show("�������� ������!");
			EmptyAllTextBox();
		}
	}

	private: System::Void StafLoginForm_Load(System::Object^  sender, System::EventArgs^  e){
		GlobalClass::SQLGlobalPatch = "Data Source=../database_vs.db";
		GlobalClass::MasterGlobalPassword = "9A-F0-3C-0D-AD-FF-B9-87-82-03-3B-E7-14-CA-95-9B";
		SQLiteConnection ^db = gcnew SQLiteConnection();

		try
		{
			db->ConnectionString = GlobalClass::SQLGlobalPatch;
			db->Open();
			SQLiteCommand ^cmdInsertValue = db->CreateCommand();

			cmdInsertValue->CommandText = "CREATE TABLE IF NOT EXISTS staff" +
				"(ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, login TEXT, password TEXT);" +
				"INSERT INTO staff(login,password) SELECT 'DB-69-FC-03-9D-CB-D2-96-2C-B4-D2-8F-58-91-AA-E1', 'DB-69-FC-03-9D-CB-D2-96-2C-B4-D2-8F-58-91-AA-E1'"+
				"WHERE NOT EXISTS(SELECT 1 FROM staff WHERE login = 'DB-69-FC-03-9D-CB-D2-96-2C-B4-D2-8F-58-91-AA-E1'); ";

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
