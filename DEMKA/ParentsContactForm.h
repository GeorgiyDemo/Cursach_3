#include <regex>
#include <string>
#include <msclr\marshal_cppstd.h>
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

	/// <summary>
	/// Сводка для ParentsContactForm
	/// </summary>
	public ref class ParentsContactForm : public System::Windows::Forms::Form
	{
	public:
		ParentsContactForm(void)
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
		~ParentsContactForm()
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
	private: System::Windows::Forms::TextBox^  ParentPhoneBox;

	private: System::Windows::Forms::TextBox^  ParentAdressBox;
	private: System::Windows::Forms::TextBox^  ParentEmailBox;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  ExitButton;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  ParentFIOBox;








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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ParentFIOBox = (gcnew System::Windows::Forms::TextBox());
			this->ParentPhoneBox = (gcnew System::Windows::Forms::TextBox());
			this->ParentAdressBox = (gcnew System::Windows::Forms::TextBox());
			this->ParentEmailBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Адрес:";
			// 
			// NextButton
			// 
			this->NextButton->Location = System::Drawing::Point(173, 180);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(107, 42);
			this->NextButton->TabIndex = 24;
			this->NextButton->Text = L"=>";
			this->NextButton->UseVisualStyleBackColor = true;
			this->NextButton->Click += gcnew System::EventHandler(this, &ParentsContactForm::NextButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->ParentFIOBox);
			this->groupBox1->Controls->Add(this->ParentPhoneBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->ParentAdressBox);
			this->groupBox1->Controls->Add(this->ParentEmailBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(268, 162);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Контактная информация";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"ФИО";
			// 
			// ParentFIOBox
			// 
			this->ParentFIOBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->ParentFIOBox->Location = System::Drawing::Point(94, 26);
			this->ParentFIOBox->Name = L"ParentFIOBox";
			this->ParentFIOBox->Size = System::Drawing::Size(143, 20);
			this->ParentFIOBox->TabIndex = 10;
			this->ParentFIOBox->TextChanged += gcnew System::EventHandler(this, &ParentsContactForm::ParentFIOBox_TextChanged);
			// 
			// ParentPhoneBox
			// 
			this->ParentPhoneBox->Location = System::Drawing::Point(94, 118);
			this->ParentPhoneBox->Name = L"ParentPhoneBox";
			this->ParentPhoneBox->Size = System::Drawing::Size(143, 20);
			this->ParentPhoneBox->TabIndex = 9;
			this->ParentPhoneBox->TextChanged += gcnew System::EventHandler(this, &ParentsContactForm::ParentPhoneBox_TextChanged);
			// 
			// ParentAdressBox
			// 
			this->ParentAdressBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->ParentAdressBox->Location = System::Drawing::Point(94, 56);
			this->ParentAdressBox->Name = L"ParentAdressBox";
			this->ParentAdressBox->Size = System::Drawing::Size(143, 20);
			this->ParentAdressBox->TabIndex = 1;
			this->ParentAdressBox->TextChanged += gcnew System::EventHandler(this, &ParentsContactForm::ParentAdressBox_TextChanged);
			// 
			// ParentEmailBox
			// 
			this->ParentEmailBox->Location = System::Drawing::Point(94, 87);
			this->ParentEmailBox->Name = L"ParentEmailBox";
			this->ParentEmailBox->Size = System::Drawing::Size(143, 20);
			this->ParentEmailBox->TabIndex = 5;
			this->ParentEmailBox->TextChanged += gcnew System::EventHandler(this, &ParentsContactForm::ParentEmailBox_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Телефон:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"E-mail:";
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 178);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(109, 44);
			this->ExitButton->TabIndex = 25;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &ParentsContactForm::ExitButton_Click);
			// 
			// ParentsContactForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 234);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->ExitButton);
			this->Name = L"ParentsContactForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Контакты родителей";
			this->Load += gcnew System::EventHandler(this, &ParentsContactForm::ParentsContactForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	array<bool>^ valid_array;
	private: int ID_getter() {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		String^ columnIndex;

		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
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

	private: bool is_valid_number(const std::string& number)
	{
		static const std::string AllowedChars = "0123456789";
		for (auto numberChar = number.begin();
			numberChar != number.end(); ++numberChar)

			if (AllowedChars.end() == std::find(
				AllowedChars.begin(), AllowedChars.end(), *numberChar)
				)
			{
				return false;
			}

		return true;
	}

	private: bool is_valid_email(const std::string& email)
	{
		const std::regex pattern
		("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

		return std::regex_match(email, pattern);
	}

	private: int valid_checker() {
		for (int i = 0; i < valid_array->Length; i++)
			if (valid_array[i] == false)
				return 1;
		return 0;
	}

	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}

	private: System::Void NextButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (valid_checker() == 0) {
			SQLiteConnection ^db = gcnew SQLiteConnection();
			try
			{
				MessageBox::Show("INSERT INTO parents(NULL," + System::Convert::ToString(ID_getter()) + ", '" + ParentAdressBox->Text + "', '" + ParentFIOBox->Text + "', '" + ParentEmailBox->Text + "','" + ParentPhoneBox->Text + "');");
				db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
				db->Open();
				SQLiteCommand ^cmdInsertValue = db->CreateCommand();
				cmdInsertValue->CommandText =
					"CREATE TABLE IF NOT EXISTS parents(" +
					"ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL," +
					"student_id INTEGER UNIQUE NOT NULL," +
					"name TEXT," +
					"e_mail TEXT," +
					"adress TEXT," +
					"telephone TEXT," +
					"FOREIGN KEY(student_id) REFERENCES students(ID));"+
					"INSERT INTO parents VALUES (NULL," + System::Convert::ToString(ID_getter()) + ", '" + ParentAdressBox->Text + "', '" + ParentFIOBox->Text + "', '" + ParentEmailBox->Text + "','"+ParentPhoneBox->Text+"');";

				cmdInsertValue->ExecuteNonQuery();
				db->Close();
			}
			finally
			{
				delete (IDisposable^)db;
			}
			if (MessageBox::Show("Контактные данные родителей успешно записаны!\nХотите сформировать общий отчет?", "Формирование отчета", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
			{
				/*
				DEMKA::ParentsContactForm^ParentsContactForm_obj = gcnew DEMKA::ParentsContactForm();
				this->Hide();
				ParentsContactForm_obj->Text = this->Text;
				ParentsContactForm_obj->ShowDialog();
				*/
				MessageBox::Show("А ОН НЕ ХОЧИТ)))))))");
				this->Hide();
			}
			else
				this->Hide();
		}
		else
			MessageBox::Show("Проверьте правильность ввода данных!");
	}
private: System::Void ParentFIOBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (ParentFIOBox->Text == "")
	{
		valid_array[0] = false;
	}
	else {
		valid_array[0] = true;
		msclr::interop::marshal_context oMarshalContext;
		const char* buf = oMarshalContext.marshal_as<const char*>(ParentFIOBox->Text);
		for (int i = 0; i < System::Convert::ToInt32(strlen(buf)); i++) {
			if (iswdigit(buf[i])) {
				valid_array[0] = false;
			}
		}
		ParentFIOBox->ForeColor = (valid_array[0] == true) ? System::Drawing::SystemColors::WindowText : System::Drawing::Color::Red;
	}
}
	private: System::Void ParentsContactForm_Load(System::Object^  sender, System::EventArgs^  e) {
		valid_array = gcnew array<bool>(4);
		for (int i = 0; i < valid_array->Length; i++)
			valid_array[i] = false;
	}
	private: System::Void ParentAdressBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		valid_array[1] = (ParentAdressBox->Text=="") ? false : true;
	}

	private: System::Void ParentEmailBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		System::String^ buf_str = ParentEmailBox->Text;
		std::string Email_str = msclr::interop::marshal_as<std::string>(buf_str);
		valid_array[2] = (is_valid_email(Email_str)) ? true : false;
		ParentEmailBox->ForeColor = is_valid_email(Email_str) ? System::Drawing::SystemColors::WindowText : System::Drawing::Color::Red;
	}

	private: System::Void ParentPhoneBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		System::String^ buf_str = ParentPhoneBox->Text;
		std::string Phone_str = msclr::interop::marshal_as<std::string>(buf_str);
		bool boolflag = is_valid_number(Phone_str) && Phone_str.size() == 11 && Phone_str[0] == '7';
		valid_array[3] = (boolflag) ? true : false;
		ParentPhoneBox->ForeColor = (boolflag) ? System::Drawing::SystemColors::WindowText : System::Drawing::Color::Red;
	}
};
}
