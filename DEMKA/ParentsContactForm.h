#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ParentsContactForm
	/// </summary>
	public ref class ParentsContactForm : public System::Windows::Forms::Form
	{
	public:
		ParentsContactForm(void)
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
		~ParentsContactForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  NextButton;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  PhoneBox;
	private: System::Windows::Forms::TextBox^  AdressBox;
	private: System::Windows::Forms::TextBox^  EmailBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  MenuButton;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->PhoneBox = (gcnew System::Windows::Forms::TextBox());
			this->AdressBox = (gcnew System::Windows::Forms::TextBox());
			this->EmailBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MenuButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Адрес:";
			// 
			// NextButton
			// 
			this->NextButton->Location = System::Drawing::Point(357, 177);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(178, 44);
			this->NextButton->TabIndex = 24;
			this->NextButton->Text = L"=>";
			this->NextButton->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->PhoneBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->AdressBox);
			this->groupBox1->Controls->Add(this->EmailBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(257, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(295, 130);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Контактная информация";
			// 
			// PhoneBox
			// 
			this->PhoneBox->Location = System::Drawing::Point(135, 93);
			this->PhoneBox->Name = L"PhoneBox";
			this->PhoneBox->Size = System::Drawing::Size(143, 20);
			this->PhoneBox->TabIndex = 9;
			// 
			// AdressBox
			// 
			this->AdressBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->AdressBox->Location = System::Drawing::Point(135, 31);
			this->AdressBox->Name = L"AdressBox";
			this->AdressBox->Size = System::Drawing::Size(143, 20);
			this->AdressBox->TabIndex = 1;
			// 
			// EmailBox
			// 
			this->EmailBox->Location = System::Drawing::Point(135, 59);
			this->EmailBox->Name = L"EmailBox";
			this->EmailBox->Size = System::Drawing::Size(143, 20);
			this->EmailBox->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Телефон:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"E-mail:";
			// 
			// MenuButton
			// 
			this->MenuButton->Location = System::Drawing::Point(21, 177);
			this->MenuButton->Name = L"MenuButton";
			this->MenuButton->Size = System::Drawing::Size(178, 44);
			this->MenuButton->TabIndex = 25;
			this->MenuButton->Text = L"<=";
			this->MenuButton->UseVisualStyleBackColor = true;
			// 
			// ParentsContactForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 243);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->MenuButton);
			this->Name = L"ParentsContactForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ParentsContactForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
