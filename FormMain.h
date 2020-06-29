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
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiFile;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiClients;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiRegistration;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiHelp;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
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
			this->tsmiFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiClients = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiRegistration = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tsmiFile
			// 
			this->tsmiFile->Name = L"tsmiFile";
			this->tsmiFile->Size = System::Drawing::Size(48, 20);
			this->tsmiFile->Text = L"Файл";
			// 
			// tsmiClients
			// 
			this->tsmiClients->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsmiRegistration });
			this->tsmiClients->Name = L"tsmiClients";
			this->tsmiClients->Size = System::Drawing::Size(67, 20);
			this->tsmiClients->Text = L"Клиенты";
			// 
			// tsmiRegistration
			// 
			this->tsmiRegistration->Name = L"tsmiRegistration";
			this->tsmiRegistration->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->tsmiRegistration->Size = System::Drawing::Size(180, 22);
			this->tsmiRegistration->Text = L"Регистрация";
			this->tsmiRegistration->Click += gcnew System::EventHandler(this, &FormMain::tsmiRegistration_Click);
			// 
			// tsmiHelp
			// 
			this->tsmiHelp->Name = L"tsmiHelp";
			this->tsmiHelp->Size = System::Drawing::Size(68, 20);
			this->tsmiHelp->Text = L"Помощь";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsmiFile, this->tsmiClients,
					this->tsmiHelp
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(585, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 352);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FormMain";
			this->Text = L"Дантист (версия 1.0)";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddPatient_Click(System::Object^ sender, System::EventArgs^ e) {

		FormPatient^ frm = gcnew FormPatient;
		frm->Show();
	}
	private: System::Void tsmiRegistration_Click(System::Object^ sender, System::EventArgs^ e) {
		FormPatient^ frm = gcnew FormPatient;
		   frm->ShowDialog();
	}
};
}
