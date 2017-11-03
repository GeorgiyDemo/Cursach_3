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
	protected:


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
	private: System::Windows::Forms::TextBox^  MajorBox;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  NumberBox;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  StudyformBox;
	private: System::Windows::Forms::RadioButton^  StudyformRadioButton2;
	private: System::Windows::Forms::RadioButton^  StudyformRadioButton1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  FormPayGroupBox;
	private: System::Windows::Forms::RadioButton^  FromPayRadioButton2;
	private: System::Windows::Forms::RadioButton^  FormPayRadioButton1;
	private: System::Windows::Forms::Button^  MenuButton;
	private: System::Windows::Forms::Button^  PrinterButton;


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
			this->MajorBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NumberBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->StudyformBox = (gcnew System::Windows::Forms::GroupBox());
			this->StudyformRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->StudyformRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->FormPayGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->FromPayRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
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
			this->FIOBox->Location = System::Drawing::Point(135, 31);
			this->FIOBox->Name = L"FIOBox";
			this->FIOBox->Size = System::Drawing::Size(143, 20);
			this->FIOBox->TabIndex = 1;
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
			// MajorBox
			// 
			this->MajorBox->Location = System::Drawing::Point(135, 90);
			this->MajorBox->Name = L"MajorBox";
			this->MajorBox->Size = System::Drawing::Size(143, 20);
			this->MajorBox->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"№ заявления";
			// 
			// NumberBox
			// 
			this->NumberBox->Location = System::Drawing::Point(135, 116);
			this->NumberBox->Name = L"NumberBox";
			this->NumberBox->Size = System::Drawing::Size(143, 20);
			this->NumberBox->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->FIOBox);
			this->groupBox1->Controls->Add(this->NumberBox);
			this->groupBox1->Controls->Add(this->ScoreBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->MajorBox);
			this->groupBox1->Location = System::Drawing::Point(12, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 152);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод";
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(427, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 43);
			this->button1->TabIndex = 12;
			this->button1->Text = L"=>";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InputForm::button1_Click);
			// 
			// FormPayGroupBox
			// 
			this->FormPayGroupBox->Controls->Add(this->FromPayRadioButton2);
			this->FormPayGroupBox->Controls->Add(this->FormPayRadioButton1);
			this->FormPayGroupBox->Location = System::Drawing::Point(440, 112);
			this->FormPayGroupBox->Name = L"FormPayGroupBox";
			this->FormPayGroupBox->Size = System::Drawing::Size(109, 66);
			this->FormPayGroupBox->TabIndex = 13;
			this->FormPayGroupBox->TabStop = false;
			this->FormPayGroupBox->Text = L"Форма оплаты";
			// 
			// FromPayRadioButton2
			// 
			this->FromPayRadioButton2->AutoSize = true;
			this->FromPayRadioButton2->Location = System::Drawing::Point(7, 44);
			this->FromPayRadioButton2->Name = L"FromPayRadioButton2";
			this->FromPayRadioButton2->Size = System::Drawing::Size(69, 17);
			this->FromPayRadioButton2->TabIndex = 1;
			this->FromPayRadioButton2->TabStop = true;
			this->FromPayRadioButton2->Text = L"Договор";
			this->FromPayRadioButton2->UseVisualStyleBackColor = true;
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
			this->Controls->Add(this->button1);
			this->Controls->Add(this->StudyformBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->PriorityBox);
			this->Controls->Add(this->OriginalBox);
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

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		System::DateTime now = System::DateTime::Now;
		String^ date_str = now.ToString("d");
		String ^priority_str, ^form_sudy_str, ^original_str, ^form_pay_str;
		SQLiteConnection ^db = gcnew SQLiteConnection();

		original_str = (OriginalRadioButton1->Checked == true) ? "оригинал" : "копия";
		priority_str = (PriorityRadioButton1->Checked == true) ? "да" : "нет";
		form_sudy_str = (StudyformRadioButton1->Checked == true) ? "очная" : "заочная";
		form_pay_str = (FormPayRadioButton1->Checked == true) ? "бюджет" : "договор";

		if (MessageBox::Show("Введенные данные действительно верны?", "Подтвердить ввод данных", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			try
			{
				db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
				db->Open();

				SQLiteCommand ^cmdInsertValue = db->CreateCommand();
				cmdInsertValue->CommandText = "CREATE TABLE IF NOT EXISTS students (name TEXT, score REAL, priority TEXT, form_sudy TEXT, major TEXT, number TEXT, original TEXT, form_pay TEXT, date TEXT); INSERT INTO students VALUES('" + FIOBox->Text + "'," + ScoreBox->Text + ",'" + priority_str + "','" + form_sudy_str + "','" + MajorBox->Text + "','" + NumberBox->Text + "','" + original_str + "', '" + form_pay_str + "','" + date_str + "');";
				cmdInsertValue->ExecuteNonQuery();
				db->Close();
			}
			finally
			{
				delete (IDisposable^)db;
			}
		}


	}

	private: System::Void MenuButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}

	private: System::Void InputForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}

	//Принтер
	private: System::Void PrinterButton_Click(System::Object^  sender, System::EventArgs^  e) {

		/*Microsoft::   WordprocessingDocument^ wordDoc = WordprocessingDocument::Create("C:\\temp\\MyFile.docx", WordprocessingDocumentType::Document);
		MainDocumentPart^ mainPart = wordDoc->AddMainDocumentPart();

		mainPart->Document = gcnew Document;
		Body^ body = mainPart->Document->AppendChild(gcnew Body);
		Paragraph^ para = body->AppendChild(gcnew Paragraph);
		Run^ run = para->AppendChild(gcnew Run);
		run->AppendChild(gcnew DocumentFormat::OpenXml::Wordprocessing::Text("Hello !"));

		delete wordDoc;
		*/

	}
	};
}
