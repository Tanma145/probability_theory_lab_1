#pragma once
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ xi_sample;
	private: System::Windows::Forms::Button^ button1;





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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(377, 12);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(65, 47);
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
			this->dataGridView1->Size = System::Drawing::Size(153, 327);
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
			this->xi_sample->HeaderText = L"Xi sample";
			this->xi_sample->Name = L"xi_sample";
			this->xi_sample->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 348);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Lambda";
			// 
			// textBox_lambda
			// 
			this->textBox_lambda->Location = System::Drawing::Point(117, 345);
			this->textBox_lambda->Name = L"textBox_lambda";
			this->textBox_lambda->Size = System::Drawing::Size(48, 20);
			this->textBox_lambda->TabIndex = 4;
			this->textBox_lambda->Text = L"0";
			// 
			// textBox_sample_size
			// 
			this->textBox_sample_size->Location = System::Drawing::Point(117, 371);
			this->textBox_sample_size->Name = L"textBox_sample_size";
			this->textBox_sample_size->Size = System::Drawing::Size(48, 20);
			this->textBox_sample_size->TabIndex = 11;
			this->textBox_sample_size->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 374);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Sample size";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 397);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Generate sample";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 497);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_sample_size);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_lambda);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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

		dataGridView1->Rows->Clear();
		for (int i = 0; i < sample_size; i++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = xi.get_sample(i);
		}
	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
