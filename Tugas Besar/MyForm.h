#pragma once
#include <Windows.h>
#include <iostream>
#include <iomanip>
using namespace std;

namespace TugasBesar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtBobot1;
	private: System::Windows::Forms::TextBox^ txtBobot2;
	private: System::Windows::Forms::TextBox^ txtBobot3;
	private: System::Windows::Forms::TextBox^ txtBobot4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtBobot1 = (gcnew System::Windows::Forms::TextBox());
			this->txtBobot2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBobot3 = (gcnew System::Windows::Forms::TextBox());
			this->txtBobot4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(185, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(185, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(185, 145);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(78, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(185, 199);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(78, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(438, 99);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(75, 20);
			this->textBox5->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(438, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Rata-rata Nilai Harian";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Rata-rata Ulangan Harian";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"UTS";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"UAS";
			// 
			// txtBobot1
			// 
			this->txtBobot1->Location = System::Drawing::Point(304, 52);
			this->txtBobot1->Name = L"txtBobot1";
			this->txtBobot1->Size = System::Drawing::Size(64, 20);
			this->txtBobot1->TabIndex = 10;
			// 
			// txtBobot2
			// 
			this->txtBobot2->Location = System::Drawing::Point(304, 99);
			this->txtBobot2->Name = L"txtBobot2";
			this->txtBobot2->Size = System::Drawing::Size(64, 20);
			this->txtBobot2->TabIndex = 11;
			// 
			// txtBobot3
			// 
			this->txtBobot3->Location = System::Drawing::Point(304, 145);
			this->txtBobot3->Name = L"txtBobot3";
			this->txtBobot3->Size = System::Drawing::Size(64, 20);
			this->txtBobot3->TabIndex = 12;
			// 
			// txtBobot4
			// 
			this->txtBobot4->Location = System::Drawing::Point(304, 199);
			this->txtBobot4->Name = L"txtBobot4";
			this->txtBobot4->Size = System::Drawing::Size(64, 20);
			this->txtBobot4->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(301, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Pembobotan";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(374, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"%";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(374, 102);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"%";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(374, 152);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"%";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(374, 202);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"%";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 261);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtBobot4);
			this->Controls->Add(this->txtBobot3);
			this->Controls->Add(this->txtBobot2);
			this->Controls->Add(this->txtBobot1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//deklrasai variabel
		float nilai_harian, ulangan_harian, uts, uas, result;
		int bobot_nilai_harian, bobot_ulangan_harian, bobot_uts, bobot_uas;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//mengambil data dari textbox
		nilai_harian = Convert::ToInt32(textBox1->Text);
		ulangan_harian = Convert::ToInt32(textBox2->Text);
		uts = Convert::ToInt32(textBox3->Text);
		uas = Convert::ToInt32(textBox4->Text);

		bobot_nilai_harian = Convert::ToInt32(txtBobot1->Text);
		bobot_ulangan_harian = Convert::ToInt32(txtBobot2->Text);
		bobot_uts = Convert::ToInt32(txtBobot3->Text);
		bobot_uas = Convert::ToInt32(txtBobot4->Text);


		//penghitungan
		nilai_harian = nilai_harian * bobot_nilai_harian / 100;
		ulangan_harian = ulangan_harian * bobot_ulangan_harian / 100;
		uts = uts * bobot_uts / 100;
		uas = uas * bobot_uas / 100;
		
		result = nilai_harian + ulangan_harian + uts + uas;

		//menampilkan hasil 
		textBox5->Text = Convert::ToString(result);
	}

};
}