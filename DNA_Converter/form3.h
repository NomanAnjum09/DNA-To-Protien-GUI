#pragma once
#include<msclr\marshal_cppstd.h>
#include<string.h>
#include"stdAfx.h"
#include "form4.h"

namespace DNA_Converter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for form3
	/// </summary>
	public ref class form3 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
	private: System::Windows::Forms::Label^  label6;
	public:
		String^ rna;
		form3(String ^ rna, Form^ obj1)
		{
			InitializeComponent();
			obj = obj1;
			this->rna = rna;

			//
			//TODO: Add the constructor code here
			//
		}
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	public:
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: System::Windows::Forms::Label^  label5;
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form3::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Location = System::Drawing::Point(687, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(511, 119);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Proteins";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(632, 327);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(626, 658);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &form3::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(660, 290);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"S No";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mistral", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(824, 290);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 34);
			this->label3->TabIndex = 3;
			this->label3->Text = L"RNA Chunk";
			this->label3->Click += gcnew System::EventHandler(this, &form3::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mistral", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1075, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 34);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Protein";
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(2) {
				this->rectangleShape2,
					this->rectangleShape1
			});
			this->shapeContainer1->Size = System::Drawing::Size(1919, 1001);
			this->shapeContainer1->TabIndex = 5;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->rectangleShape2->CornerRadius = 10;
			this->rectangleShape2->FillColor = System::Drawing::Color::CornflowerBlue;
			this->rectangleShape2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->rectangleShape2->Location = System::Drawing::Point(1519, 295);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(231, 55);
			this->rectangleShape2->Click += gcnew System::EventHandler(this, &form3::rectangleShape2_Click);
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->rectangleShape1->CornerRadius = 10;
			this->rectangleShape1->FillColor = System::Drawing::Color::CornflowerBlue;
			this->rectangleShape1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->rectangleShape1->Location = System::Drawing::Point(1551, 198);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(172, 55);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mistral", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::GhostWhite;
			this->label5->Location = System::Drawing::Point(1562, 199);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 54);
			this->label5->TabIndex = 6;
			this->label5->Text = L"LOAD PROTEINS";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &form3::label5_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mistral", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::GhostWhite;
			this->label6->Location = System::Drawing::Point(1531, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(215, 46);
			this->label6->TabIndex = 7;
			this->label6->Text = L"More About Proteins";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &form3::label6_Click);
			// 
			// form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1919, 1001);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->shapeContainer1);
			this->DoubleBuffered = true;
			this->Name = L"form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"form3";
			this->Load += gcnew System::EventHandler(this, &form3::form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void form3_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	
			 char function(char tree[], string RNA, int i, int parent, int n, string &rna)
			 {
				 if (n == 2)
				 {
					 return tree[(4 * parent) + 1];
					 //cout<<tree[(4*parent)+1];
				 }

				 else
				 {
					 n++;
					 for (int k = (4 * parent) + 1; k<(4 * parent) + 5; k++)
					 {
						 if (RNA[i] == tree[k])
						 {
							 rna[n] = tree[k];
							 return function(tree, RNA, i + 1, k, n, rna);
							 break;
						 }
					 }
				 }
			 }

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;











	msclr::interop::marshal_context context;
	string RNA = context.marshal_as<string>(rna);

	char one[] = { 'A','A','U','G','C','A','U','G','C','A','U','G','C','A','U','G','C','A','U','G','C','K','K','K','K','N','N','N','N','K','K','K','K','N','N','N','N','I','I','I','I','I','I','I','I','M','M','M','M','I','I','I','I','R','R','R','R','S','S','S','S','R','R','R','R','S','S','S','S','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T' };
	char two[] = { 'G','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','E','E','E','E','D','D','D','D','E','E','E','E','D','D','D','D','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V','V' };
	char three[] = { 'C','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','Q','Q','Q','Q','H','H','H','H','Q','Q','Q','Q','H','H','H','H','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L' };
	char four[] = { 'U','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','O','O','O','O','Y','Y','Y','Y','O','O','O','O','Y','Y','Y','Y','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','O','O','O','O','C','C','C','C','W','W','W','W','C','C','C','C','L','L','L','L','F','F','F','F','L','L','L','L','F','F','F','F' };
	char result;
	int i = 0, j = 0;
	int s = RNA.length();
	string rna = "aaa";
	int count = 1;
	for (i = 0; i < s; i = i + 3)
	{
		if (RNA[i] == one[0])
		{
			rna[0] = one[0];
			result = function(one, RNA, i + 1, 0, 0, rna);
		}
		else if (RNA[i] == two[0])
		{
			rna[0] = two[0];
			result = function(two, RNA, i + 1, 0, 0, rna);
		}
		else if (RNA[i] == three[0])
		{
			rna[0] = three[0];
			result = function(three, RNA, i + 1, 0, 0, rna);
		}
		else if (RNA[i] == four[0])
		{
			rna[0] = four[0];
			result = function(four, RNA, i + 1, 0, 0, rna);
		}
		if (result == 'O')
		{

			msclr::interop::marshal_context context;
			String^ Crna = gcnew String(rna.c_str());
			String^ st = gcnew String("Stop");
			textBox1->Text += count++;
			textBox1->Text += "\t\t";
			textBox1->Text += Crna;
			textBox1->Text += "\t\t   ";
			textBox1->Text += "STOP";
			textBox1->Text += "\r\n";
			break;


		}
		string n;
		n = result;
		try {
			msclr::interop::marshal_context context;
			String^ val = gcnew String(n.c_str());
			String^ Crna = gcnew String(rna.c_str());
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM proteins.new_table where Id='" + val + "';", conDataBase);
			myReader = cmdDataBase->ExecuteReader();

			if (myReader->Read()) {

				String^ Nval = myReader->GetString("Protein");
				textBox1->Text += count++;
				textBox1->Text += "\t\t";
				textBox1->Text += Crna;
				textBox1->Text += "\t\t   ";
				textBox1->Text += Nval;
				textBox1->Text += "\r\n";

			}

			myReader->Close();
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void rectangleShape2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	form4^ Mf = gcnew form4();
	this->Hide();
	Mf->ShowDialog();
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
