#pragma once

namespace TicTacToe {

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

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button10;


	private: System::Windows::Forms::Button^ button11;



	private:


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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(124, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 100);
			this->button2->TabIndex = 1;
			this->button2->TabStop = false;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(230, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 100);
			this->button3->TabIndex = 2;
			this->button3->TabStop = false;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(18, 127);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 3;
			this->button4->TabStop = false;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(124, 127);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 4;
			this->button5->TabStop = false;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->button5->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(230, 127);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 5;
			this->button6->TabStop = false;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->button6->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->button6->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(18, 233);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 100);
			this->button7->TabIndex = 6;
			this->button7->TabStop = false;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->button7->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->button7->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(124, 233);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 100);
			this->button8->TabIndex = 7;
			this->button8->TabStop = false;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->button8->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->button8->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(230, 233);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 100);
			this->button9->TabIndex = 8;
			this->button9->TabStop = false;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->button9->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->button9->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->CausesValidation = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(18, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 100);
			this->button1->TabIndex = 0;
			this->button1->TabStop = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightGray;
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(18, 339);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(150, 100);
			this->button10->TabIndex = 9;
			this->button10->TabStop = false;
			this->button10->Text = L"New Game";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::LightGray;
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(174, 339);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(150, 100);
			this->button11->TabIndex = 10;
			this->button11->TabStop = false;
			this->button11->Text = L"Exit";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(355, 475);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Tic Tac Toe";
			this->ResumeLayout(false);

		}
#pragma endregion
		bool turn = true;
		int turn_count = 0;
	private: System::Void button_click(System::Object^ sender, System::EventArgs^ e) {
		Button^ b = safe_cast<Button^>(sender);
		if (turn)
		{
			b->Text = "X";
			b->BackColor = Color::LightGreen;
		}
		else
		{
			b->Text = "O";
			b->BackColor = Color::Cyan;
		}
		turn = !turn;
		b->Enabled = false;
		turn_count++;
		checkforWinner();

	}
	private: System::Void checkforWinner() {
		if (button1->Text == button2->Text && button2->Text == button3->Text && !button1->Enabled)
		{
			button1->BackColor = Color::Red;
			button2->BackColor = Color::Red;
			button3->BackColor = Color::Red;
			if (button1->Text == "X")
				MessageBox::Show("Player X Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			else
				MessageBox::Show("Player O Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			disableButtons();
			return;
		}
		if (button4->Text == button5->Text && button5->Text == button6->Text && !button4->Enabled)
		{
			button4->BackColor = Color::Red;
			button5->BackColor = Color::Red;
			button6->BackColor = Color::Red;
			if (button4->Text == "X")
				MessageBox::Show("Player X Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			else
				MessageBox::Show("Player O Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			disableButtons();
			return;
		}
		if (button7->Text == button8->Text && button8->Text == button9->Text && !button7->Enabled)
		{
			button7->BackColor = Color::Red;
			button8->BackColor = Color::Red;
			button9->BackColor = Color::Red;
			if (button7->Text == "X")
				MessageBox::Show("Player X Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			else
				MessageBox::Show("Player O Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			disableButtons();
			return;
		}
		if (button1->Text == button4->Text && button4->Text == button7->Text && !button1->Enabled)
		{
			button1->BackColor = Color::Red;
			button4->BackColor = Color::Red;
			button7->BackColor = Color::Red;
			if (button1->Text == "X")
				MessageBox::Show("Player X Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			else
				MessageBox::Show("Player O Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			disableButtons();
			return;
		}
		if (button2->Text == button5->Text && button5->Text == button8->Text && !button2->Enabled)
		{
			button2->BackColor = Color::Red;
			button5->BackColor = Color::Red;
			button8->BackColor = Color::Red;
			if (button2->Text == "X")
				MessageBox::Show("Player X Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			else
				MessageBox::Show("Player O Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			disableButtons();
			return;
		}
		if (button3->Text == button6->Text && button6->Text == button9->Text && !button3->Enabled)
		{
			button3->BackColor = Color::Red;
			button6->BackColor = Color::Red;
			button9->BackColor = Color::Red;
			if (button3->Text == "X")
				MessageBox::Show("Player X Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			else
				MessageBox::Show("Player O Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			disableButtons();
			return;
		}
		if (button1->Text == button5->Text && button5->Text == button9->Text && !button1->Enabled)
		{
			button1->BackColor = Color::Red;
			button5->BackColor = Color::Red;
			button9->BackColor = Color::Red;
			if (button1->Text == "X")
				MessageBox::Show("Player X Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			else
				MessageBox::Show("Player O Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			disableButtons();
			return;
		}
		if (button3->Text == button5->Text && button5->Text == button7->Text && !button3->Enabled)
		{
			button3->BackColor = Color::Red;
			button5->BackColor = Color::Red;
			button7->BackColor = Color::Red;
			if (button3->Text == "X")
				MessageBox::Show("Player X Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			else
				MessageBox::Show("Player O Wins", "Result", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			disableButtons();
			return;
		}
		if (turn_count == 9)
		{
			MessageBox::Show("It's a Draw", "Result",MessageBoxButtons::OK,MessageBoxIcon::Information);
			return;
		}
	}
	private: System::Void disableButtons() {
		for each(Control^ c in Controls)
		{
			Button^ b = safe_cast<Button^>(c);
			b->Enabled = false;
			button10->Enabled = true;
			button11->Enabled = true;
		}
	}
private: System::Void button_enter(System::Object^ sender, System::EventArgs^ e) {
	Button^ b = safe_cast<Button^>(sender);
	if (b->Enabled)
	{
		if (turn)
			b->Text = "X";
		else
			b->Text = "O";
	}
}
private: System::Void button_leave(System::Object^ sender, System::EventArgs^ e) {
	Button^ b = safe_cast<Button^>(sender);
	if (b->Enabled)
		b->Text = "";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	turn = true;
	turn_count = 0;
	for each (Control ^ c in Controls)
	{
		Button^ b = safe_cast<Button^>(c);
		b->Enabled = true;
		b->Text = "";
		b->BackColor = Color::White;
		button10->BackColor = Color::LightGray;
		button11->BackColor = Color::LightGray;
		button10->Text = "New Game";
		button11->Text =  "Exit";
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
	}
};
}
