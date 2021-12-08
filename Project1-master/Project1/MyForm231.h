#pragma once
#include <string> 
#include <random>
#include <iostream>

namespace Projkt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;

		   //3x3
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Panel^ panel1;


		   //4x4
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Panel^ panel2;






	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button13->Location = System::Drawing::Point(43, 25);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(195, 95);
			this->button13->TabIndex = 0;
			this->button13->Text = L"3х3";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Location = System::Drawing::Point(43, 139);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(195, 95);
			this->button14->TabIndex = 1;
			this->button14->Text = L"4х4";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->Location = System::Drawing::Point(43, 251);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(195, 95);
			this->button15->TabIndex = 2;
			this->button15->Text = L"¬ыйти";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(781, 657);
			this->panel2->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(812, 692);
			this->Controls->Add(this->panel2);
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Name = L"MyForm";
			this->Text = L"15 puzzle";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion

		int time_counter = 0;
		int moves_counter = 0;
		int min_time = 0;
		int min_moves = 0;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
		button10->Text = "restart";
		moves_counter = 0;//обнуление обнуление счетчика ходов
		time_counter = 0; //обнуление и включение таймера
		timer1->Enabled = true;
		timer2->Enabled = true;
		std::random_device rd;  //создание массива дл€ генерации пол€
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dist(1, 9);		//random
		int raz = 3, N;
		int** pole = new int* [raz];
		for (int i = 0; i < raz; i++)
		{
			pole[i] = new int[raz];
		}
		do
		{
			N = 0;
			for (int i = 0; i < raz; i++)
			{
				for (int j = 0; j < raz; j++)
				{
					pole[i][j] = 0;
				}
			}
			for (int i = 0; i < raz; i++)		//заполнение массива
			{
				for (int j = 0; j < raz;)
				{
					int temp = dist(gen);
					bool flag = true;
					for (int n = 0; n < raz && flag; n++)
					{
						for (int m = 0; m < raz && flag; m++)
						{
							if (temp == pole[n][m])
							{
								flag = false;
							}
						}
					}
					if (flag)
					{
						pole[i][j] = temp;
						j++;
					}
				}
			}
			int ni = 0; //первод в одномерный
			int* v = new int[raz * raz];
			for (int i = 0; i < raz; i++)
			{
				for (int j = 0; j < raz; j++)
				{
					if (pole[i][j] == 9)
						N += (i + 1) * 8;
					v[ni] = pole[i][j];
					ni++;
				}
			}
			//вычисление суммы дл€ проверки на решаемость
			for (int i = 0; i < raz * raz; i++)
			{
				if (v[i] != 9)
				{
					ni = 0;
					for (int j = i; j < raz * raz; j++)
					{
						if (v[i] > v[j] && v[j] != 9)
							ni++;
					}
					N += ni;
				}
			}
			delete[] v;
		} while (N % 2 != 0);//проверка на решаемость

		// обработка кнопок
		if (1)
		{

			String^ str2;
			std::string str1;
			int i = 0, j = 0;
			if (pole[i][j] != 9)
			{
				button1->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button1->Text = str2;
			}
			else
			{
				button1->Text = " ";
				button1->Visible = false;
			}

			j++;
			if (pole[i][j] != 9)
			{
				button2->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button2->Text = str2;
			}
			else
			{
				button2->Text = " ";
				button2->Visible = false;
			}
			j++;
			if (pole[i][j] != 9)
			{
				button3->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button3->Text = str2;
			}
			else
			{
				button3->Text = " ";
				button3->Visible = false;
			}
			j = 0; i++;
			if (pole[i][j] != 9)
			{
				button4->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button4->Text = str2;
			}
			else
			{
				button4->Text = " ";
				button4->Visible = false;
			}
			j++;
			if (pole[i][j] != 9)
			{
				button5->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button5->Text = str2;
			}
			else
			{
				button5->Text = " ";
				button5->Visible = false;
			}
			j++;
			if (pole[i][j] != 9)
			{
				button6->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button6->Text = str2;
			}
			else
			{
				button6->Text = " ";
				button6->Visible = false;
			}
			j = 0; i++;
			if (pole[i][j] != 9)
			{
				button7->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button7->Text = str2;
			}
			else
			{
				button7->Text = " ";
				button7->Visible = false;
			}
			j++;
			if (pole[i][j] != 9)
			{
				button8->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button8->Text = str2;
			}
			else
			{
				button8->Text = " ";
				button8->Visible = false;
			}
			j++;
			if (pole[i][j] != 9)
			{
				button9->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button9->Text = str2;
			}
			else
			{
				button9->Text = " ";
				button9->Visible = false;
			}
		}
		for (int i = 0; i < raz; i++)
		{
			delete[] pole[i];
		}
		delete[] pole;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ digit;
		if (button2->Text == " ")
		{
			digit = button1->Text;
			button1->Text = button2->Text;
			button2->Text = digit;
			button1->Visible = false;
			button2->Visible = true;
			moves_counter++;

		}
		else if (button4->Text == " ")
		{
			digit = button1->Text;
			button1->Text = button4->Text;
			button4->Text = digit;
			button1->Visible = false;
			button4->Visible = true;
			moves_counter++;
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button1->Text == " ")
		{
			digit = button2->Text;
			button2->Text = button1->Text;
			button1->Text = digit;
			button2->Visible = false;
			button1->Visible = true;
			moves_counter++;
		}
		else if (button3->Text == " ")
		{
			digit = button2->Text;
			button2->Text = button3->Text;
			button3->Text = digit;
			button2->Visible = false;
			button3->Visible = true;
			moves_counter++;
		}
		else if (button5->Text == " ")
		{
			digit = button2->Text;
			button2->Text = button5->Text;
			button5->Text = digit;
			button2->Visible = false;
			button5->Visible = true;
			moves_counter++;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button2->Text == " ")
		{
			digit = button3->Text;
			button3->Text = button2->Text;
			button2->Text = digit;
			button3->Visible = false;
			button2->Visible = true;
			moves_counter++;
		}
		else if (button6->Text == " ")
		{
			digit = button3->Text;
			button3->Text = button6->Text;
			button6->Text = digit;
			button3->Visible = false;
			button6->Visible = true;
			moves_counter++;
		}

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button1->Text == " ")
		{
			digit = button4->Text;
			button4->Text = button1->Text;
			button1->Text = digit;
			button4->Visible = false;
			button1->Visible = true;
			moves_counter++;
		}
		else if (button5->Text == " ")
		{
			digit = button4->Text;
			button4->Text = button5->Text;
			button5->Text = digit;
			button4->Visible = false;
			button5->Visible = true;
			moves_counter++;
		}
		else if (button7->Text == " ")
		{
			digit = button4->Text;
			button4->Text = button7->Text;
			button7->Text = digit;
			button4->Visible = false;
			button7->Visible = true;
			moves_counter++;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button2->Text == " ")
		{
			digit = button5->Text;
			button5->Text = button2->Text;
			button2->Text = digit;
			button5->Visible = false;
			button2->Visible = true;
			moves_counter++;
		}
		else if (button4->Text == " ")
		{
			digit = button5->Text;
			button5->Text = button4->Text;
			button4->Text = digit;
			button5->Visible = false;
			button4->Visible = true;
			moves_counter++;
		}
		else if (button6->Text == " ")
		{
			digit = button5->Text;
			button5->Text = button6->Text;
			button6->Text = digit;
			button5->Visible = false;
			button6->Visible = true;
			moves_counter++;
		}
		else if (button8->Text == " ")
		{
			digit = button5->Text;
			button5->Text = button8->Text;
			button8->Text = digit;
			button5->Visible = false;
			button8->Visible = true;
			moves_counter++;
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button3->Text == " ")
		{
			digit = button6->Text;
			button6->Text = button3->Text;
			button3->Text = digit;
			button6->Visible = false;
			button3->Visible = true;
			moves_counter++;
		}
		else if (button5->Text == " ")
		{
			digit = button6->Text;
			button6->Text = button5->Text;
			button5->Text = digit;
			button6->Visible = false;
			button5->Visible = true;
			moves_counter++;
		}
		else if (button9->Text == " ")
		{
			digit = button6->Text;
			button6->Text = button9->Text;
			button9->Text = digit;
			button6->Visible = false;
			button9->Visible = true;
			moves_counter++;
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button4->Text == " ")
		{
			digit = button7->Text;
			button7->Text = button4->Text;
			button4->Text = digit;
			button7->Visible = false;
			button4->Visible = true;
			moves_counter++;
		}
		else if (button8->Text == " ")
		{
			digit = button7->Text;
			button7->Text = button8->Text;
			button8->Text = digit;
			button7->Visible = false;
			button8->Visible = true;
			moves_counter++;
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button7->Text == " ")
		{
			digit = button8->Text;
			button8->Text = button7->Text;
			button7->Text = digit;
			button8->Visible = false;
			button7->Visible = true;
			moves_counter++;
		}
		else if (button5->Text == " ")
		{
			digit = button8->Text;
			button8->Text = button5->Text;
			button5->Text = digit;
			button8->Visible = false;
			button5->Visible = true;
			moves_counter++;
		}
		else if (button9->Text == " ")
		{
			digit = button8->Text;
			button8->Text = button9->Text;
			button9->Text = digit;
			button8->Visible = false;
			button9->Visible = true;
			moves_counter++;
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button6->Text == " ")
		{
			digit = button9->Text;
			button9->Text = button6->Text;
			button6->Text = digit;
			button9->Visible = false;
			button6->Visible = true;
			moves_counter++;
		}
		else if (button8->Text == " ")
		{
			digit = button9->Text;
			button9->Text = button8->Text;
			button8->Text = digit;
			button9->Visible = false;
			button8->Visible = true;
			moves_counter++;
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" && button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8")
		{
			timer1->Enabled = false;
			timer2->Enabled = false;
		}
		else
		{
			std::string str3 = "time: ";
			std::string str1 = std::to_string(time_counter++);
			str3 += str1;
			String^ str2 = gcnew String(str3.c_str());
			button12->Text = str2;
		}
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		std::string str3 = "moves: ";
		std::string str1 = std::to_string(moves_counter);
		str3 += str1;
		String^ str2 = gcnew String(str3.c_str());
		button11->Text = str2;
	}

	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {}


	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		
		panel2->Visible = false;
		{
			// 3x3

			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());

			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(537, 506);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"15 puzzle";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(14, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 136);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(192, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 136);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(369, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 136);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(14, 190);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 136);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(192, 190);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(149, 136);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(369, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(149, 136);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(14, 353);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(149, 136);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(192, 353);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(149, 136);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(369, 353);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(149, 136);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(14, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(149, 41);
			this->button10->TabIndex = 13;
			this->button10->Text = L"start";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->button11->Enabled = false;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F));
			this->button11->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button11->Location = System::Drawing::Point(369, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(149, 41);
			this->button11->TabIndex = 11;
			this->button11->Text = L"moves";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button12->Enabled = false;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(192, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(149, 41);
			this->button12->TabIndex = 14;
			this->button12->Text = L"time";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			//

			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Location = System::Drawing::Point(12, 524);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(537, 52);
			this->panel1->TabIndex = 20;
			//
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->groupBox1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);

			// 
			// MyForm
			// 
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1151, 692);
			this->Controls->Add(this->panel1);
			/*this->Controls->Add(this->groupBox2);*/
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"15 puzzle";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			/*this->groupBox2->ResumeLayout(false);*/
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
		}
		
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		
		panel2->Visible = false;
		{
			// 4x4

			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			
			this->groupBox2->SuspendLayout();
			
			this->SuspendLayout();
			 //
			 //groupBox2
			 //
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->groupBox2->Controls->Add(this->button28);
			this->groupBox2->Controls->Add(this->button29);
			this->groupBox2->Controls->Add(this->button30);
			this->groupBox2->Controls->Add(this->button31);
			this->groupBox2->Controls->Add(this->button24);
			this->groupBox2->Controls->Add(this->button25);
			this->groupBox2->Controls->Add(this->button26);
			this->groupBox2->Controls->Add(this->button27);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->button23);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Location = System::Drawing::Point(600, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(537, 506);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"15 puzzle";
			 //
			 //button28
			 //
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button28->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button28->Location = System::Drawing::Point(404, 383);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(103, 97);
			this->button28->TabIndex = 16;
			this->button28->Text = L"1";
			this->button28->UseVisualStyleBackColor = false;
			 //
			 //button29
			 //
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button29->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button29->Location = System::Drawing::Point(280, 383);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(103, 97);
			this->button29->TabIndex = 15;
			this->button29->Text = L"1";
			this->button29->UseVisualStyleBackColor = false;
			 //
			 //button30
			 //
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button30->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button30->Location = System::Drawing::Point(154, 383);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(103, 97);
			this->button30->TabIndex = 14;
			this->button30->Text = L"1";
			this->button30->UseVisualStyleBackColor = false;
			 //
			 //button31
			 //
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button31->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button31->Location = System::Drawing::Point(24, 383);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(103, 97);
			this->button31->TabIndex = 13;
			this->button31->Text = L"1";
			this->button31->UseVisualStyleBackColor = false;
			 //
			 //button24
			 //
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button24->Location = System::Drawing::Point(404, 266);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(103, 97);
			this->button24->TabIndex = 12;
			this->button24->Text = L"1";
			this->button24->UseVisualStyleBackColor = false;
			 //
			 //button25
			 //
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button25->Location = System::Drawing::Point(280, 266);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(103, 97);
			this->button25->TabIndex = 11;
			this->button25->Text = L"1";
			this->button25->UseVisualStyleBackColor = false;
			 //
			 //button26
			 //
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button26->Location = System::Drawing::Point(154, 266);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(103, 97);
			this->button26->TabIndex = 10;
			this->button26->Text = L"1";
			this->button26->UseVisualStyleBackColor = false;
			 //
			 //button27
			 //
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button27->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button27->Location = System::Drawing::Point(24, 266);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(103, 97);
			this->button27->TabIndex = 9;
			this->button27->Text = L"1";
			this->button27->UseVisualStyleBackColor = false;
			 //
			 //button20
			 //
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button20->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button20->Location = System::Drawing::Point(404, 151);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(103, 97);
			this->button20->TabIndex = 8;
			this->button20->Text = L"1";
			this->button20->UseVisualStyleBackColor = false;
			 //
			 // button21
			 //
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button21->Location = System::Drawing::Point(280, 151);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(103, 97);
			this->button21->TabIndex = 7;
			this->button21->Text = L"1";
			this->button21->UseVisualStyleBackColor = false;
			 //
			 // button22
			 //
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button22->Location = System::Drawing::Point(154, 151);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(103, 97);
			this->button22->TabIndex = 6;
			this->button22->Text = L"1";
			this->button22->UseVisualStyleBackColor = false;
			 //
			 // button23
			 //
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button23->Location = System::Drawing::Point(24, 151);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(103, 97);
			this->button23->TabIndex = 5;
			this->button23->Text = L"1";
			this->button23->UseVisualStyleBackColor = false;
			 //
			 // button19
			 //
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button19->Location = System::Drawing::Point(404, 35);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(103, 97);
			this->button19->TabIndex = 4;
			this->button19->Text = L"1";
			this->button19->UseVisualStyleBackColor = false;
			 //
			 // button18
			 //
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button18->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button18->Location = System::Drawing::Point(280, 35);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(103, 97);
			this->button18->TabIndex = 3;
			this->button18->Text = L"1";
			this->button18->UseVisualStyleBackColor = false;
			 //
			 // button17
			 //
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button17->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->Location = System::Drawing::Point(154, 35);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(103, 97);
			this->button17->TabIndex = 2;
			this->button17->Text = L"1";
			this->button17->UseVisualStyleBackColor = false;
			 //
			 // button16
			 //
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button16->Location = System::Drawing::Point(24, 35);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(103, 97);
			this->button16->TabIndex = 1;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->Controls->Add(this->groupBox2);
			this->groupBox2->ResumeLayout(false);
			}

	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}