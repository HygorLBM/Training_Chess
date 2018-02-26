#pragma once
#include <Windows.h>



namespace Training_chess {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: int locker;
	public: int e_turn, m_turn, h_turn;
	public: int e_confirm, m_confirm, h_confirm;
	public: int bispo, peao1, peao2, peao3;
	public: int Speao, Sbispo, Scavalo, Srei;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox56;
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox61;
	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::PictureBox^  pictureBox63;
	private: System::Windows::Forms::PictureBox^  pictureBox64;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox65;
	private: System::Windows::Forms::PictureBox^  pictureBox66;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox67;
	private: System::Windows::Forms::PictureBox^  pictureBox68;
	private: System::Windows::Forms::PictureBox^  pictureBox69;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox69))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(65, 65);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(65, 0);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(65, 65);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::B8_In);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::DarkRed;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(130, 0);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(65, 65);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(260, 0);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(65, 65);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(325, 0);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(65, 65);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::F8_In);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(390, 0);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(65, 65);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(455, 0);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(65, 65);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(0, 65);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(65, 65);
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(130, 65);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(65, 65);
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Form1::C7_In);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(390, 65);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(65, 65);
			this->pictureBox12->TabIndex = 11;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(65, 65);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(65, 65);
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Form1::B7_To);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(195, 65);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(65, 65);
			this->pictureBox14->TabIndex = 13;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Enabled = false;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(325, 65);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(65, 65);
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Form1::D7_In);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(455, 65);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(65, 65);
			this->pictureBox16->TabIndex = 15;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(0, 130);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(65, 65);
			this->pictureBox17->TabIndex = 16;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &Form1::pictureBox17_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(130, 130);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(65, 65);
			this->pictureBox18->TabIndex = 17;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(260, 130);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(65, 65);
			this->pictureBox19->TabIndex = 18;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(390, 130);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(65, 65);
			this->pictureBox20->TabIndex = 19;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(65, 130);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(65, 65);
			this->pictureBox21->TabIndex = 20;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &Form1::B6_In);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(195, 130);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(65, 65);
			this->pictureBox22->TabIndex = 21;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(325, 130);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(65, 65);
			this->pictureBox23->TabIndex = 22;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &Form1::E5_In);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(455, 130);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(65, 65);
			this->pictureBox24->TabIndex = 23;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(0, 195);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(65, 65);
			this->pictureBox25->TabIndex = 24;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &Form1::A5_To);
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(0, 260);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(65, 65);
			this->pictureBox26->TabIndex = 25;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(65, 260);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(65, 65);
			this->pictureBox27->TabIndex = 26;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &Form1::B4_In);
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(195, 260);
			this->pictureBox28->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(65, 65);
			this->pictureBox28->TabIndex = 27;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(325, 260);
			this->pictureBox29->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(65, 65);
			this->pictureBox29->TabIndex = 28;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &Form1::F4_In);
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(455, 260);
			this->pictureBox30->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(65, 65);
			this->pictureBox30->TabIndex = 29;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(130, 260);
			this->pictureBox31->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(65, 65);
			this->pictureBox31->TabIndex = 30;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(260, 260);
			this->pictureBox32->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(65, 65);
			this->pictureBox32->TabIndex = 31;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(390, 260);
			this->pictureBox33->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(65, 65);
			this->pictureBox33->TabIndex = 32;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(65, 195);
			this->pictureBox34->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(65, 65);
			this->pictureBox34->TabIndex = 33;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(195, 195);
			this->pictureBox35->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(65, 65);
			this->pictureBox35->TabIndex = 34;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Click += gcnew System::EventHandler(this, &Form1::C5_To);
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(325, 195);
			this->pictureBox36->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(65, 65);
			this->pictureBox36->TabIndex = 35;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(455, 195);
			this->pictureBox37->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(65, 65);
			this->pictureBox37->TabIndex = 36;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &Form1::Dificuldades);
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(130, 195);
			this->pictureBox38->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(65, 65);
			this->pictureBox38->TabIndex = 37;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(260, 195);
			this->pictureBox39->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(65, 65);
			this->pictureBox39->TabIndex = 38;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(390, 195);
			this->pictureBox40->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(65, 65);
			this->pictureBox40->TabIndex = 39;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(0, 389);
			this->pictureBox41->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(65, 65);
			this->pictureBox41->TabIndex = 40;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(130, 389);
			this->pictureBox42->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(65, 65);
			this->pictureBox42->TabIndex = 41;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(257, 390);
			this->pictureBox43->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(65, 65);
			this->pictureBox43->TabIndex = 42;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(387, 389);
			this->pictureBox44->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(65, 65);
			this->pictureBox44->TabIndex = 43;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(65, 389);
			this->pictureBox45->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(65, 65);
			this->pictureBox45->TabIndex = 44;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Click += gcnew System::EventHandler(this, &Form1::EasyMode);
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(192, 389);
			this->pictureBox46->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(65, 65);
			this->pictureBox46->TabIndex = 45;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &Form1::B2_In);
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(322, 389);
			this->pictureBox47->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(65, 65);
			this->pictureBox47->TabIndex = 46;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(452, 389);
			this->pictureBox48->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(65, 65);
			this->pictureBox48->TabIndex = 47;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(0, 325);
			this->pictureBox49->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(65, 65);
			this->pictureBox49->TabIndex = 48;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(65, 325);
			this->pictureBox50->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(65, 65);
			this->pictureBox50->TabIndex = 49;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(130, 325);
			this->pictureBox51->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(65, 65);
			this->pictureBox51->TabIndex = 50;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Click += gcnew System::EventHandler(this, &Form1::C3_In);
			// 
			// pictureBox52
			// 
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(260, 325);
			this->pictureBox52->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(65, 65);
			this->pictureBox52->TabIndex = 51;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Click += gcnew System::EventHandler(this, &Form1::pictureBox52_Click);
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(390, 325);
			this->pictureBox53->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(65, 65);
			this->pictureBox53->TabIndex = 52;
			this->pictureBox53->TabStop = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(195, 325);
			this->pictureBox54->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(65, 65);
			this->pictureBox54->TabIndex = 53;
			this->pictureBox54->TabStop = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(325, 325);
			this->pictureBox55->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(65, 65);
			this->pictureBox55->TabIndex = 54;
			this->pictureBox55->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(455, 324);
			this->pictureBox56->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(65, 65);
			this->pictureBox56->TabIndex = 55;
			this->pictureBox56->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox57->Enabled = false;
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(0, 455);
			this->pictureBox57->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(65, 65);
			this->pictureBox57->TabIndex = 56;
			this->pictureBox57->TabStop = false;
			this->pictureBox57->Click += gcnew System::EventHandler(this, &Form1::pictureBox57_Click);
			// 
			// pictureBox58
			// 
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(65, 455);
			this->pictureBox58->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(65, 65);
			this->pictureBox58->TabIndex = 57;
			this->pictureBox58->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(130, 455);
			this->pictureBox59->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(65, 65);
			this->pictureBox59->TabIndex = 58;
			this->pictureBox59->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(195, 455);
			this->pictureBox60->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(65, 65);
			this->pictureBox60->TabIndex = 59;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(260, 455);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(65, 65);
			this->pictureBox61->TabIndex = 60;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Click += gcnew System::EventHandler(this, &Form1::D1_In);
			// 
			// pictureBox62
			// 
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(325, 455);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(108, 65);
			this->pictureBox62->TabIndex = 61;
			this->pictureBox62->TabStop = false;
			// 
			// pictureBox63
			// 
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(390, 455);
			this->pictureBox63->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(65, 65);
			this->pictureBox63->TabIndex = 62;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(455, 455);
			this->pictureBox64->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(65, 65);
			this->pictureBox64->TabIndex = 63;
			this->pictureBox64->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Enabled = false;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(260, 65);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(68, 65);
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Form1::E7_In);
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(109, 271);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(305, 37);
			this->pictureBox65->TabIndex = 64;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Visible = false;
			// 
			// pictureBox66
			// 
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(65, 325);
			this->pictureBox66->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(424, 195);
			this->pictureBox66->TabIndex = 65;
			this->pictureBox66->TabStop = false;
			this->pictureBox66->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(195, 0);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(65, 65);
			this->pictureBox4->TabIndex = 66;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::D8_In);
			// 
			// pictureBox67
			// 
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(22, 196);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(490, 194);
			this->pictureBox67->TabIndex = 67;
			this->pictureBox67->TabStop = false;
			this->pictureBox67->Visible = false;
			// 
			// pictureBox68
			// 
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(0, 0);
			this->pictureBox68->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(544, 610);
			this->pictureBox68->TabIndex = 68;
			this->pictureBox68->TabStop = false;
			this->pictureBox68->Visible = false;
			// 
			// pictureBox69
			// 
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(25, 263);
			this->pictureBox69->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(474, 46);
			this->pictureBox69->TabIndex = 69;
			this->pictureBox69->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 553);
			this->Controls->Add(this->pictureBox69);
			this->Controls->Add(this->pictureBox68);
			this->Controls->Add(this->pictureBox67);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox66);
			this->Controls->Add(this->pictureBox65);
			this->Controls->Add(this->pictureBox64);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->pictureBox61);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox57);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Click += gcnew System::EventHandler(this, &Form1::Endgame);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox69))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void Dificuldades(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox65->Visible = true;
			 pictureBox69->Visible = false;
            // Retirando as peças 
			 pictureBox41->Load("branca.png");
			 pictureBox42->Load("branca.png");
			 pictureBox43->Load("branca.png");
			 pictureBox44->Load("branca.png");
			 pictureBox58->Load("branca.png");
			 pictureBox60->Load("branca.png");
			 pictureBox62->Load("branca.png");
			 pictureBox64->Load("branca.png");

			 pictureBox45->Load("preta.png");
			 pictureBox46->Load("preta.png");
			 pictureBox47->Load("preta.png");
			 pictureBox48->Load("preta.png");
			 pictureBox59->Load("preta.png");
			 pictureBox61->Load("preta.png");
			 pictureBox63->Load("preta.png");
			 pictureBox57->Load("preta.png");

			 //Colocando as dificuldades
			 pictureBox50->Load("Bpeao_branca.png");
			 pictureBox54->Load("branca.png");
			 pictureBox55->Load("branca.png");
			 pictureBox45->Load("easy.png");
			 pictureBox46->Load("preta.png");
			 pictureBox47->Load("preta.png");
			 //Garantindo que apenas agora a dificuldade pode ser escolhida
			 locker = 1;



		 }
private: System::Void EasyMode(System::Object^  sender, System::EventArgs^  e) {
			 //Garantindo que o click só é valido após a escolha da dificuldade
			 if (locker == 1){
            //Retirando peças e texto 
			 pictureBox50->Load("branca.png");
			 pictureBox54->Load("branca.png");
			 pictureBox55->Load("branca.png");
			 pictureBox45->Load("preta.png");
			 pictureBox46->Load("preta.png");
			 pictureBox47->Load("preta.png");
			 pictureBox1->Load("branca.png");
			 pictureBox2->Load("preta.png");
			 pictureBox3->Load("branca.png");
			 pictureBox4->Load("preta.png");
			 pictureBox5->Load("branca.png");
			 pictureBox6->Load("preta.png");
			 pictureBox7->Load("branca.png");
			 pictureBox8->Load("preta.png");
			 pictureBox9->Load("preta.png");
			 pictureBox10->Load("preta.png");
			 pictureBox11->Load("preta.png");
			 pictureBox12->Load("preta.png");
			 pictureBox13->Load("branca.png");
			 pictureBox14->Load("branca.png");
			 pictureBox15->Load("branca.png");
			 pictureBox16->Load("branca.png");
			 pictureBox34->Load("branca.png");
			 pictureBox36->Load("branca.png");
			 pictureBox37->Load("branca.png");
			 pictureBox38->Load("preta.png");
			 pictureBox39->Load("preta.png");
			 pictureBox40->Load("preta.png");
			



			 pictureBox65->Visible = false;
			 //Explicando o jogo
			 pictureBox66->Visible = true;
			 pictureBox66->Refresh();
			 Sleep(3000);
			 pictureBox66->Visible = false;

			 //Tabuleiro do modo facil
			 e_turn = 0;
			 bispo = 20;
			 peao1 = 14;
			 peao2 = 15;
			 peao3 = 16;
			 Speao = 10;
			 Scavalo = 28;
			 Sbispo = 25;
			 Srei = 59;
			 e_confirm = 0;
			 pictureBox57->Load("preta.png");
			 pictureBox59->Load("Brei_preta.png");
			 pictureBox43->Load("Bpeao_branca.png");
			 pictureBox52->Load("Ppeao_preta.png");
			 pictureBox13->Load("Bpeao_branca.png");
			 pictureBox35->Load("Bcavalo_branca.png");
			 pictureBox25->Load("Bbispo_preta.png");
			 pictureBox22->Load("Pbispo_preta.png");
			 pictureBox8->Load("Prei_preta.png");
			 pictureBox12->Load("Ppeao_preta.png");
			 pictureBox15->Load("Ppeao_branca.png");
			 pictureBox16->Load("Ppeao_branca.png");

			 
			 }


		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void B7_To(System::Object^  sender, System::EventArgs^  e) {
			 if((Speao= 10) && (bispo != 2)){
				 pictureBox2->Load("confirm_black.png");
			     e_confirm = 1;}}


		 
private: System::Void B8_In(System::Object^  sender, System::EventArgs^  e) {
             if ((bispo == 20) && (Sbispo != 11) && (Scavalo != 11) && (e_confirm == 1)){
			 pictureBox13->Load("branca.png");
			 pictureBox13->Refresh();
			 pictureBox2->Load("Bpeao_preta.png");
			 pictureBox2->Refresh();
			 Sleep(1000);
			 pictureBox2->Load("Brainha_preta.png");
			 pictureBox2->Refresh();
			 Sleep(1500);
			 pictureBox2->Load("Pbispo_preta.png");
			 pictureBox22->Load("preta.png");
			 bispo = 2;
			 Speao = 0;
			 e_turn++;
			 e_confirm=0;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}}

			 else if((e_confirm ==1) &&(bispo == 9)) {
			 pictureBox13->Load("branca.png");
			 pictureBox13->Refresh();
			 pictureBox2->Load("Bpeao_preta.png");
			 pictureBox2->Refresh();
			 Sleep(1000);
			 pictureBox2->Load("Brainha_preta.png");
			 pictureBox2->Refresh();
			 Sleep(1500);
			 pictureBox9->Load("preta.png");
			 pictureBox2->Load("Pbispo_preta.png");
	         Speao = 0;
			 bispo = 2;
			 e_confirm=0;
			 e_turn++;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }

			 else if((e_confirm ==1) &&( Scavalo != 11))  {
			 pictureBox13->Load("branca.png");
			 pictureBox13->Refresh();
			 pictureBox2->Load("Bpeao_preta.png");
			 pictureBox2->Refresh();
			 Sleep(1000);
			 pictureBox2->Load("Brainha_preta.png");
			 pictureBox2->Refresh();
			 Sleep(1500);
			 pictureBox15->Load("branca.png");
			 pictureBox36->Load("Ppeao_branca.png");
	         Speao = 2;
			 peao1 = 30;
			 e_confirm=0;
			 e_turn++;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }

			 else if((e_confirm == 1) && (Scavalo == 11)){
			 pictureBox13->Load("branca.png");
			 pictureBox13->Refresh();
			 pictureBox2->Load("Bpeao_preta.png");
			 pictureBox2->Refresh();
			 Sleep(1000);
			 pictureBox2->Load("Brainha_preta.png");
			 pictureBox2->Refresh();
			 Sleep(1500);
			 pictureBox22->Load("preta.png");
			 pictureBox6->Load("Pbispo_preta.png");
			 Speao = 2;
			 bispo = 6;
			 e_confirm = 0;
			 e_turn++;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}

			 }

			 else if(Speao == 2){
				 e_confirm =4;
				 pictureBox1->Load("confirm_black.png");
				 pictureBox3->Load("confirm_black.png");
				 pictureBox5->Load("confirm_black.png");
				 pictureBox4->Load("confirm_white.png");
				 pictureBox9->Load("confirm_white.png");}

		 }
//Movimentação inicial bispo
private: System::Void A5_To(System::Object^  sender, System::EventArgs^  e) {
			 if(Sbispo == 25){
				 if((Scavalo!=18) && (Scavalo !=11)){
				 pictureBox4->Load("confirm_black.png");
				 pictureBox10->Load("confirm_black.png");
				 pictureBox21->Load("confirm_black.png");}
				 else if(Scavalo!=18){
					 pictureBox21->Load("confirm_black.png");}
				 if((Scavalo != 34) && (Scavalo != 43)){
				 pictureBox27->Load("confirm_black.png");
				 pictureBox46->Load("confirm_black.png");
				 pictureBox51->Load("confirm_black.png");
				 pictureBox61->Load("confirm_black.png");}
		        else if(Scavalo!= 34){
					pictureBox27->Load("confirm_black.png");}


				 e_confirm =2;
				 }
		 }




private: System::Void B6_In(System::Object^  sender, System::EventArgs^  e) {
		 if ((Sbispo == 25) && (e_confirm == 2) && (bispo == 20) && (Scavalo != 18)){
			     pictureBox4->Load("preta.png");
				 pictureBox10->Load("preta.png");
				 if(Scavalo != 34){
					 pictureBox27->Load("preta.png");}
				 pictureBox46->Load("preta.png");
				 pictureBox51->Load("preta.png");
				 pictureBox61->Load("preta.png");
				 pictureBox25->Load("preta.png");
			     pictureBox25->Refresh();
				 pictureBox21->Load("Bbispo_preta.png");
			     pictureBox21->Refresh();
				 Sleep(1500);
				 pictureBox2->Load("Pbispo_preta.png");
			     pictureBox22->Load("preta.png");
			     e_turn++;
				 e_confirm = 0;
				 Sbispo = 18;
				 bispo = 2 ;

				  if (e_turn == 3){
				 pictureBox68->Visible = true;}

			 }
		 else if ((e_confirm == 2) && (Scavalo != 18)){
			     pictureBox4->Load("preta.png");
				 if(Scavalo != 10){
					 pictureBox10->Load("preta.png");}
				 if(Scavalo != 34){
					 pictureBox27->Load("preta.png");}
				 pictureBox46->Load("preta.png");
				 pictureBox51->Load("preta.png");
				 pictureBox61->Load("preta.png");
				 pictureBox25->Load("preta.png");
			     pictureBox25->Refresh();
				 pictureBox21->Load("Bbispo_preta.png");
			     pictureBox21->Refresh();
				 Sleep(1500);
			     pictureBox16->Load("branca.png");
			     pictureBox37->Load("Ppeao_branca.png");
				 e_turn++;
				 Sbispo = 18;
				 peao3 = 32;
				 e_confirm = 0;
				  if (e_turn == 3){
				 pictureBox68->Visible = true;}
		  }
		 else if ((e_confirm ==3) && (Scavalo == 28) && (Sbispo != 18))
		 {
				 pictureBox23->Load("preta.png");
			     pictureBox10->Load("preta.png");
				 pictureBox11->Load("preta.png");
				 pictureBox29->Load("preta.png");
				 if (Sbispo != 34){
					 pictureBox27->Load("preta.png");}
				 pictureBox51->Load("preta.png");
				 pictureBox35->Load("branca.png");
				 pictureBox35->Refresh();
				 pictureBox21->Load("Bcavalo_preta.png");
				 pictureBox21->Refresh();
				 Sleep(1500);
				 pictureBox37->Load("Ppeao_branca.png");
				 pictureBox16->Load("branca.png");
				 e_turn++;
				 Scavalo = 18;
				 peao3= 30;
				 e_confirm =0;
				  if (e_turn == 3){
				 pictureBox68->Visible = true;}

		 }

		}
private: System::Void C7_In(System::Object^  sender, System::EventArgs^  e) {
			if ((Sbispo == 25) && (e_confirm == 2) && (bispo == 20) && (Scavalo != 11) && (Scavalo !=18 )){
			     pictureBox4->Load("preta.png");
				 pictureBox21->Load("preta.png");
				 if(Scavalo != 34){
					 pictureBox27->Load("preta.png");}
				 pictureBox46->Load("preta.png");
				 if (Scavalo != 43){
					 pictureBox51->Load("preta.png");}
				 pictureBox61->Load("preta.png");
				 pictureBox25->Load("preta.png");
			     pictureBox25->Refresh();
				 pictureBox10->Load("Bbispo_preta.png");
			     pictureBox10->Refresh();
				 Sleep(1500);
				 pictureBox6->Load("Pbispo_preta.png");
			     pictureBox22->Load("preta.png");
			     e_turn++;
				 e_confirm = 0;
				 Sbispo =11;
				 bispo =6;

				  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }
			else if((e_confirm == 2) && (bispo == 2) && (Sbispo == 25) &&(Speao == 10)&& (Scavalo != 11) && (Scavalo !=18 )) {
				pictureBox4->Load("preta.png");
				 pictureBox21->Load("preta.png");
				 if(Scavalo != 34){
					 pictureBox27->Load("preta.png");}
				 pictureBox46->Load("preta.png");
				if (Scavalo != 43){
					 pictureBox51->Load("preta.png");}
				 pictureBox61->Load("preta.png");
				 pictureBox25->Load("preta.png");
			     pictureBox25->Refresh();
				 pictureBox10->Load("Bbispo_preta.png");
			     pictureBox10->Refresh();
				 Sleep(1500);
				 pictureBox2->Load("preta.png");
				 pictureBox9->Load("Pbispo_preta.png");
				 e_turn++;
				 e_confirm= 0;
				 Sbispo = 11;
				 bispo = 9;
				  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			}

			else if((e_confirm == 2) && (bispo == 2) && (Sbispo == 25)&& (Scavalo != 11) && (Scavalo !=18 )) {
				pictureBox4->Load("preta.png");
				 pictureBox21->Load("preta.png");
				 if(Scavalo != 34){
					 pictureBox27->Load("preta.png");}
				 pictureBox46->Load("preta.png");
				 if (Scavalo != 43){
					 pictureBox51->Load("preta.png");}
				 pictureBox61->Load("preta.png");
				 pictureBox25->Load("preta.png");
			     pictureBox25->Refresh();
				 pictureBox10->Load("Bbispo_preta.png");
			     pictureBox10->Refresh();
				 Sleep(1500);
				 pictureBox2->Load("preta.png");
				 pictureBox10->Load("Pbispo_preta.png");
				 e_turn++;
				 e_confirm= 0;
				 Sbispo = 0;
				 bispo = 11;
				  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			}
			else if((e_confirm == 2)&& (Scavalo != 11) && (Scavalo !=18 )){
				pictureBox4->Load("preta.png");
				 pictureBox21->Load("preta.png");
				 if(Scavalo != 34){
					 pictureBox27->Load("preta.png");}
				 pictureBox46->Load("preta.png");
				if (Scavalo != 43){
					 pictureBox51->Load("preta.png");}
				 pictureBox61->Load("preta.png");
				 pictureBox25->Load("preta.png");
			     pictureBox25->Refresh();
				 pictureBox10->Load("Bbispo_preta.png");
			     pictureBox10->Refresh();
				 Sleep(1500);
				 pictureBox16->Load("branca.png");
				 pictureBox37->Load("Ppeao_branca.png");
				 e_turn++;
			     peao3 = 32; 
				 Sbispo = 11;
			 if (e_turn == 3){
				 pictureBox68->Visible = true;}}

			else if((e_confirm == 3) && (Scavalo == 28) && (Sbispo != 11)){
				 pictureBox23->Load("preta.png");
				 if (Sbispo != 34){
					 pictureBox27->Load("preta.png");}
				 pictureBox11->Load("preta.png");
				 pictureBox29->Load("preta.png");
				 if(Sbispo != 18){
					 pictureBox21->Load("preta.png");}
				 if(Sbispo!= 43){
					 pictureBox51->Load("preta.png");}
				 pictureBox35->Load("branca.png");
				 pictureBox35->Refresh();
				 pictureBox10->Load("Bcavalo_preta.png");
				 pictureBox10->Refresh();
				 Sleep(1500);
				 pictureBox15->Load("branca.png");
				 pictureBox36->Load("Ppeao_branca.png");
				 peao1 = 30;
				 Scavalo = 11;
				 e_turn++;
				 e_confirm =0;
				  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			}
		 }
private: System::Void D8_In(System::Object^  sender, System::EventArgs^  e) {
			 if((Sbispo == 25) &&(e_confirm == 2) &&(Scavalo != 11) && (Scavalo != 18)) {
             pictureBox21->Load("preta.png");
		   	 pictureBox10->Load("preta.png");
			 if (Scavalo != 34){
				 pictureBox27->Load("preta.png");}
			 pictureBox46->Load("preta.png");
			 if (Scavalo != 43){
				 pictureBox51->Load("preta.png");}
			 pictureBox61->Load("preta.png");
			 pictureBox25->Load("preta.png");
			 pictureBox25->Refresh();
			 pictureBox4->Load("Bbispo_preta.png");
			 pictureBox4->Refresh();
			 Sleep(1500);
			 pictureBox12->Load("preta.png");
			 pictureBox40->Load("Ppeao_preta.png");
			 e_turn++;
			 peao2 = 31;
			 Sbispo = 4;
			 e_confirm = 0;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}}
		 }

private: System::Void B4_In(System::Object^  sender, System::EventArgs^  e) {
		       	 
			 if((Scavalo == 28) && (e_confirm == 3) && (Sbispo != 34)){
			     pictureBox23->Load("preta.png");
				 if(Sbispo != 11){
					 pictureBox10->Load("preta.png");}
				 pictureBox11->Load("preta.png");
				 pictureBox29->Load("preta.png");
				 if(Sbispo != 18){
					 pictureBox21->Load("preta.png");}
				 if(Sbispo != 43){
					 pictureBox51->Load("preta.png");}
				 pictureBox35->Load("branca.png");
				 pictureBox35->Refresh();
				 pictureBox27->Load("Bcavalo_preta.png");
				 pictureBox27->Refresh();
				 Sleep(1500);
				 pictureBox37->Load("Ppeao_branca.png");
				 pictureBox16->Load("branca.png");
				 e_turn++;
				 Scavalo =34 ;
				 peao3= 32;
				 e_confirm =0;
				  if (e_turn == 3){
				 pictureBox68->Visible = true;}
		 }
			 
			 if((Sbispo = 25) && (e_confirm == 2) && ( bispo == 20) && (Scavalo != 34)){
 			 pictureBox4->Load("preta.png");
			 if (Scavalo != 11){
				 pictureBox10->Load("preta.png");}
			 if (Scavalo != 18){
				 pictureBox21->Load("preta.png");}
			 pictureBox46->Load("preta.png");
			 if(Scavalo != 43){
				 pictureBox51->Load("preta.png");}
			 pictureBox61->Load("preta.png");
			 pictureBox25->Load("preta.png");
			 pictureBox25->Refresh();
			 pictureBox27->Load("Bbispo_preta.png");
			 pictureBox27->Refresh();
			 Sleep(1500);
			 pictureBox27->Load("Pbispo_preta.png");
			 pictureBox22->Load("preta.png");
			 e_turn++;
			 bispo = 34;
			 Sbispo = 0;
			 e_confirm = 0;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }

			 else if((Sbispo = 25) && (e_confirm == 2) && (Scavalo != 34)){
 			 pictureBox4->Load("preta.png");
			 if (Scavalo != 11){
				 pictureBox10->Load("preta.png");}
			 if (Scavalo != 18){
				 pictureBox21->Load("preta.png");}
			 pictureBox46->Load("preta.png");
			 if (Scavalo != 43){
				 pictureBox51->Load("preta.png");}
			 pictureBox61->Load("preta.png");
			 pictureBox25->Load("preta.png");
			 pictureBox25->Refresh();
			 pictureBox27->Load("Bbispo_preta.png");
			 pictureBox27->Refresh();
			 Sleep(1500);
			 pictureBox2->Load("Pbispo_preta.png");
			 pictureBox22->Load("preta.png");
			 e_turn++;
			 bispo = 2;
			 Sbispo = 34;
			 e_confirm = 0;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }
		 }
private: System::Void C3_In(System::Object^  sender, System::EventArgs^  e) {
			if((Sbispo == 25) && (e_confirm == 2) && (peao2 == 15) && (Scavalo != 43) && (Scavalo != 34)){
 			 pictureBox4->Load("preta.png");
		   	  if (Scavalo != 11){
				 pictureBox10->Load("preta.png");}
			 if (Scavalo != 18){
				 pictureBox21->Load("preta.png");}
			 pictureBox46->Load("preta.png");
			 pictureBox27->Load("preta.png");
			 pictureBox61->Load("preta.png");
			 pictureBox25->Load("preta.png");
			 pictureBox25->Refresh();
			 pictureBox51->Load("Bbispo_preta.png");
			 pictureBox51->Refresh();
			 Sleep(1500);
			 pictureBox2->Load("Pbispo_preta.png");
			 pictureBox22->Load("preta.png");
			 e_turn++;
			 bispo = 2;
			 Sbispo = 43;
			 e_confirm = 0;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }

			if((Sbispo == 25) && (e_confirm == 2)&& (Scavalo != 43) && (Scavalo != 34)){
 			 pictureBox4->Load("preta.png");
		   	  if (Scavalo != 11){
				 pictureBox10->Load("preta.png");}
			 if (Scavalo != 18){
				 pictureBox21->Load("preta.png");}
			 pictureBox46->Load("preta.png");
			 pictureBox27->Load("preta.png");
			 pictureBox61->Load("preta.png");
			 pictureBox25->Load("preta.png");
			 pictureBox25->Refresh();
			 pictureBox51->Load("Bbispo_preta.png");
			 pictureBox51->Refresh();
			 Sleep(1500);
			 if( peao1 == 14){
			 pictureBox23->Load("Ppeao_preta.png");
			 pictureBox15->Load("branca.png");
			 e_turn++;
			 peao1 = 22;
			 Sbispo = 43;
			 e_confirm = 0;}
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			}

			if((e_confirm == 3) && (Scavalo == 28) && (Sbispo != 43)){

				if (Sbispo != 18)
					pictureBox21->Load("preta.png");
				if (Sbispo !=11)
					pictureBox10->Load("preta.png");
				 pictureBox11->Load("preta.png");
				 pictureBox29->Load("preta.png");
				 if(Sbispo!= 34)
					 pictureBox27->Load("preta.png");
				 pictureBox23->Load("preta.png");
				 pictureBox35->Load("branca.png");
				 pictureBox35->Refresh();
				 pictureBox51->Load("Bcavalo_preta.png");
				 pictureBox23->Refresh();
				 Sleep(1500);
				 pictureBox16->Load("branca.png");
				 pictureBox37->Load("Ppeao_branca.png");
				 e_confirm=0;
				 e_turn++;
				 Scavalo = 43;
				 peao3 = 32;
				 if(e_turn == 3){
					 pictureBox68->Visible = true;}
			
			}
		 
		 
		 }

private: System::Void B2_In(System::Object^  sender, System::EventArgs^  e) {

			 if((Sbispo == 25) && (e_confirm == 2)&& (Scavalo != 43) && (Scavalo != 34)){
 			 pictureBox4->Load("preta.png");
		   	  if (Scavalo != 11){
				 pictureBox10->Load("preta.png");}
			 if (Scavalo != 18){
				 pictureBox21->Load("preta.png");}
			 if (Scavalo != 43){
				 pictureBox51->Load("preta.png");}
			 pictureBox27->Load("preta.png");
			 pictureBox61->Load("preta.png");
			 pictureBox25->Load("preta.png");
			 pictureBox25->Refresh();
			 pictureBox46->Load("Bbispo_preta.png");
			 pictureBox51->Refresh();
			 Sleep(1500);
			 if( peao1 == 14){
			 pictureBox23->Load("Ppeao_preta.png");
			 pictureBox15->Load("branca.png");
			 e_turn++;
			 peao1 = 22;}
			 Sbispo = 43;
			 e_confirm = 0;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }
		 }
		 
private: System::Void D1_In(System::Object^  sender, System::EventArgs^  e) {
			  if((Sbispo == 25) && (e_confirm == 2)&& (Scavalo != 43) && (Scavalo != 34)){
 			 pictureBox4->Load("preta.png");
		   	  if (Scavalo != 11){
				 pictureBox10->Load("preta.png");}
			 if (Scavalo != 18){
				 pictureBox21->Load("preta.png");}
			 if (Scavalo != 43){
				 pictureBox51->Load("preta.png");}
			 pictureBox27->Load("preta.png");
			 pictureBox46->Load("preta.png");
			 pictureBox25->Load("preta.png");
			 pictureBox25->Refresh();
			 pictureBox61->Load("Bbispo_preta.png");
			 pictureBox51->Refresh();
			 Sleep(1500);
			 if( peao1 == 14){
			 pictureBox23->Load("Ppeao_preta.png");
			 pictureBox15->Load("branca.png");
			 e_turn++;
			 peao1 = 22;}
			 Sbispo = 43;
			 e_confirm = 0;
			  if (e_turn == 3){
				  pictureBox68->Visible = true;}
			  }
		 }
// Movimentação inicial do cavalo
private: System::Void C5_To(System::Object^  sender, System::EventArgs^  e) {
			 if(Scavalo == 28 ){
				 e_confirm = 3;
				 if (Sbispo !=18){
					 pictureBox21->Load("confirm_black.png");}
				 if(Sbispo != 11){
					 pictureBox10->Load("confirm_black.png");}

				 pictureBox11->Load("confirm_black.png");
				 pictureBox23->Load("confirm_black.png");
				 pictureBox29->Load("confirm_black.png");
				 pictureBox27->Load("confirm_black.png");
              if(Sbispo != 43){
				  pictureBox51->Load("confirm_black.png");}
			 }
		 }


private: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void D7_In(System::Object^  sender, System::EventArgs^  e) {}



			 
private: System::Void F8_In(System::Object^  sender, System::EventArgs^  e) {
			 if((Speao == 2) && (e_confirm == 4 )){
			 pictureBox6->Load("BRainha_preta.png");
			 pictureBox6->Refresh();
			 pictureBox2->Load("preta.png");
			 if((peao3 == 16) && (peao2 == 15) && (bispo != 20))
			 pictureBox67->Visible = true;
			 }}

private: System::Void E5_In(System::Object^  sender, System::EventArgs^  e) {
			 if((Scavalo ==28) && (e_confirm == 3)) {
				 if(Sbispo != 18){
					 pictureBox21->Load("preta.png");}
				 if(Sbispo != 11){
					 pictureBox10->Load("preta.png");}
				 pictureBox11->Load("preta.png");
				 pictureBox29->Load("preta.png");
				 if (Sbispo != 34){
					 pictureBox27->Load("preta.png");}
				 if(Sbispo != 43){
					 pictureBox51->Load("preta.png");}
				 pictureBox35->Load("branca.png");
				 pictureBox35->Refresh();
				 pictureBox23->Load("Bcavalo_preta.png");
				 pictureBox23->Refresh();
				 Sleep(1500);
				 pictureBox23->Load("Ppeao_preta.png");
				 pictureBox12->Load("preta.png");
				 e_turn++;
				 Scavalo = 0;
				 peao2= 22;
				 e_confirm =0;
				  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }


		 }
private: System::Void Endgame(System::Object^  sender, System::EventArgs^  e) {
			 if (e_turn == 4)
				 pictureBox68->Visible = true;

		 }
private: System::Void pictureBox57_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void E7_In(System::Object^  sender, System::EventArgs^  e) {
			 if ((Scavalo == 28) && (e_confirm == 3) && (bispo == 20)){
 			  if(Sbispo != 18){
					 pictureBox21->Load("preta.png");}
				 if(Sbispo != 11){
					 pictureBox10->Load("preta.png");}
		    	pictureBox11->Load("preta.png");
	     	    pictureBox29->Load("preta.png");
				 if (Sbispo != 34){
					 pictureBox27->Load("preta.png");}
				 if(Sbispo != 43){
					 pictureBox51->Load("preta.png");}
             pictureBox23->Load("preta.png");
			 pictureBox35->Load("branca.png");
			 pictureBox35->Refresh();
			 pictureBox11->Load("Bcavalo_preta.png");
			 Sleep(1500); 
			 pictureBox22->Load("preta.png");
			 pictureBox11->Load("Pbispo_branca.png");
			 e_turn++;
			 e_confirm = 0;
			 Scavalo =0;
			 bispo =13;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }

			 else if((Scavalo == 28) && (e_confirm == 3)){
			 pictureBox21->Load("preta.png");
			 pictureBox10->Load("preta.png");
			 pictureBox23->Load("preta.png");
			 pictureBox29->Load("preta.png");
			 pictureBox27->Load("preta.png");
			 pictureBox51->Load("preta.png");
			 pictureBox35->Load("branca.png");
			 pictureBox35->Refresh();
			 pictureBox11->Load("Bcavalo_preta.png");
			 Sleep(1500);
			 pictureBox12->Load("preta.png");
			 pictureBox40->Load("Ppeao_preta.png");
			 e_turn++;
			 e_confirm = 0;
			 Scavalo = 13;
			 peao2 =31;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }
		 }
		 
private: System::Void F4_In(System::Object^  sender, System::EventArgs^  e) {
		     
			 if((e_confirm == 3 ) && (Scavalo == 28)){
			 pictureBox21->Load("preta.png");
			 pictureBox10->Load("preta.png");
			 pictureBox23->Load("preta.png");
			 pictureBox11->Load("preta.png");
			 pictureBox27->Load("preta.png");
			 pictureBox51->Load("preta.png");
			 pictureBox35->Load("branca.png");
			 pictureBox35->Refresh();
			 pictureBox29->Load("Bcavalo_preta.png");
			 Sleep(1500);
			 pictureBox12->Load("preta.png");
			 pictureBox40->Load("Ppeao_preta.png");
			 e_turn++;
			 e_confirm = 0;
			 Scavalo = 13;
			 peao2 =31;
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }
		 }
private: System::Void pictureBox52_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ((e_confirm == 3) && (Scavalo == 28)){
			 pictureBox21->Load("preta.png");
			 pictureBox10->Load("preta.png");
			 pictureBox23->Load("preta.png");
			 pictureBox11->Load("preta.png");
			 pictureBox27->Load("preta.png");
			 pictureBox51->Load("preta.png");
			 pictureBox29->Load("preta.png");
			 pictureBox35->Load("branca.png");
			 pictureBox35->Refresh();
			 pictureBox52->Load("Bcavalo_preta.png");
			 pictureBox52->Refresh();
			 Sleep(1500);
			 pictureBox22->Load("preta.png");
			 pictureBox2->Load("Pbispo_preta.png");
			 bispo = 2;
			 Scavalo = 45;
			 e_turn++;
			 e_confirm = 0;}
			  if (e_turn == 3){
				 pictureBox68->Visible = true;}
			 }

		



		 

};
}

