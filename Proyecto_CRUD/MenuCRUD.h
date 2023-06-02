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
			//TODO: agregar c�digo de constructor aqu�
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::TextBox^ txt_placa_mod;

	private: System::Windows::Forms::TextBox^ txt_anio_mod;

	private: System::Windows::Forms::TextBox^ txt_serie_mod;

	private: System::Windows::Forms::TextBox^ txt_marca_mod;

	private: System::Windows::Forms::TextBox^ txt_nombre_mod;
	private: System::Windows::Forms::Button^ btn_modificar;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ data_grid3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_id_mod;






	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_id_mod = (gcnew System::Windows::Forms::TextBox());
			this->btn_modificar = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_placa_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_anio_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_serie_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_marca_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre_mod = (gcnew System::Windows::Forms::TextBox());
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
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid->DefaultCellStyle = dataGridViewCellStyle10;
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
			this->label5->Text = L"A�o";
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
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->txt_id_mod);
			this->tabPage2->Controls->Add(this->btn_modificar);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->txt_placa_mod);
			this->tabPage2->Controls->Add(this->txt_anio_mod);
			this->tabPage2->Controls->Add(this->txt_serie_mod);
			this->tabPage2->Controls->Add(this->txt_marca_mod);
			this->tabPage2->Controls->Add(this->txt_nombre_mod);
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
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(730, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(23, 20);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Id";
			// 
			// txt_id_mod
			// 
			this->txt_id_mod->Enabled = false;
			this->txt_id_mod->Location = System::Drawing::Point(734, 52);
			this->txt_id_mod->Name = L"txt_id_mod";
			this->txt_id_mod->Size = System::Drawing::Size(234, 26);
			this->txt_id_mod->TabIndex = 12;
			this->txt_id_mod->TextChanged += gcnew System::EventHandler(this, &MenuCRUD::textBox1_TextChanged);
			// 
			// btn_modificar
			// 
			this->btn_modificar->Location = System::Drawing::Point(749, 426);
			this->btn_modificar->Name = L"btn_modificar";
			this->btn_modificar->Size = System::Drawing::Size(189, 39);
			this->btn_modificar->TabIndex = 11;
			this->btn_modificar->Text = L"Modificar";
			this->btn_modificar->UseVisualStyleBackColor = true;
			this->btn_modificar->Click += gcnew System::EventHandler(this, &MenuCRUD::btn_modificar_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(730, 342);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 20);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Placa";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(730, 279);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 20);
			this->label10->TabIndex = 9;
			this->label10->Text = L"A�o";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(730, 214);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Serie";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(730, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Marca";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(730, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nombre";
			// 
			// txt_placa_mod
			// 
			this->txt_placa_mod->Location = System::Drawing::Point(734, 365);
			this->txt_placa_mod->Name = L"txt_placa_mod";
			this->txt_placa_mod->Size = System::Drawing::Size(234, 26);
			this->txt_placa_mod->TabIndex = 5;
			// 
			// txt_anio_mod
			// 
			this->txt_anio_mod->Location = System::Drawing::Point(734, 302);
			this->txt_anio_mod->Name = L"txt_anio_mod";
			this->txt_anio_mod->Size = System::Drawing::Size(234, 26);
			this->txt_anio_mod->TabIndex = 4;
			// 
			// txt_serie_mod
			// 
			this->txt_serie_mod->Location = System::Drawing::Point(734, 237);
			this->txt_serie_mod->Name = L"txt_serie_mod";
			this->txt_serie_mod->Size = System::Drawing::Size(234, 26);
			this->txt_serie_mod->TabIndex = 3;
			this->txt_serie_mod->TextChanged += gcnew System::EventHandler(this, &MenuCRUD::textBox3_TextChanged_1);
			// 
			// txt_marca_mod
			// 
			this->txt_marca_mod->Location = System::Drawing::Point(734, 173);
			this->txt_marca_mod->Name = L"txt_marca_mod";
			this->txt_marca_mod->Size = System::Drawing::Size(234, 26);
			this->txt_marca_mod->TabIndex = 2;
			// 
			// txt_nombre_mod
			// 
			this->txt_nombre_mod->Location = System::Drawing::Point(734, 113);
			this->txt_nombre_mod->Name = L"txt_nombre_mod";
			this->txt_nombre_mod->Size = System::Drawing::Size(234, 26);
			this->txt_nombre_mod->TabIndex = 1;
			// 
			// data_grid2
			// 
			this->data_grid2->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->data_grid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->data_grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid2->DefaultCellStyle = dataGridViewCellStyle8;
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
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->data_grid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid3->DefaultCellStyle = dataGridViewCellStyle12;
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
	this->data->AbrirConexion(); //abrimos la conexi�n para llenar la tabla
	this->data_grid->DataSource = this->data->getData(); //nos indica de que m�todo se obtendr� la informaci�n para la tabla
	this->data_grid2->DataSource = this->data->getData();
	this->data_grid3->DataSource = this->data->getData();
	this->data->CerrarConexion(); //cerramos la conexion luego de llenar la tabla
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion(); //abrimos la conexi�n para llenar la tabla
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
	String^ id = Convert::ToString(data_grid2->SelectedRows[0]->Cells[0]->Value); //seleccionamos los valores de la fila completa
	String^ nombre = Convert::ToString(data_grid2->SelectedRows[0]->Cells[1]->Value);
	String^ marca = Convert::ToString(data_grid2->SelectedRows[0]->Cells[2]->Value);
	String^ serie = Convert::ToString(data_grid2->SelectedRows[0]->Cells[3]->Value);
	String^ anio = Convert::ToString(data_grid2->SelectedRows[0]->Cells[4]->Value);
	String^ placa = Convert::ToString(data_grid2->SelectedRows[0]->Cells[5]->Value);
	this->txt_id_mod->Text = id; //asignamos los valores de la fila a sus respectivas textbox
	this->txt_nombre_mod->Text = nombre;
	this->txt_marca_mod->Text = marca;
	this->txt_serie_mod->Text = serie;
	this->txt_anio_mod->Text = anio;
	this->txt_placa_mod->Text = placa;
	
}
private: System::Void data_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_modificar_Click(System::Object^ sender, System::EventArgs^ e) {
	data->AbrirConexion();
	data->Modificar(this->txt_nombre_mod->Text, this->txt_marca_mod->Text, this->txt_serie_mod->Text, this->txt_anio_mod->Text, this->txt_placa_mod->Text, this->txt_id_mod->Text); //llamamos a la funcion modificar y le indicamos de donde sacara los datos para la tabla
	data->CerrarConexion();
	this->Consulta();
	this->txt_nombre_mod->Clear(); //se limpian los textbox 
	this->txt_marca_mod->Clear();
	this->txt_anio_mod->Clear();
	this->txt_placa_mod->Clear();
	this->txt_serie_mod->Clear();
	this->txt_id_mod->Clear();
	MessageBox::Show(L"Modificaci�n realizada correctamente!");
}


};
}