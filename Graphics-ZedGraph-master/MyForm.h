#pragma once
#include <iomanip>
#include <vector>
#include "../ME_probability1/Random_Variable.h"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^ textBox_lambda;
	private: System::Windows::Forms::TextBox^ textBox_sample_size;
	private: System::Windows::Forms::Label^  label5;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::TextBox^ textBox_sample_range;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ xi_sample;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_D;
	private: System::Windows::Forms::DataGridView^ dataGridView_Histogram;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl_Histogram;
	private: System::Windows::Forms::Button^ button_Histogram;
	private: System::Windows::Forms::DataGridView^ dataGridView_Histogram_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::TextBox^ textBox_Histogram_cols;
	private: System::Windows::Forms::TextBox^ textBox_max_histogram_error;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView_hypothesis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox_hypothesis;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox_F;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_R_0;





	protected:
	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->N = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi_sample = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_lambda = (gcnew System::Windows::Forms::TextBox());
			this->textBox_sample_size = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox_sample_range = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_D = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView_Histogram = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl_Histogram = (gcnew ZedGraph::ZedGraphControl());
			this->button_Histogram = (gcnew System::Windows::Forms::Button());
			this->dataGridView_Histogram_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox_Histogram_cols = (gcnew System::Windows::Forms::TextBox());
			this->textBox_max_histogram_error = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView_hypothesis = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_hypothesis = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox_F = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_R_0 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Histogram))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Histogram_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_hypothesis))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(708, 12);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(1184, 444);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->N, this->xi_sample });
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(203, 359);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// N
			// 
			this->N->HeaderText = L"№";
			this->N->Name = L"N";
			this->N->ReadOnly = true;
			this->N->Width = 50;
			// 
			// xi_sample
			// 
			this->xi_sample->HeaderText = L"Значение";
			this->xi_sample->Name = L"xi_sample";
			this->xi_sample->ReadOnly = true;
			this->xi_sample->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 380);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Лямбда";
			// 
			// textBox_lambda
			// 
			this->textBox_lambda->Location = System::Drawing::Point(167, 377);
			this->textBox_lambda->Name = L"textBox_lambda";
			this->textBox_lambda->Size = System::Drawing::Size(48, 20);
			this->textBox_lambda->TabIndex = 4;
			this->textBox_lambda->Text = L"1";
			// 
			// textBox_sample_size
			// 
			this->textBox_sample_size->Location = System::Drawing::Point(167, 403);
			this->textBox_sample_size->Name = L"textBox_sample_size";
			this->textBox_sample_size->Size = System::Drawing::Size(48, 20);
			this->textBox_sample_size->TabIndex = 11;
			this->textBox_sample_size->Text = L"12";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 406);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Размер выборки";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 429);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Сделать всё";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox_sample_range
			// 
			this->textBox_sample_range->Location = System::Drawing::Point(332, 120);
			this->textBox_sample_range->Name = L"textBox_sample_range";
			this->textBox_sample_range->ReadOnly = true;
			this->textBox_sample_range->Size = System::Drawing::Size(160, 20);
			this->textBox_sample_range->TabIndex = 28;
			this->textBox_sample_range->Text = L"0";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column0,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView2->Location = System::Drawing::Point(234, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(468, 102);
			this->dataGridView2->TabIndex = 29;
			// 
			// Column0
			// 
			this->Column0->HeaderText = L"";
			this->Column0->Name = L"Column0";
			this->Column0->ReadOnly = true;
			this->Column0->Width = 65;
			// 
			// Column1
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"Теоретические характеристики";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column2->HeaderText = L"Выборочные характеристики";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->Column3->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column3->HeaderText = L"Отклонение";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(234, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Размах выборки";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(234, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 17);
			this->label3->TabIndex = 32;
			this->label3->Text = L"f(x) = L/2 * exp(- L * |x|)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(521, 439);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 13);
			this->label4->TabIndex = 34;
			this->label4->Text = L"D";
			// 
			// textBox_D
			// 
			this->textBox_D->Location = System::Drawing::Point(542, 436);
			this->textBox_D->Name = L"textBox_D";
			this->textBox_D->ReadOnly = true;
			this->textBox_D->Size = System::Drawing::Size(160, 20);
			this->textBox_D->TabIndex = 33;
			this->textBox_D->Text = L"0";
			// 
			// dataGridView_Histogram
			// 
			this->dataGridView_Histogram->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Histogram->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			this->dataGridView_Histogram->Location = System::Drawing::Point(12, 462);
			this->dataGridView_Histogram->Name = L"dataGridView_Histogram";
			this->dataGridView_Histogram->RowHeadersVisible = false;
			this->dataGridView_Histogram->Size = System::Drawing::Size(203, 444);
			this->dataGridView_Histogram->TabIndex = 35;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"№";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Граница";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 150;
			// 
			// zedGraphControl_Histogram
			// 
			this->zedGraphControl_Histogram->Location = System::Drawing::Point(917, 462);
			this->zedGraphControl_Histogram->Name = L"zedGraphControl_Histogram";
			this->zedGraphControl_Histogram->ScrollGrace = 0;
			this->zedGraphControl_Histogram->ScrollMaxX = 0;
			this->zedGraphControl_Histogram->ScrollMaxY = 0;
			this->zedGraphControl_Histogram->ScrollMaxY2 = 0;
			this->zedGraphControl_Histogram->ScrollMinX = 0;
			this->zedGraphControl_Histogram->ScrollMinY = 0;
			this->zedGraphControl_Histogram->ScrollMinY2 = 0;
			this->zedGraphControl_Histogram->Size = System::Drawing::Size(975, 444);
			this->zedGraphControl_Histogram->TabIndex = 36;
			// 
			// button_Histogram
			// 
			this->button_Histogram->Location = System::Drawing::Point(12, 912);
			this->button_Histogram->Name = L"button_Histogram";
			this->button_Histogram->Size = System::Drawing::Size(149, 36);
			this->button_Histogram->TabIndex = 37;
			this->button_Histogram->Text = L"Равномерная гистограмма";
			this->button_Histogram->UseVisualStyleBackColor = true;
			this->button_Histogram->Click += gcnew System::EventHandler(this, &MyForm::button_Histogram_Click);
			// 
			// dataGridView_Histogram_table
			// 
			this->dataGridView_Histogram_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Histogram_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn3,
					this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView_Histogram_table->Location = System::Drawing::Point(221, 462);
			this->dataGridView_Histogram_table->Name = L"dataGridView_Histogram_table";
			this->dataGridView_Histogram_table->RowHeadersVisible = false;
			this->dataGridView_Histogram_table->Size = System::Drawing::Size(481, 444);
			this->dataGridView_Histogram_table->TabIndex = 38;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"z_j";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 150;
			// 
			// dataGridViewTextBoxColumn4
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->dataGridViewTextBoxColumn4->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridViewTextBoxColumn4->HeaderText = L"f(z_j)";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 150;
			// 
			// dataGridViewTextBoxColumn5
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->dataGridViewTextBoxColumn5->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridViewTextBoxColumn5->HeaderText = L"n_j / (n * d_j)";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 150;
			// 
			// textBox_Histogram_cols
			// 
			this->textBox_Histogram_cols->Location = System::Drawing::Point(167, 921);
			this->textBox_Histogram_cols->Name = L"textBox_Histogram_cols";
			this->textBox_Histogram_cols->Size = System::Drawing::Size(48, 20);
			this->textBox_Histogram_cols->TabIndex = 39;
			this->textBox_Histogram_cols->Text = L"1";
			// 
			// textBox_max_histogram_error
			// 
			this->textBox_max_histogram_error->Location = System::Drawing::Point(542, 912);
			this->textBox_max_histogram_error->Name = L"textBox_max_histogram_error";
			this->textBox_max_histogram_error->ReadOnly = true;
			this->textBox_max_histogram_error->Size = System::Drawing::Size(160, 20);
			this->textBox_max_histogram_error->TabIndex = 40;
			this->textBox_max_histogram_error->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(389, 915);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 13);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Погрешность гистограммы";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 954);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 36);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Равновероятностная гистограмма";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView_hypothesis
			// 
			this->dataGridView_hypothesis->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_hypothesis->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7
			});
			this->dataGridView_hypothesis->Location = System::Drawing::Point(708, 462);
			this->dataGridView_hypothesis->Name = L"dataGridView_hypothesis";
			this->dataGridView_hypothesis->RowHeadersVisible = false;
			this->dataGridView_hypothesis->Size = System::Drawing::Size(203, 444);
			this->dataGridView_hypothesis->TabIndex = 43;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"j";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 50;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"q_j";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 150;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(393, 943);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 13);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Уровень значимости";
			// 
			// textBox_hypothesis
			// 
			this->textBox_hypothesis->Location = System::Drawing::Point(513, 940);
			this->textBox_hypothesis->Name = L"textBox_hypothesis";
			this->textBox_hypothesis->Size = System::Drawing::Size(48, 20);
			this->textBox_hypothesis->TabIndex = 45;
			this->textBox_hypothesis->Text = L"0,9";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(567, 938);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 23);
			this->button3->TabIndex = 46;
			this->button3->Text = L"Проверить гипотезу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox_F
			// 
			this->textBox_F->Location = System::Drawing::Point(513, 966);
			this->textBox_F->Name = L"textBox_F";
			this->textBox_F->ReadOnly = true;
			this->textBox_F->Size = System::Drawing::Size(48, 20);
			this->textBox_F->TabIndex = 47;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(453, 969);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 48;
			this->label8->Text = L"1 - F(R_0)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(567, 967);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 49;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(366, 970);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 51;
			this->label9->Text = L"R_0";
			// 
			// textBox_R_0
			// 
			this->textBox_R_0->Location = System::Drawing::Point(399, 967);
			this->textBox_R_0->Name = L"textBox_R_0";
			this->textBox_R_0->ReadOnly = true;
			this->textBox_R_0->Size = System::Drawing::Size(48, 20);
			this->textBox_R_0->TabIndex = 50;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_R_0);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox_F);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox_hypothesis);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dataGridView_hypothesis);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_max_histogram_error);
			this->Controls->Add(this->textBox_Histogram_cols);
			this->Controls->Add(this->dataGridView_Histogram_table);
			this->Controls->Add(this->button_Histogram);
			this->Controls->Add(this->zedGraphControl_Histogram);
			this->Controls->Add(this->dataGridView_Histogram);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_D);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox_sample_range);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_sample_size);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_lambda);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"Вариант 11";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Histogram))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Histogram_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_hypothesis))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Random_Variable xi;
		int sample_size = Convert::ToInt32(textBox_sample_size->Text); //толчно Int32?
		double lambda = Convert::ToDouble(textBox_lambda->Text);
		xi.set_parameter(lambda);
		xi.generate_sample(sample_size);

		//выборка
		dataGridView1->Rows->Clear();
		for (int i = 0; i < sample_size; i++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
			dataGridView1->Rows[i]->Cells[1]->Value = xi.get_sample(i);
		}

		//характеристики случайной величины
		dataGridView2->Rows->Clear();
		dataGridView2->Rows->Add(2);
		dataGridView2->Rows[0]->Cells[0]->Value = "Среднее";
		dataGridView2->Rows[0]->Cells[1]->Value = xi.get_mean();
		dataGridView2->Rows[0]->Cells[2]->Value = xi.get_sample_mean();
		dataGridView2->Rows[0]->Cells[3]->Value = abs(xi.get_sample_mean() - xi.get_mean());
		dataGridView2->Rows[1]->Cells[0]->Value = "Дисперсия";
		dataGridView2->Rows[1]->Cells[1]->Value = xi.get_variance();
		dataGridView2->Rows[1]->Cells[2]->Value = xi.get_sample_variance();
		dataGridView2->Rows[1]->Cells[3]->Value = abs(xi.get_sample_variance() - xi.get_variance());
		dataGridView2->Rows[2]->Cells[0]->Value = "Медиана";
		dataGridView2->Rows[2]->Cells[1]->Value = xi.get_median();
		dataGridView2->Rows[2]->Cells[2]->Value = xi.get_sample_median();
		dataGridView2->Rows[2]->Cells[3]->Value = abs(xi.get_sample_median() - xi.get_median());

		/*
		std::ostringstream ost;
		ost << std::fixed << std::setprecision(5) << xi.get_sample_range();
		System::String^ s = gcnew System::String(ost.str().c_str());
		textBox_sample_range->Text = s;
		*/
		textBox_sample_range->Text = Convert::ToString(xi.get_sample_range());
		textBox_D->Text = Convert::ToString(xi.CDF_difference());

		double x_min = -5, x_max = 5, x_cur = x_min, h = 0.1;
		PointPairList^ CDF_point_list = gcnew ZedGraph::PointPairList();
		PointPairList^ sample_CDF_point_list = gcnew ZedGraph::PointPairList();
		while (x_cur < x_max) {
			CDF_point_list->Add(x_cur, xi.cumulative_distribution_function(x_cur));
			x_cur += h;
		}
		sample_CDF_point_list->Add(-100, 0);
		for (int i = 0; i < xi.get_sample_size(); i++) {
			double a = xi.get_sample(i);
			sample_CDF_point_list->Add(a - 0.0000001, xi.sample_cumulative_distribution_function(a - 0.0000001));
			sample_CDF_point_list->Add(a + 0.0000001, xi.sample_cumulative_distribution_function(a + 0.0000001));
		}
		sample_CDF_point_list->Add(100, 1);
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->Title->Text = "График функций распределения";
		panel->XAxis->Title->Text = "Случайная величина";
		panel->YAxis->Title->Text = "Вероятность / частота";
		panel->CurveList->Clear();
		LineItem^ Curve_CDF = panel->AddCurve("Функция распределения", CDF_point_list, Color::Red, SymbolType::None);
		LineItem^ Curve_sample_CDF = panel->AddCurve("Выборочная функция распределения", sample_CDF_point_list, Color::Blue, SymbolType::None);
		zedGraphControl1->Invalidate();

		//histogram

		PointPairList^ PD_point_list = gcnew ZedGraph::PointPairList();
		PointPairList^ histogram_point_list = gcnew ZedGraph::PointPairList();

		x_min = -10;
		x_max = 10;
		x_cur = x_min;
		h = 0.1;
		while (x_cur < x_max) {
			PD_point_list->Add(x_cur, xi.probability_density(x_cur));
			x_cur += h;
		}

		dataGridView_Histogram_table->Rows->Clear();
		double left = Convert::ToDouble(dataGridView_Histogram->Rows[0]->Cells[1]->Value);
		double right;
		double z_j;
		double height;
		double histogram_error;
		double max_histogram_error = 0;
		std::vector<double> histogram(dataGridView_Histogram->RowCount + 1);
		histogram[0] = x_min;
		for (int i = 0; i < dataGridView_Histogram->RowCount; i++)
			histogram[i + 1] = Convert::ToDouble(dataGridView_Histogram->Rows[i]->Cells[1]->Value);
		histogram[dataGridView_Histogram->RowCount] = x_max;


		for (int i = 0; i < dataGridView_Histogram->RowCount; i++) {

			left  = Convert::ToDouble(histogram[i]);
			right = Convert::ToDouble(histogram[i + 1]);
			z_j = 0.5 * (right + left);
			height = (xi.sample_cumulative_distribution_function(right) - xi.sample_cumulative_distribution_function(left)) / (right - left);
			dataGridView_Histogram_table->Rows->Add(); 
			dataGridView_Histogram_table->Rows[i]->Cells[0]->Value = z_j;
			dataGridView_Histogram_table->Rows[i]->Cells[1]->Value = xi.probability_density(z_j);
			dataGridView_Histogram_table->Rows[i]->Cells[2]->Value = height;
			histogram_error = abs(xi.probability_density(z_j) - height);
			if (histogram_error > max_histogram_error) max_histogram_error = histogram_error;

			histogram_point_list->Add(left, 0);
			histogram_point_list->Add(left,  height);
			histogram_point_list->Add(right, height);
		}
		histogram_point_list->Add(right, 0);
		textBox_max_histogram_error->Text = Convert::ToString(max_histogram_error);

		GraphPane^ panel2 = zedGraphControl_Histogram->GraphPane;
		panel2->Title->Text = "Гистограмма";
		panel2->XAxis->Title->Text = "Случайная величина";
		panel2->YAxis->Title->Text = "Плотность вероятности / частоты";

		panel2->CurveList->Clear();
		LineItem^ Curve_PD = panel2->AddCurve("Функция плотности веротяности", PD_point_list, Color::Red, SymbolType::None);
		LineItem^ Curve_histogram = panel2->AddCurve("Гистограмма", histogram_point_list, Color::Blue, SymbolType::None);

		zedGraphControl_Histogram->Invalidate();
	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button_Histogram_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView_Histogram->Rows->Clear();
		int n = Convert::ToDouble(textBox_Histogram_cols->Text);

		double x_min = -10, x_max = 10, x_cur = x_min, h = (x_max - x_min)/n;
		for (int i = 0; i < n; i++) {
			dataGridView_Histogram->Rows->Add();
			dataGridView_Histogram->Rows[i]->Cells[1]->Value = Convert::ToDouble(x_min + h * i);
		}
		dataGridView_Histogram->Rows->Add();
		dataGridView_Histogram->Rows[n]->Cells[1]->Value = Convert::ToDouble(x_max);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//создаёт равновероятностную отрезки
		dataGridView_Histogram->Rows->Clear();
		int n = Convert::ToDouble(textBox_Histogram_cols->Text);
		Random_Variable xi;

		for (int i = 0; i < n - 1; i++) {
			dataGridView_Histogram->Rows->Add();
			dataGridView_Histogram->Rows[i]->Cells[1]->Value = Convert::ToDouble(xi.inverse_probability((i + 1) / (double) n));
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Random_Variable xi;
		int n = dataGridView_Histogram->Rows->Count - 1;

		//копирует выборку дурацким образом
		for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {
			xi.add_sample(Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value));
		}
		xi.check_n_sort();

		//
		double right, left, q_j, R_0 = 0;
		int n_j;
		int sample_size = dataGridView1->Rows->Count - 1;

		left = Convert::ToDouble(dataGridView_Histogram->Rows[0]->Cells[1]->Value);
		right = Convert::ToDouble(dataGridView_Histogram->Rows[0]->Cells[1]->Value);

		dataGridView_hypothesis->Rows->Clear();

		q_j = xi.cumulative_distribution_function(left);
		n_j = sample_size * xi.sample_cumulative_distribution_function(left);

		dataGridView_hypothesis->Rows->Add();
		dataGridView_hypothesis->Rows[0]->Cells[0]->Value = 0;
		dataGridView_hypothesis->Rows[0]->Cells[1]->Value = Convert::ToDouble(q_j);

		R_0 += pow((n_j - sample_size * q_j), 2) / (sample_size * q_j);

		for (int j = 1; j < n; j++) {
			left = Convert::ToDouble(dataGridView_Histogram->Rows[j - 1]->Cells[1]->Value);
			right = Convert::ToDouble(dataGridView_Histogram->Rows[j]->Cells[1]->Value);

			q_j = xi.cumulative_distribution_function(right) - xi.cumulative_distribution_function(left);
			n_j = sample_size * (xi.sample_cumulative_distribution_function(right) - xi.sample_cumulative_distribution_function(left));

			dataGridView_hypothesis->Rows->Add();
			dataGridView_hypothesis->Rows[j]->Cells[0]->Value = j;
			dataGridView_hypothesis->Rows[j]->Cells[1]->Value = Convert::ToDouble(q_j);

			R_0 += pow((n_j - sample_size * q_j), 2) / (sample_size * q_j);
		}

		q_j = 1 - xi.cumulative_distribution_function(right);
		n_j = sample_size * (1 - xi.sample_cumulative_distribution_function(right));

		dataGridView_hypothesis->Rows->Add();
		dataGridView_hypothesis->Rows[n]->Cells[0]->Value = n;
		dataGridView_hypothesis->Rows[n]->Cells[1]->Value = Convert::ToDouble(q_j);

		R_0 += pow((n_j - sample_size * q_j), 2) / (sample_size * q_j);

		textBox_R_0->Text = Convert::ToString(R_0);


		int N = 5000;
		double F = 0;
		double step = R_0 / N;
		double r = n + 1;
		if (R_0 != 0) {
			for (int i = 0; i < N; i++) {
				F += step * pow(2, -r / 2.0) / tgamma(r / 2.0) * pow(i * step, r / 2.0 - 1) * exp(-i * step / 2.0);
			}
		}
		F = 1 - F;
		textBox_F->Text = Convert::ToString(F);

		if (F >= Convert::ToDouble(textBox_hypothesis->Text)) {
			textBox1->Text = "Принять";
		}
		else
			textBox1->Text = "Не принять";

	}
};
}
