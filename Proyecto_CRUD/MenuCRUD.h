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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_placa;

	private: System::Windows::Forms::TextBox^ txt_anio;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ data_grid;
	private: DB^ data; //creamos objeto que se llama data de DB




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(413, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 42);
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
			this->tabPage4->Controls->Add(this->button1);
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
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1009, 504);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Agregar";
			// 
			// data_grid
			// 
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid->Location = System::Drawing::Point(31, 29);
			this->data_grid->Name = L"data_grid";
			this->data_grid->Size = System::Drawing::Size(630, 423);
			this->data_grid->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(758, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 39);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(729, 304);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Placa";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(729, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 20);
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
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Serie";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(729, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Marca";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(729, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
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
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1009, 504);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Modificar";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1009, 504);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Borrar";
			this->tabPage3->UseVisualStyleBackColor = true;
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
	this->data->CerrarConexion(); //cerramos la conexion luego de llenar la tabla
}









};
}
