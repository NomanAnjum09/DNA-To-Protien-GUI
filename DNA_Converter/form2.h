#pragma once
#include"stdAfx.h"
#include"form3.h"
namespace DNA_Converter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form2
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{
	public:
		String^ rna;
		Form^ obj;
		form2(String^ DNA,String^ RNA,Form^ obj1)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			obj=obj1;
			this->label3->Text=DNA;
			this->label5->Text=RNA;
			rna = RNA;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;

	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: System::Windows::Forms::Label^  label1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form2::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 68);
			this->label2->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(638, 79);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Inputted DNA Sequence : ";
			this->label2->Click += gcnew System::EventHandler(this, &form2::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(47, 480);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 79);
			this->label4->TabIndex = 4;
			this->label4->Text = L"RNA :";
			this->label4->Click += gcnew System::EventHandler(this, &form2::label4_Click);
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
			this->shapeContainer1->TabIndex = 6;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->BackColor = System::Drawing::Color::AntiqueWhite;
			this->rectangleShape2->BorderColor = System::Drawing::Color::DarkGoldenrod;
			this->rectangleShape2->CornerRadius = 10;
			this->rectangleShape2->FillColor = System::Drawing::Color::DarkTurquoise;
			this->rectangleShape2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->rectangleShape2->Location = System::Drawing::Point(688, 920);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(400, 65);
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->rectangleShape1->CornerRadius = 10;
			this->rectangleShape1->FillColor = System::Drawing::Color::DodgerBlue;
			this->rectangleShape1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->rectangleShape1->Location = System::Drawing::Point(21, 17);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(87, 38);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DodgerBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 34);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Back";
			this->label1->Click += gcnew System::EventHandler(this, &form2::label1_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::DarkTurquoise;
			this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label6->Location = System::Drawing::Point(692, 930);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(388, 47);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Convert RNA To Protein";
			this->label6->Click += gcnew System::EventHandler(this, &form2::label6_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(101, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1744, 339);
			this->label3->TabIndex = 9;
			this->label3->Text = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &form2::label3_Click_1);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(111, 559);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1744, 339);
			this->label5->TabIndex = 10;
			this->label5->Text = L"label5";
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(22, 49);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1919, 1001);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->shapeContainer1);
			this->Font = (gcnew System::Drawing::Font(L"MV Boli", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->Name = L"form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"form2";
			this->Load += gcnew System::EventHandler(this, &form2::form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void form2_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 

		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
this->Close();
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	form3^ f3 = gcnew form3(rna, this);
	f3->ShowDialog();
}
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
 