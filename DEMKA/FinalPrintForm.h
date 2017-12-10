#include "GlobalClass.h"
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
	using namespace Globals;
	/// <summary>
	/// Сводка для FinalPrintForm
	/// </summary>
	public ref class FinalPrintForm : public System::Windows::Forms::Form
	{
	public:
		FinalPrintForm(void)
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
		~FinalPrintForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::GroupBox^  MainGroupBox;
	private: System::Windows::Forms::GroupBox^  OtherGroupBox;


	private: System::Windows::Forms::CheckBox^  ParentsContactsCheckBox;
	private: System::Windows::Forms::CheckBox^  StudentContactsCheckBox;
	private: System::Windows::Forms::CheckBox^  MainInfoCheckBox;
	private: System::Windows::Forms::CheckBox^  WriterCheckBox;

	private: System::Windows::Forms::CheckBox^  TimeCheckBox;

	private: System::Windows::Forms::CheckBox^  DateCheckBox;
	private: System::Windows::Forms::Button^  ReportButton;
	private: System::Windows::Forms::Button^  ExitButton;
	private: System::Windows::Forms::GroupBox^  FastCheckGroupBox;
	private: System::Windows::Forms::Button^  NoneCheckButton;
	private: System::Windows::Forms::Button^  AllCheckButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FinalPrintForm::typeid));
			this->MainGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->ParentsContactsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->StudentContactsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->MainInfoCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->OtherGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->WriterCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->TimeCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->DateCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->ReportButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->FastCheckGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->NoneCheckButton = (gcnew System::Windows::Forms::Button());
			this->AllCheckButton = (gcnew System::Windows::Forms::Button());
			this->MainGroupBox->SuspendLayout();
			this->OtherGroupBox->SuspendLayout();
			this->FastCheckGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainGroupBox
			// 
			this->MainGroupBox->Controls->Add(this->ParentsContactsCheckBox);
			this->MainGroupBox->Controls->Add(this->StudentContactsCheckBox);
			this->MainGroupBox->Controls->Add(this->MainInfoCheckBox);
			this->MainGroupBox->Location = System::Drawing::Point(12, 12);
			this->MainGroupBox->Name = L"MainGroupBox";
			this->MainGroupBox->Size = System::Drawing::Size(201, 120);
			this->MainGroupBox->TabIndex = 2;
			this->MainGroupBox->TabStop = false;
			this->MainGroupBox->Text = L"Основные параметры";
			// 
			// ParentsContactsCheckBox
			// 
			this->ParentsContactsCheckBox->AutoSize = true;
			this->ParentsContactsCheckBox->Location = System::Drawing::Point(6, 80);
			this->ParentsContactsCheckBox->Name = L"ParentsContactsCheckBox";
			this->ParentsContactsCheckBox->Size = System::Drawing::Size(184, 17);
			this->ParentsContactsCheckBox->TabIndex = 2;
			this->ParentsContactsCheckBox->Text = L"Контактные данные родителей";
			this->ParentsContactsCheckBox->UseVisualStyleBackColor = true;
			// 
			// StudentContactsCheckBox
			// 
			this->StudentContactsCheckBox->AutoSize = true;
			this->StudentContactsCheckBox->Location = System::Drawing::Point(6, 56);
			this->StudentContactsCheckBox->Name = L"StudentContactsCheckBox";
			this->StudentContactsCheckBox->Size = System::Drawing::Size(128, 17);
			this->StudentContactsCheckBox->TabIndex = 1;
			this->StudentContactsCheckBox->Text = L"Контактные данные";
			this->StudentContactsCheckBox->UseVisualStyleBackColor = true;
			// 
			// MainInfoCheckBox
			// 
			this->MainInfoCheckBox->AutoSize = true;
			this->MainInfoCheckBox->Location = System::Drawing::Point(6, 32);
			this->MainInfoCheckBox->Name = L"MainInfoCheckBox";
			this->MainInfoCheckBox->Size = System::Drawing::Size(143, 17);
			this->MainInfoCheckBox->TabIndex = 0;
			this->MainInfoCheckBox->Text = L"Основная информация";
			this->MainInfoCheckBox->UseVisualStyleBackColor = true;
			// 
			// OtherGroupBox
			// 
			this->OtherGroupBox->Controls->Add(this->WriterCheckBox);
			this->OtherGroupBox->Controls->Add(this->TimeCheckBox);
			this->OtherGroupBox->Controls->Add(this->DateCheckBox);
			this->OtherGroupBox->Location = System::Drawing::Point(229, 12);
			this->OtherGroupBox->Name = L"OtherGroupBox";
			this->OtherGroupBox->Size = System::Drawing::Size(191, 120);
			this->OtherGroupBox->TabIndex = 3;
			this->OtherGroupBox->TabStop = false;
			this->OtherGroupBox->Text = L"Дополнительные параметры";
			// 
			// WriterCheckBox
			// 
			this->WriterCheckBox->AutoSize = true;
			this->WriterCheckBox->Location = System::Drawing::Point(7, 78);
			this->WriterCheckBox->Name = L"WriterCheckBox";
			this->WriterCheckBox->Size = System::Drawing::Size(118, 17);
			this->WriterCheckBox->TabIndex = 2;
			this->WriterCheckBox->Text = L"Поле для подписи";
			this->WriterCheckBox->UseVisualStyleBackColor = true;
			// 
			// TimeCheckBox
			// 
			this->TimeCheckBox->AutoSize = true;
			this->TimeCheckBox->Location = System::Drawing::Point(6, 55);
			this->TimeCheckBox->Name = L"TimeCheckBox";
			this->TimeCheckBox->Size = System::Drawing::Size(174, 17);
			this->TimeCheckBox->TabIndex = 1;
			this->TimeCheckBox->Text = L"Время формирования отчета";
			this->TimeCheckBox->UseVisualStyleBackColor = true;
			// 
			// DateCheckBox
			// 
			this->DateCheckBox->AutoSize = true;
			this->DateCheckBox->Location = System::Drawing::Point(7, 32);
			this->DateCheckBox->Name = L"DateCheckBox";
			this->DateCheckBox->Size = System::Drawing::Size(167, 17);
			this->DateCheckBox->TabIndex = 0;
			this->DateCheckBox->Text = L"Дата формирования отчета";
			this->DateCheckBox->UseVisualStyleBackColor = true;
			// 
			// ReportButton
			// 
			this->ReportButton->Location = System::Drawing::Point(463, 138);
			this->ReportButton->Name = L"ReportButton";
			this->ReportButton->Size = System::Drawing::Size(139, 44);
			this->ReportButton->TabIndex = 5;
			this->ReportButton->Text = L"Формирование отчета";
			this->ReportButton->UseVisualStyleBackColor = true;
			this->ReportButton->Click += gcnew System::EventHandler(this, &FinalPrintForm::ReportButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 138);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(139, 44);
			this->ExitButton->TabIndex = 4;
			this->ExitButton->Text = L"Главное меню";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &FinalPrintForm::ExitButton_Click);
			// 
			// FastCheckGroupBox
			// 
			this->FastCheckGroupBox->Controls->Add(this->NoneCheckButton);
			this->FastCheckGroupBox->Controls->Add(this->AllCheckButton);
			this->FastCheckGroupBox->Location = System::Drawing::Point(438, 12);
			this->FastCheckGroupBox->Name = L"FastCheckGroupBox";
			this->FastCheckGroupBox->Size = System::Drawing::Size(176, 120);
			this->FastCheckGroupBox->TabIndex = 6;
			this->FastCheckGroupBox->TabStop = false;
			this->FastCheckGroupBox->Text = L"Быстрый выбор";
			// 
			// NoneCheckButton
			// 
			this->NoneCheckButton->Location = System::Drawing::Point(7, 68);
			this->NoneCheckButton->Name = L"NoneCheckButton";
			this->NoneCheckButton->Size = System::Drawing::Size(157, 35);
			this->NoneCheckButton->TabIndex = 1;
			this->NoneCheckButton->Text = L"Сбросить все";
			this->NoneCheckButton->UseVisualStyleBackColor = true;
			this->NoneCheckButton->Click += gcnew System::EventHandler(this, &FinalPrintForm::NoneCheckButton_Click);
			// 
			// AllCheckButton
			// 
			this->AllCheckButton->Location = System::Drawing::Point(7, 27);
			this->AllCheckButton->Name = L"AllCheckButton";
			this->AllCheckButton->Size = System::Drawing::Size(157, 35);
			this->AllCheckButton->TabIndex = 0;
			this->AllCheckButton->Text = L"Выбрать все";
			this->AllCheckButton->UseVisualStyleBackColor = true;
			this->AllCheckButton->Click += gcnew System::EventHandler(this, &FinalPrintForm::AllCheckButton_Click);
			// 
			// FinalPrintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(627, 196);
			this->Controls->Add(this->FastCheckGroupBox);
			this->Controls->Add(this->ReportButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->OtherGroupBox);
			this->Controls->Add(this->MainGroupBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FinalPrintForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Отчет об абитуриенте";
			this->MainGroupBox->ResumeLayout(false);
			this->MainGroupBox->PerformLayout();
			this->OtherGroupBox->ResumeLayout(false);
			this->OtherGroupBox->PerformLayout();
			this->FastCheckGroupBox->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	array<String^>^ main_arr;
	array<String^>^ StudContacts_arr;
	array<String^>^ ParentsCont_arr;

	public: String^ PublicStudentID;
	private: void MainInfoGetter() {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		main_arr = gcnew array<String^>(9);
		String^ SQL_STRING = (PublicStudentID == "0") ? "SELECT * FROM students WHERE ID = (SELECT MAX(ID) FROM students);" : "SELECT * FROM students WHERE ID = " + PublicStudentID + ";";
		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		db->Open();

		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQL_STRING;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();
		while (data->Read())
			for (int cell_index = 0; cell_index < data->FieldCount; cell_index++)
				main_arr[cell_index] = data->GetValue(cell_index)->ToString();
		db->Close();
	}
	
	private: void AllCheckBoxChecker() {
		MainInfoCheckBox->Checked = true;
		StudentContactsCheckBox->Checked = true;
		ParentsContactsCheckBox->Checked = true;
		DateCheckBox->Checked = true;
		TimeCheckBox->Checked = true;
		WriterCheckBox->Checked = true;
	}

	private: void NoneCheckBoxChecker() {
		MainInfoCheckBox->Checked = false;
		StudentContactsCheckBox->Checked = false;
		ParentsContactsCheckBox->Checked = false;
		DateCheckBox->Checked = false;
		TimeCheckBox->Checked = false;
		WriterCheckBox->Checked = false;
	}

	private: void StudentContactsInfoGetter() {
		SQLiteConnection ^db = gcnew SQLiteConnection();
		StudContacts_arr = gcnew array<String^>(5);
		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		String^ SQL_STRING = (PublicStudentID == "0") ? "SELECT * FROM contacts WHERE student_id = (SELECT MAX(student_id) FROM contacts);" : "SELECT * FROM contacts WHERE student_id = " + PublicStudentID + ";";
		db->Open();

		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQL_STRING;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();
		while (data->Read())

			for (int cell_index = 0; cell_index < data->FieldCount; cell_index++)
				StudContacts_arr[cell_index] = data->GetValue(cell_index)->ToString();
		db->Close();
	}

	private: void ParentsContactsInfoGetter() {
		SQLiteConnection ^db = gcnew SQLiteConnection();
		ParentsCont_arr = gcnew array<String^>(6);
		db->ConnectionString = GlobalClass::SQLGlobalPatch;
		String^ SQL_STRING = (PublicStudentID == "0") ? "SELECT * FROM parents WHERE student_id = (SELECT MAX(student_id) FROM parents);" : "SELECT * FROM parents WHERE student_id = " + PublicStudentID + ";";
		db->Open();

		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQL_STRING;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();

		while (data->Read())
			for (int cell_index = 0; cell_index < data->FieldCount; cell_index++)
				ParentsCont_arr[cell_index] = data->GetValue(cell_index)->ToString();
		db->Close();
	}

	private: void WordWorker() {

		System::DateTime now = System::DateTime::Now;
		String^ date_str = now.ToString("d");
		String^ time_str = now.ToString("t");
		Object ^ ФорматСтроки = Microsoft::Office::Interop::Word::WdUnits::wdLine;
		auto t = Type::Missing;

		auto WORD = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
		WORD->Visible = true;
		auto Документ = WORD->Documents->Add(t, t, t, t);

		WORD->Selection->ParagraphFormat->Alignment =
			Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphCenter; //абзац по центру
		WORD->Selection->Font->Name = ("Times New Roman"); //тип шрифта
		WORD->Selection->Font->Bold = 1; // жирный шрифт
		WORD->Selection->Font->Size = 18; // высота шрифта 18
		WORD->Selection->TypeText("Справка о приеме документов в КИП при ФУ РФ");

		WORD->Selection->Font->Size = 12;
		WORD->Selection->TypeParagraph();
		WORD->Selection->ParagraphFormat->Alignment = Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphJustify;

		//Основная информация
		if (MainInfoCheckBox->Checked == true) {
			MainInfoGetter();

			WORD->Selection->TypeParagraph();
			WORD->Selection->Font->Size = 16;
			WORD->Selection->TypeText("Основная информация:");
			WORD->Selection->Font->Bold = false;
			WORD->Selection->TypeParagraph();
			WORD->Selection->Font->Size = 14;

			WORD->Selection->TypeText(
				"ФИО: " + main_arr[1] + "\n" +
				"Средний балл аттестата: " + main_arr[2] + "\n" +
				"Направление: " + main_arr[5] + "\n" +
				"Форма оплаты: " + main_arr[7] + "\n" +
				"Тип аттестата: " + main_arr[6] + "\n" +
				"Форма обучения: " + main_arr[4] + "\n" +
				"Приоритет: " + main_arr[3] + "\n"
			);

		}

		if (StudentContactsCheckBox->Checked == true) {
			StudentContactsInfoGetter();

			WORD->Selection->TypeParagraph();
			WORD->Selection->Font->Size = 16;
			WORD->Selection->Font->Bold = true;
			WORD->Selection->TypeText("Контактные данные абитуриента:");
			WORD->Selection->Font->Bold = false;
			WORD->Selection->TypeParagraph();
			WORD->Selection->Font->Size = 14;

			WORD->Selection->TypeText(
				"Адрес: " + StudContacts_arr[2] + "\n" +
				"E-mail: " + StudContacts_arr[3] + "\n" +
				"Телефон: " + StudContacts_arr[4] + "\n"
			);
		}

		if (ParentsContactsCheckBox->Checked == true) {
			ParentsContactsInfoGetter();

			WORD->Selection->TypeParagraph();
			WORD->Selection->Font->Size = 16;
			WORD->Selection->Font->Bold = true;
			WORD->Selection->TypeText("Контактные данные родителей абитуриента:");
			WORD->Selection->Font->Bold = false;
			WORD->Selection->TypeParagraph();
			WORD->Selection->Font->Size = 14;

			WORD->Selection->TypeText(
				"ФИО: " + ParentsCont_arr[2] + "\n" +
				"Адрес: " + ParentsCont_arr[4] + "\n" +
				"E-mail: " + ParentsCont_arr[3] + "\n" +
				"Телефон: " + ParentsCont_arr[5] + "\n"
			);
		}

		if (DateCheckBox->Checked == true) {
			WORD->Selection->ParagraphFormat->Alignment = Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphRight;
			WORD->Selection->TypeText("Дата: " + date_str + "\n");
		}

		if (TimeCheckBox->Checked == true) {
			WORD->Selection->ParagraphFormat->Alignment = Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphRight;
			WORD->Selection->TypeText("Время: " + time_str + "\n");
		}

		if (WriterCheckBox->Checked == true) {
			WORD->Selection->ParagraphFormat->Alignment = Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphRight;
			WORD->Selection->TypeText(
				"Подпись: ______________\n" +
				"Расшифровка: ______________"
			);
		}
	}

	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}

	private: System::Void ReportButton_Click(System::Object^  sender, System::EventArgs^  e) {
		WordWorker();
	}

	private: System::Void AllCheckButton_Click(System::Object^  sender, System::EventArgs^  e) {
		AllCheckBoxChecker();
	}

	private: System::Void NoneCheckButton_Click(System::Object^  sender, System::EventArgs^  e) {
		NoneCheckBoxChecker();
	}
};
}
