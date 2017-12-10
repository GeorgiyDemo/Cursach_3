#include "InputForm.h"
#include "RatingForm.h"
#include "PasswordChecker.h"
#include "GlobalClass.h"
#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  AdmissionButton;
	protected:

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  TopButton;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  ExitButton;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->AdmissionButton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->TopButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// AdmissionButton
			// 
			this->AdmissionButton->Location = System::Drawing::Point(45, 19);
			this->AdmissionButton->Name = L"AdmissionButton";
			this->AdmissionButton->Size = System::Drawing::Size(148, 49);
			this->AdmissionButton->TabIndex = 0;
			this->AdmissionButton->Text = L"Приём нового абитуриента";
			this->AdmissionButton->UseVisualStyleBackColor = true;
			this->AdmissionButton->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(45, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Изменение/удаление данных абитуриента";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// TopButton
			// 
			this->TopButton->Location = System::Drawing::Point(45, 153);
			this->TopButton->Name = L"TopButton";
			this->TopButton->Size = System::Drawing::Size(148, 47);
			this->TopButton->TabIndex = 2;
			this->TopButton->Text = L"Рейтинг абитуриентов";
			this->TopButton->UseVisualStyleBackColor = true;
			this->TopButton->Click += gcnew System::EventHandler(this, &MainForm::TopButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->TopButton);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->AdmissionButton);
			this->groupBox1->Location = System::Drawing::Point(28, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(240, 206);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор действия:";
			// 
			// ExitButton
			// 
			this->ExitButton->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->ExitButton->Location = System::Drawing::Point(12, 286);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(89, 33);
			this->ExitButton->TabIndex = 5;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainForm::ExitButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(302, 331);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Главная форма АИС";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		InputForm^InputForm_obj = gcnew InputForm();
		this->Hide();
		InputForm_obj->ShowDialog();
		this->Show();
	}
	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void TopButton_Click(System::Object^  sender, System::EventArgs^  e) {
		DEMKA::RatingForm^RatingForm_obj = gcnew DEMKA::RatingForm();
		this->Hide();
		RatingForm_obj->ShowDialog();
		this->Show();
	}

	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		GlobalClass::SQLGlobalPatch = "Data Source=../database_vs.db";
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		DEMKA::PasswordChecker^PasswordChecker_obj = gcnew DEMKA::PasswordChecker();
		this->Hide();
		PasswordChecker_obj->ShowDialog();
		this->Show();
	}
};
}
