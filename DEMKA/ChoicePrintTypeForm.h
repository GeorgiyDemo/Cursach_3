#include "PrintForm.h"
#include "FinalPrintForm.h"
#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ChoicePrintTypeForm
	/// </summary>
	public ref class ChoicePrintTypeForm : public System::Windows::Forms::Form
	{
	public:
		ChoicePrintTypeForm()
		{
			InitializeComponent();
			

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ChoicePrintTypeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  StudentInfoButton;
	protected:

	public: System::Windows::Forms::Button^  RatingButton;
	private:

	protected:

	private: System::Windows::Forms::Button^  MenuButton;
	private: System::Windows::Forms::GroupBox^  groupBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ChoicePrintTypeForm::typeid));
			this->StudentInfoButton = (gcnew System::Windows::Forms::Button());
			this->RatingButton = (gcnew System::Windows::Forms::Button());
			this->MenuButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// StudentInfoButton
			// 
			this->StudentInfoButton->Location = System::Drawing::Point(45, 85);
			this->StudentInfoButton->Name = L"StudentInfoButton";
			this->StudentInfoButton->Size = System::Drawing::Size(148, 49);
			this->StudentInfoButton->TabIndex = 1;
			this->StudentInfoButton->Text = L"Информация об абитуриенте";
			this->StudentInfoButton->UseVisualStyleBackColor = true;
			this->StudentInfoButton->Click += gcnew System::EventHandler(this, &ChoicePrintTypeForm::ContactsTableButton_Click);
			// 
			// RatingButton
			// 
			this->RatingButton->Location = System::Drawing::Point(45, 19);
			this->RatingButton->Name = L"RatingButton";
			this->RatingButton->Size = System::Drawing::Size(148, 49);
			this->RatingButton->TabIndex = 0;
			this->RatingButton->Text = L"Формирование рейтинга";
			this->RatingButton->UseVisualStyleBackColor = true;
			this->RatingButton->Click += gcnew System::EventHandler(this, &ChoicePrintTypeForm::RatingButton_Click);
			// 
			// MenuButton
			// 
			this->MenuButton->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->MenuButton->Location = System::Drawing::Point(12, 183);
			this->MenuButton->Name = L"MenuButton";
			this->MenuButton->Size = System::Drawing::Size(89, 33);
			this->MenuButton->TabIndex = 31;
			this->MenuButton->Text = L"<=";
			this->MenuButton->UseVisualStyleBackColor = true;
			this->MenuButton->Click += gcnew System::EventHandler(this, &ChoicePrintTypeForm::MenuButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->StudentInfoButton);
			this->groupBox1->Controls->Add(this->RatingButton);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(240, 165);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			// 
			// ChoicePrintTypeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(265, 224);
			this->Controls->Add(this->MenuButton);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ChoicePrintTypeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Мастер печати отчетов";
			this->Load += gcnew System::EventHandler(this, &ChoicePrintTypeForm::ChoicePrintTypeForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: String^ PublicStudentID;

	private: System::Void MenuButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void RatingButton_Click(System::Object^  sender, System::EventArgs^  e) {
		DEMKA::PrintForm^PrintForm_obj = gcnew DEMKA::PrintForm();
		this->Hide();
		PrintForm_obj->ShowDialog();
	}
	private: System::Void ChoicePrintTypeForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ContactsTableButton_Click(System::Object^  sender, System::EventArgs^  e) {
		DEMKA::FinalPrintForm^FinalPrintForm_obj = gcnew DEMKA::FinalPrintForm();
		FinalPrintForm_obj->PublicStudentID = PublicStudentID;
		this->Hide();
		FinalPrintForm_obj->ShowDialog();
	}
};
}
