#include "MainDBChangerForm.h"
#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;
	using namespace System::Security::Cryptography;

	/// <summary>
	/// Сводка для PasswordChecker
	/// </summary>
	public ref class PasswordChecker : public System::Windows::Forms::Form
	{
	public:
		PasswordChecker(void)
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
		~PasswordChecker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  PasswordCheckerBox;
	private: System::Windows::Forms::Button^  NextButton;
	private: System::Windows::Forms::Button^  ExitButton;
	private: System::Windows::Forms::Label^  label1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PasswordChecker::typeid));
			this->PasswordCheckerBox = (gcnew System::Windows::Forms::TextBox());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// PasswordCheckerBox
			// 
			this->PasswordCheckerBox->Location = System::Drawing::Point(165, 30);
			this->PasswordCheckerBox->Name = L"PasswordCheckerBox";
			this->PasswordCheckerBox->Size = System::Drawing::Size(115, 20);
			this->PasswordCheckerBox->TabIndex = 0;
			this->PasswordCheckerBox->UseSystemPasswordChar = true;
			// 
			// NextButton
			// 
			this->NextButton->Location = System::Drawing::Point(165, 66);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(115, 27);
			this->NextButton->TabIndex = 23;
			this->NextButton->Text = L"=>";
			this->NextButton->UseVisualStyleBackColor = true;
			this->NextButton->Click += gcnew System::EventHandler(this, &PasswordChecker::NextButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 66);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(115, 27);
			this->ExitButton->TabIndex = 24;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &PasswordChecker::ExitButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Введите пароль:";
			// 
			// PasswordChecker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(313, 112);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->PasswordCheckerBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PasswordChecker";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Проверка пароля";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: String^ MD5Password = "38-8C-ED-64-53-03-36-22-BF-66-DA-11-1F-EF-E5-F3"; 
	private: String^ getMD5String(String^ inputString)
		{
			array<Byte>^ byteArray = Encoding::ASCII->GetBytes(inputString);
			MD5CryptoServiceProvider^ md5provider = gcnew MD5CryptoServiceProvider();
			array<Byte>^ byteArrayHash = md5provider->ComputeHash(byteArray);
			return BitConverter::ToString(byteArrayHash);
		}

	private: bool PasswordValidation(String^ input_str) {
		if (getMD5String(input_str) == MD5Password)
			return true;
		return false;
	}
	private: System::Void PasswordCheckerBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void NextButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (PasswordValidation(PasswordCheckerBox->Text)) {
			MessageBox::Show("Успешная авторизация!");
			DEMKA::MainDBChangerForm^MainDBChangerForm_obj = gcnew DEMKA::MainDBChangerForm();
			this->Hide();
			MainDBChangerForm_obj->ShowDialog();
		}
		else
			MessageBox::Show("Неверный пароль, попробуйте ввести еще раз");
	}
private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
};
}
