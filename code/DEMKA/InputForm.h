#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <string>
#include "MoreStudentInfoForm.h"
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
	/// Сводка для InputForm
	/// </summary>
	public ref class InputForm : public System::Windows::Forms::Form
	{
	public:
		InputForm(void)
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
		~InputForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  FIOBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  OriginalBox;
	private: System::Windows::Forms::RadioButton^  OriginalRadioButton2;


	private: System::Windows::Forms::RadioButton^  OriginalRadioButton1;
	private: System::Windows::Forms::GroupBox^  PriorityBox;
	private: System::Windows::Forms::RadioButton^  PriorityRadioButton2;



	private: System::Windows::Forms::RadioButton^  PriorityRadioButton1;
	private: System::Windows::Forms::TextBox^  ScoreBox;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;





	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  StudyformBox;
	private: System::Windows::Forms::RadioButton^  StudyformRadioButton2;
	private: System::Windows::Forms::RadioButton^  StudyformRadioButton1;
	private: System::Windows::Forms::Button^  NextButton;

	private: System::Windows::Forms::GroupBox^  FormPayGroupBox;
	private: System::Windows::Forms::RadioButton^  FormPayRadioButton2;



	private: System::Windows::Forms::RadioButton^  FormPayRadioButton1;
	private: System::Windows::Forms::Button^  MenuButton;
	private: System::Windows::Forms::Button^  PrinterButton;
	private: System::Windows::Forms::ComboBox^  MajorComboBox;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(InputForm::typeid));
			this->FIOBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->OriginalBox = (gcnew System::Windows::Forms::GroupBox());
			this->OriginalRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->OriginalRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->PriorityBox = (gcnew System::Windows::Forms::GroupBox());
			this->PriorityRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->PriorityRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->ScoreBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->MajorComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->StudyformBox = (gcnew System::Windows::Forms::GroupBox());
			this->StudyformRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->StudyformRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->FormPayGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->FormPayRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->FormPayRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->MenuButton = (gcnew System::Windows::Forms::Button());
			this->PrinterButton = (gcnew System::Windows::Forms::Button());
			this->OriginalBox->SuspendLayout();
			this->PriorityBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->StudyformBox->SuspendLayout();
			this->FormPayGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// FIOBox
			// 
			this->FIOBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->FIOBox->Location = System::Drawing::Point(135, 31);
			this->FIOBox->Name = L"FIOBox";
			this->FIOBox->Size = System::Drawing::Size(143, 20);
			this->FIOBox->TabIndex = 1;
			this->FIOBox->TextChanged += gcnew System::EventHandler(this, &InputForm::FIOBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ФИО:";
			// 
			// OriginalBox
			// 
			this->OriginalBox->Controls->Add(this->OriginalRadioButton2);
			this->OriginalBox->Controls->Add(this->OriginalRadioButton1);
			this->OriginalBox->Location = System::Drawing::Point(325, 38);
			this->OriginalBox->Name = L"OriginalBox";
			this->OriginalBox->Size = System::Drawing::Size(109, 68);
			this->OriginalBox->TabIndex = 3;
			this->OriginalBox->TabStop = false;
			this->OriginalBox->Text = L"Тип аттестата";
			// 
			// OriginalRadioButton2
			// 
			this->OriginalRadioButton2->AutoSize = true;
			this->OriginalRadioButton2->Location = System::Drawing::Point(7, 43);
			this->OriginalRadioButton2->Name = L"OriginalRadioButton2";
			this->OriginalRadioButton2->Size = System::Drawing::Size(56, 17);
			this->OriginalRadioButton2->TabIndex = 1;
			this->OriginalRadioButton2->TabStop = true;
			this->OriginalRadioButton2->Text = L"Копия";
			this->OriginalRadioButton2->UseVisualStyleBackColor = true;
			// 
			// OriginalRadioButton1
			// 
			this->OriginalRadioButton1->AutoSize = true;
			this->OriginalRadioButton1->Location = System::Drawing::Point(7, 20);
			this->OriginalRadioButton1->Name = L"OriginalRadioButton1";
			this->OriginalRadioButton1->Size = System::Drawing::Size(74, 17);
			this->OriginalRadioButton1->TabIndex = 0;
			this->OriginalRadioButton1->TabStop = true;
			this->OriginalRadioButton1->Text = L"Оригинал";
			this->OriginalRadioButton1->UseVisualStyleBackColor = true;
			// 
			// PriorityBox
			// 
			this->PriorityBox->Controls->Add(this->PriorityRadioButton2);
			this->PriorityBox->Controls->Add(this->PriorityRadioButton1);
			this->PriorityBox->Location = System::Drawing::Point(325, 112);
			this->PriorityBox->Name = L"PriorityBox";
			this->PriorityBox->Size = System::Drawing::Size(109, 66);
			this->PriorityBox->TabIndex = 4;
			this->PriorityBox->TabStop = false;
			this->PriorityBox->Text = L"Приоритет";
			// 
			// PriorityRadioButton2
			// 
			this->PriorityRadioButton2->AutoSize = true;
			this->PriorityRadioButton2->Location = System::Drawing::Point(7, 44);
			this->PriorityRadioButton2->Name = L"PriorityRadioButton2";
			this->PriorityRadioButton2->Size = System::Drawing::Size(44, 17);
			this->PriorityRadioButton2->TabIndex = 1;
			this->PriorityRadioButton2->TabStop = true;
			this->PriorityRadioButton2->Text = L"Нет";
			this->PriorityRadioButton2->UseVisualStyleBackColor = true;
			// 
			// PriorityRadioButton1
			// 
			this->PriorityRadioButton1->AutoSize = true;
			this->PriorityRadioButton1->Location = System::Drawing::Point(7, 20);
			this->PriorityRadioButton1->Name = L"PriorityRadioButton1";
			this->PriorityRadioButton1->Size = System::Drawing::Size(49, 17);
			this->PriorityRadioButton1->TabIndex = 0;
			this->PriorityRadioButton1->TabStop = true;
			this->PriorityRadioButton1->Text = L"Есть";
			this->PriorityRadioButton1->UseVisualStyleBackColor = true;
			// 
			// ScoreBox
			// 
			this->ScoreBox->Location = System::Drawing::Point(135, 59);
			this->ScoreBox->Name = L"ScoreBox";
			this->ScoreBox->Size = System::Drawing::Size(143, 20);
			this->ScoreBox->TabIndex = 5;
			this->ScoreBox->TextChanged += gcnew System::EventHandler(this, &InputForm::ScoreBox_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Сред. балл аттестата:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Направление:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->MajorComboBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->FIOBox);
			this->groupBox1->Controls->Add(this->ScoreBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 147);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод";
			// 
			// MajorComboBox
			// 
			this->MajorComboBox->FormattingEnabled = true;
			this->MajorComboBox->Location = System::Drawing::Point(135, 90);
			this->MajorComboBox->Name = L"MajorComboBox";
			this->MajorComboBox->Size = System::Drawing::Size(143, 21);
			this->MajorComboBox->TabIndex = 10;
			this->MajorComboBox->TextChanged += gcnew System::EventHandler(this, &InputForm::MajorComboBox_TextChanged);
			// 
			// StudyformBox
			// 
			this->StudyformBox->Controls->Add(this->StudyformRadioButton2);
			this->StudyformBox->Controls->Add(this->StudyformRadioButton1);
			this->StudyformBox->Location = System::Drawing::Point(440, 40);
			this->StudyformBox->Name = L"StudyformBox";
			this->StudyformBox->Size = System::Drawing::Size(109, 66);
			this->StudyformBox->TabIndex = 5;
			this->StudyformBox->TabStop = false;
			this->StudyformBox->Text = L"Форма обучения";
			// 
			// StudyformRadioButton2
			// 
			this->StudyformRadioButton2->AutoSize = true;
			this->StudyformRadioButton2->Location = System::Drawing::Point(7, 44);
			this->StudyformRadioButton2->Name = L"StudyformRadioButton2";
			this->StudyformRadioButton2->Size = System::Drawing::Size(67, 17);
			this->StudyformRadioButton2->TabIndex = 1;
			this->StudyformRadioButton2->TabStop = true;
			this->StudyformRadioButton2->Text = L"Заочная";
			this->StudyformRadioButton2->UseVisualStyleBackColor = true;
			// 
			// StudyformRadioButton1
			// 
			this->StudyformRadioButton1->AutoSize = true;
			this->StudyformRadioButton1->Location = System::Drawing::Point(7, 20);
			this->StudyformRadioButton1->Name = L"StudyformRadioButton1";
			this->StudyformRadioButton1->Size = System::Drawing::Size(56, 17);
			this->StudyformRadioButton1->TabIndex = 0;
			this->StudyformRadioButton1->TabStop = true;
			this->StudyformRadioButton1->Text = L"Очная";
			this->StudyformRadioButton1->UseVisualStyleBackColor = true;
			// 
			// NextButton
			// 
			this->NextButton->Location = System::Drawing::Point(427, 184);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(125, 43);
			this->NextButton->TabIndex = 12;
			this->NextButton->Text = L"=>";
			this->NextButton->UseVisualStyleBackColor = true;
			this->NextButton->Click += gcnew System::EventHandler(this, &InputForm::button1_Click);
			// 
			// FormPayGroupBox
			// 
			this->FormPayGroupBox->Controls->Add(this->FormPayRadioButton2);
			this->FormPayGroupBox->Controls->Add(this->FormPayRadioButton1);
			this->FormPayGroupBox->Location = System::Drawing::Point(440, 112);
			this->FormPayGroupBox->Name = L"FormPayGroupBox";
			this->FormPayGroupBox->Size = System::Drawing::Size(109, 66);
			this->FormPayGroupBox->TabIndex = 13;
			this->FormPayGroupBox->TabStop = false;
			this->FormPayGroupBox->Text = L"Форма оплаты";
			// 
			// FormPayRadioButton2
			// 
			this->FormPayRadioButton2->AutoSize = true;
			this->FormPayRadioButton2->Location = System::Drawing::Point(7, 44);
			this->FormPayRadioButton2->Name = L"FormPayRadioButton2";
			this->FormPayRadioButton2->Size = System::Drawing::Size(69, 17);
			this->FormPayRadioButton2->TabIndex = 1;
			this->FormPayRadioButton2->TabStop = true;
			this->FormPayRadioButton2->Text = L"Договор";
			this->FormPayRadioButton2->UseVisualStyleBackColor = true;
			// 
			// FormPayRadioButton1
			// 
			this->FormPayRadioButton1->AutoSize = true;
			this->FormPayRadioButton1->Location = System::Drawing::Point(7, 20);
			this->FormPayRadioButton1->Name = L"FormPayRadioButton1";
			this->FormPayRadioButton1->Size = System::Drawing::Size(65, 17);
			this->FormPayRadioButton1->TabIndex = 0;
			this->FormPayRadioButton1->TabStop = true;
			this->FormPayRadioButton1->Text = L"Бюджет";
			this->FormPayRadioButton1->UseVisualStyleBackColor = true;
			// 
			// MenuButton
			// 
			this->MenuButton->Location = System::Drawing::Point(12, 184);
			this->MenuButton->Name = L"MenuButton";
			this->MenuButton->Size = System::Drawing::Size(125, 43);
			this->MenuButton->TabIndex = 14;
			this->MenuButton->Text = L"<=";
			this->MenuButton->UseVisualStyleBackColor = true;
			this->MenuButton->Click += gcnew System::EventHandler(this, &InputForm::MenuButton_Click);
			// 
			// PrinterButton
			// 
			this->PrinterButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PrinterButton.Image")));
			this->PrinterButton->Location = System::Drawing::Point(516, 4);
			this->PrinterButton->Name = L"PrinterButton";
			this->PrinterButton->Size = System::Drawing::Size(32, 30);
			this->PrinterButton->TabIndex = 15;
			this->PrinterButton->UseVisualStyleBackColor = true;
			this->PrinterButton->Click += gcnew System::EventHandler(this, &InputForm::PrinterButton_Click);
			// 
			// InputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 236);
			this->Controls->Add(this->PrinterButton);
			this->Controls->Add(this->MenuButton);
			this->Controls->Add(this->FormPayGroupBox);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->StudyformBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->PriorityBox);
			this->Controls->Add(this->OriginalBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"InputForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Прием нового абитуриента";
			this->Load += gcnew System::EventHandler(this, &InputForm::InputForm_Load);
			this->OriginalBox->ResumeLayout(false);
			this->OriginalBox->PerformLayout();
			this->PriorityBox->ResumeLayout(false);
			this->PriorityBox->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->StudyformBox->ResumeLayout(false);
			this->StudyformBox->PerformLayout();
			this->FormPayGroupBox->ResumeLayout(false);
			this->FormPayGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	
		
		
	String^ changer_fix;
	String^ FIO_public;
	array<bool>^ valid_array;

	private: int valid_checker(){
		bool main_checker = true;
		for (int i = 0; i < valid_array->Length; i++)
			if (valid_array[i] == false)
				main_checker = false;

		if (
			(main_checker == true)
			&& 
			(OriginalRadioButton1->Checked == true || OriginalRadioButton2->Checked == true)
			&&
			(StudyformRadioButton1->Checked == true || StudyformRadioButton2->Checked == true)
			&& 
			(PriorityRadioButton1->Checked == true || PriorityRadioButton2->Checked == true)
			&&
			(FormPayRadioButton1->Checked  == true || FormPayRadioButton2->Checked == true)
			)
				return 1;
		return 0;
	}

	private: void print_outer() {
		if (valid_checker() == 1) {
			Object ^ ФорматСтроки = Microsoft::Office::Interop::Word::WdUnits::wdLine;
			auto t = Type::Missing;

			String^ original_str = (OriginalRadioButton1->Checked == true) ? "оригинал" : "копия";
			String^ priority_str = (PriorityRadioButton1->Checked == true) ? "есть" : "нет";
			String^ form_study_str = (StudyformRadioButton1->Checked == true) ? "очная" : "заочная";
			String^ form_pay_str = (FormPayRadioButton1->Checked == true) ? "бюджет" : "договор";

			System::DateTime now = System::DateTime::Now;
			String^ date_str = now.ToString("d");
			String^ time_str = now.ToString("t");

			try
			{
				auto WORD = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
				//Делаем видимым все происходящее 
				WORD->Visible = true;
				// Открываем новый документ 
				auto Документ = WORD->Documents->Add(t, t, t, t);

				WORD->Selection->ParagraphFormat->Alignment =
					Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphCenter; //абзац по центру
				WORD->Selection->Font->Name = ("Times New Roman"); //тип шрифта
				WORD->Selection->Font->Bold = 1; // жирный шрифт
				WORD->Selection->Font->Size = 18; // высота шрифта 18
				WORD->Selection->TypeText("Справка о приеме документов в КИП при ФУ РФ");

				WORD->Selection->Font->Size = 12;
				WORD->Selection->TypeParagraph();
				WORD->Selection->ParagraphFormat->Alignment =
					Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphJustify;

				WORD->Selection->TypeParagraph();
				WORD->Selection->Font->Size = 16;
				WORD->Selection->TypeText("Основная информация:");
				WORD->Selection->Font->Bold = false;
				WORD->Selection->TypeParagraph();
				WORD->Selection->Font->Size = 14;

				WORD->Selection->TypeText(
					"ФИО: " + FIOBox->Text + "\n" +
					"Средний балл аттестата: " + ScoreBox->Text + "\n" +
					"Направление: " + MajorComboBox->Text + "\n"
				);

				WORD->Selection->TypeParagraph();
				WORD->Selection->Font->Bold = true;
				WORD->Selection->Font->Size = 16; // высота шрифта 16
				WORD->Selection->TypeText("Дополнительная информация:");
				WORD->Selection->Font->Bold = false;
				WORD->Selection->TypeParagraph();
				WORD->Selection->Font->Size = 14;

				WORD->Selection->TypeText(
					"Форма оплаты: " + form_pay_str + "\n" +
					"Тип аттестата: " + original_str + "\n" +
					"Форма обучения: " + form_study_str + "\n" +
					"Пиоритет: " + priority_str + "\n"
				);

				WORD->Selection->TypeParagraph();
				WORD->Selection->ParagraphFormat->Alignment =
					Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphRight;
				WORD->Selection->TypeText(
					"Дата: " + date_str + "\n" +
					"Время: " + time_str + "\n" +
					"Подпись: ______________\n" +
					"Расшифровка: ______________"
				);

			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
			}

		}
		else
			MessageBox::Show("Проверьте правильность ввода данных!");

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (valid_checker() == 1) {
			System::DateTime now = System::DateTime::Now;
			String^ date_str = now.ToString("d");
			String ^priority_str, ^form_study_str, ^original_str, ^form_pay_str;
			SQLiteConnection ^db = gcnew SQLiteConnection();
			original_str = (OriginalRadioButton1->Checked == true) ? "оригинал" : "копия";
			priority_str = (PriorityRadioButton1->Checked == true) ? "да" : "нет";
			form_study_str = (StudyformRadioButton1->Checked == true) ? "очная" : "заочная";
			form_pay_str = (FormPayRadioButton1->Checked == true) ? "бюджет" : "договор";

				try
				{
					db->ConnectionString = GlobalClass::SQLGlobalPatch;

					db->Open();

					SQLiteCommand ^cmdInsertValue = db->CreateCommand();

					cmdInsertValue->CommandText = "CREATE TABLE IF NOT EXISTS students" +
						"(ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, name TEXT, score REAL, priority TEXT, form_study TEXT, major TEXT, original TEXT, form_pay TEXT, date TEXT);" +
						"INSERT INTO students VALUES(NULL,'" + FIOBox->Text + "'," + changer_fix +
						",'" + priority_str + "','" + form_study_str + "','" + MajorComboBox->Text +
						"','" + original_str + "', '" + form_pay_str + "','" + date_str + "');";

					cmdInsertValue->ExecuteNonQuery();
					db->Close();
				}
				finally
				{
					delete (IDisposable^)db;
				}

				if (MessageBox::Show("Данные успешно записаны!\nХотите ввести контактные данные абитуриента?", "Ввод контактных данных", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
				{
					DEMKA::MoreStudentInfoForm^MoreStudentInfoForm_obj = gcnew DEMKA::MoreStudentInfoForm();
					this->Hide();
					MoreStudentInfoForm_obj->Text = FIO_public;
					MoreStudentInfoForm_obj->ShowDialog();
				}
			}
		else
			MessageBox::Show("Проверьте правильность ввода данных!");
	}

	private: System::Void MenuButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}

	private: System::Void InputForm_Load(System::Object^  sender, System::EventArgs^  e) {
		valid_array = gcnew array<bool>(3);
		for (int i = 0; i < valid_array->Length; i++)
			valid_array[i] = false;
		MajorComboBox->DropDownStyle = ComboBoxStyle::DropDownList;
		MajorComboBox->Items->Add("ПКС");
		MajorComboBox->Items->Add("ИБАС");
	}

	//Вывод на печать
	private: System::Void PrinterButton_Click(System::Object^  sender, System::EventArgs^  e) {
		print_outer();
	}

	private: System::Void ScoreBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		msclr::interop::marshal_context context;
		std::string buf_str = context.marshal_as<std::string>(ScoreBox->Text);

		double d;

		if (ScoreBox->Text == "")
		{
			valid_array[1] = false;
		}
		else {
			try {
				for (int i = 0; i < System::Convert::ToInt32(buf_str.length()); i++) {
					if (buf_str[i] == ',')
						buf_str[i] = '.';
				}
				changer_fix = gcnew System::String(buf_str.c_str());

				d = Double::Parse(ScoreBox->Text);
				if ((System::Convert::ToDouble(ScoreBox->Text) >= 2.0) && (System::Convert::ToDouble(ScoreBox->Text) <= 5.0)) {
					ScoreBox->ForeColor = System::Drawing::SystemColors::WindowText;
					valid_array[1] = true;
				}
				else
					throw e;
			}
			catch (...) {
				valid_array[1] = false;
				ScoreBox->ForeColor = System::Drawing::Color::Red;
			}
		}
	}
	private: System::Void FIOBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		if (FIOBox->Text == "")
			valid_array[0] = false;
		else {
			valid_array[0] = true;
			FIO_public = FIOBox->Text;
			msclr::interop::marshal_context oMarshalContext;
			const char* buf = oMarshalContext.marshal_as<const char*>(FIOBox->Text);

			for (int i = 0; i < System::Convert::ToInt32(strlen(buf)); i++)
				if (iswdigit(buf[i]))
					valid_array[0] = false;

			FIOBox->ForeColor = (valid_array[0] == true) ? System::Drawing::SystemColors::WindowText : System::Drawing::Color::Red;
		}
	}

	private: System::Void MajorComboBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (MajorComboBox->Text == "")
			valid_array[2] = false;
		else
			valid_array[2] = true;
	}
};
}
