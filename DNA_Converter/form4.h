#pragma once
#include"stdAfx.h"
namespace DNA_Converter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	
	
	/// <summary>
	/// Summary for form4
	/// </summary>
	public ref class form4 : public System::Windows::Forms::Form
	{
	public:
		
		form4(void)
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
		~form4()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape19;


















	private: System::Windows::Forms::Label^  label3;



















	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape21;
	private: System::Windows::Forms::Label^  label21;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape22;

	private: System::Windows::Forms::Label^  label1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape4;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape3;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape12;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape11;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape10;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape27;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape18;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape26;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape25;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape24;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape17;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape15;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape23;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  v;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape5;
private: System::Windows::Forms::Label^  label13;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form4::typeid));
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape12 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape11 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape10 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape27 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape18 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape26 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape25 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape24 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape17 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape15 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape23 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->v = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape22 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape21 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape19 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(20) {
				this->rectangleShape5,
					this->rectangleShape4, this->rectangleShape3, this->rectangleShape1, this->rectangleShape12, this->rectangleShape11, this->rectangleShape10,
					this->rectangleShape2, this->rectangleShape27, this->rectangleShape18, this->rectangleShape26, this->rectangleShape25, this->rectangleShape24,
					this->rectangleShape17, this->rectangleShape15, this->rectangleShape23, this->v, this->rectangleShape22, this->rectangleShape21,
					this->rectangleShape19
			});
			this->shapeContainer1->Size = System::Drawing::Size(1919, 1001);
			this->shapeContainer1->TabIndex = 0;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangleShape5
			// 
			this->rectangleShape5->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape5->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape5->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape5->CornerRadius = 10;
			this->rectangleShape5->Location = System::Drawing::Point(15, 814);
			this->rectangleShape5->Name = L"rectangleShape5";
			this->rectangleShape5->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape4
			// 
			this->rectangleShape4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape4->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape4->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape4->CornerRadius = 10;
			this->rectangleShape4->Location = System::Drawing::Point(17, 900);
			this->rectangleShape4->Name = L"rectangleShape4";
			this->rectangleShape4->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape3
			// 
			this->rectangleShape3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape3->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape3->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape3->CornerRadius = 10;
			this->rectangleShape3->Location = System::Drawing::Point(18, 858);
			this->rectangleShape3->Name = L"rectangleShape3";
			this->rectangleShape3->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape1->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape1->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape1->CornerRadius = 10;
			this->rectangleShape1->Location = System::Drawing::Point(18, 770);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape12
			// 
			this->rectangleShape12->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape12->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape12->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape12->CornerRadius = 10;
			this->rectangleShape12->Location = System::Drawing::Point(16, 727);
			this->rectangleShape12->Name = L"rectangleShape12";
			this->rectangleShape12->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape11
			// 
			this->rectangleShape11->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape11->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape11->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape11->CornerRadius = 10;
			this->rectangleShape11->Location = System::Drawing::Point(15, 689);
			this->rectangleShape11->Name = L"rectangleShape11";
			this->rectangleShape11->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape10
			// 
			this->rectangleShape10->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape10->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape10->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape10->CornerRadius = 10;
			this->rectangleShape10->Location = System::Drawing::Point(17, 643);
			this->rectangleShape10->Name = L"rectangleShape10";
			this->rectangleShape10->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape2->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape2->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape2->CornerRadius = 10;
			this->rectangleShape2->Location = System::Drawing::Point(10, 122);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape27
			// 
			this->rectangleShape27->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape27->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape27->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape27->CornerRadius = 10;
			this->rectangleShape27->Location = System::Drawing::Point(16, 548);
			this->rectangleShape27->Name = L"rectangleShape27";
			this->rectangleShape27->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape18
			// 
			this->rectangleShape18->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape18->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape18->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape18->CornerRadius = 10;
			this->rectangleShape18->Location = System::Drawing::Point(17, 500);
			this->rectangleShape18->Name = L"rectangleShape18";
			this->rectangleShape18->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape26
			// 
			this->rectangleShape26->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape26->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape26->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape26->CornerRadius = 10;
			this->rectangleShape26->Location = System::Drawing::Point(18, 595);
			this->rectangleShape26->Name = L"rectangleShape26";
			this->rectangleShape26->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape25
			// 
			this->rectangleShape25->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape25->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape25->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape25->CornerRadius = 10;
			this->rectangleShape25->Location = System::Drawing::Point(15, 453);
			this->rectangleShape25->Name = L"rectangleShape25";
			this->rectangleShape25->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape24
			// 
			this->rectangleShape24->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape24->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape24->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape24->CornerRadius = 10;
			this->rectangleShape24->Location = System::Drawing::Point(13, 407);
			this->rectangleShape24->Name = L"rectangleShape24";
			this->rectangleShape24->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape17
			// 
			this->rectangleShape17->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape17->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape17->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape17->CornerRadius = 10;
			this->rectangleShape17->Location = System::Drawing::Point(12, 364);
			this->rectangleShape17->Name = L"rectangleShape17";
			this->rectangleShape17->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape15
			// 
			this->rectangleShape15->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape15->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape15->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape15->CornerRadius = 10;
			this->rectangleShape15->Location = System::Drawing::Point(11, 317);
			this->rectangleShape15->Name = L"rectangleShape15";
			this->rectangleShape15->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape23
			// 
			this->rectangleShape23->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape23->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape23->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape23->CornerRadius = 10;
			this->rectangleShape23->Location = System::Drawing::Point(10, 268);
			this->rectangleShape23->Name = L"rectangleShape23";
			this->rectangleShape23->Size = System::Drawing::Size(173, 25);
			// 
			// v
			// 
			this->v->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->v->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->v->BorderColor = System::Drawing::Color::Cornsilk;
			this->v->CornerRadius = 10;
			this->v->Location = System::Drawing::Point(15, 938);
			this->v->Name = L"v";
			this->v->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape22
			// 
			this->rectangleShape22->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape22->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape22->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape22->CornerRadius = 10;
			this->rectangleShape22->Location = System::Drawing::Point(9, 219);
			this->rectangleShape22->Name = L"rectangleShape22";
			this->rectangleShape22->Size = System::Drawing::Size(173, 25);
			// 
			// rectangleShape21
			// 
			this->rectangleShape21->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape21->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape21->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape21->CornerRadius = 10;
			this->rectangleShape21->Location = System::Drawing::Point(9, 172);
			this->rectangleShape21->Name = L"rectangleShape21";
			this->rectangleShape21->Size = System::Drawing::Size(175, 25);
			this->rectangleShape21->Click += gcnew System::EventHandler(this, &form4::rectangleShape21_Click);
			// 
			// rectangleShape19
			// 
			this->rectangleShape19->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->rectangleShape19->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape19->BorderColor = System::Drawing::Color::Cornsilk;
			this->rectangleShape19->CornerRadius = 10;
			this->rectangleShape19->Location = System::Drawing::Point(9, 77);
			this->rectangleShape19->Name = L"rectangleShape19";
			this->rectangleShape19->Size = System::Drawing::Size(176, 25);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::AliceBlue;
			this->label3->Location = System::Drawing::Point(17, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 22);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Alanine";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &form4::label3_Click);
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label21->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::AliceBlue;
			this->label21->Location = System::Drawing::Point(17, 220);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(159, 26);
			this->label21->TabIndex = 29;
			this->label21->Text = L"Cysteine";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label21->Click += gcnew System::EventHandler(this, &form4::label21_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::AliceBlue;
			this->label1->Location = System::Drawing::Point(16, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 26);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Aspartic Acid";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &form4::label1_Click);
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label22->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::AliceBlue;
			this->label22->Location = System::Drawing::Point(24, 938);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(159, 26);
			this->label22->TabIndex = 32;
			this->label22->Text = L"Tyrosine";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label22->Click += gcnew System::EventHandler(this, &form4::label22_Click);
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label24->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::AliceBlue;
			this->label24->Location = System::Drawing::Point(17, 268);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(159, 26);
			this->label24->TabIndex = 34;
			this->label24->Text = L"Glutamic Acid";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label24->Click += gcnew System::EventHandler(this, &form4::label24_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::AliceBlue;
			this->label2->Location = System::Drawing::Point(19, 317);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 26);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Glycine";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &form4::label2_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::AliceBlue;
			this->label4->Location = System::Drawing::Point(19, 363);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 26);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Histidine";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &form4::label4_Click);
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label23->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::AliceBlue;
			this->label23->Location = System::Drawing::Point(22, 407);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(159, 26);
			this->label23->TabIndex = 37;
			this->label23->Text = L"Isoleucine";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label23->Click += gcnew System::EventHandler(this, &form4::label23_Click);
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label25->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::AliceBlue;
			this->label25->Location = System::Drawing::Point(22, 453);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(159, 26);
			this->label25->TabIndex = 38;
			this->label25->Text = L"Lysine";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label25->Click += gcnew System::EventHandler(this, &form4::label25_Click);
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label26->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::AliceBlue;
			this->label26->Location = System::Drawing::Point(24, 595);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(159, 26);
			this->label26->TabIndex = 39;
			this->label26->Text = L"PhenylAlanine";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label26->Click += gcnew System::EventHandler(this, &form4::label26_Click);
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label27->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::AliceBlue;
			this->label27->Location = System::Drawing::Point(22, 500);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(159, 26);
			this->label27->TabIndex = 40;
			this->label27->Text = L"Leucine";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label27->Click += gcnew System::EventHandler(this, &form4::label27_Click);
			// 
			// label28
			// 
			this->label28->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label28->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::AliceBlue;
			this->label28->Location = System::Drawing::Point(24, 548);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(159, 26);
			this->label28->TabIndex = 41;
			this->label28->Text = L"Methionine";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label28->Click += gcnew System::EventHandler(this, &form4::label28_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::AliceBlue;
			this->label5->Location = System::Drawing::Point(19, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 26);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Asparagine";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &form4::label5_Click_1);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::AliceBlue;
			this->label6->Location = System::Drawing::Point(24, 643);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 26);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Proline";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &form4::label6_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::AliceBlue;
			this->label7->Location = System::Drawing::Point(24, 689);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(159, 26);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Glutamine";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &form4::label7_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::AliceBlue;
			this->label8->Location = System::Drawing::Point(25, 728);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(159, 26);
			this->label8->TabIndex = 45;
			this->label8->Text = L"Arginine";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &form4::label8_Click);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::AliceBlue;
			this->label9->Location = System::Drawing::Point(25, 770);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(159, 26);
			this->label9->TabIndex = 46;
			this->label9->Text = L"Threonine";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &form4::label9_Click);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::AliceBlue;
			this->label10->Location = System::Drawing::Point(24, 858);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(159, 26);
			this->label10->TabIndex = 47;
			this->label10->Text = L"Valine";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &form4::label10_Click);
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label11->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::AliceBlue;
			this->label11->Location = System::Drawing::Point(24, 900);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(159, 26);
			this->label11->TabIndex = 48;
			this->label11->Text = L"Trytophan";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &form4::label11_Click);
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::SeaShell;
			this->label12->Location = System::Drawing::Point(214, 202);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(875, 887);
			this->label12->TabIndex = 49;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(1152, 220);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(742, 653);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 50;
			this->pictureBox1->TabStop = false;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label13->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::AliceBlue;
			this->label13->Location = System::Drawing::Point(22, 814);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(159, 26);
			this->label13->TabIndex = 51;
			this->label13->Text = L"Serine";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Click += gcnew System::EventHandler(this, &form4::label13_Click);
			// 
			// form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1919, 1001);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->shapeContainer1);
			this->Name = L"form4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"form4";
			this->Load += gcnew System::EventHandler(this, &form4::form4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		

	private: System::Void rectangleShape9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void rectangleShape7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rectangleShape13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rectangleShape18_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rectangleShape17_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rectangleShape4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rectangleShape14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void form4_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void rectangleShape21_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='A';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\alanine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}




}
private: System::Void label5_Click_1(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='N';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\asparagine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}


}
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='C';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\cysteine.jpg");
			
		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='D';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\Aspartic.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}


}
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='E';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\glutamic.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}


}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='G';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\glycine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}


}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='H';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\histidine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='I';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\isoleucine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='K';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\Lysine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='L';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\leucine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label28_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='M';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\Methionine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label26_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='F';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\phenylalanine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='P';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\proline.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='Q';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\glutamine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='R';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\arginine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}


}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='T';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\threonine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='V';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\valine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='W';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\tryptophan.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='Y';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\tyrosine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Noman123";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	conDataBase->Open();
	MySqlDataReader^ myReader;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT Description FROM proteins.new_table where Id='S';", conDataBase);
	myReader = cmdDataBase->ExecuteReader();
	if (myReader->Read()) {
		try {
			String^ Nval = myReader->GetString("Description");
			label12->Text = Nval;
			pictureBox1->Image = System::Drawing::Bitmap::Image::FromFile("D:\\GUI WORK\\serine.jpg");

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}
}
};
}



