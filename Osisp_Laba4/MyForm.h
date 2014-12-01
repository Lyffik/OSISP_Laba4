#pragma once

namespace Osisp_Laba4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnFind;
	protected:
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::RadioButton^  radioBtnStreet;
	private: System::Windows::Forms::RadioButton^  radioBtnLastName;
	private: System::Windows::Forms::RadioButton^  radioBtnPhoneNumber;
	private: System::Windows::Forms::TextBox^  textBoxInfo;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::ListBox^  listBox;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnFind = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioBtnPhoneNumber = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnLastName = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnStreet = (gcnew System::Windows::Forms::RadioButton());
			this->textBoxInfo = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnFind
			// 
			this->btnFind->Location = System::Drawing::Point(219, 47);
			this->btnFind->Name = L"btnFind";
			this->btnFind->Size = System::Drawing::Size(67, 23);
			this->btnFind->TabIndex = 0;
			this->btnFind->Text = L"Найти";
			this->btnFind->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->radioBtnStreet);
			this->panel1->Controls->Add(this->radioBtnLastName);
			this->panel1->Controls->Add(this->radioBtnPhoneNumber);
			this->panel1->Location = System::Drawing::Point(9, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(277, 32);
			this->panel1->TabIndex = 1;
			// 
			// radioBtnPhoneNumber
			// 
			this->radioBtnPhoneNumber->AutoSize = true;
			this->radioBtnPhoneNumber->Checked = true;
			this->radioBtnPhoneNumber->Location = System::Drawing::Point(8, 6);
			this->radioBtnPhoneNumber->Name = L"radioBtnPhoneNumber";
			this->radioBtnPhoneNumber->Size = System::Drawing::Size(70, 17);
			this->radioBtnPhoneNumber->TabIndex = 0;
			this->radioBtnPhoneNumber->TabStop = true;
			this->radioBtnPhoneNumber->Text = L"Телефон";
			this->radioBtnPhoneNumber->UseVisualStyleBackColor = true;
			// 
			// radioBtnLastName
			// 
			this->radioBtnLastName->AutoSize = true;
			this->radioBtnLastName->Location = System::Drawing::Point(109, 6);
			this->radioBtnLastName->Name = L"radioBtnLastName";
			this->radioBtnLastName->Size = System::Drawing::Size(74, 17);
			this->radioBtnLastName->TabIndex = 1;
			this->radioBtnLastName->Text = L"Фамилия";
			this->radioBtnLastName->UseVisualStyleBackColor = true;
			// 
			// radioBtnStreet
			// 
			this->radioBtnStreet->AutoSize = true;
			this->radioBtnStreet->Location = System::Drawing::Point(212, 6);
			this->radioBtnStreet->Name = L"radioBtnStreet";
			this->radioBtnStreet->Size = System::Drawing::Size(57, 17);
			this->radioBtnStreet->TabIndex = 2;
			this->radioBtnStreet->Text = L"Улица";
			this->radioBtnStreet->UseVisualStyleBackColor = true;
			// 
			// textBoxInfo
			// 
			this->textBoxInfo->Location = System::Drawing::Point(9, 47);
			this->textBoxInfo->Name = L"textBoxInfo";
			this->textBoxInfo->Size = System::Drawing::Size(204, 20);
			this->textBoxInfo->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->btnFind);
			this->panel2->Controls->Add(this->textBoxInfo);
			this->panel2->Location = System::Drawing::Point(4, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(295, 75);
			this->panel2->TabIndex = 4;
			// 
			// listBox
			// 
			this->listBox->FormattingEnabled = true;
			this->listBox->Location = System::Drawing::Point(4, 84);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(296, 212);
			this->listBox->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 299);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справочник";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
