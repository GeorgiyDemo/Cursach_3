#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>
#include <cliext/vector>
#include <string>
#include <map>
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
	/// Сводка для DBChangerForm
	/// </summary>
	public ref class DBChangerForm : public System::Windows::Forms::Form
	{
	public:
		DBChangerForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Button^  AddDBButton;
	private: System::Windows::Forms::Button^  UpdateBDButton;
	public:

	public:
	public:
		SQLiteConnection ^db;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~DBChangerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ExitButton;
	protected:

	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  RemoveBDButton;


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
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->RemoveBDButton = (gcnew System::Windows::Forms::Button());
			this->AddDBButton = (gcnew System::Windows::Forms::Button());
			this->UpdateBDButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 292);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(105, 40);
			this->ExitButton->TabIndex = 0;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &DBChangerForm::ExitButton_Click);
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
			this->dataGridView1->Size = System::Drawing::Size(961, 270);
			this->dataGridView1->TabIndex = 1;
			// 
			// RemoveBDButton
			// 
			this->RemoveBDButton->Location = System::Drawing::Point(479, 292);
			this->RemoveBDButton->Name = L"RemoveBDButton";
			this->RemoveBDButton->Size = System::Drawing::Size(122, 40);
			this->RemoveBDButton->TabIndex = 2;
			this->RemoveBDButton->Text = L"Удаление из БД";
			this->RemoveBDButton->UseVisualStyleBackColor = true;
			this->RemoveBDButton->Click += gcnew System::EventHandler(this, &DBChangerForm::RemoveButton_Click);
			// 
			// AddDBButton
			// 
			this->AddDBButton->Location = System::Drawing::Point(629, 292);
			this->AddDBButton->Name = L"AddDBButton";
			this->AddDBButton->Size = System::Drawing::Size(122, 40);
			this->AddDBButton->TabIndex = 3;
			this->AddDBButton->Text = L"Добавление в БД";
			this->AddDBButton->UseVisualStyleBackColor = true;
			this->AddDBButton->Click += gcnew System::EventHandler(this, &DBChangerForm::button1_Click);
			// 
			// UpdateBDButton
			// 
			this->UpdateBDButton->Location = System::Drawing::Point(781, 292);
			this->UpdateBDButton->Name = L"UpdateBDButton";
			this->UpdateBDButton->Size = System::Drawing::Size(122, 40);
			this->UpdateBDButton->TabIndex = 4;
			this->UpdateBDButton->Text = L"Обновление БД";
			this->UpdateBDButton->UseVisualStyleBackColor = true;
			this->UpdateBDButton->Click += gcnew System::EventHandler(this, &DBChangerForm::UpdateBDButton_Click);
			// 
			// DBChangerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(961, 359);
			this->Controls->Add(this->UpdateBDButton);
			this->Controls->Add(this->AddDBButton);
			this->Controls->Add(this->RemoveBDButton);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->ExitButton);
			this->Name = L"DBChangerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Изменение данных";
			this->Load += gcnew System::EventHandler(this, &DBChangerForm::DBChangerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	String^ changer_fix;
	array<String^>^ GridTableRow_array;

	private: int valid_checker() {

		array<bool>^ BoolCheckArr;
		BoolCheckArr = gcnew array<bool>(8);
		for (int i = 0; i < BoolCheckArr->Length; i++) {
			BoolCheckArr[i] = false;
		}

		//Валидация ФИО
		if (GridTableRow_array[1] == "")
		{
			BoolCheckArr[1] = false;
		}
		else {

			BoolCheckArr[1] = true;
			msclr::interop::marshal_context oMarshalContext;
			const char* buf = oMarshalContext.marshal_as<const char*>(GridTableRow_array[1]);

			for (int i = 0; i < System::Convert::ToInt32(strlen(buf)); i++) {
				if (iswdigit(buf[i])) {
					BoolCheckArr[1] = false;
				}
			}
		}

		//Валидация Сред. балла
		msclr::interop::marshal_context context;
		std::string buf_str = context.marshal_as<std::string>(GridTableRow_array[2]);
		double d;
		if (GridTableRow_array[2] == "")
		{
			BoolCheckArr[2] = false;
		}
		else {
			try {
				for (int i = 0; i < System::Convert::ToInt32(buf_str.length()); i++) {
					if (buf_str[i] == ',')
						buf_str[i] = '.';
				}
				changer_fix = gcnew System::String(buf_str.c_str());

				d = Double::Parse(GridTableRow_array[2]);
				if ((System::Convert::ToDouble(GridTableRow_array[2]) >= 2.0) && (System::Convert::ToDouble(GridTableRow_array[2]) <= 5.0))
					BoolCheckArr[2] = true;
			}
			catch (...) {
				BoolCheckArr[2] = false;
			}
		}

		//Другие валидации
		BoolCheckArr[3] = ((GridTableRow_array[3] == "да") || (GridTableRow_array[3] == "нет")) ? true : false;
		BoolCheckArr[4] = ((GridTableRow_array[4] == "очная") || (GridTableRow_array[4] == "заочная")) ? true : false;
		BoolCheckArr[5] = ((GridTableRow_array[5] == "ПКС") || (GridTableRow_array[5] == "ИБАС")) ? true : false;
		BoolCheckArr[6] = ((GridTableRow_array[6] == "оригинал") || (GridTableRow_array[6] == "копия")) ? true : false;
		BoolCheckArr[7] = ((GridTableRow_array[7] == "бюджет") || (GridTableRow_array[7] == "договор")) ? true : false;

		for (int i = 1; i < BoolCheckArr->Length; i++)
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
			cmdSelect->CommandText = "SELECT * FROM students;";
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
	private: System::Void DBChangerForm_Load(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->DataSource = GetDataTable();
	}
	private: System::Void RemoveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//Номер выделенной строки
		int index = dataGridView1->CurrentCell->RowIndex;
		//Определим _id в выделенной строке
		String^ ID = dataGridView1->Rows[index]->Cells["ID"]->Value->ToString();

		SQLiteConnection ^db = gcnew SQLiteConnection();
		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();
		SQLiteCommand ^cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = "DELETE FROM students WHERE ID = " + ID + ";";
		cmdInsertValue->ExecuteNonQuery();
		db->Close();
		dataGridView1->DataSource = GetDataTable();
		MessageBox::Show("Успешное удаление данных");
		
	}
		
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		int index = dataGridView1->CurrentCell->RowIndex;

		GridTableRow_array = gcnew array<String^>(9);
		for (int i = 0; i < GridTableRow_array->Length; i++)
			GridTableRow_array[i] = dataGridView1->Rows[index]->Cells[i]->Value->ToString();

		if (valid_checker() == 0) {

			SQLiteConnection ^db = gcnew SQLiteConnection();
			db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
			db->Open();

			SQLiteCommand ^cmdInsertValue = db->CreateCommand();
			cmdInsertValue->CommandText = "INSERT INTO students VALUES(NULL,'" + GridTableRow_array[1] + "'," + changer_fix +
				",'" + GridTableRow_array[3] + "','" + GridTableRow_array[4] + "','" + GridTableRow_array[5] +
				"','" + GridTableRow_array[6] + "', '" + GridTableRow_array[7] + "','" + GridTableRow_array[8] + "');";
			cmdInsertValue->ExecuteNonQuery();
			db->Close();
			MessageBox::Show("Успешная запись данных");
		}
		else
			MessageBox::Show("Проверьте правильность ввода данных!");
		
		dataGridView1->DataSource = GetDataTable();
	}
	private: System::Void UpdateBDButton_Click(System::Object^  sender, System::EventArgs^  e) {

		int index = dataGridView1->CurrentCell->RowIndex;
		String^ ID = dataGridView1->Rows[index]->Cells["ID"]->Value->ToString();

		GridTableRow_array = gcnew array<String^>(9);
		for (int i = 0; i < GridTableRow_array->Length; i++)
			GridTableRow_array[i] = dataGridView1->Rows[index]->Cells[i]->Value->ToString();

		if (valid_checker() == 0) {

			SQLiteConnection ^db = gcnew SQLiteConnection();
			db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
			db->Open();

			SQLiteCommand ^cmdInsertValue = db->CreateCommand();
			cmdInsertValue->CommandText = "UPDATE students SET name='" + GridTableRow_array[1] + "',score=" + changer_fix +
				",priority='" + GridTableRow_array[3] + "',form_sudy='" + GridTableRow_array[4] + "',major='" + GridTableRow_array[5] +
				"',original='" + GridTableRow_array[6] + "', form_pay='" + GridTableRow_array[7] + "',date='" + GridTableRow_array[8] + "' WHERE ID =" + ID;
			cmdInsertValue->ExecuteNonQuery();
			db->Close();
			MessageBox::Show("Успешное обновление данных");
		}
		else
			MessageBox::Show("Проверьте правильность ввода данных!");

		dataGridView1->DataSource = GetDataTable();
	}
};
}
