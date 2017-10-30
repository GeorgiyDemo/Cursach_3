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

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  OriginalBox;
	private: System::Windows::Forms::RadioButton^  OriginalRadioButton2;


	private: System::Windows::Forms::RadioButton^  OriginalRadioButton1;
	private: System::Windows::Forms::GroupBox^  PriorityBox;
	private: System::Windows::Forms::RadioButton^  PriorityRadioButton2;



	private: System::Windows::Forms::RadioButton^  PriorityRadioButton1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  StudyformBox;
	private: System::Windows::Forms::RadioButton^  StudyformRadioButton2;
	private: System::Windows::Forms::RadioButton^  StudyformRadioButton1;
	private: System::Windows::Forms::Button^  button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->OriginalBox = (gcnew System::Windows::Forms::GroupBox());
			this->OriginalRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->OriginalRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->PriorityBox = (gcnew System::Windows::Forms::GroupBox());
			this->PriorityRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->PriorityRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->StudyformBox = (gcnew System::Windows::Forms::GroupBox());
			this->StudyformRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->StudyformRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->OriginalBox->SuspendLayout();
			this->PriorityBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->StudyformBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(135, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
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
			this->OriginalBox->Location = System::Drawing::Point(401, 21);
			this->OriginalBox->Name = L"OriginalBox";
			this->OriginalBox->Size = System::Drawing::Size(109, 68);
			this->OriginalBox->TabIndex = 3;
			this->OriginalBox->TabStop = false;
			this->OriginalBox->Text = L"Тип аттестата";
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
			// PriorityBox
			// 
			this->PriorityBox->Controls->Add(this->PriorityRadioButton2);
			this->PriorityBox->Controls->Add(this->PriorityRadioButton1);
			this->PriorityBox->Location = System::Drawing::Point(401, 95);
			this->PriorityBox->Name = L"PriorityBox";
			this->PriorityBox->Size = System::Drawing::Size(109, 66);
			this->PriorityBox->TabIndex = 4;
			this->PriorityBox->TabStop = false;
			this->PriorityBox->Text = L"Приоритет";
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
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(135, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(135, 90);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(135, 116);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Location = System::Drawing::Point(85, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(254, 152);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод";
			// 
			// StudyformBox
			// 
			this->StudyformBox->Controls->Add(this->StudyformRadioButton2);
			this->StudyformBox->Controls->Add(this->StudyformRadioButton1);
			this->StudyformBox->Location = System::Drawing::Point(401, 167);
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
			this->button1->Location = System::Drawing::Point(401, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 37);
			this->button1->TabIndex = 12;
			this->button1->Text = L"=>";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InputForm::button1_Click);
			// 
			// InputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 302);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->StudyformBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->PriorityBox);
			this->Controls->Add(this->OriginalBox);
			this->Name = L"InputForm";
			this->Text = L"Прием нового абитуриента";
			this->OriginalBox->ResumeLayout(false);
			this->OriginalBox->PerformLayout();
			this->PriorityBox->ResumeLayout(false);
			this->PriorityBox->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->StudyformBox->ResumeLayout(false);
			this->StudyformBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


			SQLiteConnection ^db = gcnew SQLiteConnection();
			try
			{
				db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database.bd"; // + "\"";
				db->Open();
				MessageBox::Show("РАБОТАААЮ");
				db->Close();
			}
			finally
			{
				delete (IDisposable^)db;
			}

		
	}
	
};
}
