#include <cliext/vector>
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
	/// Сводка для PrintForm
	/// </summary>
	public ref class PrintForm : public System::Windows::Forms::Form
	{
	public:
		PrintForm(void)
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
		~PrintForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  Form_PayPrintBox;
	protected:

	protected:
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  MajorPrintBox;

	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Button^  ExitButton;
	private: System::Windows::Forms::Button^  ReportButton;


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
			this->Form_PayPrintBox = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->MajorPrintBox = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->ReportButton = (gcnew System::Windows::Forms::Button());
			this->Form_PayPrintBox->SuspendLayout();
			this->MajorPrintBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// Form_PayPrintBox
			// 
			this->Form_PayPrintBox->Controls->Add(this->radioButton2);
			this->Form_PayPrintBox->Controls->Add(this->radioButton1);
			this->Form_PayPrintBox->Location = System::Drawing::Point(5, 12);
			this->Form_PayPrintBox->Name = L"Form_PayPrintBox";
			this->Form_PayPrintBox->Size = System::Drawing::Size(182, 107);
			this->Form_PayPrintBox->TabIndex = 0;
			this->Form_PayPrintBox->TabStop = false;
			this->Form_PayPrintBox->Text = L"Фильтр по форме оплаты";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(17, 72);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(69, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Договор";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(17, 38);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(65, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Бюджет";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// MajorPrintBox
			// 
			this->MajorPrintBox->Controls->Add(this->radioButton4);
			this->MajorPrintBox->Controls->Add(this->radioButton3);
			this->MajorPrintBox->Location = System::Drawing::Point(193, 12);
			this->MajorPrintBox->Name = L"MajorPrintBox";
			this->MajorPrintBox->Size = System::Drawing::Size(182, 107);
			this->MajorPrintBox->TabIndex = 1;
			this->MajorPrintBox->TabStop = false;
			this->MajorPrintBox->Text = L"Фильтр по специальности:";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 72);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(54, 17);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"ИБАС";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 38);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(47, 17);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"ПКС";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 143);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(139, 44);
			this->ExitButton->TabIndex = 2;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &PrintForm::ExitButton_Click);
			// 
			// ReportButton
			// 
			this->ReportButton->Location = System::Drawing::Point(212, 143);
			this->ReportButton->Name = L"ReportButton";
			this->ReportButton->Size = System::Drawing::Size(139, 44);
			this->ReportButton->TabIndex = 3;
			this->ReportButton->Text = L"Формирование отчета";
			this->ReportButton->UseVisualStyleBackColor = true;
			this->ReportButton->Click += gcnew System::EventHandler(this, &PrintForm::ReportButton_Click);
			// 
			// PrintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 205);
			this->Controls->Add(this->ReportButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->Form_PayPrintBox);
			this->Controls->Add(this->MajorPrintBox);
			this->Name = L"PrintForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Формаирование рейтинга";
			this->Form_PayPrintBox->ResumeLayout(false);
			this->Form_PayPrintBox->PerformLayout();
			this->MajorPrintBox->ResumeLayout(false);
			this->MajorPrintBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: DataTable^ GetDataTable() {

		std::map <int, std::string> rows_formatter;
		rows_formatter[0] = "№ заявления";
		rows_formatter[1] = "ФИО";
		rows_formatter[2] = "Сред. балл";
		rows_formatter[3] = "Приоритет";
		rows_formatter[4] = "Форма обучения";
		rows_formatter[5] = "Специальность";
		rows_formatter[6] = "Аттестат";
		rows_formatter[7] = "Форма оплаты";
		rows_formatter[8] = "Дата ";

		DataTable ^table;
		DataColumn ^column;
		DataRow ^row;

		SQLiteConnection ^db = gcnew SQLiteConnection();

		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();

		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = "SELECT * FROM students;";
		SQLiteDataReader ^reader = cmdSelect->ExecuteReader();

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

		db->Close();
		return table;
	}

	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
private: System::Void ReportButton_Click(System::Object^  sender, System::EventArgs^  e) {
	//ПИЛИМ ТАБЛИЦУ В WORD С РЕЙТИНГОМ, МЕНЯЕМ SQL-СТРОКУ В ЗАВИСИМОСТИ ОТ ВЫБРАННЫХ RADIOBUTTON
	//ЭТО ДЛЯ WORD 
	Object ^ ФорматСтроки = Microsoft::Office::Interop::Word::WdUnits::wdLine;
	auto t = Type::Missing;

	auto WORD = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
	//Делаем видимым все происодящее 
	WORD->Visible = true;


			auto Документ = WORD->Documents->Add(t, t, t, t);


			//----------------------- РАБОТА С ТЕКСТОМ ------------------------------//
			WORD->Selection->ParagraphFormat->Alignment =
				Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphCenter; //абзац по центру
			WORD->Selection->Font->Name = ("Times New Roman"); //тип шрифта
			WORD->Selection->Font->Bold = 1; // жирный шрифт
			WORD->Selection->Font->Size = 20; // высота шрифта 20
			WORD->Selection->TypeText("Времена года");

			WORD->Selection->Font->Size = 12;
			WORD->Selection->TypeParagraph();
			WORD->Selection->ParagraphFormat->Alignment =
				Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphJustify;
			WORD->Selection->Font->Bold = false;
			WORD->Selection->TypeText("Основной причиной смены времён года " +
				"является наклон земной оси по отношению к плоскости эклиптики. " +
				"Без наклона оси продолжительность дня и ночи в любом месте Земли " +
				"была бы одинакова, и днём солнце поднималось бы над горизонтом " +
				"на одну и ту же высоту в течение всего года.");

			//----------------------- СОЗДАНИЕ ТАБЛИЦЫ ------------------------------//
			Object ^ ПоказыватьГраницы = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
			Object ^ РегулирШирины = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitWindow;
			Microsoft::Office::Interop::Word::Range ^ wrdRng = WORD->Selection->Range;
			WORD->ActiveDocument->Tables->Add(wrdRng, 3, 9, ПоказыватьГраницы, РегулирШирины);
			// Заполнение ячеек таблицы
			for (int i = 0; i < 3; i++) {
				for (int j = 1; j <	10; j++) {
					WORD->ActiveDocument->Tables[1]->Cell(i, j)->Range->InsertAfter("ТЕСТ");
				}
			}
			/*WORD->ActiveDocument->Tables[1]->Cell(1, 1)->Range->InsertAfter("Времена года");
			WORD->ActiveDocument->Tables[1]->Cell(1, 2)->Range->InsertAfter("Средняя t, C°");
			WORD->ActiveDocument->Tables[1]->Cell(2, 1)->Range->InsertAfter("Зима");
			WORD->ActiveDocument->Tables[1]->Cell(3, 1)->Range->InsertAfter("Весна");
			WORD->ActiveDocument->Tables[1]->Cell(4, 1)->Range->InsertAfter("Лето");
			*/
			//----------------------- СОХРАНЕНИЕ ОТЧЕТА ------------------------------//
			//Если формирование отчета проводить в скрытом режиме, то имеет смысл сохранится
			//Object ^ ИмяФайла = "C:\\документ.doc";
			//WORD->ActiveDocument->SaveAs(ИмяФайла,
			//t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
}
};
}
