#pragma once
#include "DB.h"; //incluimos la clase DB
namespace Proyecto_CRUD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuCRUD
	/// </summary>
	public ref class MenuCRUD : public System::Windows::Forms::Form
	{
	public:
		MenuCRUD(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MenuCRUD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;


	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TextBox^ txt_serie;

	private: System::Windows::Forms::TextBox^ txt_marca;

	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::Button^ btn_guardar;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_placa;

	private: System::Windows::Forms::TextBox^ txt_anio;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ data_grid;
	private: DB^ data; //creamos objeto que se llama data de DB
	private: System::Windows::Forms::DataGridView^ data_grid2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ data_grid3;





	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_placa = (gcnew System::Windows::Forms::TextBox());
			this->txt_anio = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_serie = (gcnew System::Windows::Forms::TextBox());
			this->txt_marca = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->data_grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->data_grid3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(383, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Vehiculos Maeda";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(12, 54);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1017, 537);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::SteelBlue;
			this->tabPage4->Controls->Add(this->data_grid);
			this->tabPage4->Controls->Add(this->btn_guardar);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->txt_placa);
			this->tabPage4->Controls->Add(this->txt_anio);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->label2);
			this->tabPage4->Controls->Add(this->txt_serie);
			this->tabPage4->Controls->Add(this->txt_marca);
			this->tabPage4->Controls->Add(this->txt_nombre);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1009, 504);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Agregar";
			// 
			// data_grid
			// 
			this->data_grid->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_grid->Location = System::Drawing::Point(31, 29);
			this->data_grid->Name = L"data_grid";
			this->data_grid->ReadOnly = true;
			this->data_grid->RowHeadersVisible = false;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(672, 436);
			this->data_grid->TabIndex = 11;
			this->data_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MenuCRUD::data_grid_CellContentClick);
			// 
			// btn_guardar
			// 
			this->btn_guardar->Location = System::Drawing::Point(758, 381);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(189, 39);
			this->btn_guardar->TabIndex = 10;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = true;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &MenuCRUD::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(729, 304);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Placa";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(729, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Año";
			// 
			// txt_placa
			// 
			this->txt_placa->Location = System::Drawing::Point(733, 327);
			this->txt_placa->Name = L"txt_placa";
			this->txt_placa->Size = System::Drawing::Size(234, 26);
			this->txt_placa->TabIndex = 7;
			// 
			// txt_anio
			// 
			this->txt_anio->Location = System::Drawing::Point(733, 260);
			this->txt_anio->Name = L"txt_anio";
			this->txt_anio->Size = System::Drawing::Size(234, 26);
			this->txt_anio->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(729, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Serie";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(729, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Marca";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(729, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nombre";
			// 
			// txt_serie
			// 
			this->txt_serie->Location = System::Drawing::Point(733, 196);
			this->txt_serie->Name = L"txt_serie";
			this->txt_serie->Size = System::Drawing::Size(234, 26);
			this->txt_serie->TabIndex = 2;
			this->txt_serie->TextChanged += gcnew System::EventHandler(this, &MenuCRUD::textBox3_TextChanged);
			// 
			// txt_marca
			// 
			this->txt_marca->Location = System::Drawing::Point(733, 130);
			this->txt_marca->Name = L"txt_marca";
			this->txt_marca->Size = System::Drawing::Size(234, 26);
			this->txt_marca->TabIndex = 1;
			// 
			// txt_nombre
			// 
			this->txt_nombre->Location = System::Drawing::Point(733, 71);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(234, 26);
			this->txt_nombre->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::SteelBlue;
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->data_grid2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1009, 504);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Modificar";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(748, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 39);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Modificar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(729, 300);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 20);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Placa";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(729, 237);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 20);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Año";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(729, 172);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Serie";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(729, 108);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Marca";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(729, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nombre";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(733, 323);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(234, 26);
			this->textBox5->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(733, 260);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(234, 26);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(733, 195);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(234, 26);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MenuCRUD::textBox3_TextChanged_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(733, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(234, 26);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(733, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 26);
			this->textBox1->TabIndex = 1;
			// 
			// data_grid2
			// 
			this->data_grid2->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->data_grid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->data_grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid2->DefaultCellStyle = dataGridViewCellStyle4;
			this->data_grid2->Location = System::Drawing::Point(31, 29);
			this->data_grid2->Name = L"data_grid2";
			this->data_grid2->ReadOnly = true;
			this->data_grid2->RowHeadersVisible = false;
			this->data_grid2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid2->Size = System::Drawing::Size(672, 436);
			this->data_grid2->TabIndex = 0;
			this->data_grid2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MenuCRUD::dataGridView1_CellContentClick);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::SteelBlue;
			this->tabPage3->Controls->Add(this->data_grid3);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1009, 504);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Borrar";
			// 
			// data_grid3
			// 
			this->data_grid3->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->data_grid3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->data_grid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid3->DefaultCellStyle = dataGridViewCellStyle6;
			this->data_grid3->Location = System::Drawing::Point(31, 29);
			this->data_grid3->Name = L"data_grid3";
			this->data_grid3->ReadOnly = true;
			this->data_grid3->RowHeadersVisible = false;
			this->data_grid3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid3->Size = System::Drawing::Size(672, 436);
			this->data_grid3->TabIndex = 1;
			// 
			// MenuCRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(1053, 613);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Name = L"MenuCRUD";
			this->Text = L"MenuCRUD";
			this->Load += gcnew System::EventHandler(this, &MenuCRUD::MenuCRUD_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MenuCRUD_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();
}

public: void Consulta() //metodo publico que mostrara los datos
{
	this->data->AbrirConexion(); //abrimos la conexión para llenar la tabla
	this->data_grid->DataSource = this->data->getData(); //nos indica de que método se obtendrá la información para la tabla
	this->data_grid2->DataSource = this->data->getData();
	this->data_grid3->DataSource = this->data->getData();
	this->data->CerrarConexion(); //cerramos la conexion luego de llenar la tabla
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion(); //abrimos la conexión para llenar la tabla
	this->data->Insertar(this->txt_nombre->Text, this->txt_marca->Text, this->txt_serie->Text, this->txt_anio->Text, this->txt_placa->Text); //llamamos a la funcion insertar y le indicamos de donde sacara los datos para la tabla
	this->data->CerrarConexion(); //cerramos la conexion luego de llenar la tabla
	this->Consulta();
	this->txt_nombre->Clear(); //se limpian los textbox 
	this->txt_marca->Clear();
	this->txt_anio->Clear();
	this->txt_placa->Clear();
	this->txt_serie->Clear();
}




private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void data_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
