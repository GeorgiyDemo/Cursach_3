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
	private: System::Windows::Forms::TextBox^  ParentPhoneBox;

	private: System::Windows::Forms::TextBox^  ParentAdressBox;
	private: System::Windows::Forms::TextBox^  ParentEmailBox;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  ExitButton;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  ParentFIOBox;








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
			this->ParentPhoneBox = (gcnew System::Windows::Forms::TextBox());
			this->ParentAdressBox = (gcnew System::Windows::Forms::TextBox());
			this->ParentEmailBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ParentFIOBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Адрес:";
			// 
			// NextButton
			// 
			this->NextButton->Location = System::Drawing::Point(161, 180);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(117, 44);
			this->NextButton->TabIndex = 24;
			this->NextButton->Text = L"=>";
			this->NextButton->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->ParentFIOBox);
			this->groupBox1->Controls->Add(this->ParentPhoneBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->ParentAdressBox);
			this->groupBox1->Controls->Add(this->ParentEmailBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(268, 162);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Контактная информация";
			// 
			// ParentPhoneBox
			// 
			this->ParentPhoneBox->Location = System::Drawing::Point(94, 118);
			this->ParentPhoneBox->Name = L"ParentPhoneBox";
			this->ParentPhoneBox->Size = System::Drawing::Size(143, 20);
			this->ParentPhoneBox->TabIndex = 9;
			// 
			// ParentAdressBox
			// 
			this->ParentAdressBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->ParentAdressBox->Location = System::Drawing::Point(94, 56);
			this->ParentAdressBox->Name = L"ParentAdressBox";
			this->ParentAdressBox->Size = System::Drawing::Size(143, 20);
			this->ParentAdressBox->TabIndex = 1;
			// 
			// ParentEmailBox
			// 
			this->ParentEmailBox->Location = System::Drawing::Point(94, 87);
			this->ParentEmailBox->Name = L"ParentEmailBox";
			this->ParentEmailBox->Size = System::Drawing::Size(143, 20);
			this->ParentEmailBox->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Телефон:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"E-mail:";
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 180);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(109, 44);
			this->ExitButton->TabIndex = 25;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &ParentsContactForm::ExitButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"ФИО";
			// 
			// ParentFIOBox
			// 
			this->ParentFIOBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->ParentFIOBox->Location = System::Drawing::Point(94, 26);
			this->ParentFIOBox->Name = L"ParentFIOBox";
			this->ParentFIOBox->Size = System::Drawing::Size(143, 20);
			this->ParentFIOBox->TabIndex = 10;
			// 
			// ParentsContactForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(293, 232);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->ExitButton);
			this->Name = L"ParentsContactForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ParentsContactForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
};
}
