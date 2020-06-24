#pragma once
#include "FormPatient.h"

namespace Dentistry {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для MainForm1
	/// </summary>

	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void)
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
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAddPatient;

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
			this->btnAddPatient = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnAddPatient
			// 
			this->btnAddPatient->Location = System::Drawing::Point(144, 256);
			this->btnAddPatient->Name = L"btnAddPatient";
			this->btnAddPatient->Size = System::Drawing::Size(75, 23);
			this->btnAddPatient->TabIndex = 0;
			this->btnAddPatient->Text = L"Приемка";
			this->btnAddPatient->UseVisualStyleBackColor = true;
			this->btnAddPatient->Click += gcnew System::EventHandler(this, &FormMain::btnAddPatient_Click);
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 352);
			this->Controls->Add(this->btnAddPatient);
			this->Name = L"FormMain";
			this->Text = L"MainForm1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAddPatient_Click(System::Object^ sender, System::EventArgs^ e) {

		FormPatient^ frm = gcnew FormPatient;
		frm->Show();
	}
	};
}
