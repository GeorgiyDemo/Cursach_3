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
	/// Сводка для RatingForm
	/// </summary>
	public ref class RatingForm : public System::Windows::Forms::Form
	{
	public:
		RatingForm(void)
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
		~RatingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ExitButton;
	private: System::Windows::Forms::DataGridView^  dataGridView1;


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
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 290);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(136, 44);
			this->ExitButton->TabIndex = 0;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &RatingForm::ExitButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Menu;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dataGridView1->Location = System::Drawing::Point(12, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ShowCellErrors = false;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->Size = System::Drawing::Size(964, 261);
			this->dataGridView1->TabIndex = 1;
			// 
			// RatingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 340);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->ExitButton);
			this->Name = L"RatingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RatingForm";
			this->Load += gcnew System::EventHandler(this, &RatingForm::RatingForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void RatingForm_Load(System::Object^  sender, System::EventArgs^  e) {

		std::map <int, std::string> rows_formatter;
		rows_formatter[0] = "ФИО";
		rows_formatter[1] = "Сред. балл";
		rows_formatter[2] = "Приоритет";
		rows_formatter[3] = "Форма обучения";
		rows_formatter[4] = "Специальность";
		rows_formatter[5] = "№";
		rows_formatter[6] = "Аттестат";
		rows_formatter[7] = "Форма оплаты";
		rows_formatter[8] = "Дата ";

		SQLiteConnection ^db = gcnew SQLiteConnection();
		try
		{
			db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
			db->Open();

			SQLiteCommand ^cmdSelect = db->CreateCommand();
			cmdSelect->CommandText = "SELECT * FROM students;";
			SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
			DataTable ^table;
			DataColumn ^column;
			DataRow ^row;

			table = gcnew DataTable();

			vector<String^>^ nameColumns = gcnew vector<String^>();

			for (int i = 0; i < reader->FieldCount; i++) {
				String^ buf_row = gcnew System::String(rows_formatter[i].c_str());
				nameColumns->push_back(buf_row);
				column = gcnew DataColumn(nameColumns->at(i), String::typeid);
				table->Columns->Add(column);
			}

			while (reader->Read()) {
				row = table->NewRow();
				for (int i = 0; i < reader->FieldCount; i++) {
					row[nameColumns->at(i)] = reader->GetValue(i)->ToString();
					reader->GetValue(i)->ToString();
				}
				table->Rows->Add(row);
			}

			dataGridView1->DataSource = table;
			db->Close();
		}

		finally
		{
			delete (IDisposable^)db;
		}
	}
	};
}
