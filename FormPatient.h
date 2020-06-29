#pragma once
#include <string>

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
	public ref class FormPatient : public System::Windows::Forms::Form
	{
		static Boolean pictureBoxIsDrageed = false;
	public:
		FormPatient(void)
		{
			InitializeComponent();
			//
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormPatient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbSurname;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPatronymic;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbPassNumber;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPassSerial;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBoxPhoto;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ tbBirthDay;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tbCity;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::Button^ btnAccept;
	private: System::Windows::Forms::Button^ btnImport;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ btnConfirm;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBoxJaw;
	private: System::Windows::Forms::Button^ btnConnect;

	private:
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPatient::typeid));
			this->tbSurname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPatronymic = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->btnConfirm = (gcnew System::Windows::Forms::Button());
			this->btnImport = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tbBirthDay = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbCity = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbPassNumber = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPassSerial = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->btnAccept = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBoxJaw = (gcnew System::Windows::Forms::PictureBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPhoto))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxJaw))->BeginInit();
			this->SuspendLayout();
			// 
			// tbSurname
			// 
			this->tbSurname->Location = System::Drawing::Point(107, 45);
			this->tbSurname->Name = L"tbSurname";
			this->tbSurname->Size = System::Drawing::Size(133, 22);
			this->tbSurname->TabIndex = 1;
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
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(107, 19);
			this->tbName->MaxLength = 15;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(133, 22);
			this->tbName->TabIndex = 0;
			this->tbName->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &FormPatient::tbName_Validating);
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
			// tbPatronymic
			// 
			this->tbPatronymic->Location = System::Drawing::Point(107, 72);
			this->tbPatronymic->Name = L"tbPatronymic";
			this->tbPatronymic->Size = System::Drawing::Size(133, 22);
			this->tbPatronymic->TabIndex = 2;
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCancel->Location = System::Drawing::Point(264, 408);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(88, 26);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Отмена";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &FormPatient::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Controls->Add(this->btnConfirm);
			this->groupBox1->Controls->Add(this->btnImport);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->tbBirthDay);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->tbAddress);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->tbCity);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->tbPhone);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->pictureBoxPhoto);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->tbPassNumber);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->tbPassSerial);
			this->groupBox1->Controls->Add(this->tbPatronymic);
			this->groupBox1->Controls->Add(this->tbSurname);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->tbName);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(3, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(488, 354);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Персональные данные";
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->Enabled = false;
			this->trackBar1->Location = System::Drawing::Point(275, 226);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Minimum = 50;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(198, 27);
			this->trackBar1->TabIndex = 27;
			this->trackBar1->TickFrequency = 10;
			this->trackBar1->Value = 100;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &FormPatient::trackBar1_Scroll);
			// 
			// btnConfirm
			// 
			this->btnConfirm->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnConfirm->Enabled = false;
			this->btnConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnConfirm->Location = System::Drawing::Point(387, 259);
			this->btnConfirm->Name = L"btnConfirm";
			this->btnConfirm->Size = System::Drawing::Size(86, 27);
			this->btnConfirm->TabIndex = 26;
			this->btnConfirm->Text = L"Применить";
			this->btnConfirm->UseVisualStyleBackColor = true;
			// 
			// btnImport
			// 
			this->btnImport->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnImport->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnImport->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnImport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnImport->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnImport->ImageIndex = 0;
			this->btnImport->ImageList = this->imageList1;
			this->btnImport->Location = System::Drawing::Point(276, 259);
			this->btnImport->Name = L"btnImport";
			this->btnImport->Size = System::Drawing::Size(82, 26);
			this->btnImport->TabIndex = 25;
			this->btnImport->Text = L"Импорт";
			this->btnImport->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnImport->UseVisualStyleBackColor = true;
			this->btnImport->Click += gcnew System::EventHandler(this, &FormPatient::btnImport_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"import-export-arrows.png");
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 16);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Паспортные данные:";
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
			// tbBirthDay
			// 
			this->tbBirthDay->Location = System::Drawing::Point(176, 109);
			this->tbBirthDay->Name = L"tbBirthDay";
			this->tbBirthDay->Size = System::Drawing::Size(64, 22);
			this->tbBirthDay->TabIndex = 3;
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
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(68, 258);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(187, 22);
			this->tbAddress->TabIndex = 7;
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
			// tbCity
			// 
			this->tbCity->Location = System::Drawing::Point(138, 230);
			this->tbCity->Name = L"tbCity";
			this->tbCity->Size = System::Drawing::Size(117, 22);
			this->tbCity->TabIndex = 6;
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
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(164, 328);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(113, 22);
			this->tbPhone->TabIndex = 8;
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
			// pictureBoxPhoto
			// 
			this->pictureBoxPhoto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBoxPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxPhoto->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->pictureBoxPhoto->Location = System::Drawing::Point(275, 36);
			this->pictureBoxPhoto->Name = L"pictureBoxPhoto";
			this->pictureBoxPhoto->Size = System::Drawing::Size(198, 184);
			this->pictureBoxPhoto->TabIndex = 13;
			this->pictureBoxPhoto->TabStop = false;
			this->pictureBoxPhoto->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormPatient::pictureBoxPhoto_MouseMove);
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
			// tbPassNumber
			// 
			this->tbPassNumber->Location = System::Drawing::Point(62, 204);
			this->tbPassNumber->Name = L"tbPassNumber";
			this->tbPassNumber->Size = System::Drawing::Size(114, 22);
			this->tbPassNumber->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Серия:";
			// 
			// tbPassSerial
			// 
			this->tbPassSerial->Location = System::Drawing::Point(62, 178);
			this->tbPassSerial->Name = L"tbPassSerial";
			this->tbPassSerial->Size = System::Drawing::Size(30, 22);
			this->tbPassSerial->TabIndex = 4;
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
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(94, 24);
			this->textBox6->TabIndex = 11;
			// 
			// btnAccept
			// 
			this->btnAccept->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnAccept->Enabled = false;
			this->btnAccept->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAccept->Location = System::Drawing::Point(157, 408);
			this->btnAccept->Name = L"btnAccept";
			this->btnAccept->Size = System::Drawing::Size(86, 26);
			this->btnAccept->TabIndex = 13;
			this->btnAccept->Text = L"Сохранить";
			this->btnAccept->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBoxJaw);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(513, 48);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(338, 354);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Челюсть (3D вид)";
			// 
			// pictureBoxJaw
			// 
			this->pictureBoxJaw->BackColor = System::Drawing::Color::LightGray;
			this->pictureBoxJaw->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBoxJaw->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxJaw->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->pictureBoxJaw->Location = System::Drawing::Point(6, 21);
			this->pictureBoxJaw->Name = L"pictureBoxJaw";
			this->pictureBoxJaw->Size = System::Drawing::Size(326, 307);
			this->pictureBoxJaw->TabIndex = 14;
			this->pictureBoxJaw->TabStop = false;
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(513, 9);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(75, 23);
			this->btnConnect->TabIndex = 15;
			this->btnConnect->Text = L"SQL Server";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &FormPatient::btnConnect_Click);
			// 
			// FormPatient
			// 
			this->AccessibleName = L"FormPatient";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(863, 439);
			this->Controls->Add(this->btnConnect);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->btnAccept);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnCancel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FormPatient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Регистрация пациента";
			this->Shown += gcnew System::EventHandler(this, &FormPatient::FormPatient_Shown);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPhoto))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxJaw))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void FormPatient_Shown(System::Object^ sender, System::EventArgs^ e) {
		tbName->Focus();
	}
	private: System::Void btnAccept_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbName_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void btnImport_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		//openFileDialog1->InitialDirectory = "d:\\";
		openFileDialog1->Filter = "Image files (*.jpg)|*.jpg|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = gcnew String(openFileDialog1->FileName);
			pictureBoxPhoto->Image = gcnew Bitmap(fileName);//Image::FromFile(fileName);
			pictureBoxPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;//Normal;
			btnAccept->Enabled = true;
			trackBar1->Enabled = true;
		}
		else btnAccept->Enabled = false;
	}
	private: System::Void pictureBoxPhoto_DragEnter(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
		pictureBoxIsDrageed = true;
		/*		if (e->Data->GetDataPresent(DataFormats->Bitmap))
					e->Effect = DragDropEffects->Move; */

	}
	private: System::Void pictureBoxPhoto_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (pictureBoxIsDrageed) {
			pictureBoxPhoto->Location = System::Drawing::Point(e->X, e->Y);
			pictureBoxPhoto->Invalidate();
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		this->pictureBoxPhoto->Size = System::Drawing::Size(pictureBoxPhoto->Width * trackBar1->Value / 100, pictureBoxPhoto->Height * trackBar1->Value / 100);

		pictureBoxPhoto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
		pictureBoxPhoto->Invalidate();
	}
	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	};
}

