#pragma once
#include <iomanip>
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Histogram))->BeginInit();
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
			this->dataGridView1->Size = System::Drawing::Size(203, 343);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// N
			// 
			this->N->HeaderText = L"�";
			this->N->Name = L"N";
			this->N->ReadOnly = true;
			this->N->Width = 50;
			// 
			// xi_sample
			// 
			this->xi_sample->HeaderText = L"��������";
			this->xi_sample->Name = L"xi_sample";
			this->xi_sample->ReadOnly = true;
			this->xi_sample->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 364);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"������";
			// 
			// textBox_lambda
			// 
			this->textBox_lambda->Location = System::Drawing::Point(167, 361);
			this->textBox_lambda->Name = L"textBox_lambda";
			this->textBox_lambda->Size = System::Drawing::Size(48, 20);
			this->textBox_lambda->TabIndex = 4;
			this->textBox_lambda->Text = L"1";
			// 
			// textBox_sample_size
			// 
			this->textBox_sample_size->Location = System::Drawing::Point(167, 387);
			this->textBox_sample_size->Name = L"textBox_sample_size";
			this->textBox_sample_size->Size = System::Drawing::Size(48, 20);
			this->textBox_sample_size->TabIndex = 11;
			this->textBox_sample_size->Text = L"12";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 390);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"������ �������";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 413);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"������� ��";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox_sample_range
			// 
			this->textBox_sample_range->Location = System::Drawing::Point(319, 120);
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
			this->dataGridView2->Location = System::Drawing::Point(221, 12);
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
			this->Column1->HeaderText = L"������������� ��������������";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column2->HeaderText = L"���������� ��������������";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->Column3->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column3->HeaderText = L"����������";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(221, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"������ �������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(34, 439);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 17);
			this->label3->TabIndex = 32;
			this->label3->Text = L"f(x) = L/2 * exp(- L * |x|)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(508, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 13);
			this->label4->TabIndex = 34;
			this->label4->Text = L"D";
			// 
			// textBox_D
			// 
			this->textBox_D->Location = System::Drawing::Point(529, 120);
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
			this->dataGridView_Histogram->Size = System::Drawing::Size(203, 415);
			this->dataGridView_Histogram->TabIndex = 35;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"�";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"�������";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 150;
			// 
			// zedGraphControl_Histogram
			// 
			this->zedGraphControl_Histogram->Location = System::Drawing::Point(708, 462);
			this->zedGraphControl_Histogram->Name = L"zedGraphControl_Histogram";
			this->zedGraphControl_Histogram->ScrollGrace = 0;
			this->zedGraphControl_Histogram->ScrollMaxX = 0;
			this->zedGraphControl_Histogram->ScrollMaxY = 0;
			this->zedGraphControl_Histogram->ScrollMaxY2 = 0;
			this->zedGraphControl_Histogram->ScrollMinX = 0;
			this->zedGraphControl_Histogram->ScrollMinY = 0;
			this->zedGraphControl_Histogram->ScrollMinY2 = 0;
			this->zedGraphControl_Histogram->Size = System::Drawing::Size(1184, 444);
			this->zedGraphControl_Histogram->TabIndex = 36;
			// 
			// button_Histogram
			// 
			this->button_Histogram->Location = System::Drawing::Point(12, 883);
			this->button_Histogram->Name = L"button_Histogram";
			this->button_Histogram->Size = System::Drawing::Size(203, 23);
			this->button_Histogram->TabIndex = 37;
			this->button_Histogram->Text = L"������� ������";
			this->button_Histogram->UseVisualStyleBackColor = true;
			this->button_Histogram->Click += gcnew System::EventHandler(this, &MyForm::button_Histogram_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
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
			this->Text = L"������� 11";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Histogram))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Random_Variable xi;
		int sample_size = Convert::ToInt32(textBox_sample_size->Text); //������ Int32?
		double lambda = Convert::ToDouble(textBox_lambda->Text);
		xi.set_parameter(lambda);
		xi.generate_sample(sample_size);

		//�������
		dataGridView1->Rows->Clear();
		for (int i = 0; i < sample_size; i++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
			dataGridView1->Rows[i]->Cells[1]->Value = xi.get_sample(i);
		}

		dataGridView2->Rows->Clear();
		dataGridView2->Rows->Add(2);
		dataGridView2->Rows[0]->Cells[0]->Value = "�������";
		dataGridView2->Rows[0]->Cells[1]->Value = xi.get_mean();
		dataGridView2->Rows[0]->Cells[2]->Value = xi.get_sample_mean();
		dataGridView2->Rows[0]->Cells[3]->Value = abs(xi.get_sample_mean() - xi.get_mean());
		dataGridView2->Rows[1]->Cells[0]->Value = "���������";
		dataGridView2->Rows[1]->Cells[1]->Value = xi.get_variance();
		dataGridView2->Rows[1]->Cells[2]->Value = xi.get_sample_variance();
		dataGridView2->Rows[1]->Cells[3]->Value = abs(xi.get_sample_variance() - xi.get_variance());
		dataGridView2->Rows[2]->Cells[0]->Value = "�������";
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
			sample_CDF_point_list->Add(xi.get_sample(i) - 0.0000001, xi.sample_cumulative_distribution_function(xi.get_sample(i) - 0.0000001));
			sample_CDF_point_list->Add(xi.get_sample(i) + 0.0000001, xi.sample_cumulative_distribution_function(xi.get_sample(i) + 0.0000001));
		}
		sample_CDF_point_list->Add(100, 1);
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->Title->Text = "������ ������� �������������";
		panel->XAxis->Title->Text = "��������� ��������";
		panel->YAxis->Title->Text = "����������� / �������";
		panel->CurveList->Clear();
		LineItem^ Curve_CDF = panel->AddCurve("������� �������������", CDF_point_list, Color::Red, SymbolType::None);
		LineItem^ Curve_sample_CDF = panel->AddCurve("���������� ������� �������������", sample_CDF_point_list, Color::Blue, SymbolType::None);
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

		double left = Convert::ToDouble(dataGridView_Histogram->Rows[0]->Cells[1]->Value);
		double right;
		for (int i = 0; i < dataGridView_Histogram->RowCount - 2; i++) {
			left  = Convert::ToDouble(dataGridView_Histogram->Rows[i]->Cells[1]->Value);
			right = Convert::ToDouble(dataGridView_Histogram->Rows[i + 1]->Cells[1]->Value);

			histogram_point_list->Add(left, 0);
			histogram_point_list->Add(left,  (xi.sample_cumulative_distribution_function(right) - xi.sample_cumulative_distribution_function(left)) / (right - left));
			histogram_point_list->Add(right, (xi.sample_cumulative_distribution_function(right) - xi.sample_cumulative_distribution_function(left)) / (right - left));
		}
		histogram_point_list->Add(right, 0);

		GraphPane^ panel2 = zedGraphControl_Histogram->GraphPane;
		panel2->Title->Text = "�����������";
		panel2->XAxis->Title->Text = "��������� ��������";
		panel2->YAxis->Title->Text = "��������� ����������� / �������";

		panel2->CurveList->Clear();
		LineItem^ Curve_PD = panel2->AddCurve("������� ��������� �����������", PD_point_list, Color::Red, SymbolType::None);
		LineItem^ Curve_histogram = panel2->AddCurve("�����������", histogram_point_list, Color::Blue, SymbolType::None);

		zedGraphControl_Histogram->Invalidate();
	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button_Histogram_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
