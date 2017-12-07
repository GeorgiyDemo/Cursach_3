#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>
#include <cliext/vector>
#include <string>
#include <regex>
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
	using namespace cliext;

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
	private: System::Windows::Forms::GroupBox^  groupBox1;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// UpdateBDButton
			// 
			this->UpdateBDButton->Location = System::Drawing::Point(231, 19);
			this->UpdateBDButton->Name = L"UpdateBDButton";
			this->UpdateBDButton->Size = System::Drawing::Size(92, 40);
			this->UpdateBDButton->TabIndex = 9;
			this->UpdateBDButton->Text = L"Обновление БД";
			this->UpdateBDButton->UseVisualStyleBackColor = true;
			this->UpdateBDButton->Click += gcnew System::EventHandler(this, &ContactsDBChangerForm::UpdateBDButton_Click);
			// 
			// AddDBButton
			// 
			this->AddDBButton->Location = System::Drawing::Point(121, 19);
			this->AddDBButton->Name = L"AddDBButton";
			this->AddDBButton->Size = System::Drawing::Size(92, 40);
			this->AddDBButton->TabIndex = 8;
			this->AddDBButton->Text = L"Добавление в БД";
			this->AddDBButton->UseVisualStyleBackColor = true;
			this->AddDBButton->Click += gcnew System::EventHandler(this, &ContactsDBChangerForm::AddDBButton_Click);
			// 
			// RemoveBDButton
			// 
			this->RemoveBDButton->Location = System::Drawing::Point(8, 19);
			this->RemoveBDButton->Name = L"RemoveBDButton";
			this->RemoveBDButton->Size = System::Drawing::Size(92, 40);
			this->RemoveBDButton->TabIndex = 7;
			this->RemoveBDButton->Text = L"Удаление из БД";
			this->RemoveBDButton->UseVisualStyleBackColor = true;
			this->RemoveBDButton->Click += gcnew System::EventHandler(this, &ContactsDBChangerForm::RemoveBDButton_Click);
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
			this->dataGridView1->Size = System::Drawing::Size(568, 270);
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->RemoveBDButton);
			this->groupBox1->Controls->Add(this->UpdateBDButton);
			this->groupBox1->Controls->Add(this->AddDBButton);
			this->groupBox1->Location = System::Drawing::Point(202, 295);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(335, 73);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Действия с базой данных";
			// 
			// ContactsDBChangerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 380);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->ExitButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ContactsDBChangerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Изменение данных таблицы contacts";
			this->Load += gcnew System::EventHandler(this, &ContactsDBChangerForm::ContactsDBChangerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	String^ changer_fix;
	array<String^>^ GridTableRow_array;

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

		array<bool>^ BoolCheckArr;
		BoolCheckArr = gcnew array<bool>(5);
		for (int i = 0; i < BoolCheckArr->Length; i++) {
			BoolCheckArr[i] = false;
		}

		//Валидация e-mail
		if (GridTableRow_array[3] == "")
		{
			BoolCheckArr[3] = false;
		}
		else {
			BoolCheckArr[3] = true;
			msclr::interop::marshal_context oMarshalContext;
			const char* buf = oMarshalContext.marshal_as<const char*>(GridTableRow_array[3]);
			if (is_valid_email(buf) == false)
				BoolCheckArr[3] = false;
		}

		//Валидация телефона
		if (GridTableRow_array[4] == "")
		{
			BoolCheckArr[4] = false;
		}
		else {

			BoolCheckArr[4] = true;
			msclr::interop::marshal_context oMarshalContext;
			const char* buf = oMarshalContext.marshal_as<const char*>(GridTableRow_array[4]);
			if (is_valid_number(buf) == false)
				BoolCheckArr[4] = false;
		}

		//Другие валидации
		BoolCheckArr[2] = (GridTableRow_array[2] != "") ? true : false;

		for (int i = 2; i < BoolCheckArr->Length; i++)
			if (BoolCheckArr[i] == false)
				return 1;
		return 0;
	}

	private: DataTable^ GetDataTable() {
		DataTable ^table;
		SQLiteConnection ^db = gcnew SQLiteConnection();

		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();
		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = "SELECT * FROM contacts;";
		SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
		DataColumn ^column;
		DataRow ^row;

		table = gcnew DataTable();

		vector<String^>^ nameColumns = gcnew vector<String^>();

		for (int i = 0; i < (reader->FieldCount); i++) {
			nameColumns->push_back(reader->GetName(i));
			column = gcnew DataColumn(nameColumns->at(i), String::typeid);
			table->Columns->Add(column);
		}

		while (reader->Read()) {
			row = table->NewRow();
			for (int i = 0; i < (reader->FieldCount); i++) {
				row[nameColumns->at(i)] = reader->GetValue(i)->ToString();
				reader->GetValue(i)->ToString();
			}
			table->Rows->Add(row);
		}
		db->Close();
		return table;
	}

	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void ContactsDBChangerForm_Load(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->DataSource = GetDataTable();
	}
	private: System::Void RemoveBDButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		int index = dataGridView1->CurrentCell->RowIndex;
		String^ ID = dataGridView1->Rows[index]->Cells["ID"]->Value->ToString();

		SQLiteConnection ^db = gcnew SQLiteConnection();
		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();
		SQLiteCommand ^cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = "DELETE FROM contacts WHERE ID = " + ID + ";";
		cmdInsertValue->ExecuteNonQuery();
		db->Close();
		dataGridView1->DataSource = GetDataTable();
		MessageBox::Show("Успешное удаление данных");
	}
	private: System::Void AddDBButton_Click(System::Object^  sender, System::EventArgs^  e) {

		int index = dataGridView1->CurrentCell->RowIndex;

		GridTableRow_array = gcnew array<String^>(5);
		for (int i = 0; i < GridTableRow_array->Length; i++)
			GridTableRow_array[i] = dataGridView1->Rows[index]->Cells[i]->Value->ToString();

	if (valid_checker() == 0) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();

		SQLiteCommand ^cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = "INSERT INTO contacts VALUES(NULL," + GridTableRow_array[1] + ",'" + GridTableRow_array[2] +
			"','" + GridTableRow_array[3] + "','" + GridTableRow_array[4] + "');";
		cmdInsertValue->ExecuteNonQuery();
		db->Close();
		MessageBox::Show("Успешная запись данных");
	}
	else
		MessageBox::Show("Проверьте правильность ввода данных!");
	
}
	private: System::Void UpdateBDButton_Click(System::Object^  sender, System::EventArgs^  e) {

		int index = dataGridView1->CurrentCell->RowIndex;
		String^ ID = dataGridView1->Rows[index]->Cells["ID"]->Value->ToString();

		GridTableRow_array = gcnew array<String^>(5);
		for (int i = 0; i < GridTableRow_array->Length; i++)
			GridTableRow_array[i] = dataGridView1->Rows[index]->Cells[i]->Value->ToString();

		if (valid_checker() == 0) {

			SQLiteConnection ^db = gcnew SQLiteConnection();
			db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
			db->Open();
			
			SQLiteCommand ^cmdInsertValue = db->CreateCommand();
			cmdInsertValue->CommandText = "UPDATE contacts SET student_id=" + GridTableRow_array[1] + ",adress='" + GridTableRow_array[2] +
			"',e_mail='" + GridTableRow_array[3] + "',telephone='" + GridTableRow_array[4] + "' WHERE ID =" + ID;
			cmdInsertValue->ExecuteNonQuery();
			db->Close();
			MessageBox::Show("Успешное обновление данных");

		}
		else
			MessageBox::Show("Проверьте правильность ввода данных!");

		dataGridView1->DataSource = GetDataTable();
	}
private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
}
};
}
