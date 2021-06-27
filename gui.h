#pragma once
#include <iostream>

namespace Siggy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class gui : public System::Windows::Forms::Form
	{
	public:
		gui(void)
		{
			InitializeComponent();
		}

	protected:
		~gui()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ pnlToolbar;

	private: bool isDragging = false;
	private: Point offset;
	private: System::String^ version_string = gcnew String("1.0.0.0");

	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ pnlMain;

	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Label^ lblOutput;
	private: System::Windows::Forms::TextBox^ txtOutput;

	private: System::Windows::Forms::Label^ lblInput;
	private: System::Windows::Forms::TextBox^ txtInput;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ applicationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblVersion;
	private: System::Windows::Forms::Label^ lblCreds;
	private: System::Windows::Forms::Label^ lblSig;
	private: System::Windows::Forms::TextBox^ txtSigs;



	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->pnlToolbar = (gcnew System::Windows::Forms::Panel());
			   this->lblTitle = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->btnExit = (gcnew System::Windows::Forms::Button());
			   this->pnlMain = (gcnew System::Windows::Forms::Panel());
			   this->lblSig = (gcnew System::Windows::Forms::Label());
			   this->txtSigs = (gcnew System::Windows::Forms::TextBox());
			   this->lblVersion = (gcnew System::Windows::Forms::Label());
			   this->lblCreds = (gcnew System::Windows::Forms::Label());
			   this->btnClear = (gcnew System::Windows::Forms::Button());
			   this->lblOutput = (gcnew System::Windows::Forms::Label());
			   this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			   this->lblInput = (gcnew System::Windows::Forms::Label());
			   this->txtInput = (gcnew System::Windows::Forms::TextBox());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->applicationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->pnlToolbar->SuspendLayout();
			   this->pnlMain->SuspendLayout();
			   this->menuStrip1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // pnlToolbar
			   // 
			   this->pnlToolbar->BackColor = System::Drawing::SystemColors::Control;
			   this->pnlToolbar->Controls->Add(this->lblTitle);
			   this->pnlToolbar->Controls->Add(this->button1);
			   this->pnlToolbar->Controls->Add(this->btnExit);
			   this->pnlToolbar->Location = System::Drawing::Point(0, 0);
			   this->pnlToolbar->Name = L"pnlToolbar";
			   this->pnlToolbar->Size = System::Drawing::Size(353, 38);
			   this->pnlToolbar->TabIndex = 2;
			   this->pnlToolbar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &gui::panel1_MouseDown);
			   this->pnlToolbar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &gui::panel1_MouseMove);
			   this->pnlToolbar->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &gui::pnlToolbar_MouseUp);
			   // 
			   // lblTitle
			   // 
			   this->lblTitle->AutoSize = true;
			   this->lblTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblTitle->Location = System::Drawing::Point(3, 3);
			   this->lblTitle->Name = L"lblTitle";
			   this->lblTitle->Size = System::Drawing::Size(95, 31);
			   this->lblTitle->TabIndex = 13;
			   this->lblTitle->Text = L"SIGGY";
			   this->lblTitle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &gui::panel1_MouseDown);
			   this->lblTitle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &gui::panel1_MouseMove);
			   this->lblTitle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &gui::pnlToolbar_MouseUp);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::White;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(282, 3);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(30, 30);
			   this->button1->TabIndex = 1;
			   this->button1->Text = L"-";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &gui::button1_Click);
			   // 
			   // btnExit
			   // 
			   this->btnExit->BackColor = System::Drawing::Color::White;
			   this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnExit->Location = System::Drawing::Point(318, 3);
			   this->btnExit->Name = L"btnExit";
			   this->btnExit->Size = System::Drawing::Size(30, 30);
			   this->btnExit->TabIndex = 0;
			   this->btnExit->Text = L"X";
			   this->btnExit->UseVisualStyleBackColor = false;
			   this->btnExit->Click += gcnew System::EventHandler(this, &gui::btnExit_Click);
			   // 
			   // pnlMain
			   // 
			   this->pnlMain->BackColor = System::Drawing::Color::White;
			   this->pnlMain->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->pnlMain->Controls->Add(this->lblSig);
			   this->pnlMain->Controls->Add(this->txtSigs);
			   this->pnlMain->Controls->Add(this->lblVersion);
			   this->pnlMain->Controls->Add(this->lblCreds);
			   this->pnlMain->Controls->Add(this->btnClear);
			   this->pnlMain->Controls->Add(this->lblOutput);
			   this->pnlMain->Controls->Add(this->txtOutput);
			   this->pnlMain->Controls->Add(this->lblInput);
			   this->pnlMain->Controls->Add(this->txtInput);
			   this->pnlMain->Controls->Add(this->menuStrip1);
			   this->pnlMain->Location = System::Drawing::Point(4, 38);
			   this->pnlMain->Name = L"pnlMain";
			   this->pnlMain->Size = System::Drawing::Size(345, 202);
			   this->pnlMain->TabIndex = 3;
			   // 
			   // lblSig
			   // 
			   this->lblSig->AutoSize = true;
			   this->lblSig->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblSig->Location = System::Drawing::Point(30, 115);
			   this->lblSig->Name = L"lblSig";
			   this->lblSig->Size = System::Drawing::Size(89, 22);
			   this->lblSig->TabIndex = 17;
			   this->lblSig->Text = L"Sig Digs: ";
			   // 
			   // txtSigs
			   // 
			   this->txtSigs->BackColor = System::Drawing::Color::White;
			   this->txtSigs->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->txtSigs->Location = System::Drawing::Point(141, 112);
			   this->txtSigs->Name = L"txtSigs";
			   this->txtSigs->ReadOnly = true;
			   this->txtSigs->Size = System::Drawing::Size(196, 30);
			   this->txtSigs->TabIndex = 16;
			   // 
			   // lblVersion
			   // 
			   this->lblVersion->AutoSize = true;
			   this->lblVersion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblVersion->Location = System::Drawing::Point(250, 175);
			   this->lblVersion->Name = L"lblVersion";
			   this->lblVersion->Size = System::Drawing::Size(55, 15);
			   this->lblVersion->TabIndex = 15;
			   this->lblVersion->Text = L"Version: ";
			   this->lblVersion->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // lblCreds
			   // 
			   this->lblCreds->AutoSize = true;
			   this->lblCreds->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCreds->Location = System::Drawing::Point(136, 154);
			   this->lblCreds->Name = L"lblCreds";
			   this->lblCreds->Size = System::Drawing::Size(206, 15);
			   this->lblCreds->TabIndex = 14;
			   this->lblCreds->Text = L"Made By LegendsZ#1526 @ Discord";
			   // 
			   // btnClear
			   // 
			   this->btnClear->BackColor = System::Drawing::Color::White;
			   this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->btnClear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15));
			   this->btnClear->Location = System::Drawing::Point(12, 154);
			   this->btnClear->Name = L"btnClear";
			   this->btnClear->Size = System::Drawing::Size(107, 36);
			   this->btnClear->TabIndex = 7;
			   this->btnClear->Text = L"Clear";
			   this->btnClear->UseVisualStyleBackColor = false;
			   this->btnClear->Click += gcnew System::EventHandler(this, &gui::btnClear_Click_1);
			   // 
			   // lblOutput
			   // 
			   this->lblOutput->AutoSize = true;
			   this->lblOutput->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblOutput->Location = System::Drawing::Point(8, 79);
			   this->lblOutput->Name = L"lblOutput";
			   this->lblOutput->Size = System::Drawing::Size(127, 22);
			   this->lblOutput->TabIndex = 11;
			   this->lblOutput->Text = L"Sig Dig Count:";
			   // 
			   // txtOutput
			   // 
			   this->txtOutput->BackColor = System::Drawing::Color::White;
			   this->txtOutput->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->txtOutput->Location = System::Drawing::Point(141, 76);
			   this->txtOutput->Name = L"txtOutput";
			   this->txtOutput->ReadOnly = true;
			   this->txtOutput->Size = System::Drawing::Size(196, 30);
			   this->txtOutput->TabIndex = 10;
			   // 
			   // lblInput
			   // 
			   this->lblInput->AutoSize = true;
			   this->lblInput->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblInput->Location = System::Drawing::Point(8, 43);
			   this->lblInput->Name = L"lblInput";
			   this->lblInput->Size = System::Drawing::Size(131, 22);
			   this->lblInput->TabIndex = 8;
			   this->lblInput->Text = L"Enter Number: ";
			   // 
			   // txtInput
			   // 
			   this->txtInput->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->txtInput->Location = System::Drawing::Point(141, 40);
			   this->txtInput->Name = L"txtInput";
			   this->txtInput->Size = System::Drawing::Size(196, 30);
			   this->txtInput->TabIndex = 6;
			   this->txtInput->TextChanged += gcnew System::EventHandler(this, &gui::txtInput_TextChanged);
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->BackColor = System::Drawing::Color::White;
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->applicationToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(341, 27);
			   this->menuStrip1->TabIndex = 12;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // applicationToolStripMenuItem
			   // 
			   this->applicationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->exitToolStripMenuItem,
					   this->clearToolStripMenuItem
			   });
			   this->applicationToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->applicationToolStripMenuItem->Name = L"applicationToolStripMenuItem";
			   this->applicationToolStripMenuItem->Size = System::Drawing::Size(90, 23);
			   this->applicationToolStripMenuItem->Text = L"Application";
			   // 
			   // exitToolStripMenuItem
			   // 
			   this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			   this->exitToolStripMenuItem->Size = System::Drawing::Size(111, 24);
			   this->exitToolStripMenuItem->Text = L"Exit";
			   this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &gui::exitToolStripMenuItem_Click);
			   // 
			   // clearToolStripMenuItem
			   // 
			   this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			   this->clearToolStripMenuItem->Size = System::Drawing::Size(111, 24);
			   this->clearToolStripMenuItem->Text = L"Clear";
			   this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &gui::btnClear_Click_1);
			   // 
			   // gui
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::Control;
			   this->ClientSize = System::Drawing::Size(353, 245);
			   this->Controls->Add(this->pnlMain);
			   this->Controls->Add(this->pnlToolbar);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"gui";
			   this->ShowIcon = false;
			   this->Text = L"Siggy | BETA";
			   this->Load += gcnew System::EventHandler(this, &gui::gui_Load);
			   this->pnlToolbar->ResumeLayout(false);
			   this->pnlToolbar->PerformLayout();
			   this->pnlMain->ResumeLayout(false);
			   this->pnlMain->PerformLayout();
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void gui_Load(System::Object^ sender, System::EventArgs^ e) {
		lblVersion->Text += version_string;
	}
	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		isDragging = true;
		offset = e->Location;
	}
	private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isDragging) {
			Point current = PointToScreen(Point(e->X, e->Y));
			Location = Point(current.X - offset.X, current.Y - offset.Y);
		}
	}
	private: System::Void pnlToolbar_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		isDragging = false;
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void txtInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtInput->Text->ToString()->Equals("")) {
			btnClear->PerformClick();
			return;
		}
		
		for (int i = 0; i < txtInput->Text->ToString()->Length; i++) {
			//remove the alpha and signs
		}
		if (!isdigit(txtInput->Text->ToString()[txtInput->Text->ToString()->Length - 1]) && !txtInput->Text->ToString()[txtInput->Text->ToString()->Length-1] == '.') {
			txtInput->Text = txtInput->Text->ToString()->Substring(0, txtInput->Text->ToString()->Length - 1);
			txtInput->Select(txtInput->Text->ToString()->Length, 0);
		}
		String^ value_input = txtInput->Text->ToString();
		txtOutput->Text = value_input;

		int numSigs = 0;
		Char* nums = new Char[value_input->Length - 1];
		int dot;
		int realNum = -1;

		if (value_input->Contains(".")) {
			for (int i = 0; i < value_input->Length; i++) {
				if (value_input[i].ToString()->Equals(".")) {
					dot = i;
					if (realNum == -1) {
						realNum = dot + 1;
					}
					break;
				}
				else {
					if (realNum == -1 && !value_input[i].ToString()->Equals("0")) {
						realNum = i;
					}
				}
			}
		}

		if (!value_input->Contains(".")) {
			for (int i = 0; i < value_input->Length; i++) {
				if (!value_input[i].ToString()->Equals("0")) {
					nums[numSigs++] = value_input[i];
				}
				else {
					bool start = false;
					bool end = false;
					for (int k = 0; k < i; k++) {
						if (!value_input[k].ToString()->Equals("0")) {
							start = true;
						}
					}
					for (int k = i; k < value_input->Length; k++) {
						if (!value_input[k].ToString()->Equals("0")) {
							end = true;
						}
					}
					if (start == true && end == true) {
						nums[numSigs++] = value_input[i];
					}
				}
			}
		}
		else {
			if (realNum != -1) {
				for (int i = realNum; i < value_input->Length; i++) {
					if (!value_input[i].ToString()->Equals(".")) {
						nums[numSigs++] = value_input[i];
					}

				}
			}
		}
		txtOutput->Text = numSigs.ToString();
		txtSigs->Text = "";
		for (int i = 0; i < numSigs; i++) {
			txtSigs->Text += nums[i].ToString();
		}
	}
	private: System::Void btnClear_Click_1(System::Object^ sender, System::EventArgs^ e) {
		txtInput->Text = "";
		txtOutput->Text = "";
		txtSigs->Text = "";
	}
	};
}
