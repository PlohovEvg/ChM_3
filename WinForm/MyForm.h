#pragma once
#include "DU_Struct.h"
#include "Functions.h"
#include <string>

using namespace std;

namespace WinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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










































	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button16;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  b_Text;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::DataGridView^  dataGridView2;









	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  L_Text;
	private: System::Windows::Forms::TextBox^  R_Text;
	private: System::Windows::Forms::TextBox^  Epsilon_Text;
	private: System::Windows::Forms::TextBox^  I0_Text;
	private: System::Windows::Forms::TextBox^  h_Text;
	private: System::Windows::Forms::TextBox^  n_Text;
	private: System::Windows::Forms::TextBox^  Omega_Text;
	private: System::Windows::Forms::TextBox^  E0_Text;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  Y2_Text;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  Y1_Text;
	private: System::Windows::Forms::TextBox^  X2_Text;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::TextBox^  X1_Text;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ViV2i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  C1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  C2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ui;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  UiVi;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->b_Text = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ViV2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ui = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UiVi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->L_Text = (gcnew System::Windows::Forms::TextBox());
			this->R_Text = (gcnew System::Windows::Forms::TextBox());
			this->Epsilon_Text = (gcnew System::Windows::Forms::TextBox());
			this->I0_Text = (gcnew System::Windows::Forms::TextBox());
			this->h_Text = (gcnew System::Windows::Forms::TextBox());
			this->n_Text = (gcnew System::Windows::Forms::TextBox());
			this->Omega_Text = (gcnew System::Windows::Forms::TextBox());
			this->E0_Text = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->Y2_Text = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->Y1_Text = (gcnew System::Windows::Forms::TextBox());
			this->X2_Text = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->X1_Text = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 10);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1000, 640);
			this->tabControl1->TabIndex = 28;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button16);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label24);
			this->tabPage1->Controls->Add(this->b_Text);
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->label30);
			this->tabPage1->Controls->Add(this->textBox17);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->label23);
			this->tabPage1->Controls->Add(this->label25);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->label26);
			this->tabPage1->Controls->Add(this->label27);
			this->tabPage1->Controls->Add(this->label28);
			this->tabPage1->Controls->Add(this->label29);
			this->tabPage1->Controls->Add(this->L_Text);
			this->tabPage1->Controls->Add(this->R_Text);
			this->tabPage1->Controls->Add(this->Epsilon_Text);
			this->tabPage1->Controls->Add(this->I0_Text);
			this->tabPage1->Controls->Add(this->h_Text);
			this->tabPage1->Controls->Add(this->n_Text);
			this->tabPage1->Controls->Add(this->Omega_Text);
			this->tabPage1->Controls->Add(this->E0_Text);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(992, 614);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Вычисления";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(817, 162);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(160, 48);
			this->button16->TabIndex = 74;
			this->button16->Text = L"Сброс";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(651, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 48);
			this->button1->TabIndex = 73;
			this->button1->Text = L"Добавить кривую";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(623, 58);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(313, 16);
			this->label24->TabIndex = 72;
			this->label24->Text = L" Контроль выхода на границу интегрирования ";
			// 
			// b_Text
			// 
			this->b_Text->Location = System::Drawing::Point(778, 77);
			this->b_Text->Name = L"b_Text";
			this->b_Text->Size = System::Drawing::Size(100, 20);
			this->b_Text->TabIndex = 71;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(627, 34);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(147, 16);
			this->label22->TabIndex = 70;
			this->label22->Text = L"Шаг интегрирования ";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(623, 100);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(302, 16);
			this->label30->TabIndex = 69;
			this->label30->Text = L" Параметр контроля локальной погрешности";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox17->Location = System::Drawing::Point(485, 234);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(501, 334);
			this->textBox17->TabIndex = 68;
			this->textBox17->Text = L"\r\n\r\n\r\n\r\n\r\n\r\n";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(482, 6);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(157, 16);
			this->label21->TabIndex = 67;
			this->label21->Text = L"Параметры уравнения";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->ViV2i, this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn3, this->C1, this->C2, this->Ui, this->UiVi
			});
			this->dataGridView2->Location = System::Drawing::Point(26, 108);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(450, 484);
			this->dataGridView2->TabIndex = 66;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Xi";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Vi";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"V2i";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// ViV2i
			// 
			this->ViV2i->HeaderText = L"Vi-V2i";
			this->ViV2i->Name = L"ViV2i";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ОЛП";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"hi";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->Name = L"C1";
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->Name = L"C2";
			// 
			// Ui
			// 
			this->Ui->HeaderText = L"Ui";
			this->Ui->Name = L"Ui";
			// 
			// UiVi
			// 
			this->UiVi->HeaderText = L"|Ui-Vi|";
			this->UiVi->Name = L"UiVi";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(485, 161);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(160, 48);
			this->button4->TabIndex = 65;
			this->button4->Text = L"Старт";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(680, 5);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 16);
			this->label23->TabIndex = 63;
			this->label23->Text = L" Число шагов";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(482, 135);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(34, 16);
			this->label25->TabIndex = 61;
			this->label25->Text = L" I0 = ";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(26, -10);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(437, 98);
			this->pictureBox3->TabIndex = 60;
			this->pictureBox3->TabStop = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(482, 109);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(28, 16);
			this->label26->TabIndex = 59;
			this->label26->Text = L" L =";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(480, 84);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(31, 16);
			this->label27->TabIndex = 58;
			this->label27->Text = L" R =";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(482, 58);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(29, 16);
			this->label28->TabIndex = 57;
			this->label28->Text = L" ω =";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(482, 34);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(34, 16);
			this->label29->TabIndex = 56;
			this->label29->Text = L"E0 =";
			// 
			// L_Text
			// 
			this->L_Text->Location = System::Drawing::Point(517, 109);
			this->L_Text->Name = L"L_Text";
			this->L_Text->Size = System::Drawing::Size(100, 20);
			this->L_Text->TabIndex = 55;
			// 
			// R_Text
			// 
			this->R_Text->Location = System::Drawing::Point(517, 83);
			this->R_Text->Name = L"R_Text";
			this->R_Text->Size = System::Drawing::Size(100, 20);
			this->R_Text->TabIndex = 54;
			// 
			// Epsilon_Text
			// 
			this->Epsilon_Text->Location = System::Drawing::Point(780, 119);
			this->Epsilon_Text->Name = L"Epsilon_Text";
			this->Epsilon_Text->Size = System::Drawing::Size(100, 20);
			this->Epsilon_Text->TabIndex = 53;
			// 
			// I0_Text
			// 
			this->I0_Text->Location = System::Drawing::Point(517, 135);
			this->I0_Text->Name = L"I0_Text";
			this->I0_Text->Size = System::Drawing::Size(100, 20);
			this->I0_Text->TabIndex = 52;
			// 
			// h_Text
			// 
			this->h_Text->Location = System::Drawing::Point(780, 35);
			this->h_Text->Name = L"h_Text";
			this->h_Text->Size = System::Drawing::Size(100, 20);
			this->h_Text->TabIndex = 51;
			// 
			// n_Text
			// 
			this->n_Text->Location = System::Drawing::Point(780, 4);
			this->n_Text->Name = L"n_Text";
			this->n_Text->Size = System::Drawing::Size(100, 20);
			this->n_Text->TabIndex = 50;
			// 
			// Omega_Text
			// 
			this->Omega_Text->Location = System::Drawing::Point(517, 57);
			this->Omega_Text->Name = L"Omega_Text";
			this->Omega_Text->Size = System::Drawing::Size(100, 20);
			this->Omega_Text->TabIndex = 49;
			// 
			// E0_Text
			// 
			this->E0_Text->Location = System::Drawing::Point(517, 34);
			this->E0_Text->Name = L"E0_Text";
			this->E0_Text->Size = System::Drawing::Size(100, 20);
			this->E0_Text->TabIndex = 48;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(126, -258);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(157, 16);
			this->label12->TabIndex = 47;
			this->label12->Text = L"Параметры уравнения";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(373, -177);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 48);
			this->button3->TabIndex = 45;
			this->button3->Text = L"Старт";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(398, -229);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 16);
			this->label13->TabIndex = 44;
			this->label13->Text = L" ε =";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(333, -254);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(93, 16);
			this->label14->TabIndex = 43;
			this->label14->Text = L" Число шагов";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(398, -203);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(31, 16);
			this->label15->TabIndex = 42;
			this->label15->Text = L" h = ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(126, -129);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 16);
			this->label16->TabIndex = 41;
			this->label16->Text = L" I0 = ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-340, -258);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(437, 98);
			this->pictureBox2->TabIndex = 40;
			this->pictureBox2->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(126, -155);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 16);
			this->label17->TabIndex = 39;
			this->label17->Text = L" L =";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(124, -180);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 16);
			this->label18->TabIndex = 38;
			this->label18->Text = L" R =";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(126, -206);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 16);
			this->label19->TabIndex = 37;
			this->label19->Text = L" ω =";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(126, -230);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(34, 16);
			this->label20->TabIndex = 36;
			this->label20->Text = L"E0 =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(161, -155);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 35;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, -181);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 34;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(433, -203);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 33;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(161, -129);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 32;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(433, -229);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 31;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(433, -255);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 30;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(161, -207);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 29;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(161, -230);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 28;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->Y2_Text);
			this->tabPage2->Controls->Add(this->label33);
			this->tabPage2->Controls->Add(this->label34);
			this->tabPage2->Controls->Add(this->Y1_Text);
			this->tabPage2->Controls->Add(this->X2_Text);
			this->tabPage2->Controls->Add(this->label35);
			this->tabPage2->Controls->Add(this->label36);
			this->tabPage2->Controls->Add(this->X1_Text);
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(992, 614);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"График";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(746, 105);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(160, 48);
			this->button10->TabIndex = 111;
			this->button10->Text = L"Изменить масштаб от Y1 до Y2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(746, 51);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(160, 48);
			this->button11->TabIndex = 110;
			this->button11->Text = L"Изменить масштаб от X1 до X2\r\n\r\n";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// Y2_Text
			// 
			this->Y2_Text->Location = System::Drawing::Point(670, 126);
			this->Y2_Text->Name = L"Y2_Text";
			this->Y2_Text->Size = System::Drawing::Size(57, 20);
			this->Y2_Text->TabIndex = 109;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(630, 127);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(40, 16);
			this->label33->TabIndex = 108;
			this->label33->Text = L" Y2 = ";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(630, 101);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(40, 16);
			this->label34->TabIndex = 107;
			this->label34->Text = L" Y1 = ";
			// 
			// Y1_Text
			// 
			this->Y1_Text->Location = System::Drawing::Point(671, 100);
			this->Y1_Text->Name = L"Y1_Text";
			this->Y1_Text->Size = System::Drawing::Size(57, 20);
			this->Y1_Text->TabIndex = 106;
			// 
			// X2_Text
			// 
			this->X2_Text->Location = System::Drawing::Point(670, 74);
			this->X2_Text->Name = L"X2_Text";
			this->X2_Text->Size = System::Drawing::Size(57, 20);
			this->X2_Text->TabIndex = 105;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(630, 75);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(39, 16);
			this->label35->TabIndex = 104;
			this->label35->Text = L" X2 = ";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(630, 51);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(39, 16);
			this->label36->TabIndex = 103;
			this->label36->Text = L" X1 = ";
			// 
			// X1_Text
			// 
			this->X1_Text->Location = System::Drawing::Point(670, 48);
			this->X1_Text->Name = L"X1_Text";
			this->X1_Text->Size = System::Drawing::Size(57, 20);
			this->X1_Text->TabIndex = 102;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->IsShowPointValues = false;
			this->zedGraphControl2->Location = System::Drawing::Point(6, 6);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->PointValueFormat = L"G";
			this->zedGraphControl2->Size = System::Drawing::Size(600, 562);
			this->zedGraphControl2->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1004, 653);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void Epsilon_Text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl2->GraphPane;
	double X1 = Convert::ToDouble(X1_Text->Text);
	double X2 = Convert::ToDouble(X2_Text->Text);

	panel->XAxis->Min = X1;
	panel->XAxis->Max = X2;

	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl2->GraphPane;
	double Y1 = Convert::ToDouble(Y1_Text->Text);
	double Y2 = Convert::ToDouble(Y2_Text->Text);

	panel->YAxis->Min = Y1;
	panel->YAxis->Max = Y2;

	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl2->GraphPane;
	panel->CurveList->Clear();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{

	GraphPane^ panel = zedGraphControl2->GraphPane;
	panel->CurveList->Clear();

	panel->Title = "Графики численного решения V(x) и точного решения I(x)";
	panel->XAxis->Title = "X";
	panel->YAxis->Title = "I(x)";

	PointPairList^ f_list = gcnew PointPairList();
	PointPairList^ g_list = gcnew PointPairList();

	DU f;
	f.E0 = Convert::ToDouble(E0_Text->Text);
	f.L = Convert::ToDouble(L_Text->Text);
	f.R = Convert::ToDouble(R_Text->Text);
	f.w = Convert::ToDouble(Omega_Text->Text);

	double x = 0.0;
	double v = Convert::ToDouble(I0_Text->Text);
	double I0 = v;
	double h = Convert::ToDouble(h_Text->Text);
	double b = Convert::ToDouble(b_Text->Text);
	double Epsilon = Convert::ToDouble(Epsilon_Text->Text);
	double vplus1;
	double vcap;
	double S;
	double u;
	double sub;
	int n = Convert::ToInt32(n_Text->Text);
	int c1 = 0, c2 = 0;
	int i;
	int k;
	double maxH = h, minH = h, maxS = 0.0, xmaxH = 0.0, xminH = 0.0, maxSubUiVi = 0.0, xmaxSubUiVi = 0.0;
	string ref = "";

	double xmin_limit = x - 0.05;

	dataGridView2->Rows->Clear();

	for (i = 0; ((i < n) && (x <= b)); i++)
	{		

		if (i != 0)
		{
			vplus1 = RK4(x, v, h, f);
			vcap = Vn1cap(x, v, h, f);
			S = CS(vcap, vplus1);
			//Без контроля локальной погрешности----------------------------------
			/*x = xInc(x, h);

			u = fAcc(I0,f,x);
			g_list->Add(x, u);
			f_list->Add(x, vplus1);
			if (h > maxH)
			{
				maxH = h;
				xmaxH = x;
			}
			if (h < minH)
			{
				minH = h;
				xminH = x;
			}
			if (abs(S) > maxS)
			{
				maxS = abs(S);
			}
			if (abs(u - vplus1) > maxSubUiVi)
			{
				maxSubUiVi = abs(u - vplus1);
				xmaxSubUiVi = x;
			}
			if ((i < n) || (x <= b))
			{
				sub = b - x;
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[i]->Cells[0]->Value = i;
			dataGridView2->Rows[i]->Cells[1]->Value = x;
			dataGridView2->Rows[i]->Cells[2]->Value = vplus1;
			dataGridView2->Rows[i]->Cells[3]->Value = vcap;
			dataGridView2->Rows[i]->Cells[4]->Value = vplus1 - vcap;
			dataGridView2->Rows[i]->Cells[5]->Value = S;
			dataGridView2->Rows[i]->Cells[6]->Value = h;
			dataGridView2->Rows[i]->Cells[7]->Value = c1;
			dataGridView2->Rows[i]->Cells[8]->Value = c2;
			dataGridView2->Rows[i]->Cells[9]->Value = u;
			dataGridView2->Rows[i]->Cells[10]->Value = abs(u - vplus1);

			v = vplus1;*/
			//-------------------------------------------------------------------------
			//С контролем локальной погрешности----------------------------------------
			k = LPControl(S, Epsilon);
			if (k == -1)
			{
			while (k == -1)
			{
			h = h*0.5;
			c1++;
			vplus1 = RK4(x, v, h, f);
			vcap = Vn1cap(x, v, h, f);
			S = CS(vcap, vplus1);
			k = LPControl(S, Epsilon);
			}
			}
			if (k == 1)
			{
			x = xInc(x, h);

			u = fAcc(I0, f, x);
			f_list->Add(x, vplus1);
			g_list->Add(x, u);

			if (h > maxH)
			{
			maxH = h;
			xmaxH = x;
			}
			if (h < minH)
			{
			minH = h;
			xminH = x;
			}
			if (abs(S) > maxS)
			{
			maxS = abs(S);
			}
			if (abs(u - vplus1) > maxSubUiVi)
			{
			maxSubUiVi = abs(u - vplus1);
			xmaxSubUiVi = x;
			}
			if ((i < n) || (x <= b))
			{
			sub = b - x;
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[i]->Cells[0]->Value = i;
			dataGridView2->Rows[i]->Cells[1]->Value = x;
			dataGridView2->Rows[i]->Cells[2]->Value = vplus1;
			dataGridView2->Rows[i]->Cells[3]->Value = vcap;
			dataGridView2->Rows[i]->Cells[4]->Value = vplus1 - vcap;
			dataGridView2->Rows[i]->Cells[5]->Value = S;
			dataGridView2->Rows[i]->Cells[6]->Value = h;
			dataGridView2->Rows[i]->Cells[7]->Value = c1;
			dataGridView2->Rows[i]->Cells[8]->Value = c2;
			dataGridView2->Rows[i]->Cells[9]->Value = u;
			dataGridView2->Rows[i]->Cells[10]->Value = abs(u - vplus1);

			h = 2 * h;
			if (i != n - 1)
			{
			c2++;
			}
			v = Correction(vplus1, S);
			}
			else
			{
			x = xInc(x, h);

			u = fAcc(I0, f, x);
			f_list->Add(x, vplus1);
			g_list->Add(x, u);

			if (h > maxH)
			{
			maxH = h;
			xmaxH = x;
			}
			if (h < minH)
			{
			minH = h;
			xminH = x;
			}
			if (abs(S) > maxS)
			{
			maxS = abs(S);
			}
			if (abs(u - vplus1) > maxSubUiVi)
			{
			maxSubUiVi = abs(u - vplus1);
			xmaxSubUiVi = x;
			}
			if ((i < n) || (x <= b))
			{
			sub = b - x;
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[i]->Cells[0]->Value = i;
			dataGridView2->Rows[i]->Cells[1]->Value = x;
			dataGridView2->Rows[i]->Cells[2]->Value = vplus1;
			dataGridView2->Rows[i]->Cells[3]->Value = vcap;
			dataGridView2->Rows[i]->Cells[4]->Value = vplus1 - vcap;
			dataGridView2->Rows[i]->Cells[5]->Value = S;
			dataGridView2->Rows[i]->Cells[6]->Value = h;
			dataGridView2->Rows[i]->Cells[7]->Value = c1;
			dataGridView2->Rows[i]->Cells[8]->Value = c2;
			dataGridView2->Rows[i]->Cells[9]->Value = u;
			dataGridView2->Rows[i]->Cells[10]->Value = abs(u - vplus1);

			v = Correction(vplus1, S);
			}
			//--------------------------------------------------------------------
		}
		else
		{
			u = fAcc(I0, f, x);
			f_list->Add(x, v);
			g_list->Add(x, u);

			vcap = v;
			S = 0.0;

			dataGridView2->Rows->Add();
			dataGridView2->Rows[i]->Cells[0]->Value = i;
			dataGridView2->Rows[i]->Cells[1]->Value = x;
			dataGridView2->Rows[i]->Cells[2]->Value = v;
			dataGridView2->Rows[i]->Cells[3]->Value = vcap;
			dataGridView2->Rows[i]->Cells[4]->Value = v - vcap;
			dataGridView2->Rows[i]->Cells[5]->Value = S;
			dataGridView2->Rows[i]->Cells[6]->Value = h;
			dataGridView2->Rows[i]->Cells[7]->Value = c1;
			dataGridView2->Rows[i]->Cells[8]->Value = c2;
			dataGridView2->Rows[i]->Cells[9]->Value = u;
			dataGridView2->Rows[i]->Cells[10]->Value = abs(u - v);
		}
	}
	double xmax_limit = x + 0.05;

	LineItem Curve1 = panel->AddCurve("Численное решение", f_list, Color::Red, SymbolType::None);
	LineItem Curve2 = panel->AddCurve("Точное решение", g_list, Color::Black, SymbolType::None);

	panel->XAxis->Min = xmin_limit;
	panel->XAxis->Max = xmax_limit;

	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();

	char str[100];

	ref += "Справка\r\n";
	ref += "n=";
	sprintf_s(str, "%d", i);
	ref += str;
	ref += ", b-xn=";
	sprintf_s(str, "%.6lf", sub);
	ref += str;
	ref += "\r\n";
	ref += "max|ОЛП|=";
	sprintf_s(str, "%.6e", maxS);
	ref += str;
	ref += "\r\n";
	ref += "Общее число удвоений шага=";
	sprintf_s(str, "%d", c2);
	ref += str;
	ref += ", Общее число деления шага=";
	sprintf_s(str, "%d", c1);
	ref += str;
	ref += "\r\n";
	ref += "max hi=";
	sprintf_s(str, "%.6lf", maxH);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xmaxH);
	ref += str;
	ref += "\r\n";
	ref += "min hi=";
	sprintf_s(str, "%.6lf", minH);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xminH);
	ref += str;
	ref += "\r\n";
	ref += "max |ui-vi|=";
	sprintf_s(str, "%.6e", maxSubUiVi);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xmaxSubUiVi);
	ref += str;
	ref += "\r\n";
	textBox17->Text = gcnew String(ref.c_str());
}		
private: System::Void button16_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl2->GraphPane;
	panel->CurveList->Clear();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{	
	GraphPane^ panel = zedGraphControl2->GraphPane;	

	panel->Title = "Графики численного решения V(x) и точного решения I(x)";
	panel->XAxis->Title = "X";
	panel->YAxis->Title = "I(x)";

	PointPairList^ f_list = gcnew PointPairList();
	PointPairList^ g_list = gcnew PointPairList();

	DU f;
	f.E0 = Convert::ToDouble(E0_Text->Text);
	f.L = Convert::ToDouble(L_Text->Text);
	f.R = Convert::ToDouble(R_Text->Text);
	f.w = Convert::ToDouble(Omega_Text->Text);

	double x = 0.0;
	double v = Convert::ToDouble(I0_Text->Text);
	double I0 = v;
	double h = Convert::ToDouble(h_Text->Text);
	double b = Convert::ToDouble(b_Text->Text);
	double Epsilon = Convert::ToDouble(Epsilon_Text->Text);
	double vplus1;
	double vcap;
	double S;
	double u;
	double sub;
	int n = Convert::ToInt32(n_Text->Text);
	int c1 = 0, c2 = 0;
	int i;
	int k;
	double maxH = h, minH = h, maxS = 0.0, xmaxH = 0.0, xminH = 0.0, maxSubUiVi = 0.0, xmaxSubUiVi = 0.0;
	string ref = "";

	double xmin_limit = x - 0.05;

	dataGridView2->Rows->Clear();

	for (i = 0; ((i < n) && (x <= b)); i++)
	{

		if (i != 0)
		{
			vplus1 = RK4(x, v, h, f);
			vcap = Vn1cap(x, v, h, f);
			S = CS(vcap, vplus1);
			//Без контроля локальной погрешности----------------------------------
			/*x = xInc(x, h);

			u = fAcc(I0,f,x);
			g_list->Add(x, u);
			f_list->Add(x, vplus1);
			if (h > maxH)
			{
			maxH = h;
			xmaxH = x;
			}
			if (h < minH)
			{
			minH = h;
			xminH = x;
			}
			if (abs(S) > maxS)
			{
			maxS = abs(S);
			}
			if (abs(u - vplus1) > maxSubUiVi)
			{
			maxSubUiVi = abs(u - vplus1);
			xmaxSubUiVi = x;
			}
			if ((i < n) || (x <= b))
			{
			sub = b - x;
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[i]->Cells[0]->Value = i;
			dataGridView2->Rows[i]->Cells[1]->Value = x;
			dataGridView2->Rows[i]->Cells[2]->Value = vplus1;
			dataGridView2->Rows[i]->Cells[3]->Value = vcap;
			dataGridView2->Rows[i]->Cells[4]->Value = vplus1 - vcap;
			dataGridView2->Rows[i]->Cells[5]->Value = S;
			dataGridView2->Rows[i]->Cells[6]->Value = h;
			dataGridView2->Rows[i]->Cells[7]->Value = c1;
			dataGridView2->Rows[i]->Cells[8]->Value = c2;
			dataGridView2->Rows[i]->Cells[9]->Value = u;
			dataGridView2->Rows[i]->Cells[10]->Value = abs(u - vplus1);

			v = vplus1;*/
			//-------------------------------------------------------------------------
			//С контролем локальной погрешности----------------------------------------
			k = LPControl(S, Epsilon);
			if (k == -1)
			{
				while (k == -1)
				{
					h = h*0.5;
					c1++;
					vplus1 = RK4(x, v, h, f);
					vcap = Vn1cap(x, v, h, f);
					S = CS(vcap, vplus1);
					k = LPControl(S, Epsilon);
				}
			}
			if (k == 1)
			{
				x = xInc(x, h);

				u = fAcc(I0, f, x);
				f_list->Add(x, vplus1);
				g_list->Add(x, u);

				if (h > maxH)
				{
					maxH = h;
					xmaxH = x;
				}
				if (h < minH)
				{
					minH = h;
					xminH = x;
				}
				if (abs(S) > maxS)
				{
					maxS = abs(S);
				}
				if (abs(u - vplus1) > maxSubUiVi)
				{
					maxSubUiVi = abs(u - vplus1);
					xmaxSubUiVi = x;
				}
				if ((i < n) || (x <= b))
				{
					sub = b - x;
				}

				dataGridView2->Rows->Add();
				dataGridView2->Rows[i]->Cells[0]->Value = i;
				dataGridView2->Rows[i]->Cells[1]->Value = x;
				dataGridView2->Rows[i]->Cells[2]->Value = vplus1;
				dataGridView2->Rows[i]->Cells[3]->Value = vcap;
				dataGridView2->Rows[i]->Cells[4]->Value = vplus1 - vcap;
				dataGridView2->Rows[i]->Cells[5]->Value = S;
				dataGridView2->Rows[i]->Cells[6]->Value = h;
				dataGridView2->Rows[i]->Cells[7]->Value = c1;
				dataGridView2->Rows[i]->Cells[8]->Value = c2;
				dataGridView2->Rows[i]->Cells[9]->Value = u;
				dataGridView2->Rows[i]->Cells[10]->Value = abs(u - vplus1);

				h = 2 * h;
				if (i != n - 1)
				{
					c2++;
				}
				v = Correction(vplus1, S);
			}
			else
			{
				x = xInc(x, h);

				u = fAcc(I0, f, x);
				f_list->Add(x, vplus1);
				g_list->Add(x, u);

				if (h > maxH)
				{
					maxH = h;
					xmaxH = x;
				}
				if (h < minH)
				{
					minH = h;
					xminH = x;
				}
				if (abs(S) > maxS)
				{
					maxS = abs(S);
				}
				if (abs(u - vplus1) > maxSubUiVi)
				{
					maxSubUiVi = abs(u - vplus1);
					xmaxSubUiVi = x;
				}
				if ((i < n) || (x <= b))
				{
					sub = b - x;
				}

				dataGridView2->Rows->Add();
				dataGridView2->Rows[i]->Cells[0]->Value = i;
				dataGridView2->Rows[i]->Cells[1]->Value = x;
				dataGridView2->Rows[i]->Cells[2]->Value = vplus1;
				dataGridView2->Rows[i]->Cells[3]->Value = vcap;
				dataGridView2->Rows[i]->Cells[4]->Value = vplus1 - vcap;
				dataGridView2->Rows[i]->Cells[5]->Value = S;
				dataGridView2->Rows[i]->Cells[6]->Value = h;
				dataGridView2->Rows[i]->Cells[7]->Value = c1;
				dataGridView2->Rows[i]->Cells[8]->Value = c2;
				dataGridView2->Rows[i]->Cells[9]->Value = u;
				dataGridView2->Rows[i]->Cells[10]->Value = abs(u - vplus1);

				v = Correction(vplus1, S);
			}
			//--------------------------------------------------------------------
		}
		else
		{
			u = fAcc(I0, f, x);
			f_list->Add(x, v);
			g_list->Add(x, u);

			vcap = v;
			S = 0.0;

			dataGridView2->Rows->Add();
			dataGridView2->Rows[i]->Cells[0]->Value = i;
			dataGridView2->Rows[i]->Cells[1]->Value = x;
			dataGridView2->Rows[i]->Cells[2]->Value = v;
			dataGridView2->Rows[i]->Cells[3]->Value = vcap;
			dataGridView2->Rows[i]->Cells[4]->Value = v - vcap;
			dataGridView2->Rows[i]->Cells[5]->Value = S;
			dataGridView2->Rows[i]->Cells[6]->Value = h;
			dataGridView2->Rows[i]->Cells[7]->Value = c1;
			dataGridView2->Rows[i]->Cells[8]->Value = c2;
			dataGridView2->Rows[i]->Cells[9]->Value = u;
			dataGridView2->Rows[i]->Cells[10]->Value = abs(u - v);
		}
	}
	double xmax_limit = x + 0.05;

	LineItem Curve1 = panel->AddCurve("Численное решение", f_list, Color::Green, SymbolType::None);
	LineItem Curve2 = panel->AddCurve("Точное решение", g_list, Color::Blue, SymbolType::None);

	panel->XAxis->Min = xmin_limit;
	panel->XAxis->Max = xmax_limit;

	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();

	char str[100];

	ref += "Справка\r\n";
	ref += "n=";
	sprintf_s(str, "%d", i);
	ref += str;
	ref += ", b-xn=";
	sprintf_s(str, "%.6lf", sub);
	ref += str;
	ref += "\r\n";
	ref += "max|ОЛП|=";
	sprintf_s(str, "%.6e", maxS);
	ref += str;
	ref += "\r\n";
	ref += "Общее число удвоений шага=";
	sprintf_s(str, "%d", c2);
	ref += str;
	ref += ", Общее число деления шага=";
	sprintf_s(str, "%d", c1);
	ref += str;
	ref += "\r\n";
	ref += "max hi=";
	sprintf_s(str, "%.6lf", maxH);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xmaxH);
	ref += str;
	ref += "\r\n";
	ref += "min hi=";
	sprintf_s(str, "%.6lf", minH);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xminH);
	ref += str;
	ref += "\r\n";
	ref += "max |ui-vi|=";
	sprintf_s(str, "%.6e", maxSubUiVi);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xmaxSubUiVi);
	ref += str;
	ref += "\r\n";
	textBox17->Text = gcnew String(ref.c_str());
}
};
}
