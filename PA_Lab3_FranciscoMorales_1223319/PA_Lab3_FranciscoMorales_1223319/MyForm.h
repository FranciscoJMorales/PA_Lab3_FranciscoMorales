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
	private: System::Windows::Forms::Button^  repartir_Btn;
	private: System::Windows::Forms::Label^  mazo_Lbl;
	private: System::Windows::Forms::Label^  pila1_Lbl;
	private: System::Windows::Forms::Label^  pila2_Lbl;
	private: System::Windows::Forms::Label^  pila3_Lbl;
	private: System::Windows::Forms::Label^  pila4_Lbl;
	private: System::Windows::Forms::Label^  pila5_Lbl;
	private: System::Windows::Forms::Label^  pila6_Lbl;
	private: System::Windows::Forms::Label^  pila7_Lbl;
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
			this->repartir_Btn = (gcnew System::Windows::Forms::Button());
			this->mazo_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila1_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila2_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila3_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila4_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila5_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila6_Lbl = (gcnew System::Windows::Forms::Label());
			this->pila7_Lbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// repartir_Btn
			// 
			this->repartir_Btn->Location = System::Drawing::Point(12, 12);
			this->repartir_Btn->Name = L"repartir_Btn";
			this->repartir_Btn->Size = System::Drawing::Size(75, 23);
			this->repartir_Btn->TabIndex = 0;
			this->repartir_Btn->Text = L"Repartir cartas";
			this->repartir_Btn->UseVisualStyleBackColor = true;
			this->repartir_Btn->Click += gcnew System::EventHandler(this, &MyForm::repartir_Btn_Click);
			// 
			// mazo_Lbl
			// 
			this->mazo_Lbl->AutoSize = true;
			this->mazo_Lbl->Location = System::Drawing::Point(12, 70);
			this->mazo_Lbl->Name = L"mazo_Lbl";
			this->mazo_Lbl->Size = System::Drawing::Size(45, 13);
			this->mazo_Lbl->TabIndex = 1;
			this->mazo_Lbl->Text = L"<Mazo>";
			// 
			// pila1_Lbl
			// 
			this->pila1_Lbl->AutoSize = true;
			this->pila1_Lbl->Location = System::Drawing::Point(103, 116);
			this->pila1_Lbl->Name = L"pila1_Lbl";
			this->pila1_Lbl->Size = System::Drawing::Size(45, 13);
			this->pila1_Lbl->TabIndex = 2;
			this->pila1_Lbl->Text = L"<Pila 1>";
			// 
			// pila2_Lbl
			// 
			this->pila2_Lbl->AutoSize = true;
			this->pila2_Lbl->Location = System::Drawing::Point(154, 116);
			this->pila2_Lbl->Name = L"pila2_Lbl";
			this->pila2_Lbl->Size = System::Drawing::Size(45, 13);
			this->pila2_Lbl->TabIndex = 3;
			this->pila2_Lbl->Text = L"<Pila 2>";
			// 
			// pila3_Lbl
			// 
			this->pila3_Lbl->AutoSize = true;
			this->pila3_Lbl->Location = System::Drawing::Point(205, 116);
			this->pila3_Lbl->Name = L"pila3_Lbl";
			this->pila3_Lbl->Size = System::Drawing::Size(45, 13);
			this->pila3_Lbl->TabIndex = 4;
			this->pila3_Lbl->Text = L"<Pila 3>";
			// 
			// pila4_Lbl
			// 
			this->pila4_Lbl->AutoSize = true;
			this->pila4_Lbl->Location = System::Drawing::Point(256, 116);
			this->pila4_Lbl->Name = L"pila4_Lbl";
			this->pila4_Lbl->Size = System::Drawing::Size(45, 13);
			this->pila4_Lbl->TabIndex = 5;
			this->pila4_Lbl->Text = L"<Pila 4>";
			// 
			// pila5_Lbl
			// 
			this->pila5_Lbl->AutoSize = true;
			this->pila5_Lbl->Location = System::Drawing::Point(307, 116);
			this->pila5_Lbl->Name = L"pila5_Lbl";
			this->pila5_Lbl->Size = System::Drawing::Size(45, 13);
			this->pila5_Lbl->TabIndex = 6;
			this->pila5_Lbl->Text = L"<Pila 5>";
			// 
			// pila6_Lbl
			// 
			this->pila6_Lbl->AutoSize = true;
			this->pila6_Lbl->Location = System::Drawing::Point(358, 116);
			this->pila6_Lbl->Name = L"pila6_Lbl";
			this->pila6_Lbl->Size = System::Drawing::Size(45, 13);
			this->pila6_Lbl->TabIndex = 7;
			this->pila6_Lbl->Text = L"<Pila 6>";
			// 
			// pila7_Lbl
			// 
			this->pila7_Lbl->AutoSize = true;
			this->pila7_Lbl->Location = System::Drawing::Point(409, 116);
			this->pila7_Lbl->Name = L"pila7_Lbl";
			this->pila7_Lbl->Size = System::Drawing::Size(45, 13);
			this->pila7_Lbl->TabIndex = 8;
			this->pila7_Lbl->Text = L"<Pila 7>";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 292);
			this->Controls->Add(this->pila7_Lbl);
			this->Controls->Add(this->pila6_Lbl);
			this->Controls->Add(this->pila5_Lbl);
			this->Controls->Add(this->pila4_Lbl);
			this->Controls->Add(this->pila3_Lbl);
			this->Controls->Add(this->pila2_Lbl);
			this->Controls->Add(this->pila1_Lbl);
			this->Controls->Add(this->mazo_Lbl);
			this->Controls->Add(this->repartir_Btn);
			this->Name = L"MyForm";
			this->Text = L"Solitario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Solitario *juego;

	private: System::Void repartir_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
		juego = new Solitario();
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
