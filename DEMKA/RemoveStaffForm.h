#pragma once

namespace DEMKA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RemoveStaffForm
	/// </summary>
	public ref class RemoveStaffForm : public System::Windows::Forms::Form
	{
	public:
		RemoveStaffForm(void)
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
		~RemoveStaffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  StaffNewPasswordBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  StaffOldPasswordBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  StaffLoginBox;
	private: System::Windows::Forms::Button^  ChangePasswordButton;
	private: System::Windows::Forms::Button^  ExitButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RemoveStaffForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->StaffNewPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->StaffOldPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StaffLoginBox = (gcnew System::Windows::Forms::TextBox());
			this->ChangePasswordButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->StaffNewPasswordBox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->StaffOldPasswordBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->StaffLoginBox);
			this->groupBox1->Location = System::Drawing::Point(9, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 126);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод данных";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Новый пароль:";
			// 
			// StaffNewPasswordBox
			// 
			this->StaffNewPasswordBox->Location = System::Drawing::Point(142, 81);
			this->StaffNewPasswordBox->Name = L"StaffNewPasswordBox";
			this->StaffNewPasswordBox->Size = System::Drawing::Size(100, 20);
			this->StaffNewPasswordBox->TabIndex = 4;
			this->StaffNewPasswordBox->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Старый пароль:";
			// 
			// StaffOldPasswordBox
			// 
			this->StaffOldPasswordBox->Location = System::Drawing::Point(142, 55);
			this->StaffOldPasswordBox->Name = L"StaffOldPasswordBox";
			this->StaffOldPasswordBox->Size = System::Drawing::Size(100, 20);
			this->StaffOldPasswordBox->TabIndex = 2;
			this->StaffOldPasswordBox->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Логин:";
			// 
			// StaffLoginBox
			// 
			this->StaffLoginBox->Location = System::Drawing::Point(142, 29);
			this->StaffLoginBox->Name = L"StaffLoginBox";
			this->StaffLoginBox->Size = System::Drawing::Size(100, 20);
			this->StaffLoginBox->TabIndex = 0;
			// 
			// ChangePasswordButton
			// 
			this->ChangePasswordButton->Location = System::Drawing::Point(163, 180);
			this->ChangePasswordButton->Name = L"ChangePasswordButton";
			this->ChangePasswordButton->Size = System::Drawing::Size(113, 32);
			this->ChangePasswordButton->TabIndex = 6;
			this->ChangePasswordButton->Text = L"=>";
			this->ChangePasswordButton->UseVisualStyleBackColor = true;
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(13, 180);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(113, 32);
			this->ExitButton->TabIndex = 8;
			this->ExitButton->Text = L"<=";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &RemoveStaffForm::ExitButton_Click);
			// 
			// RemoveStaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->ChangePasswordButton);
			this->Controls->Add(this->ExitButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RemoveStaffForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Адрес пользователя";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
};
}
