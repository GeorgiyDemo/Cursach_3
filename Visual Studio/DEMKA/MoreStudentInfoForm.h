#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MoreStudentInfoForm
	/// </summary>
	public ref class MoreStudentInfoForm : public System::Windows::Forms::Form
	{
	public:
		MoreStudentInfoForm(void)
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
		~MoreStudentInfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  PrinterButton;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  FormPayRadioButton2;
	private: System::Windows::Forms::RadioButton^  FormPayRadioButton1;
	private: System::Windows::Forms::GroupBox^  FormPayGroupBox;
	private: System::Windows::Forms::Button^  NextButton;
	private: System::Windows::Forms::RadioButton^  StudyformRadioButton2;
	private: System::Windows::Forms::RadioButton^  StudyformRadioButton1;
	private: System::Windows::Forms::GroupBox^  StudyformBox;
	private: System::Windows::Forms::ComboBox^  MajorComboBox;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  FIOBox;
	private: System::Windows::Forms::TextBox^  ScoreBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  PriorityRadioButton2;
	private: System::Windows::Forms::RadioButton^  PriorityRadioButton1;
	private: System::Windows::Forms::GroupBox^  PriorityBox;
	private: System::Windows::Forms::RadioButton^  OriginalRadioButton2;
	private: System::Windows::Forms::RadioButton^  OriginalRadioButton1;
	private: System::Windows::Forms::Button^  MenuButton;
	private: System::Windows::Forms::GroupBox^  OriginalBox;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MoreStudentInfoForm::typeid));
			this->PrinterButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FormPayRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->FormPayRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->FormPayGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->StudyformRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->StudyformRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->StudyformBox = (gcnew System::Windows::Forms::GroupBox());
			this->MajorComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->FIOBox = (gcnew System::Windows::Forms::TextBox());
			this->ScoreBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PriorityRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->PriorityRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->PriorityBox = (gcnew System::Windows::Forms::GroupBox());
			this->OriginalRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->OriginalRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->MenuButton = (gcnew System::Windows::Forms::Button());
			this->OriginalBox = (gcnew System::Windows::Forms::GroupBox());
			this->FormPayGroupBox->SuspendLayout();
			this->StudyformBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->PriorityBox->SuspendLayout();
			this->OriginalBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// PrinterButton
			// 
			this->PrinterButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PrinterButton.Image")));
			this->PrinterButton->Location = System::Drawing::Point(513, 5);
			this->PrinterButton->Name = L"PrinterButton";
			this->PrinterButton->Size = System::Drawing::Size(32, 30);
			this->PrinterButton->TabIndex = 23;
			this->PrinterButton->UseVisualStyleBackColor = true;
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
			// FormPayGroupBox
			// 
			this->FormPayGroupBox->Controls->Add(this->FormPayRadioButton2);
			this->FormPayGroupBox->Controls->Add(this->FormPayRadioButton1);
			this->FormPayGroupBox->Location = System::Drawing::Point(437, 113);
			this->FormPayGroupBox->Name = L"FormPayGroupBox";
			this->FormPayGroupBox->Size = System::Drawing::Size(109, 66);
			this->FormPayGroupBox->TabIndex = 21;
			this->FormPayGroupBox->TabStop = false;
			this->FormPayGroupBox->Text = L"Форма оплаты";
			// 
			// NextButton
			// 
			this->NextButton->Location = System::Drawing::Point(424, 185);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(125, 43);
			this->NextButton->TabIndex = 20;
			this->NextButton->Text = L"=>";
			this->NextButton->UseVisualStyleBackColor = true;
			this->NextButton->Click += gcnew System::EventHandler(this, &MoreStudentInfoForm::NextButton_Click);
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
			// StudyformBox
			// 
			this->StudyformBox->Controls->Add(this->StudyformRadioButton2);
			this->StudyformBox->Controls->Add(this->StudyformRadioButton1);
			this->StudyformBox->Location = System::Drawing::Point(437, 41);
			this->StudyformBox->Name = L"StudyformBox";
			this->StudyformBox->Size = System::Drawing::Size(109, 66);
			this->StudyformBox->TabIndex = 18;
			this->StudyformBox->TabStop = false;
			this->StudyformBox->Text = L"Форма обучения";
			// 
			// MajorComboBox
			// 
			this->MajorComboBox->FormattingEnabled = true;
			this->MajorComboBox->Location = System::Drawing::Point(135, 90);
			this->MajorComboBox->Name = L"MajorComboBox";
			this->MajorComboBox->Size = System::Drawing::Size(143, 21);
			this->MajorComboBox->TabIndex = 10;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->MajorComboBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->FIOBox);
			this->groupBox1->Controls->Add(this->ScoreBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(9, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 147);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод";
			// 
			// FIOBox
			// 
			this->FIOBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->FIOBox->Location = System::Drawing::Point(135, 31);
			this->FIOBox->Name = L"FIOBox";
			this->FIOBox->Size = System::Drawing::Size(143, 20);
			this->FIOBox->TabIndex = 1;
			// 
			// ScoreBox
			// 
			this->ScoreBox->Location = System::Drawing::Point(135, 59);
			this->ScoreBox->Name = L"ScoreBox";
			this->ScoreBox->Size = System::Drawing::Size(143, 20);
			this->ScoreBox->TabIndex = 5;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Сред. балл аттестата:";
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
			// PriorityBox
			// 
			this->PriorityBox->Controls->Add(this->PriorityRadioButton2);
			this->PriorityBox->Controls->Add(this->PriorityRadioButton1);
			this->PriorityBox->Location = System::Drawing::Point(322, 113);
			this->PriorityBox->Name = L"PriorityBox";
			this->PriorityBox->Size = System::Drawing::Size(109, 66);
			this->PriorityBox->TabIndex = 17;
			this->PriorityBox->TabStop = false;
			this->PriorityBox->Text = L"Приоритет";
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
			// MenuButton
			// 
			this->MenuButton->Location = System::Drawing::Point(9, 185);
			this->MenuButton->Name = L"MenuButton";
			this->MenuButton->Size = System::Drawing::Size(125, 43);
			this->MenuButton->TabIndex = 22;
			this->MenuButton->Text = L"<=";
			this->MenuButton->UseVisualStyleBackColor = true;
			this->MenuButton->Click += gcnew System::EventHandler(this, &MoreStudentInfoForm::MenuButton_Click);
			// 
			// OriginalBox
			// 
			this->OriginalBox->Controls->Add(this->OriginalRadioButton2);
			this->OriginalBox->Controls->Add(this->OriginalRadioButton1);
			this->OriginalBox->Location = System::Drawing::Point(322, 39);
			this->OriginalBox->Name = L"OriginalBox";
			this->OriginalBox->Size = System::Drawing::Size(109, 68);
			this->OriginalBox->TabIndex = 16;
			this->OriginalBox->TabStop = false;
			this->OriginalBox->Text = L"Тип аттестата";
			// 
			// MoreStudentInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 232);
			this->Controls->Add(this->PrinterButton);
			this->Controls->Add(this->FormPayGroupBox);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->StudyformBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->PriorityBox);
			this->Controls->Add(this->MenuButton);
			this->Controls->Add(this->OriginalBox);
			this->Name = L"MoreStudentInfoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Дополнительная информация об абитуриенте";
			this->FormPayGroupBox->ResumeLayout(false);
			this->FormPayGroupBox->PerformLayout();
			this->StudyformBox->ResumeLayout(false);
			this->StudyformBox->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->PriorityBox->ResumeLayout(false);
			this->PriorityBox->PerformLayout();
			this->OriginalBox->ResumeLayout(false);
			this->OriginalBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void NextButton_Click(System::Object^  sender, System::EventArgs^  e) {
		//MessageBox::Show(InputForm->FIO_public);
	}
private: System::Void MenuButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
};
}
