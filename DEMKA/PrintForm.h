#include <cliext/vector>
#include <map>
#include <list>
#include <string>
#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace System::Text;
	using namespace System::Collections;
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
	private: System::Windows::Forms::GroupBox^  PayPrintBox;
	private: System::Windows::Forms::RadioButton^  PayRadioButton2;

	private: System::Windows::Forms::RadioButton^  PayRadioButton1;
	protected:

	protected:

	protected:



	private: System::Windows::Forms::GroupBox^  MajorPrintBox;
	private: System::Windows::Forms::RadioButton^  MajorRadioButton2;


	private: System::Windows::Forms::RadioButton^  MajorRadioButton1;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PrintForm::typeid));
			this->PayPrintBox = (gcnew System::Windows::Forms::GroupBox());
			this->PayRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->PayRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->MajorPrintBox = (gcnew System::Windows::Forms::GroupBox());
			this->MajorRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->MajorRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->ReportButton = (gcnew System::Windows::Forms::Button());
			this->PayPrintBox->SuspendLayout();
			this->MajorPrintBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// PayPrintBox
			// 
			this->PayPrintBox->Controls->Add(this->PayRadioButton2);
			this->PayPrintBox->Controls->Add(this->PayRadioButton1);
			this->PayPrintBox->Location = System::Drawing::Point(5, 12);
			this->PayPrintBox->Name = L"PayPrintBox";
			this->PayPrintBox->Size = System::Drawing::Size(182, 107);
			this->PayPrintBox->TabIndex = 0;
			this->PayPrintBox->TabStop = false;
			this->PayPrintBox->Text = L"Фильтр по форме оплаты";
			// 
			// PayRadioButton2
			// 
			this->PayRadioButton2->AutoSize = true;
			this->PayRadioButton2->Location = System::Drawing::Point(17, 72);
			this->PayRadioButton2->Name = L"PayRadioButton2";
			this->PayRadioButton2->Size = System::Drawing::Size(69, 17);
			this->PayRadioButton2->TabIndex = 1;
			this->PayRadioButton2->TabStop = true;
			this->PayRadioButton2->Text = L"Договор";
			this->PayRadioButton2->UseVisualStyleBackColor = true;
			// 
			// PayRadioButton1
			// 
			this->PayRadioButton1->AutoSize = true;
			this->PayRadioButton1->Location = System::Drawing::Point(17, 38);
			this->PayRadioButton1->Name = L"PayRadioButton1";
			this->PayRadioButton1->Size = System::Drawing::Size(65, 17);
			this->PayRadioButton1->TabIndex = 0;
			this->PayRadioButton1->TabStop = true;
			this->PayRadioButton1->Text = L"Бюджет";
			this->PayRadioButton1->UseVisualStyleBackColor = true;
			// 
			// MajorPrintBox
			// 
			this->MajorPrintBox->Controls->Add(this->MajorRadioButton2);
			this->MajorPrintBox->Controls->Add(this->MajorRadioButton1);
			this->MajorPrintBox->Location = System::Drawing::Point(193, 12);
			this->MajorPrintBox->Name = L"MajorPrintBox";
			this->MajorPrintBox->Size = System::Drawing::Size(182, 107);
			this->MajorPrintBox->TabIndex = 1;
			this->MajorPrintBox->TabStop = false;
			this->MajorPrintBox->Text = L"Фильтр по специальности:";
			// 
			// MajorRadioButton2
			// 
			this->MajorRadioButton2->AutoSize = true;
			this->MajorRadioButton2->Location = System::Drawing::Point(6, 72);
			this->MajorRadioButton2->Name = L"MajorRadioButton2";
			this->MajorRadioButton2->Size = System::Drawing::Size(54, 17);
			this->MajorRadioButton2->TabIndex = 1;
			this->MajorRadioButton2->TabStop = true;
			this->MajorRadioButton2->Text = L"ИБАС";
			this->MajorRadioButton2->UseVisualStyleBackColor = true;
			// 
			// MajorRadioButton1
			// 
			this->MajorRadioButton1->AutoSize = true;
			this->MajorRadioButton1->Location = System::Drawing::Point(6, 38);
			this->MajorRadioButton1->Name = L"MajorRadioButton1";
			this->MajorRadioButton1->Size = System::Drawing::Size(47, 17);
			this->MajorRadioButton1->TabIndex = 0;
			this->MajorRadioButton1->TabStop = true;
			this->MajorRadioButton1->Text = L"ПКС";
			this->MajorRadioButton1->UseVisualStyleBackColor = true;
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
			this->Controls->Add(this->PayPrintBox);
			this->Controls->Add(this->MajorPrintBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PrintForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Формирование рейтинга";
			this->Load += gcnew System::EventHandler(this, &PrintForm::PrintForm_Load);
			this->PayPrintBox->ResumeLayout(false);
			this->PayPrintBox->PerformLayout();
			this->MajorPrintBox->ResumeLayout(false);
			this->MajorPrintBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		public: ref class memclass {
			public:
				int ^ID;
				System::String ^name;
				double score;
				System::String ^priority;
				System::String ^form_study;
				System::String ^major;
				System::String ^original;
				System::String ^form_pay;
				System::String ^date;
				memclass() {};
		};
		System::Collections::Generic::List<memclass^> ^InputLists;

		String^ SQLFormatter(){
			
			//Дефолт выбор
			if ((PayRadioButton1->Checked == true) && (MajorRadioButton1->Checked == true))
				return "SELECT * FROM students WHERE form_pay = 'бюджет' AND major='ПКС' ORDER BY score DESC;";

			if ((PayRadioButton1->Checked == true) && (MajorRadioButton2->Checked == true))
				return "SELECT * FROM students WHERE form_pay = 'бюджет' AND major='ИБАС' ORDER BY score DESC;";

			if ((PayRadioButton2->Checked == true) && (MajorRadioButton1->Checked == true))
				return "SELECT * FROM students WHERE form_pay = 'договор' AND major='ПКС' ORDER BY score DESC;";

			if ((PayRadioButton2->Checked == true) && (MajorRadioButton2->Checked == true))
				return "SELECT * FROM students WHERE form_pay = 'договор' AND major='ИБАС' ORDER BY score DESC;";

			//Если какой-либо параметр не из формы оплаты
			if ((PayRadioButton1->Checked == false) && (PayRadioButton2->Checked == false) && ((MajorRadioButton1->Checked == true)))
				return "SELECT * FROM students WHERE major='ПКС' ORDER BY score DESC;";
			if ((PayRadioButton1->Checked == false) && (PayRadioButton2->Checked == false) && ((MajorRadioButton2->Checked == true)))
				return "SELECT * FROM students WHERE major='ИБАС' ORDER BY score DESC;";

			//Если какой-либо параметр не из специальности
			if ((MajorRadioButton1->Checked == false) && (MajorRadioButton2->Checked == false) && (PayRadioButton1->Checked == true))
				return "SELECT * FROM students WHERE form_pay = 'бюджет' ORDER BY score DESC;";
			if ((MajorRadioButton1->Checked == false) && (MajorRadioButton2->Checked == false) && (PayRadioButton2->Checked == true))
				return "SELECT * FROM students WHERE form_pay = 'договор' ORDER BY score DESC;";

			//Тут нужно обработать, если совершенно ничего не нажимали, но позже

		}
		
	private: void SQLGetter(String^ SQLCommand) {

		SQLiteConnection ^db = gcnew SQLiteConnection();
		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();

		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = SQLCommand;
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();

		while (data->Read()) {

			memclass ^InputList = gcnew memclass();

			InputList->ID = Int32::Parse(data["ID"]->ToString());
			InputList->name = data["name"]->ToString();
			InputList->score = Double::Parse(data["score"]->ToString());
			InputList->priority = data["priority"]->ToString();
			InputList->form_study = data["form_study"]->ToString();
			InputList->major = data["major"]->ToString();
			InputList->original = data["original"]->ToString();
			InputList->form_pay = data["form_pay"]->ToString();
			InputList->date = data["date"]->ToString();
			InputLists->Add(InputList);
		}

		db->Close();
	}

	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void ReportButton_Click(System::Object^  sender, System::EventArgs^  e) {

		SQLGetter(SQLFormatter());

		Object ^ ФорматСтроки = Microsoft::Office::Interop::Word::WdUnits::wdLine;
		auto t = Type::Missing;
		auto WORD = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
		WORD->Visible = true;
		auto Документ = WORD->Documents->Add(t, t, t, t);

		std::map <int, std::string> TableHeaders;
		TableHeaders[0] = "№";
		TableHeaders[1] = "ФИО";
		TableHeaders[2] = "Средний балл";
		TableHeaders[3] = "Приоритет";
		TableHeaders[4] = "Форма обучения";
		TableHeaders[5] = "Специальность";
		TableHeaders[6] = "Аттестат";
		TableHeaders[7] = "Форма оплаты";
		TableHeaders[8] = "Дата";

		//Начинаем работу с Word
		WORD->Selection->ParagraphFormat->Alignment = Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphCenter;
		WORD->Selection->Font->Name = ("Times New Roman");
		WORD->Selection->Font->Bold = 1;
		WORD->Selection->Font->Size = 20;
		WORD->Selection->TypeText("Рейтинг абитуриентов");
		WORD->Selection->Font->Size = 12;
		WORD->Selection->TypeParagraph();
		WORD->Selection->ParagraphFormat->Alignment = Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphJustify;
		WORD->Selection->Font->Bold = false;
		WORD->Selection->Font->Size = 9;

		int linecounter = 0;
		for each (memclass ^InputList in InputLists)
			linecounter++;
		
		//Создаём таблицу
		Object ^ ПоказыватьГраницы = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
		Object ^ РегулирШирины = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitWindow;
		Microsoft::Office::Interop::Word::Range ^ wrdRng = WORD->Selection->Range;
		WORD->ActiveDocument->Tables->Add(wrdRng, linecounter+1, 9, ПоказыватьГраницы, РегулирШирины);
		
		//Заполнение заголовков таблицы
		for (int i = 0; i < 9; i++) {
			String^ buf = gcnew System::String(TableHeaders[i].c_str());
			WORD->ActiveDocument->Tables[1]->Cell(1, i + 1)->Range->InsertAfter(buf);
		}
		//Заполнение ячеек таблицы
		int i = 2;
		for each (memclass ^InputList in InputLists) {
			WORD->ActiveDocument->Tables[1]->Cell(i, 1)->Range->InsertAfter(System::Convert::ToString(i-1));
			WORD->ActiveDocument->Tables[1]->Cell(i, 2)->Range->InsertAfter(InputList->name);
			WORD->ActiveDocument->Tables[1]->Cell(i, 3)->Range->InsertAfter(System::Convert::ToString(InputList->score));
			WORD->ActiveDocument->Tables[1]->Cell(i, 4)->Range->InsertAfter(InputList->priority);
			WORD->ActiveDocument->Tables[1]->Cell(i, 5)->Range->InsertAfter(InputList->form_study);
			WORD->ActiveDocument->Tables[1]->Cell(i, 6)->Range->InsertAfter(InputList->major);
			WORD->ActiveDocument->Tables[1]->Cell(i, 7)->Range->InsertAfter(InputList->original);
			WORD->ActiveDocument->Tables[1]->Cell(i, 8)->Range->InsertAfter(InputList->form_pay);
			WORD->ActiveDocument->Tables[1]->Cell(i, 9)->Range->InsertAfter(InputList->date);
			i++;
		}
	}
		
	private: System::Void PrintForm_Load(System::Object^  sender, System::EventArgs^  e) {
		InputLists = gcnew System::Collections::Generic::List<memclass^>();
	}
};
}
