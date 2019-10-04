#pragma once
#include "Solitario.h"
#include "Mazo.h"
#include "Pila.h"
#include "Carta.h"

namespace PA_Lab3_FranciscoMorales_1223319 {

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
	private: System::Windows::Forms::Button^  repartirBtn;
	protected:

	private: System::Windows::Forms::Label^  mazo_Lbl;
	private: System::Windows::Forms::Label^  pila1_Lbl;
	private: System::Windows::Forms::Label^  pila2_Lbl;
	private: System::Windows::Forms::Label^  pila3_Lbl;
	private: System::Windows::Forms::Label^  pila4_Lbl;
	private: System::Windows::Forms::Label^  pila5_Lbl;
	private: System::Windows::Forms::Label^  pila6_Lbl;
	private: System::Windows::Forms::Label^  pila7_Lbl;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::RadioButton^  mazoInicial;
	private: System::Windows::Forms::RadioButton^  pila1Inicial;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RadioButton^  pila7Inicial;
	private: System::Windows::Forms::RadioButton^  pila6Inicial;

	private: System::Windows::Forms::RadioButton^  pila5Inicial;
	private: System::Windows::Forms::RadioButton^  pila4Inicial;
	private: System::Windows::Forms::RadioButton^  pila3Inicial;
	private: System::Windows::Forms::RadioButton^  pila2Inicial;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::RadioButton^  pila7Final;
	private: System::Windows::Forms::RadioButton^  pila6Final;
	private: System::Windows::Forms::RadioButton^  pila5Final;
	private: System::Windows::Forms::RadioButton^  pila4Final;
	private: System::Windows::Forms::RadioButton^  pila3Final;
	private: System::Windows::Forms::RadioButton^  pila2Final;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  pila1Final;
	private: System::Windows::Forms::Button^  moverBtn;
	private: System::Windows::Forms::Button^  bajarBtn;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
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
			this->repartirBtn = (gcnew System::Windows::Forms::Button());
			this->mazo_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila1_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila2_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila3_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila4_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila5_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila6_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila7_Lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mazoInicial = (gcnew System::Windows::Forms::RadioButton());
			this->pila1Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pila7Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->pila6Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->pila5Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->pila4Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->pila3Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->pila2Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pila7Final = (gcnew System::Windows::Forms::RadioButton());
			this->pila6Final = (gcnew System::Windows::Forms::RadioButton());
			this->pila5Final = (gcnew System::Windows::Forms::RadioButton());
			this->pila4Final = (gcnew System::Windows::Forms::RadioButton());
			this->pila3Final = (gcnew System::Windows::Forms::RadioButton());
			this->pila2Final = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pila1Final = (gcnew System::Windows::Forms::RadioButton());
			this->moverBtn = (gcnew System::Windows::Forms::Button());
			this->bajarBtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// repartirBtn
			// 
			this->repartirBtn->Location = System::Drawing::Point(346, 24);
			this->repartirBtn->Name = L"repartirBtn";
			this->repartirBtn->Size = System::Drawing::Size(93, 23);
			this->repartirBtn->TabIndex = 0;
			this->repartirBtn->Text = L"Repartir cartas";
			this->repartirBtn->UseVisualStyleBackColor = true;
			this->repartirBtn->Click += gcnew System::EventHandler(this, &MyForm::repartir_Btn_Click);
			// 
			// mazo_Lbl
			// 
			this->mazo_Lbl->AutoSize = true;
			this->mazo_Lbl->Location = System::Drawing::Point(113, 186);
			this->mazo_Lbl->Name = L"mazo_Lbl";
			this->mazo_Lbl->Size = System::Drawing::Size(13, 13);
			this->mazo_Lbl->TabIndex = 1;
			this->mazo_Lbl->Text = L"--";
			// 
			// pila1_Lbl
			// 
			this->pila1_Lbl->AutoSize = true;
			this->pila1_Lbl->Location = System::Drawing::Point(199, 211);
			this->pila1_Lbl->Name = L"pila1_Lbl";
			this->pila1_Lbl->Size = System::Drawing::Size(13, 13);
			this->pila1_Lbl->TabIndex = 2;
			this->pila1_Lbl->Text = L"--";
			// 
			// pila2_Lbl
			// 
			this->pila2_Lbl->AutoSize = true;
			this->pila2_Lbl->Location = System::Drawing::Point(256, 211);
			this->pila2_Lbl->Name = L"pila2_Lbl";
			this->pila2_Lbl->Size = System::Drawing::Size(13, 13);
			this->pila2_Lbl->TabIndex = 3;
			this->pila2_Lbl->Text = L"--";
			// 
			// pila3_Lbl
			// 
			this->pila3_Lbl->AutoSize = true;
			this->pila3_Lbl->Location = System::Drawing::Point(313, 211);
			this->pila3_Lbl->Name = L"pila3_Lbl";
			this->pila3_Lbl->Size = System::Drawing::Size(13, 13);
			this->pila3_Lbl->TabIndex = 4;
			this->pila3_Lbl->Text = L"--";
			// 
			// pila4_Lbl
			// 
			this->pila4_Lbl->AutoSize = true;
			this->pila4_Lbl->Location = System::Drawing::Point(370, 211);
			this->pila4_Lbl->Name = L"pila4_Lbl";
			this->pila4_Lbl->Size = System::Drawing::Size(13, 13);
			this->pila4_Lbl->TabIndex = 5;
			this->pila4_Lbl->Text = L"--";
			// 
			// pila5_Lbl
			// 
			this->pila5_Lbl->AutoSize = true;
			this->pila5_Lbl->Location = System::Drawing::Point(427, 211);
			this->pila5_Lbl->Name = L"pila5_Lbl";
			this->pila5_Lbl->Size = System::Drawing::Size(13, 13);
			this->pila5_Lbl->TabIndex = 6;
			this->pila5_Lbl->Text = L"--";
			// 
			// pila6_Lbl
			// 
			this->pila6_Lbl->AutoSize = true;
			this->pila6_Lbl->Location = System::Drawing::Point(484, 211);
			this->pila6_Lbl->Name = L"pila6_Lbl";
			this->pila6_Lbl->Size = System::Drawing::Size(13, 13);
			this->pila6_Lbl->TabIndex = 7;
			this->pila6_Lbl->Text = L"--";
			// 
			// pila7_Lbl
			// 
			this->pila7_Lbl->AutoSize = true;
			this->pila7_Lbl->Location = System::Drawing::Point(541, 211);
			this->pila7_Lbl->Name = L"pila7_Lbl";
			this->pila7_Lbl->Size = System::Drawing::Size(13, 13);
			this->pila7_Lbl->TabIndex = 8;
			this->pila7_Lbl->Text = L"--";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Mover desde:";
			// 
			// mazoInicial
			// 
			this->mazoInicial->AutoSize = true;
			this->mazoInicial->Checked = true;
			this->mazoInicial->Location = System::Drawing::Point(81, 13);
			this->mazoInicial->Name = L"mazoInicial";
			this->mazoInicial->Size = System::Drawing::Size(51, 17);
			this->mazoInicial->TabIndex = 11;
			this->mazoInicial->TabStop = true;
			this->mazoInicial->Text = L"Mazo";
			this->mazoInicial->UseVisualStyleBackColor = true;
			// 
			// pila1Inicial
			// 
			this->pila1Inicial->AutoSize = true;
			this->pila1Inicial->Location = System::Drawing::Point(167, 13);
			this->pila1Inicial->Name = L"pila1Inicial";
			this->pila1Inicial->Size = System::Drawing::Size(51, 17);
			this->pila1Inicial->TabIndex = 12;
			this->pila1Inicial->Text = L"Pila 1";
			this->pila1Inicial->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pila7Inicial);
			this->panel1->Controls->Add(this->pila6Inicial);
			this->panel1->Controls->Add(this->pila5Inicial);
			this->panel1->Controls->Add(this->pila4Inicial);
			this->panel1->Controls->Add(this->pila3Inicial);
			this->panel1->Controls->Add(this->pila2Inicial);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pila1Inicial);
			this->panel1->Controls->Add(this->mazoInicial);
			this->panel1->Location = System::Drawing::Point(35, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(567, 42);
			this->panel1->TabIndex = 13;
			// 
			// pila7Inicial
			// 
			this->pila7Inicial->AutoSize = true;
			this->pila7Inicial->Location = System::Drawing::Point(509, 13);
			this->pila7Inicial->Name = L"pila7Inicial";
			this->pila7Inicial->Size = System::Drawing::Size(51, 17);
			this->pila7Inicial->TabIndex = 18;
			this->pila7Inicial->Text = L"Pila 7";
			this->pila7Inicial->UseVisualStyleBackColor = true;
			// 
			// pila6Inicial
			// 
			this->pila6Inicial->AutoSize = true;
			this->pila6Inicial->Location = System::Drawing::Point(452, 13);
			this->pila6Inicial->Name = L"pila6Inicial";
			this->pila6Inicial->Size = System::Drawing::Size(51, 17);
			this->pila6Inicial->TabIndex = 17;
			this->pila6Inicial->Text = L"Pila 6";
			this->pila6Inicial->UseVisualStyleBackColor = true;
			// 
			// pila5Inicial
			// 
			this->pila5Inicial->AutoSize = true;
			this->pila5Inicial->Location = System::Drawing::Point(395, 13);
			this->pila5Inicial->Name = L"pila5Inicial";
			this->pila5Inicial->Size = System::Drawing::Size(51, 17);
			this->pila5Inicial->TabIndex = 16;
			this->pila5Inicial->Text = L"Pila 5";
			this->pila5Inicial->UseVisualStyleBackColor = true;
			// 
			// pila4Inicial
			// 
			this->pila4Inicial->AutoSize = true;
			this->pila4Inicial->Location = System::Drawing::Point(338, 13);
			this->pila4Inicial->Name = L"pila4Inicial";
			this->pila4Inicial->Size = System::Drawing::Size(51, 17);
			this->pila4Inicial->TabIndex = 15;
			this->pila4Inicial->Text = L"Pila 4";
			this->pila4Inicial->UseVisualStyleBackColor = true;
			// 
			// pila3Inicial
			// 
			this->pila3Inicial->AutoSize = true;
			this->pila3Inicial->Location = System::Drawing::Point(281, 13);
			this->pila3Inicial->Name = L"pila3Inicial";
			this->pila3Inicial->Size = System::Drawing::Size(51, 17);
			this->pila3Inicial->TabIndex = 14;
			this->pila3Inicial->Text = L"Pila 3";
			this->pila3Inicial->UseVisualStyleBackColor = true;
			// 
			// pila2Inicial
			// 
			this->pila2Inicial->AutoSize = true;
			this->pila2Inicial->Location = System::Drawing::Point(224, 13);
			this->pila2Inicial->Name = L"pila2Inicial";
			this->pila2Inicial->Size = System::Drawing::Size(51, 17);
			this->pila2Inicial->TabIndex = 13;
			this->pila2Inicial->Text = L"Pila 2";
			this->pila2Inicial->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pila7Final);
			this->panel2->Controls->Add(this->pila6Final);
			this->panel2->Controls->Add(this->pila5Final);
			this->panel2->Controls->Add(this->pila4Final);
			this->panel2->Controls->Add(this->pila3Final);
			this->panel2->Controls->Add(this->pila2Final);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->pila1Final);
			this->panel2->Location = System::Drawing::Point(35, 120);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(567, 42);
			this->panel2->TabIndex = 19;
			// 
			// pila7Final
			// 
			this->pila7Final->AutoSize = true;
			this->pila7Final->Location = System::Drawing::Point(509, 13);
			this->pila7Final->Name = L"pila7Final";
			this->pila7Final->Size = System::Drawing::Size(51, 17);
			this->pila7Final->TabIndex = 18;
			this->pila7Final->Text = L"Pila 7";
			this->pila7Final->UseVisualStyleBackColor = true;
			// 
			// pila6Final
			// 
			this->pila6Final->AutoSize = true;
			this->pila6Final->Location = System::Drawing::Point(452, 13);
			this->pila6Final->Name = L"pila6Final";
			this->pila6Final->Size = System::Drawing::Size(51, 17);
			this->pila6Final->TabIndex = 17;
			this->pila6Final->Text = L"Pila 6";
			this->pila6Final->UseVisualStyleBackColor = true;
			// 
			// pila5Final
			// 
			this->pila5Final->AutoSize = true;
			this->pila5Final->Location = System::Drawing::Point(395, 13);
			this->pila5Final->Name = L"pila5Final";
			this->pila5Final->Size = System::Drawing::Size(51, 17);
			this->pila5Final->TabIndex = 16;
			this->pila5Final->Text = L"Pila 5";
			this->pila5Final->UseVisualStyleBackColor = true;
			// 
			// pila4Final
			// 
			this->pila4Final->AutoSize = true;
			this->pila4Final->Location = System::Drawing::Point(338, 13);
			this->pila4Final->Name = L"pila4Final";
			this->pila4Final->Size = System::Drawing::Size(51, 17);
			this->pila4Final->TabIndex = 15;
			this->pila4Final->Text = L"Pila 4";
			this->pila4Final->UseVisualStyleBackColor = true;
			// 
			// pila3Final
			// 
			this->pila3Final->AutoSize = true;
			this->pila3Final->Location = System::Drawing::Point(281, 13);
			this->pila3Final->Name = L"pila3Final";
			this->pila3Final->Size = System::Drawing::Size(51, 17);
			this->pila3Final->TabIndex = 14;
			this->pila3Final->Text = L"Pila 3";
			this->pila3Final->UseVisualStyleBackColor = true;
			// 
			// pila2Final
			// 
			this->pila2Final->AutoSize = true;
			this->pila2Final->Location = System::Drawing::Point(224, 13);
			this->pila2Final->Name = L"pila2Final";
			this->pila2Final->Size = System::Drawing::Size(51, 17);
			this->pila2Final->TabIndex = 13;
			this->pila2Final->Text = L"Pila 2";
			this->pila2Final->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Mover hacia:";
			// 
			// pila1Final
			// 
			this->pila1Final->AutoSize = true;
			this->pila1Final->Checked = true;
			this->pila1Final->Location = System::Drawing::Point(167, 13);
			this->pila1Final->Name = L"pila1Final";
			this->pila1Final->Size = System::Drawing::Size(51, 17);
			this->pila1Final->TabIndex = 12;
			this->pila1Final->TabStop = true;
			this->pila1Final->Text = L"Pila 1";
			this->pila1Final->UseVisualStyleBackColor = true;
			// 
			// moverBtn
			// 
			this->moverBtn->Enabled = false;
			this->moverBtn->Location = System::Drawing::Point(635, 105);
			this->moverBtn->Name = L"moverBtn";
			this->moverBtn->Size = System::Drawing::Size(89, 23);
			this->moverBtn->TabIndex = 20;
			this->moverBtn->Text = L"Mover";
			this->moverBtn->UseVisualStyleBackColor = true;
			this->moverBtn->Click += gcnew System::EventHandler(this, &MyForm::moverBtn_Click);
			// 
			// bajarBtn
			// 
			this->bajarBtn->Enabled = false;
			this->bajarBtn->Location = System::Drawing::Point(635, 157);
			this->bajarBtn->Name = L"bajarBtn";
			this->bajarBtn->Size = System::Drawing::Size(89, 23);
			this->bajarBtn->TabIndex = 21;
			this->bajarBtn->Text = L"Bajar del mazo";
			this->bajarBtn->UseVisualStyleBackColor = true;
			this->bajarBtn->Click += gcnew System::EventHandler(this, &MyForm::bajarBtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(113, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Mazo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(199, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Pila 1:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(256, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Pila 2:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(313, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 13);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Pila 3:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(370, 186);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Pila 4:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(427, 186);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Pila 5:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(484, 186);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Pila 6:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(541, 186);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Pila 7:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 520);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bajarBtn);
			this->Controls->Add(this->moverBtn);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pila7_Lbl);
			this->Controls->Add(this->pila6_Lbl);
			this->Controls->Add(this->pila5_Lbl);
			this->Controls->Add(this->pila4_Lbl);
			this->Controls->Add(this->pila3_Lbl);
			this->Controls->Add(this->pila2_Lbl);
			this->Controls->Add(this->pila1_Lbl);
			this->Controls->Add(this->mazo_Lbl);
			this->Controls->Add(this->repartirBtn);
			this->Name = L"MyForm";
			this->Text = L"Solitario";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Solitario *juego;

	private: System::Void repartir_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
		juego = new Solitario();
		MostrarCartas();
		moverBtn->Enabled = true;
		bajarBtn->Enabled = true;
	}

	private: System::Void moverBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		Pila *pilaInicio = new Pila();
		Pila *pilaFinal = new Pila();
		if (mazoInicial->Checked) {
			pilaInicio = juego->pilas[0];
		}
		else if (pila1Inicial->Checked) {
			pilaInicio = juego->pilas[1];
		}
		else if (pila2Inicial->Checked) {
			pilaInicio = juego->pilas[2];
		}
		else if (pila3Inicial->Checked) {
			pilaInicio = juego->pilas[3];
		}
		else if (pila4Inicial->Checked) {
			pilaInicio = juego->pilas[4];
		}
		else if (pila5Inicial->Checked) {
			pilaInicio = juego->pilas[5];
		}
		else if (pila6Inicial->Checked) {
			pilaInicio = juego->pilas[6];
		}
		else {
			pilaInicio = juego->pilas[7];
		}
		if (pila1Final->Checked) {
			pilaFinal = juego->pilas[1];
		}
		else if (pila2Final->Checked) {
			pilaFinal = juego->pilas[2];
		}
		else if (pila3Final->Checked) {
			pilaFinal = juego->pilas[3];
		}
		else if (pila4Final->Checked) {
			pilaFinal = juego->pilas[4];
		}
		else if (pila5Final->Checked) {
			pilaFinal = juego->pilas[5];
		}
		else if (pila6Final->Checked) {
			pilaFinal = juego->pilas[6];
		}
		else {
			pilaFinal = juego->pilas[7];
		}
		if (pilaInicio->head != nullptr) {
			Carta tempo = juego->Mover(pilaInicio, pilaFinal);
			Carta *temporal = &tempo;
			pilaFinal->head = new Carta(temporal->numero, temporal->color, temporal->volteado, temporal->sig);
			MostrarCartas();
		}
		else {
			MessageBox::Show("El movimiento no es válido", "Error");
		}
	}

	private: System::Void bajarBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		if (juego->pilas[0]->head != nullptr) {
			juego->pilas[0]->Pop();
			if (juego->pilas[0]->head != nullptr) {
				juego->pilas[0]->head->Voltear();
			}
			else {
				bajarBtn->Enabled = false;
			}
			MostrarCartas();
		}
	}

	private: System::Void MostrarCartas() {
		mazo_Lbl->Text = juego->pilas[0]->String();
		pila1_Lbl->Text = juego->pilas[1]->String();
		pila2_Lbl->Text = juego->pilas[2]->String();
		pila3_Lbl->Text = juego->pilas[3]->String();
		pila4_Lbl->Text = juego->pilas[4]->String();
		pila5_Lbl->Text = juego->pilas[5]->String();
		pila6_Lbl->Text = juego->pilas[6]->String();
		pila7_Lbl->Text = juego->pilas[7]->String();
	}
};
}
