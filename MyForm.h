#pragma once

namespace Dentistry {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox7;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(532, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Внести";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(107, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(5, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Фамилия";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Имя";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(107, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(5, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Отчество";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(107, 72);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(133, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(618, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(497, 42);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(196, 96);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(539, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Список приёмов";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(3, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(488, 354);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Персональные данные";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(62, 176);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(30, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(5, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Серия:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(62, 204);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(114, 20);
			this->textBox5->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(5, 204);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 16);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Номер";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::DarkGreen;
			this->label9->Location = System::Drawing::Point(12, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(261, 20);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Картотечный номер в базе данных:";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(279, 9);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(94, 24);
			this->textBox6->TabIndex = 11;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(275, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(198, 184);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(351, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 16);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Фото";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(7, 328);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(151, 16);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Номер моб. телефона";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(164, 328);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(91, 20);
			this->textBox7->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(5, 231);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 16);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Город проживания";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(138, 230);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(117, 20);
			this->textBox8->TabIndex = 17;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(5, 259);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 16);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Адрес";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(68, 258);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(187, 20);
			this->textBox9->TabIndex = 19;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(5, 109);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 16);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Дата рождения:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(176, 109);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(64, 20);
			this->textBox10->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 16);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Паспортные данные";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(8, 300);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(73, 16);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Контакты:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 415);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Карта пациента";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
