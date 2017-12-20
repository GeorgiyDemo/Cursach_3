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
	/// Сводка для AddNewStaffForm
	/// </summary>
	public ref class AddNewStaffForm : public System::Windows::Forms::Form
	{
	public:
		AddNewStaffForm(void)
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
		~AddNewStaffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  AddStaffButton;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  NewStaffPasswordBox;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  NewStaffLoginBox;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddNewStaffForm::typeid));
			this->AddStaffButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NewStaffPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NewStaffLoginBox = (gcnew System::Windows::Forms::TextBox());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// AddStaffButton
			// 
			this->AddStaffButton->Location = System::Drawing::Point(182, 134);
			this->AddStaffButton->Name = L"AddStaffButton";
			this->AddStaffButton->Size = System::Drawing::Size(117, 39);
			this->AddStaffButton->TabIndex = 0;
			this->AddStaffButton->Text = L"=>";
			this->AddStaffButton->UseVisualStyleBackColor = true;
			this->AddStaffButton->Click += gcnew System::EventHandler(this, &AddNewStaffForm::AddStaffButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->NewStaffPasswordBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->NewStaffLoginBox);
			this->groupBox1->Location = System::Drawing::Point(32, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 100);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод данных";
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
			// NewStaffPasswordBox
			// 
			this->NewStaffPasswordBox->Location = System::Drawing::Point(142, 55);
			this->NewStaffPasswordBox->Name = L"NewStaffPasswordBox";
			this->NewStaffPasswordBox->Size = System::Drawing::Size(100, 20);
			this->NewStaffPasswordBox->TabIndex = 2;
			this->NewStaffPasswordBox->UseSystemPasswordChar = true;
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
			// NewStaffLoginBox
			// 
			this->NewStaffLoginBox->Location = System::Drawing::Point(142, 29);
			this->NewStaffLoginBox->Name = L"NewStaffLoginBox";
			this->NewStaffLoginBox->Size = System::Drawing::Size(100, 20);
			this->NewStaffLoginBox->TabIndex = 0;
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(32, 134);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(117, 39);
			this->ExitButton->TabIndex = 2;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &AddNewStaffForm::ExitButton_Click);
			// 
			// AddNewStaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(330, 188);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->AddStaffButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddNewStaffForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление пользователя";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void EmptyAllTextBox() {
		NewStaffLoginBox->Text = "";
		NewStaffPasswordBox->Text = "";
	}

	private: void NewStaffAddSQL(String^ login_str, String^ password_str) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ MD5login_str = GlobalClass::getMD5String(GlobalClass::toBase64(login_str));
		String^ MD5password_str = GlobalClass::getMD5String(GlobalClass::toBase64(password_str));
		String^ SQL_STRING = "INSERT INTO staff VALUES(NULL,'" + MD5login_str + "','" + MD5password_str + "');";

		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();
		SQLiteCommand ^cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = SQL_STRING;
		cmdInsertValue->ExecuteNonQuery();
		db->Close();
		MessageBox::Show("Успешное добавление нового пользователя АИС");
		this->Hide();

	}

	private: bool StaffPasswordSQLChecker(String^ password_str) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ MD5password_str = GlobalClass::getMD5String(GlobalClass::toBase64(password_str));
		String^ BufValidationStr = "DEMKA";
		String^ SQL_STRING = "SELECT * FROM staff WHERE password ='" + MD5password_str + "';";

		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();
		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQL_STRING;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();

		while (data->Read())
			BufValidationStr = data->GetValue(0)->ToString();
		db->Close();

		if (BufValidationStr == "DEMKA")
			return true;
		return false;

	}
	private: bool StaffLoginSQLChecker(String^ login_str) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ MD5login_str = GlobalClass::getMD5String(GlobalClass::toBase64(login_str));
		String^ BufValidationStr = "DEMKA";
		String^ SQL_STRING = "SELECT * FROM staff WHERE login ='" + MD5login_str + "';";

		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();
		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQL_STRING;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();

		while (data->Read())
			BufValidationStr =  data->GetValue(0)->ToString();
		db->Close();

		if (BufValidationStr  == "DEMKA")
			return true;
		return false;

	}
	private: System::Void AddStaffButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if ((NewStaffLoginBox->Text) == (NewStaffPasswordBox->Text))
			MessageBox::Show("Внимание!\nЛогин и пароль совпадают\nПо возможности следует не использовать логин в качестве пароля нового пользователя");
		if ((StaffLoginSQLChecker(NewStaffLoginBox->Text)) && (StaffPasswordSQLChecker(NewStaffPasswordBox->Text)))
			NewStaffAddSQL(NewStaffLoginBox->Text, NewStaffPasswordBox->Text);

		else if (StaffLoginSQLChecker(NewStaffLoginBox->Text) == false)
			MessageBox::Show("Внимание!\nДанный логин уже используется в системе, добавление невозможно");
		else if (MessageBox::Show("Внимание!\nДанный пароль уже используется одним или несколькими пользователями АИС\nХотите продолжить?", "Дубликат пароля", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				NewStaffAddSQL(NewStaffLoginBox->Text, NewStaffPasswordBox->Text);
		EmptyAllTextBox();
	}

	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
};
}
