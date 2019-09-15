#pragma once
#include "Recursividad.h"

namespace Lab1MichelleJuarez1254218 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(156, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese número";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(290, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(32, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 61);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Calcular Fibonacci";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(231, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 57);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Calcular Factorial";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(425, 78);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 57);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Calcular Binario";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Resultado Fibonacci: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(46, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(231, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Resultado Factorial: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(46, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Resultado Binario: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(983, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"TAREA";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(779, 203);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(244, 25);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Resultado Recursivo: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(779, 241);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(224, 25);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Resultado Iterativo: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1063, 70);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(158, 18);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Ingrese el multiplicador";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(862, 72);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(161, 18);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Ingrese el multiplicando";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(911, 93);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 26);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(1107, 93);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(63, 26);
			this->textBox3->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(1026, 94);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 25);
			this->label10->TabIndex = 15;
			this->label10->Text = L"*";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(880, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 58);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Calcular con recursividad";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1082, 125);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(114, 58);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Calculo iterativo";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(744, 410);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(244, 25);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Resultado Recursivo: ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(744, 448);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(224, 25);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Resultado Iterativo: ";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(800, 341);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(175, 57);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Verificar mediante Recursividad";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1019, 341);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 57);
			this->button7->TabIndex = 23;
			this->button7->Text = L"Verificar Iterativo";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1392, 585);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Declaracion de Stopwatch
		//Stopwatch^ stopWatch = gcnew Stopwatch();
		//stopWatch->Start();
		//Ejecucion Fibonacci
		int num = System::Convert::ToInt32(textBox1->Text);
		Recursividad^ recursividadObj = gcnew Recursividad();
		label2->Text = label2->Text + System::Convert::ToString(recursividadObj->Fibonacci(num));
		//stopWatch->Stop();
		//System::Windows::Forms::MessageBox::Show("Tiempo de ejecucion: " + System::Convert::ToString(stopWatch->Elapsed));
		//Leer archivo //Parametro es la ruta del archivo ("..//Archivos//numeros.csv");
		/*StreamReader^ streamRader = gcnew StreamReader("c://");
		String^ contenidoArchivo = streamRader->ReadToEnd;
		streamRader->Close();*/
		//Escribir archivo
		/*StreamWriter^ streamWriter = gcnew StreamWriter("c://");
		streamWriter->WriteLine("Texto que quieren escribir");
		streamWriter->Close();*/
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int num2 = System::Convert::ToInt32(textBox1->Text);
	Recursividad^ recursividaddObj = gcnew Recursividad();
	label3->Text = label3->Text + System::Convert::ToString(recursividaddObj->Factorial(num2));
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int num3 = System::Convert::ToInt32(textBox1->Text);
	Recursividad^ recursivObj = gcnew Recursividad();
	label4->Text = label4->Text + System::Convert::ToString(recursivObj->Binario(num3));
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ stopWatch = gcnew Stopwatch();
	stopWatch->Start();
	int num4 = System::Convert::ToInt32(textBox2->Text);
	int num5 = System::Convert::ToInt32(textBox3->Text);
	Recursividad^ productoRecursivo = gcnew Recursividad();
	label6->Text = label6->Text + System::Convert::ToString(productoRecursivo->Multiplicacion(num4, num5));
	stopWatch->Stop();
	System::Windows::Forms::MessageBox::Show("Tiempo de ejecucion: " + System::Convert::ToString(stopWatch->Elapsed));
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ stopWatch = gcnew Stopwatch();
	stopWatch->Start();
	int num6 = System::Convert::ToInt32(textBox2->Text);
	int num7 = System::Convert::ToInt32(textBox3->Text);
	Recursividad^ productoRecursivo = gcnew Recursividad();
	label7->Text = label7->Text + System::Convert::ToString(productoRecursivo->Multiplicacion(num6, num7));
	stopWatch->Stop();
	System::Windows::Forms::MessageBox::Show("Tiempo de ejecucion: " + System::Convert::ToString(stopWatch->Elapsed));
}
private: System::Void TextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
