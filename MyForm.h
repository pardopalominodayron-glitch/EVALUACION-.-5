#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ paneloperaciones;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ panel_margen_izq;
	private: System::Windows::Forms::Panel^ panel_abajo;
	private: System::Windows::Forms::Button^ buttonsuma;



	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelBZ;

	private: System::Windows::Forms::Label^ labelBY;

	private: System::Windows::Forms::Label^ labelBX;

	private: System::Windows::Forms::Label^ labelvector_b;
	private: System::Windows::Forms::Label^ labelAZ;


	private: System::Windows::Forms::Label^ labelAY;

	private: System::Windows::Forms::Label^ labelAX;

	private: System::Windows::Forms::Label^ labelvector_a;
	private: System::Windows::Forms::TextBox^ textBox_bz;

	private: System::Windows::Forms::TextBox^ textBox_by;

	private: System::Windows::Forms::TextBox^ textBox_bx;

	private: System::Windows::Forms::TextBox^ textBox_az;

	private: System::Windows::Forms::TextBox^ textBox_ay;

	private: System::Windows::Forms::TextBox^ textBox_ax;

	private: System::Windows::Forms::Button^ buttonlimpiar;

	private: System::Windows::Forms::Label^ labelresultado;
	private: System::Windows::Forms::TextBox^ textBoxresultado;


























	protected:

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
			this->paneloperaciones = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonsuma = (gcnew System::Windows::Forms::Button());
			this->panel_margen_izq = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel_abajo = (gcnew System::Windows::Forms::Panel());
			this->buttonlimpiar = (gcnew System::Windows::Forms::Button());
			this->labelresultado = (gcnew System::Windows::Forms::Label());
			this->textBoxresultado = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox_bz = (gcnew System::Windows::Forms::TextBox());
			this->textBox_by = (gcnew System::Windows::Forms::TextBox());
			this->textBox_bx = (gcnew System::Windows::Forms::TextBox());
			this->textBox_az = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ay = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ax = (gcnew System::Windows::Forms::TextBox());
			this->labelBZ = (gcnew System::Windows::Forms::Label());
			this->labelBY = (gcnew System::Windows::Forms::Label());
			this->labelBX = (gcnew System::Windows::Forms::Label());
			this->labelvector_b = (gcnew System::Windows::Forms::Label());
			this->labelAZ = (gcnew System::Windows::Forms::Label());
			this->labelAY = (gcnew System::Windows::Forms::Label());
			this->labelAX = (gcnew System::Windows::Forms::Label());
			this->labelvector_a = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->paneloperaciones->SuspendLayout();
			this->panel_margen_izq->SuspendLayout();
			this->panel_abajo->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// paneloperaciones
			// 
			this->paneloperaciones->BackColor = System::Drawing::Color::DimGray;
			this->paneloperaciones->Controls->Add(this->button6);
			this->paneloperaciones->Controls->Add(this->button5);
			this->paneloperaciones->Controls->Add(this->button4);
			this->paneloperaciones->Controls->Add(this->button3);
			this->paneloperaciones->Controls->Add(this->button2);
			this->paneloperaciones->Controls->Add(this->buttonsuma);
			this->paneloperaciones->Controls->Add(this->panel_margen_izq);
			this->paneloperaciones->Dock = System::Windows::Forms::DockStyle::Left;
			this->paneloperaciones->Location = System::Drawing::Point(0, 0);
			this->paneloperaciones->Name = L"paneloperaciones";
			this->paneloperaciones->Size = System::Drawing::Size(347, 490);
			this->paneloperaciones->TabIndex = 0;
			this->paneloperaciones->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel_izwq_Paint);
			this->paneloperaciones->Move += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(0, 359);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(347, 40);
			this->button6->TabIndex = 6;
			this->button6->Text = L"PRODUCTO VECTORIAL";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(0, 319);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(347, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"PRODUCTO ESCALAR";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(0, 279);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(347, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"MODULO DE B";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(0, 239);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(347, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"MODULO DE A";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(0, 199);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(347, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"RESTA A - B";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// buttonsuma
			// 
			this->buttonsuma->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonsuma->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonsuma->Location = System::Drawing::Point(0, 159);
			this->buttonsuma->Name = L"buttonsuma";
			this->buttonsuma->Size = System::Drawing::Size(347, 40);
			this->buttonsuma->TabIndex = 1;
			this->buttonsuma->Text = L"SUMA A + B";
			this->buttonsuma->UseVisualStyleBackColor = true;
			this->buttonsuma->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel_margen_izq
			// 
			this->panel_margen_izq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel_margen_izq->Controls->Add(this->label1);
			this->panel_margen_izq->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_margen_izq->Location = System::Drawing::Point(0, 0);
			this->panel_margen_izq->Name = L"panel_margen_izq";
			this->panel_margen_izq->Size = System::Drawing::Size(347, 159);
			this->panel_margen_izq->TabIndex = 0;
			this->panel_margen_izq->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel_margen_izq_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(36, 26);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(279, 96);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CALCULADORA DE \r\nOPERACIONES CON\r\n VECTORES";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel_abajo
			// 
			this->panel_abajo->BackColor = System::Drawing::Color::Gray;
			this->panel_abajo->Controls->Add(this->buttonlimpiar);
			this->panel_abajo->Controls->Add(this->labelresultado);
			this->panel_abajo->Controls->Add(this->textBoxresultado);
			this->panel_abajo->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_abajo->Location = System::Drawing::Point(347, 390);
			this->panel_abajo->Name = L"panel_abajo";
			this->panel_abajo->Size = System::Drawing::Size(844, 100);
			this->panel_abajo->TabIndex = 1;
			this->panel_abajo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// buttonlimpiar
			// 
			this->buttonlimpiar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonlimpiar->Location = System::Drawing::Point(598, 35);
			this->buttonlimpiar->Name = L"buttonlimpiar";
			this->buttonlimpiar->Size = System::Drawing::Size(134, 36);
			this->buttonlimpiar->TabIndex = 17;
			this->buttonlimpiar->Text = L"LIMPIAR";
			this->buttonlimpiar->UseVisualStyleBackColor = true;
			this->buttonlimpiar->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// labelresultado
			// 
			this->labelresultado->AutoSize = true;
			this->labelresultado->BackColor = System::Drawing::Color::WhiteSmoke;
			this->labelresultado->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelresultado->Location = System::Drawing::Point(106, 42);
			this->labelresultado->Name = L"labelresultado";
			this->labelresultado->Size = System::Drawing::Size(132, 23);
			this->labelresultado->TabIndex = 16;
			this->labelresultado->Text = L"RESULTADO:";
			this->labelresultado->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBoxresultado
			// 
			this->textBoxresultado->Location = System::Drawing::Point(268, 43);
			this->textBoxresultado->Name = L"textBoxresultado";
			this->textBoxresultado->Size = System::Drawing::Size(289, 22);
			this->textBoxresultado->TabIndex = 15;
			this->textBoxresultado->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->Controls->Add(this->textBox_bz);
			this->panel1->Controls->Add(this->textBox_by);
			this->panel1->Controls->Add(this->textBox_bx);
			this->panel1->Controls->Add(this->textBox_az);
			this->panel1->Controls->Add(this->textBox_ay);
			this->panel1->Controls->Add(this->textBox_ax);
			this->panel1->Controls->Add(this->labelBZ);
			this->panel1->Controls->Add(this->labelBY);
			this->panel1->Controls->Add(this->labelBX);
			this->panel1->Controls->Add(this->labelvector_b);
			this->panel1->Controls->Add(this->labelAZ);
			this->panel1->Controls->Add(this->labelAY);
			this->panel1->Controls->Add(this->labelAX);
			this->panel1->Controls->Add(this->labelvector_a);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(347, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(844, 390);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint_1);
			// 
			// textBox_bz
			// 
			this->textBox_bz->Location = System::Drawing::Point(632, 256);
			this->textBox_bz->Name = L"textBox_bz";
			this->textBox_bz->Size = System::Drawing::Size(100, 22);
			this->textBox_bz->TabIndex = 14;
			// 
			// textBox_by
			// 
			this->textBox_by->Location = System::Drawing::Point(632, 192);
			this->textBox_by->Name = L"textBox_by";
			this->textBox_by->Size = System::Drawing::Size(100, 22);
			this->textBox_by->TabIndex = 13;
			// 
			// textBox_bx
			// 
			this->textBox_bx->Location = System::Drawing::Point(632, 124);
			this->textBox_bx->Name = L"textBox_bx";
			this->textBox_bx->Size = System::Drawing::Size(100, 22);
			this->textBox_bx->TabIndex = 12;
			// 
			// textBox_az
			// 
			this->textBox_az->Location = System::Drawing::Point(165, 260);
			this->textBox_az->Name = L"textBox_az";
			this->textBox_az->Size = System::Drawing::Size(100, 22);
			this->textBox_az->TabIndex = 11;
			// 
			// textBox_ay
			// 
			this->textBox_ay->Location = System::Drawing::Point(165, 192);
			this->textBox_ay->Name = L"textBox_ay";
			this->textBox_ay->Size = System::Drawing::Size(100, 22);
			this->textBox_ay->TabIndex = 10;
			// 
			// textBox_ax
			// 
			this->textBox_ax->Location = System::Drawing::Point(165, 124);
			this->textBox_ax->Name = L"textBox_ax";
			this->textBox_ax->Size = System::Drawing::Size(100, 22);
			this->textBox_ax->TabIndex = 9;
			// 
			// labelBZ
			// 
			this->labelBZ->AutoSize = true;
			this->labelBZ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelBZ->Location = System::Drawing::Point(569, 259);
			this->labelBZ->Name = L"labelBZ";
			this->labelBZ->Size = System::Drawing::Size(38, 23);
			this->labelBZ->TabIndex = 8;
			this->labelBZ->Text = L"Bz:";
			// 
			// labelBY
			// 
			this->labelBY->AutoSize = true;
			this->labelBY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelBY->Location = System::Drawing::Point(569, 191);
			this->labelBY->Name = L"labelBY";
			this->labelBY->Size = System::Drawing::Size(38, 23);
			this->labelBY->TabIndex = 7;
			this->labelBY->Text = L"By:";
			// 
			// labelBX
			// 
			this->labelBX->AutoSize = true;
			this->labelBX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelBX->Location = System::Drawing::Point(569, 123);
			this->labelBX->Name = L"labelBX";
			this->labelBX->Size = System::Drawing::Size(40, 23);
			this->labelBX->TabIndex = 6;
			this->labelBX->Text = L"Bx:";
			// 
			// labelvector_b
			// 
			this->labelvector_b->AutoSize = true;
			this->labelvector_b->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelvector_b->Location = System::Drawing::Point(609, 73);
			this->labelvector_b->Name = L"labelvector_b";
			this->labelvector_b->Size = System::Drawing::Size(123, 26);
			this->labelvector_b->TabIndex = 5;
			this->labelvector_b->Text = L"VECTOR B";
			// 
			// labelAZ
			// 
			this->labelAZ->AutoSize = true;
			this->labelAZ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAZ->Location = System::Drawing::Point(107, 259);
			this->labelAZ->Name = L"labelAZ";
			this->labelAZ->Size = System::Drawing::Size(38, 23);
			this->labelAZ->TabIndex = 4;
			this->labelAZ->Text = L"Az:";
			this->labelAZ->Click += gcnew System::EventHandler(this, &MyForm::labelAZ_Click);
			// 
			// labelAY
			// 
			this->labelAY->AutoSize = true;
			this->labelAY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAY->Location = System::Drawing::Point(107, 191);
			this->labelAY->Name = L"labelAY";
			this->labelAY->Size = System::Drawing::Size(37, 23);
			this->labelAY->TabIndex = 3;
			this->labelAY->Text = L"Ay:";
			this->labelAY->Click += gcnew System::EventHandler(this, &MyForm::labelAY_Click);
			// 
			// labelAX
			// 
			this->labelAX->AutoSize = true;
			this->labelAX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAX->Location = System::Drawing::Point(106, 123);
			this->labelAX->Name = L"labelAX";
			this->labelAX->Size = System::Drawing::Size(40, 23);
			this->labelAX->TabIndex = 2;
			this->labelAX->Text = L"Ax:";
			// 
			// labelvector_a
			// 
			this->labelvector_a->AutoSize = true;
			this->labelvector_a->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelvector_a->Location = System::Drawing::Point(143, 73);
			this->labelvector_a->Name = L"labelvector_a";
			this->labelvector_a->Size = System::Drawing::Size(122, 26);
			this->labelvector_a->TabIndex = 1;
			this->labelvector_a->Text = L"VECTOR A";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(844, 36);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ENTRADA DE VECTORES";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_2);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1191, 490);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel_abajo);
			this->Controls->Add(this->paneloperaciones);
			this->Name = L"MyForm";
			this->Text = L"X";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->paneloperaciones->ResumeLayout(false);
			this->panel_margen_izq->ResumeLayout(false);
			this->panel_margen_izq->PerformLayout();
			this->panel_abajo->ResumeLayout(false);
			this->panel_abajo->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel_margen_izq_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void panel_contenido_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double ax, ay, az, bx, by, bz;

	if (!Double::TryParse(textBox_ax->Text, ax) ||
		!Double::TryParse(textBox_ay->Text, ay) ||
		!Double::TryParse(textBox_az->Text, az) ||
		!Double::TryParse(textBox_bx->Text, bx) ||
		!Double::TryParse(textBox_by->Text, by) ||
		!Double::TryParse(textBox_bz->Text, bz))
	{
		MessageBox::Show("Ingresa los seis valores correctamente.");
		return;
	}

	textBoxresultado->Text = String::Format(
		"A + B = ({0}, {1}, {2})",
		ax + bx, ay + by, az + bz);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double ax, ay, az;

	if (!Double::TryParse(textBox_ax->Text, ax) ||
		!Double::TryParse(textBox_ay->Text, ay) ||
		!Double::TryParse(textBox_az->Text, az))
	{
		MessageBox::Show("Ingresa los valores del vector A correctamente.");
		return;
	}

	double moduloA = Math::Sqrt(
		ax * ax + ay * ay + az * az);

	textBoxresultado->Text = String::Format(
		"|A| = {0:F4}", moduloA);
}
private: System::Void panel_izwq_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}








private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void labelAZ_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelAY_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox_ax->Clear();
	textBox_ay->Clear();
	textBox_az->Clear();

	textBox_bx->Clear();
	textBox_by->Clear();
	textBox_bz->Clear();

	textBoxresultado->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double bx, by, bz;

	if (!Double::TryParse(textBox_bx->Text, bx) ||
		!Double::TryParse(textBox_by->Text, by) ||
		!Double::TryParse(textBox_bz->Text, bz))
	{
		MessageBox::Show("Ingresa los valores del vector B correctamente.");
		return;
	}

	double moduloB = Math::Sqrt(
		bx * bx + by * by + bz * bz);

	textBoxresultado->Text = String::Format(
		"|B| = {0:F4}", moduloB);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double ax, ay, az, bx, by, bz;

	if (!Double::TryParse(textBox_ax->Text, ax) ||
		!Double::TryParse(textBox_ay->Text, ay) ||
		!Double::TryParse(textBox_az->Text, az) ||
		!Double::TryParse(textBox_bx->Text, bx) ||
		!Double::TryParse(textBox_by->Text, by) ||
		!Double::TryParse(textBox_bz->Text, bz))
	{
		MessageBox::Show("Ingresa los seis valores correctamente.");
		return;
	}

	textBoxresultado->Text = String::Format(
		"A - B = ({0}, {1}, {2})",
		ax - bx, ay - by, az - bz);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	double ax, ay, az, bx, by, bz;

	if (!Double::TryParse(textBox_ax->Text, ax) ||
		!Double::TryParse(textBox_ay->Text, ay) ||
		!Double::TryParse(textBox_az->Text, az) ||
		!Double::TryParse(textBox_bx->Text, bx) ||
		!Double::TryParse(textBox_by->Text, by) ||
		!Double::TryParse(textBox_bz->Text, bz))
	{
		MessageBox::Show("Ingresa los seis valores correctamente.");
		return;
	}

	double producto = ax * bx + ay * by + az * bz;

	textBoxresultado->Text = String::Format(
		"A . B = {0:F4}", producto);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	double ax, ay, az, bx, by, bz;

	if (!Double::TryParse(textBox_ax->Text, ax) ||
		!Double::TryParse(textBox_ay->Text, ay) ||
		!Double::TryParse(textBox_az->Text, az) ||
		!Double::TryParse(textBox_bx->Text, bx) ||
		!Double::TryParse(textBox_by->Text, by) ||
		!Double::TryParse(textBox_bz->Text, bz))
	{
		MessageBox::Show("Ingresa los seis valores correctamente.");
		return;
	}

	double x = ay * bz - az * by;
	double y = az * bx - ax * bz;
	double z = ax * by - ay * bx;

	textBoxresultado->Text = String::Format(
		"A x B = ({0:F4}, {1:F4}, {2:F4})",
		x, y, z);
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
