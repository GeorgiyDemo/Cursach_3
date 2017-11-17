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
	/// ������ ��� DBChangerForm
	/// </summary>
	public ref class DBChangerForm : public System::Windows::Forms::Form
	{
	public:
		DBChangerForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	private: System::Windows::Forms::Button^  button1;
	public:
	public:
		SQLiteConnection ^db;
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::Button^  RemoveButton;

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
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->RemoveButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 283);
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
			this->dataGridView1->Size = System::Drawing::Size(942, 233);
			this->dataGridView1->TabIndex = 1;
			// 
			// RemoveButton
			// 
			this->RemoveButton->Location = System::Drawing::Point(209, 283);
			this->RemoveButton->Name = L"RemoveButton";
			this->RemoveButton->Size = System::Drawing::Size(122, 40);
			this->RemoveButton->TabIndex = 2;
			this->RemoveButton->Text = L"�������� �� ��";
			this->RemoveButton->UseVisualStyleBackColor = true;
			this->RemoveButton->Click += gcnew System::EventHandler(this, &DBChangerForm::RemoveButton_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(379, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DBChangerForm::button1_Click);
			// 
			// DBChangerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(942, 359);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->RemoveButton);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->ExitButton);
			this->Name = L"DBChangerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"��������� ������";
			this->Load += gcnew System::EventHandler(this, &DBChangerForm::DBChangerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

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
		
		//����� ���������� ������
		int index = dataGridView1->CurrentCell->RowIndex;
		//��������� _id � ���������� ������
		String^ ID = dataGridView1->Rows[index]->Cells["ID"]->Value->ToString();

		SQLiteConnection ^db = gcnew SQLiteConnection();
		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();
		SQLiteCommand ^cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = "DELETE FROM students WHERE ID = " + ID + ";";
		cmdInsertValue->ExecuteNonQuery();
		db->Close();
		dataGridView1->DataSource = GetDataTable();
		
		}
		
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		System::DateTime now = System::DateTime::Now;
		String^ date_str = now.ToString("d");
		
		SQLiteConnection ^db = gcnew SQLiteConnection();
		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();
		SQLiteCommand ^cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = "INSERT INTO students VALUES(NULL, '���', 40,'���','TEST','TEST','��������','�������','" + date_str + "');";
		cmdInsertValue->ExecuteNonQuery();
		db->Close();
		
		dataGridView1->DataSource = GetDataTable();
	}
};
}
