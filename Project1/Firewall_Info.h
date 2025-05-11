#pragma once
#include"AddRules.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Firewall_Info
	/// </summary>
	public ref class Firewall_Info : public System::Windows::Forms::Form
	{
	public:
		Firewall_Info(void)
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
		~Firewall_Info()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_info_firewall;
	private: System::Windows::Forms::Label^ lbl_icon;
	private: System::Windows::Forms::Label^ lbl_info1;
	private: System::Windows::Forms::Label^ lbl_info2;
	private: System::Windows::Forms::Label^ lbl_info3;
	private: System::Windows::Forms::RichTextBox^ richTxtBox_description;
	private: System::Windows::Forms::Button^ btn_CloseFIrewall;
	private: System::Windows::Forms::Button^ btn_Next_ShowRules;


	private: System::Windows::Forms::Panel^ panel_black;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;















	protected:

	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Firewall_Info::typeid));
			this->lbl_info_firewall = (gcnew System::Windows::Forms::Label());
			this->lbl_icon = (gcnew System::Windows::Forms::Label());
			this->lbl_info1 = (gcnew System::Windows::Forms::Label());
			this->lbl_info2 = (gcnew System::Windows::Forms::Label());
			this->lbl_info3 = (gcnew System::Windows::Forms::Label());
			this->richTxtBox_description = (gcnew System::Windows::Forms::RichTextBox());
			this->btn_CloseFIrewall = (gcnew System::Windows::Forms::Button());
			this->btn_Next_ShowRules = (gcnew System::Windows::Forms::Button());
			this->panel_black = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel_black->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_info_firewall
			// 
			this->lbl_info_firewall->AutoSize = true;
			this->lbl_info_firewall->BackColor = System::Drawing::Color::Transparent;
			this->lbl_info_firewall->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_info_firewall->ForeColor = System::Drawing::Color::White;
			this->lbl_info_firewall->Location = System::Drawing::Point(34, 3);
			this->lbl_info_firewall->Name = L"lbl_info_firewall";
			this->lbl_info_firewall->Size = System::Drawing::Size(113, 38);
			this->lbl_info_firewall->TabIndex = 0;
			this->lbl_info_firewall->Text = L"Firewall";
			// 
			// lbl_icon
			// 
			this->lbl_icon->BackColor = System::Drawing::Color::Transparent;
			this->lbl_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbl_icon.Image")));
			this->lbl_icon->Location = System::Drawing::Point(0, 2);
			this->lbl_icon->Name = L"lbl_icon";
			this->lbl_icon->Size = System::Drawing::Size(43, 48);
			this->lbl_icon->TabIndex = 0;
			// 
			// lbl_info1
			// 
			this->lbl_info1->AutoSize = true;
			this->lbl_info1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_info1->Location = System::Drawing::Point(-2, 50);
			this->lbl_info1->Name = L"lbl_info1";
			this->lbl_info1->Size = System::Drawing::Size(334, 59);
			this->lbl_info1->TabIndex = 0;
			this->lbl_info1->Text = L"Getting started";
			// 
			// lbl_info2
			// 
			this->lbl_info2->AutoSize = true;
			this->lbl_info2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_info2->Location = System::Drawing::Point(12, 110);
			this->lbl_info2->Name = L"lbl_info2";
			this->lbl_info2->Size = System::Drawing::Size(1278, 93);
			this->lbl_info2->TabIndex = 0;
			this->lbl_info2->Text = resources->GetString(L"lbl_info2.Text");
			// 
			// lbl_info3
			// 
			this->lbl_info3->AutoSize = true;
			this->lbl_info3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_info3->Location = System::Drawing::Point(8, 203);
			this->lbl_info3->Name = L"lbl_info3";
			this->lbl_info3->Size = System::Drawing::Size(101, 46);
			this->lbl_info3->TabIndex = 0;
			this->lbl_info3->Text = L"Basic";
			// 
			// richTxtBox_description
			// 
			this->richTxtBox_description->BackColor = System::Drawing::Color::White;
			this->richTxtBox_description->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->richTxtBox_description->Location = System::Drawing::Point(16, 257);
			this->richTxtBox_description->Name = L"richTxtBox_description";
			this->richTxtBox_description->ReadOnly = true;
			this->richTxtBox_description->Size = System::Drawing::Size(1238, 370);
			this->richTxtBox_description->TabIndex = 1;
			this->richTxtBox_description->Text = resources->GetString(L"richTxtBox_description.Text");
			this->richTxtBox_description->TextChanged += gcnew System::EventHandler(this, &Firewall_Info::richTxtBox_description_TextChanged);
			// 
			// btn_CloseFIrewall
			// 
			this->btn_CloseFIrewall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CloseFIrewall->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_CloseFIrewall->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_CloseFIrewall.Image")));
			this->btn_CloseFIrewall->Location = System::Drawing::Point(1023, 646);
			this->btn_CloseFIrewall->Name = L"btn_CloseFIrewall";
			this->btn_CloseFIrewall->Size = System::Drawing::Size(114, 33);
			this->btn_CloseFIrewall->TabIndex = 3;
			this->btn_CloseFIrewall->Text = L"  Exit";
			this->btn_CloseFIrewall->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_CloseFIrewall->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_CloseFIrewall->UseVisualStyleBackColor = true;
			this->btn_CloseFIrewall->Click += gcnew System::EventHandler(this, &Firewall_Info::btn_CloseFIrewall_Click);
			// 
			// btn_Next_ShowRules
			// 
			this->btn_Next_ShowRules->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Next_ShowRules->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Next_ShowRules->Location = System::Drawing::Point(1140, 646);
			this->btn_Next_ShowRules->Name = L"btn_Next_ShowRules";
			this->btn_Next_ShowRules->Size = System::Drawing::Size(114, 33);
			this->btn_Next_ShowRules->TabIndex = 2;
			this->btn_Next_ShowRules->Text = L"Next";
			this->btn_Next_ShowRules->UseVisualStyleBackColor = true;
			this->btn_Next_ShowRules->Click += gcnew System::EventHandler(this, &Firewall_Info::btn_Next_ShowRules_Click);
			// 
			// panel_black
			// 
			this->panel_black->BackColor = System::Drawing::Color::DarkMagenta;
			this->panel_black->Controls->Add(this->lbl_icon);
			this->panel_black->Controls->Add(this->lbl_info_firewall);
			this->panel_black->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_black->Location = System::Drawing::Point(0, 0);
			this->panel_black->Name = L"panel_black";
			this->panel_black->Size = System::Drawing::Size(1295, 47);
			this->panel_black->TabIndex = 8;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(970, 221);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(266, 28);
			this->linkLabel1->TabIndex = 9;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Click Here To Watch Tutorial";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Firewall_Info::linkLabel1_LinkClicked);
			// 
			// Firewall_Info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1295, 695);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->panel_black);
			this->Controls->Add(this->btn_CloseFIrewall);
			this->Controls->Add(this->btn_Next_ShowRules);
			this->Controls->Add(this->richTxtBox_description);
			this->Controls->Add(this->lbl_info3);
			this->Controls->Add(this->lbl_info2);
			this->Controls->Add(this->lbl_info1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1295, 695);
			this->MinimumSize = System::Drawing::Size(1295, 695);
			this->Name = L"Firewall_Info";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Firewall";
			this->Load += gcnew System::EventHandler(this, &Firewall_Info::Firewall_Info_Load);
			this->panel_black->ResumeLayout(false);
			this->panel_black->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btn_CloseFIrewall_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void btn_Next_ShowRules_Click(System::Object^ sender, System::EventArgs^ e) {
	AddRules^ addruleinfo = gcnew AddRules;
	this->Hide();
	addruleinfo->ShowDialog();
}
private: System::Void Firewall_Info_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	std::string googleDriveLink = "https://docs.google.com/document/d/1b9jb56P2ddnDWVuue-VUA8z5N9VeYnjQ/edit?usp=sharing&ouid=110095163394753110298&rtpof=true&sd=true";
	std::wstring widegoogleDriveLink = std::wstring(googleDriveLink.begin(), googleDriveLink.end());

	ShellExecuteW(nullptr, L"open", widegoogleDriveLink.c_str(), nullptr, nullptr, SW_SHOWNORMAL);
}

private: System::Void richTxtBox_description_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
