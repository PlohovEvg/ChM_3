#pragma once
#include "DU_Struct.h"
#include "Functions.h"

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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::TextBox^  E0_Text;
	private: System::Windows::Forms::TextBox^  Omega_Text;




	private: System::Windows::Forms::TextBox^  Epsilon_Text;

	private: System::Windows::Forms::TextBox^  n_Text;

	private: System::Windows::Forms::TextBox^  h_Text;

	private: System::Windows::Forms::TextBox^  I0_Text;

	private: System::Windows::Forms::TextBox^  L_Text;

	private: System::Windows::Forms::TextBox^  R_Text;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Xi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ViCap;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  S;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  X1_Text;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  X2_Text;






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
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->E0_Text = (gcnew System::Windows::Forms::TextBox());
			this->Omega_Text = (gcnew System::Windows::Forms::TextBox());
			this->Epsilon_Text = (gcnew System::Windows::Forms::TextBox());
			this->n_Text = (gcnew System::Windows::Forms::TextBox());
			this->h_Text = (gcnew System::Windows::Forms::TextBox());
			this->I0_Text = (gcnew System::Windows::Forms::TextBox());
			this->L_Text = (gcnew System::Windows::Forms::TextBox());
			this->R_Text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ViCap = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->X1_Text = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->X2_Text = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->IsShowPointValues = false;
			this->zedGraphControl1->Location = System::Drawing::Point(430, 198);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->PointValueFormat = L"G";
			this->zedGraphControl1->Size = System::Drawing::Size(504, 405);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// E0_Text
			// 
			this->E0_Text->Location = System::Drawing::Point(510, 15);
			this->E0_Text->Name = L"E0_Text";
			this->E0_Text->Size = System::Drawing::Size(100, 20);
			this->E0_Text->TabIndex = 1;
			this->E0_Text->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// Omega_Text
			// 
			this->Omega_Text->Location = System::Drawing::Point(510, 38);
			this->Omega_Text->Name = L"Omega_Text";
			this->Omega_Text->Size = System::Drawing::Size(100, 20);
			this->Omega_Text->TabIndex = 2;
			this->Omega_Text->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// Epsilon_Text
			// 
			this->Epsilon_Text->Location = System::Drawing::Point(784, 41);
			this->Epsilon_Text->Name = L"Epsilon_Text";
			this->Epsilon_Text->Size = System::Drawing::Size(100, 20);
			this->Epsilon_Text->TabIndex = 6;
			this->Epsilon_Text->TextChanged += gcnew System::EventHandler(this, &MyForm::Epsilon_Text_TextChanged);
			// 
			// n_Text
			// 
			this->n_Text->Location = System::Drawing::Point(784, 15);
			this->n_Text->Name = L"n_Text";
			this->n_Text->Size = System::Drawing::Size(100, 20);
			this->n_Text->TabIndex = 5;
			// 
			// h_Text
			// 
			this->h_Text->Location = System::Drawing::Point(510, 142);
			this->h_Text->Name = L"h_Text";
			this->h_Text->Size = System::Drawing::Size(100, 20);
			this->h_Text->TabIndex = 8;
			// 
			// I0_Text
			// 
			this->I0_Text->Location = System::Drawing::Point(510, 116);
			this->I0_Text->Name = L"I0_Text";
			this->I0_Text->Size = System::Drawing::Size(100, 20);
			this->I0_Text->TabIndex = 7;
			// 
			// L_Text
			// 
			this->L_Text->Location = System::Drawing::Point(510, 90);
			this->L_Text->Name = L"L_Text";
			this->L_Text->Size = System::Drawing::Size(100, 20);
			this->L_Text->TabIndex = 10;
			// 
			// R_Text
			// 
			this->R_Text->Location = System::Drawing::Point(510, 64);
			this->R_Text->Name = L"R_Text";
			this->R_Text->Size = System::Drawing::Size(100, 20);
			this->R_Text->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(475, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"E0 =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(475, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L" ω =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(473, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L" R =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(475, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L" L =";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(11, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(437, 98);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(475, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L" I0 = ";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(475, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 16);
			this->label6->TabIndex = 17;
			this->label6->Text = L" h = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(661, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L" Число итераций";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(749, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = L" ε =";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(724, 84);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 48);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->i, this->Xi,
					this->h, this->Vi, this->ViCap, this->S
			});
			this->dataGridView1->Location = System::Drawing::Point(11, 130);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(413, 473);
			this->dataGridView1->TabIndex = 21;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			// 
			// Xi
			// 
			this->Xi->HeaderText = L"Xi";
			this->Xi->Name = L"Xi";
			// 
			// h
			// 
			this->h->HeaderText = L"h";
			this->h->Name = L"h";
			// 
			// Vi
			// 
			this->Vi->HeaderText = L"Vi";
			this->Vi->Name = L"Vi";
			// 
			// ViCap
			// 
			this->ViCap->HeaderText = L"Vi^";
			this->ViCap->Name = L"ViCap";
			// 
			// S
			// 
			this->S->HeaderText = L"S";
			this->S->Name = L"S";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(724, 144);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 48);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Изменить масштаб от X1 до X2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(427, 175);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 16);
			this->label9->TabIndex = 24;
			this->label9->Text = L" X1 = ";
			// 
			// X1_Text
			// 
			this->X1_Text->Location = System::Drawing::Point(467, 172);
			this->X1_Text->Name = L"X1_Text";
			this->X1_Text->Size = System::Drawing::Size(100, 20);
			this->X1_Text->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(573, 175);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 16);
			this->label10->TabIndex = 26;
			this->label10->Text = L" X2 = ";
			// 
			// X2_Text
			// 
			this->X2_Text->Location = System::Drawing::Point(618, 171);
			this->X2_Text->Name = L"X2_Text";
			this->X2_Text->Size = System::Drawing::Size(100, 20);
			this->X2_Text->TabIndex = 25;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(946, 630);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->X2_Text);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->X1_Text);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->L_Text);
			this->Controls->Add(this->R_Text);
			this->Controls->Add(this->h_Text);
			this->Controls->Add(this->I0_Text);
			this->Controls->Add(this->Epsilon_Text);
			this->Controls->Add(this->n_Text);
			this->Controls->Add(this->Omega_Text);
			this->Controls->Add(this->E0_Text);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();

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
	double Epsilon = Convert::ToDouble(Epsilon_Text->Text);
	double vplus1;
	double vcap;
	double S;
	int n = Convert::ToInt32(n_Text->Text);
	int i;
	int k;

	double xmin_limit = x - 0.05;

	dataGridView1->Rows->Clear();

	for (i = 0; i < n; i++)
	{
		f_list->Add(x, v);
		g_list->Add(x, fAcc(I0, f, x));
		
		if (i != 0)
		{
			vplus1 = RK4(x, v, h, f);
			vcap = Vn1cap(x, v, h, f);
			S = CS(vcap, vplus1);
			k = LPControl(S, Epsilon);

			if (k == -1)
			{
				while (k == -1)
				{
					h = h*0.5;
					vplus1 = RK4(x, v, h, f);
					vcap = Vn1cap(x, v, h, f);
					S = CS(vcap, vplus1);
					k = LPControl(S, Epsilon);
				}
			}
			if (k == 1)
			{
				x = xInc(x, h);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = x;
				dataGridView1->Rows[i]->Cells[2]->Value = h;
				dataGridView1->Rows[i]->Cells[3]->Value = vplus1;
				dataGridView1->Rows[i]->Cells[4]->Value = vcap;
				dataGridView1->Rows[i]->Cells[5]->Value = S;
				
				h = 2 * h;
				v = vplus1;
			}
			else
			{
				vplus1 = Correction(vplus1, S);
				x = xInc(x, h);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = x;
				dataGridView1->Rows[i]->Cells[2]->Value = h;
				dataGridView1->Rows[i]->Cells[3]->Value = vplus1;
				dataGridView1->Rows[i]->Cells[4]->Value = vcap;
				dataGridView1->Rows[i]->Cells[5]->Value = S;
			
				v = vplus1;
			}
		}
		else
		{
			vcap = v;
			S = 0.0;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = h;
			dataGridView1->Rows[i]->Cells[3]->Value = v;
			dataGridView1->Rows[i]->Cells[4]->Value = vcap;
			dataGridView1->Rows[i]->Cells[5]->Value = S;
		}
	}

	double xmax_limit = x + 0.05;

	LineItem Curve1 = panel->AddCurve("Численное решение", f_list, Color::Red, SymbolType::None);
	LineItem Curve2 = panel->AddCurve("Точное решение", g_list, Color::Black, SymbolType::None);

	panel->XAxis->Min = xmin_limit;
	panel->XAxis->Max = xmax_limit;

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double X1 = Convert::ToDouble(X1_Text->Text);
	double X2 = Convert::ToDouble(X2_Text->Text);

	panel->XAxis->Min = X1;
	panel->XAxis->Max = X2;

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}
};
}
