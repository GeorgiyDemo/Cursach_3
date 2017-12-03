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
	/// Сводка для FinalPrintForm
	/// </summary>
	public ref class FinalPrintForm : public System::Windows::Forms::Form
	{
	public:
		FinalPrintForm(void)
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
		~FinalPrintForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::GroupBox^  MainGroupBox;
	private: System::Windows::Forms::GroupBox^  OtherGroupBox;


	private: System::Windows::Forms::CheckBox^  ParentsContactsCheckBox;
	private: System::Windows::Forms::CheckBox^  StudentContactsCheckBox;
	private: System::Windows::Forms::CheckBox^  MainInfoCheckBox;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  TimeCheckBox;

	private: System::Windows::Forms::CheckBox^  DateCheckBox;
	private: System::Windows::Forms::Button^  ReportButton;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FinalPrintForm::typeid));
			this->MainGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->ParentsContactsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->StudentContactsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->MainInfoCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->OtherGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->TimeCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->DateCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->ReportButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->MainGroupBox->SuspendLayout();
			this->OtherGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainGroupBox
			// 
			this->MainGroupBox->Controls->Add(this->ParentsContactsCheckBox);
			this->MainGroupBox->Controls->Add(this->StudentContactsCheckBox);
			this->MainGroupBox->Controls->Add(this->MainInfoCheckBox);
			this->MainGroupBox->Location = System::Drawing::Point(12, 12);
			this->MainGroupBox->Name = L"MainGroupBox";
			this->MainGroupBox->Size = System::Drawing::Size(201, 120);
			this->MainGroupBox->TabIndex = 2;
			this->MainGroupBox->TabStop = false;
			this->MainGroupBox->Text = L"Основные параметры";
			// 
			// ParentsContactsCheckBox
			// 
			this->ParentsContactsCheckBox->AutoSize = true;
			this->ParentsContactsCheckBox->Location = System::Drawing::Point(6, 80);
			this->ParentsContactsCheckBox->Name = L"ParentsContactsCheckBox";
			this->ParentsContactsCheckBox->Size = System::Drawing::Size(184, 17);
			this->ParentsContactsCheckBox->TabIndex = 2;
			this->ParentsContactsCheckBox->Text = L"Контактные данные родителей";
			this->ParentsContactsCheckBox->UseVisualStyleBackColor = true;
			// 
			// StudentContactsCheckBox
			// 
			this->StudentContactsCheckBox->AutoSize = true;
			this->StudentContactsCheckBox->Location = System::Drawing::Point(6, 56);
			this->StudentContactsCheckBox->Name = L"StudentContactsCheckBox";
			this->StudentContactsCheckBox->Size = System::Drawing::Size(128, 17);
			this->StudentContactsCheckBox->TabIndex = 1;
			this->StudentContactsCheckBox->Text = L"Контактные данные";
			this->StudentContactsCheckBox->UseVisualStyleBackColor = true;
			// 
			// MainInfoCheckBox
			// 
			this->MainInfoCheckBox->AutoSize = true;
			this->MainInfoCheckBox->Location = System::Drawing::Point(6, 32);
			this->MainInfoCheckBox->Name = L"MainInfoCheckBox";
			this->MainInfoCheckBox->Size = System::Drawing::Size(143, 17);
			this->MainInfoCheckBox->TabIndex = 0;
			this->MainInfoCheckBox->Text = L"Основная информация";
			this->MainInfoCheckBox->UseVisualStyleBackColor = true;
			// 
			// OtherGroupBox
			// 
			this->OtherGroupBox->Controls->Add(this->checkBox6);
			this->OtherGroupBox->Controls->Add(this->TimeCheckBox);
			this->OtherGroupBox->Controls->Add(this->DateCheckBox);
			this->OtherGroupBox->Location = System::Drawing::Point(229, 12);
			this->OtherGroupBox->Name = L"OtherGroupBox";
			this->OtherGroupBox->Size = System::Drawing::Size(191, 120);
			this->OtherGroupBox->TabIndex = 3;
			this->OtherGroupBox->TabStop = false;
			this->OtherGroupBox->Text = L"Дополнительные параметры";
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(7, 78);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(118, 17);
			this->checkBox6->TabIndex = 2;
			this->checkBox6->Text = L"Поле для подписи";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// TimeCheckBox
			// 
			this->TimeCheckBox->AutoSize = true;
			this->TimeCheckBox->Location = System::Drawing::Point(6, 55);
			this->TimeCheckBox->Name = L"TimeCheckBox";
			this->TimeCheckBox->Size = System::Drawing::Size(174, 17);
			this->TimeCheckBox->TabIndex = 1;
			this->TimeCheckBox->Text = L"Время формирования отчета";
			this->TimeCheckBox->UseVisualStyleBackColor = true;
			// 
			// DateCheckBox
			// 
			this->DateCheckBox->AutoSize = true;
			this->DateCheckBox->Location = System::Drawing::Point(7, 32);
			this->DateCheckBox->Name = L"DateCheckBox";
			this->DateCheckBox->Size = System::Drawing::Size(167, 17);
			this->DateCheckBox->TabIndex = 0;
			this->DateCheckBox->Text = L"Дата формирования отчета";
			this->DateCheckBox->UseVisualStyleBackColor = true;
			// 
			// ReportButton
			// 
			this->ReportButton->Location = System::Drawing::Point(247, 138);
			this->ReportButton->Name = L"ReportButton";
			this->ReportButton->Size = System::Drawing::Size(139, 44);
			this->ReportButton->TabIndex = 5;
			this->ReportButton->Text = L"Формирование отчета";
			this->ReportButton->UseVisualStyleBackColor = true;
			this->ReportButton->Click += gcnew System::EventHandler(this, &FinalPrintForm::ReportButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(47, 138);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(139, 44);
			this->ExitButton->TabIndex = 4;
			this->ExitButton->Text = L"Главное меню";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &FinalPrintForm::ExitButton_Click);
			// 
			// FinalPrintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 196);
			this->Controls->Add(this->ReportButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->OtherGroupBox);
			this->Controls->Add(this->MainGroupBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FinalPrintForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Мастер печати отчетов";
			this->MainGroupBox->ResumeLayout(false);
			this->MainGroupBox->PerformLayout();
			this->OtherGroupBox->ResumeLayout(false);
			this->OtherGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	array<String^>^ main_arr;
	array<String^>^ StudContacts_arr;
	array<String^>^ ParentsCont_arr;

	private: void MainInfoGetter() {
		SQLiteConnection ^db = gcnew SQLiteConnection();
		main_arr = gcnew array<String^>(9);
		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();

		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = "SELECT * FROM students WHERE ID = (SELECT MAX(ID) FROM students);";
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();
		while (data->Read())
			for (int cell_index = 0; cell_index < data->FieldCount; cell_index++)
				main_arr[cell_index] = data->GetValue(cell_index)->ToString();
		db->Close();
	}

	private: void StudentContactsInfoGetter() {
		SQLiteConnection ^db = gcnew SQLiteConnection();
		StudContacts_arr = gcnew array<String^>(5);
		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();

		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = "SELECT * FROM contacts WHERE student_id = (SELECT MAX(student_id) FROM contacts);";
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();
		while (data->Read())
			for (int cell_index = 0; cell_index < data->FieldCount; cell_index++)
				StudContacts_arr[cell_index] = data->GetValue(cell_index)->ToString();
		db->Close();
	}

	private: void ParentsContactsInfoGetter() {
		SQLiteConnection ^db = gcnew SQLiteConnection();
		ParentsCont_arr = gcnew array<String^>(6);
		db->ConnectionString = "Data Source=C:/Users/georgiydemo/repos/DEMKA/database_vs.db";
		db->Open();

		SQLiteCommand ^cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = "SELECT * FROM parents WHERE student_id = (SELECT MAX(student_id) FROM parents);";
		SQLiteDataReader ^data = cmdSelect->ExecuteReader();

		while (data->Read())
			for (int cell_index = 0; cell_index < data->FieldCount; cell_index++) {
				ParentsCont_arr[cell_index] = data->GetValue(cell_index)->ToString();
				MessageBox::Show(ParentsCont_arr[cell_index]);
			}
		db->Close();
	}

	private: void WordWorker() {
		Object ^ ФорматСтроки = Microsoft::Office::Interop::Word::WdUnits::wdLine;
		auto t = Type::Missing;

		auto WORD = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
		//Делаем видимым все происодящее 
		WORD->Visible = true;


		auto Документ = WORD->Documents->Add(t, t, t, t);


		//----------------------- РАБОТА С ТЕКСТОМ ------------------------------//
		WORD->Selection->ParagraphFormat->Alignment =
			Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphCenter; //абзац по центру
		WORD->Selection->Font->Name = ("Times New Roman"); //тип шрифта
		WORD->Selection->Font->Bold = 1; // жирный шрифт
		WORD->Selection->Font->Size = 20; // высота шрифта 20
		WORD->Selection->TypeText("Справка о подаче заявления в кембридж");

		WORD->Selection->Font->Size = 12;
		WORD->Selection->TypeParagraph();
		WORD->Selection->ParagraphFormat->Alignment =
			Microsoft::Office::Interop::Word::WdParagraphAlignment::wdAlignParagraphJustify;
		WORD->Selection->Font->Bold = false;

		//Главное меню выбрано
		WORD->Selection->TypeText("Основной причиной смены времён года " +
			"является наклон земной оси по отношению к плоскости эклиптики. " +
			"Без наклона оси продолжительность дня и ночи в любом месте Земли " +
			"была бы одинакова, и днём солнце поднималось бы над горизонтом " +
			"на одну и ту же высоту в течение всего года.");


		//----------------------- СОЗДАНИЕ ТАБЛИЦЫ ------------------------------//
		Object ^ ПоказыватьГраницы = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
		Object ^ РегулирШирины = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitWindow;
		Microsoft::Office::Interop::Word::Range ^ wrdRng = WORD->Selection->Range;
		WORD->ActiveDocument->Tables->Add(wrdRng, 3, 9, ПоказыватьГраницы, РегулирШирины);
		// Заполнение ячеек таблицы
		for (int i = 0; i < 3; i++) {
			for (int j = 1; j < 10; j++) {
				WORD->ActiveDocument->Tables[1]->Cell(i, j)->Range->InsertAfter("ТЕСТ");
			}
		}
	}
	private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void ReportButton_Click(System::Object^  sender, System::EventArgs^  e) {
		WordWorker();

	}
};
}
