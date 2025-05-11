#pragma once
#include"Rules.h"
#include"Packets.h"

//Vector to store rules and packets
std::vector <Rules> rule_vec;
std::vector <Packet> packet_vec;

using namespace System;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

namespace Project1 {
	public ref class RulesDialogBox : public System::Windows::Forms::Form {
	public:
		// Constructor
		RulesDialogBox(System::String^ rulesText) {
			InitializeComponent();
			textBox_rules->Text = rulesText; // Set the text of the TextBox to display the rules
			// Prevent resizing of the form
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
		}

	private:
		// Initialize components
		void InitializeComponent(void) {
			this->textBox_rules = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox_rules
			// 
			this->textBox_rules->BackColor = System::Drawing::Color::White;
			this->textBox_rules->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_rules->Location = System::Drawing::Point(16, 15);
			this->textBox_rules->Margin = System::Windows::Forms::Padding(4);
			this->textBox_rules->MaximumSize = System::Drawing::Size(856, 440);
			this->textBox_rules->MinimumSize = System::Drawing::Size(856, 440);
			this->textBox_rules->Multiline = true;
			this->textBox_rules->Name = L"textBox_rules";
			this->textBox_rules->ReadOnly = true;
			this->textBox_rules->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox_rules->Size = System::Drawing::Size(856, 440);
			this->textBox_rules->TabIndex = 0;
			this->textBox_rules->TabStop = false;
			// 
			// RulesDialogBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(885, 468);
			this->Controls->Add(this->textBox_rules);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"RulesDialogBox";
			this->Text = L"Rules";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		System::Windows::Forms::TextBox^ textBox_rules;
	};
	/// <summary>
	/// Summary for AddRules
	/// </summary>
	public ref class AddRules : public System::Windows::Forms::Form
	{
	public:
		AddRules(void)
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
		~AddRules()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Label^ lbl_info1;
	private: System::Windows::Forms::Button^ btn_CloseRules;
	private: System::Windows::Forms::Button^ btn_Next_ShowPackets;
	private: System::Windows::Forms::Button^ btn_addRulesPanel;
	private: System::Windows::Forms::Button^ btn_browse_rules;
	private: System::Windows::Forms::RichTextBox^ richTextBox_rulesInfo;
	private: System::Windows::Forms::Panel^ panel_addRules;
	private: System::Windows::Forms::Button^ btn_CancelRules;
	private: System::Windows::Forms::Button^ btn_addRules;
	private: System::Windows::Forms::Label^ lbl_addRules;
	private: System::Windows::Forms::Panel^ panel_addRules2;
	private: System::Windows::Forms::ComboBox^ comboBox_Rules_action;
	private: System::Windows::Forms::Label^ lbl_addRules_data;
	private: System::Windows::Forms::TextBox^ txtBox_Rules_data;
	private: System::Windows::Forms::ComboBox^ comboBox_Rules_protocol;
	private: System::Windows::Forms::ComboBox^ comboBox_Rules_dstPort;
	private: System::Windows::Forms::ComboBox^ comboBox_Rules_srcPort;
	private: System::Windows::Forms::TextBox^ txtBox_Rules_dst;
	private: System::Windows::Forms::TextBox^ txtBox_Ruels_src;
	private: System::Windows::Forms::Label^ lbl_addRules_action;
	private: System::Windows::Forms::Label^ lbl_addRules_protocol;
	private: System::Windows::Forms::Label^ lbl_addRules_dstPort;
	private: System::Windows::Forms::Label^ lbl_addRules_srcPort;
	private: System::Windows::Forms::Label^ lbl_addRules_dst;
	private: System::Windows::Forms::Label^ lbl_addRules_src;
	private: System::Windows::Forms::Label^ lbl_info_firewall;
	private: System::Windows::Forms::Panel^ panel_black;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel_Packets;
	private: System::Windows::Forms::RichTextBox^ richTextBox_PacketsInfo;
	private: System::Windows::Forms::Button^ btn_browse_Packets;
	private: System::Windows::Forms::Button^ btn_addPacketsPanel;
	private: System::Windows::Forms::Button^ btn_Back_Packets;
	private: System::Windows::Forms::Button^ btn_Next_Compare;
	private: System::Windows::Forms::Label^ label_Packets;
	private: System::Windows::Forms::Panel^ panel_addPackets;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lbl_addPackets;
private: System::Windows::Forms::Button^ btn_CancelPackets;
private: System::Windows::Forms::Button^ btn_addPackets;
	private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Label^ lbl_addPackets_data;
private: System::Windows::Forms::TextBox^ txtBox_Packets_data;
private: System::Windows::Forms::ComboBox^ comboBox_Packets_Pro;
private: System::Windows::Forms::ComboBox^ comboBox_Packets_dstPort;
private: System::Windows::Forms::ComboBox^ comboBox_Packets_srcPort;
private: System::Windows::Forms::TextBox^ txtBox_Packets_dst;
private: System::Windows::Forms::TextBox^ txtBox_Packets_src;
private: System::Windows::Forms::Label^ lbl_addPackets_pro;
private: System::Windows::Forms::Label^ lbl_addPackets_dstPort;
private: System::Windows::Forms::Label^ lbl_addPackets_srcPort;
private: System::Windows::Forms::Label^ lbl_addPackets_dst;
private: System::Windows::Forms::Label^ lbl_addPackets_src;
private: System::Windows::Forms::Panel^ panel_compare;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::RichTextBox^ richTextBox_Result;
	private: System::Windows::Forms::Button^ btn_back_Compare;
private: System::Windows::Forms::Button^ btn_Compare;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ lbl_icon;
	private: System::Windows::Forms::Button^ button_Close;
	private: System::Windows::Forms::Button^ btn_showRules;
	private: System::Windows::Forms::Button^ btn_clearRules;
	private: System::Windows::Forms::Button^ btn_clearPackets;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddRules::typeid));
			this->lbl_info1 = (gcnew System::Windows::Forms::Label());
			this->btn_CloseRules = (gcnew System::Windows::Forms::Button());
			this->btn_Next_ShowPackets = (gcnew System::Windows::Forms::Button());
			this->btn_addRulesPanel = (gcnew System::Windows::Forms::Button());
			this->btn_browse_rules = (gcnew System::Windows::Forms::Button());
			this->richTextBox_rulesInfo = (gcnew System::Windows::Forms::RichTextBox());
			this->panel_addRules = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl_addRules = (gcnew System::Windows::Forms::Label());
			this->btn_CancelRules = (gcnew System::Windows::Forms::Button());
			this->btn_addRules = (gcnew System::Windows::Forms::Button());
			this->panel_addRules2 = (gcnew System::Windows::Forms::Panel());
			this->comboBox_Rules_action = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_addRules_data = (gcnew System::Windows::Forms::Label());
			this->txtBox_Rules_data = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_Rules_protocol = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_Rules_dstPort = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_Rules_srcPort = (gcnew System::Windows::Forms::ComboBox());
			this->txtBox_Rules_dst = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Ruels_src = (gcnew System::Windows::Forms::TextBox());
			this->lbl_addRules_action = (gcnew System::Windows::Forms::Label());
			this->lbl_addRules_protocol = (gcnew System::Windows::Forms::Label());
			this->lbl_addRules_dstPort = (gcnew System::Windows::Forms::Label());
			this->lbl_addRules_srcPort = (gcnew System::Windows::Forms::Label());
			this->lbl_addRules_dst = (gcnew System::Windows::Forms::Label());
			this->lbl_addRules_src = (gcnew System::Windows::Forms::Label());
			this->lbl_info_firewall = (gcnew System::Windows::Forms::Label());
			this->panel_black = (gcnew System::Windows::Forms::Panel());
			this->lbl_icon = (gcnew System::Windows::Forms::Label());
			this->button_Close = (gcnew System::Windows::Forms::Button());
			this->panel_Packets = (gcnew System::Windows::Forms::Panel());
			this->panel_compare = (gcnew System::Windows::Forms::Panel());
			this->btn_showRules = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_Compare = (gcnew System::Windows::Forms::Button());
			this->btn_back_Compare = (gcnew System::Windows::Forms::Button());
			this->richTextBox_Result = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel_addPackets = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lbl_addPackets = (gcnew System::Windows::Forms::Label());
			this->btn_CancelPackets = (gcnew System::Windows::Forms::Button());
			this->btn_addPackets = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lbl_addPackets_data = (gcnew System::Windows::Forms::Label());
			this->txtBox_Packets_data = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_Packets_Pro = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_Packets_dstPort = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_Packets_srcPort = (gcnew System::Windows::Forms::ComboBox());
			this->txtBox_Packets_dst = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Packets_src = (gcnew System::Windows::Forms::TextBox());
			this->lbl_addPackets_pro = (gcnew System::Windows::Forms::Label());
			this->lbl_addPackets_dstPort = (gcnew System::Windows::Forms::Label());
			this->lbl_addPackets_srcPort = (gcnew System::Windows::Forms::Label());
			this->lbl_addPackets_dst = (gcnew System::Windows::Forms::Label());
			this->lbl_addPackets_src = (gcnew System::Windows::Forms::Label());
			this->richTextBox_PacketsInfo = (gcnew System::Windows::Forms::RichTextBox());
			this->btn_browse_Packets = (gcnew System::Windows::Forms::Button());
			this->btn_addPacketsPanel = (gcnew System::Windows::Forms::Button());
			this->btn_Back_Packets = (gcnew System::Windows::Forms::Button());
			this->btn_Next_Compare = (gcnew System::Windows::Forms::Button());
			this->label_Packets = (gcnew System::Windows::Forms::Label());
			this->btn_clearPackets = (gcnew System::Windows::Forms::Button());
			this->btn_clearRules = (gcnew System::Windows::Forms::Button());
			this->panel_addRules->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel_addRules2->SuspendLayout();
			this->panel_black->SuspendLayout();
			this->panel_Packets->SuspendLayout();
			this->panel_compare->SuspendLayout();
			this->panel_addPackets->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_info1
			// 
			this->lbl_info1->AutoSize = true;
			this->lbl_info1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_info1->Location = System::Drawing::Point(135, 52);
			this->lbl_info1->Name = L"lbl_info1";
			this->lbl_info1->Size = System::Drawing::Size(133, 59);
			this->lbl_info1->TabIndex = 0;
			this->lbl_info1->Text = L"Rules";
			// 
			// btn_CloseRules
			// 
			this->btn_CloseRules->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CloseRules->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_CloseRules->Location = System::Drawing::Point(1023, 646);
			this->btn_CloseRules->Name = L"btn_CloseRules";
			this->btn_CloseRules->Size = System::Drawing::Size(114, 33);
			this->btn_CloseRules->TabIndex = 0;
			this->btn_CloseRules->TabStop = false;
			this->btn_CloseRules->Text = L"  Close";
			this->btn_CloseRules->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_CloseRules->UseVisualStyleBackColor = true;
			this->btn_CloseRules->Click += gcnew System::EventHandler(this, &AddRules::btn_CloseRules_Click);
			// 
			// btn_Next_ShowPackets
			// 
			this->btn_Next_ShowPackets->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Next_ShowPackets->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Next_ShowPackets->Location = System::Drawing::Point(1140, 646);
			this->btn_Next_ShowPackets->Name = L"btn_Next_ShowPackets";
			this->btn_Next_ShowPackets->Size = System::Drawing::Size(114, 33);
			this->btn_Next_ShowPackets->TabIndex = 3;
			this->btn_Next_ShowPackets->Text = L"Next";
			this->btn_Next_ShowPackets->UseVisualStyleBackColor = true;
			this->btn_Next_ShowPackets->Click += gcnew System::EventHandler(this, &AddRules::btn_Next_ShowPackets_Click);
			// 
			// btn_addRulesPanel
			// 
			this->btn_addRulesPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addRulesPanel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_addRulesPanel->Location = System::Drawing::Point(12, 144);
			this->btn_addRulesPanel->Name = L"btn_addRulesPanel";
			this->btn_addRulesPanel->Size = System::Drawing::Size(114, 33);
			this->btn_addRulesPanel->TabIndex = 1;
			this->btn_addRulesPanel->Text = L"Add";
			this->btn_addRulesPanel->UseVisualStyleBackColor = true;
			this->btn_addRulesPanel->Click += gcnew System::EventHandler(this, &AddRules::btn_addRulesPanel_Click);
			// 
			// btn_browse_rules
			// 
			this->btn_browse_rules->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_browse_rules->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_browse_rules->Location = System::Drawing::Point(12, 183);
			this->btn_browse_rules->Name = L"btn_browse_rules";
			this->btn_browse_rules->Size = System::Drawing::Size(114, 33);
			this->btn_browse_rules->TabIndex = 2;
			this->btn_browse_rules->Text = L"Browse";
			this->btn_browse_rules->UseVisualStyleBackColor = true;
			this->btn_browse_rules->Click += gcnew System::EventHandler(this, &AddRules::btn_browse_rules_Click);
			// 
			// richTextBox_rulesInfo
			// 
			this->richTextBox_rulesInfo->BackColor = System::Drawing::Color::White;
			this->richTextBox_rulesInfo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox_rulesInfo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox_rulesInfo->Location = System::Drawing::Point(132, 114);
			this->richTextBox_rulesInfo->Name = L"richTextBox_rulesInfo";
			this->richTextBox_rulesInfo->ReadOnly = true;
			this->richTextBox_rulesInfo->Size = System::Drawing::Size(1148, 518);
			this->richTextBox_rulesInfo->TabIndex = 0;
			this->richTextBox_rulesInfo->TabStop = false;
			this->richTextBox_rulesInfo->Text = L"";
			// 
			// panel_addRules
			// 
			this->panel_addRules->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_addRules->Controls->Add(this->panel1);
			this->panel_addRules->Controls->Add(this->btn_CancelRules);
			this->panel_addRules->Controls->Add(this->btn_addRules);
			this->panel_addRules->Controls->Add(this->panel_addRules2);
			this->panel_addRules->Location = System::Drawing::Point(395, 101);
			this->panel_addRules->Name = L"panel_addRules";
			this->panel_addRules->Size = System::Drawing::Size(561, 547);
			this->panel_addRules->TabIndex = 12;
			this->panel_addRules->Hide();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkMagenta;
			this->panel1->Controls->Add(this->lbl_addRules);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(559, 41);
			this->panel1->TabIndex = 0;
			// 
			// lbl_addRules
			// 
			this->lbl_addRules->AutoSize = true;
			this->lbl_addRules->BackColor = System::Drawing::Color::Transparent;
			this->lbl_addRules->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold));
			this->lbl_addRules->ForeColor = System::Drawing::Color::White;
			this->lbl_addRules->Location = System::Drawing::Point(207, 2);
			this->lbl_addRules->Name = L"lbl_addRules";
			this->lbl_addRules->Size = System::Drawing::Size(145, 38);
			this->lbl_addRules->TabIndex = 0;
			this->lbl_addRules->Text = L"Add Rules";
			// 
			// btn_CancelRules
			// 
			this->btn_CancelRules->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CancelRules->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_CancelRules->Location = System::Drawing::Point(304, 508);
			this->btn_CancelRules->Name = L"btn_CancelRules";
			this->btn_CancelRules->Size = System::Drawing::Size(114, 33);
			this->btn_CancelRules->TabIndex = 2;
			this->btn_CancelRules->Text = L" Cancel";
			this->btn_CancelRules->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_CancelRules->UseVisualStyleBackColor = true;
			this->btn_CancelRules->Click += gcnew System::EventHandler(this, &AddRules::btn_CancelRules_Click);
			// 
			// btn_addRules
			// 
			this->btn_addRules->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addRules->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9));
			this->btn_addRules->Location = System::Drawing::Point(424, 508);
			this->btn_addRules->Name = L"btn_addRules";
			this->btn_addRules->Size = System::Drawing::Size(114, 33);
			this->btn_addRules->TabIndex = 1;
			this->btn_addRules->Text = L"Add";
			this->btn_addRules->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_addRules->UseVisualStyleBackColor = true;
			this->btn_addRules->Click += gcnew System::EventHandler(this, &AddRules::btn_addRules_Click);
			// 
			// panel_addRules2
			// 
			this->panel_addRules2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_addRules2->Controls->Add(this->comboBox_Rules_action);
			this->panel_addRules2->Controls->Add(this->lbl_addRules_data);
			this->panel_addRules2->Controls->Add(this->txtBox_Rules_data);
			this->panel_addRules2->Controls->Add(this->comboBox_Rules_protocol);
			this->panel_addRules2->Controls->Add(this->comboBox_Rules_dstPort);
			this->panel_addRules2->Controls->Add(this->comboBox_Rules_srcPort);
			this->panel_addRules2->Controls->Add(this->txtBox_Rules_dst);
			this->panel_addRules2->Controls->Add(this->txtBox_Ruels_src);
			this->panel_addRules2->Controls->Add(this->lbl_addRules_action);
			this->panel_addRules2->Controls->Add(this->lbl_addRules_protocol);
			this->panel_addRules2->Controls->Add(this->lbl_addRules_dstPort);
			this->panel_addRules2->Controls->Add(this->lbl_addRules_srcPort);
			this->panel_addRules2->Controls->Add(this->lbl_addRules_dst);
			this->panel_addRules2->Controls->Add(this->lbl_addRules_src);
			this->panel_addRules2->Location = System::Drawing::Point(13, 47);
			this->panel_addRules2->Name = L"panel_addRules2";
			this->panel_addRules2->Size = System::Drawing::Size(534, 452);
			this->panel_addRules2->TabIndex = 0;
			// 
			// comboBox_Rules_action
			// 
			this->comboBox_Rules_action->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->comboBox_Rules_action->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Rules_action->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F));
			this->comboBox_Rules_action->FormattingEnabled = true;
			this->comboBox_Rules_action->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Allow", L"Deny" });
			this->comboBox_Rules_action->Location = System::Drawing::Point(162, 247);
			this->comboBox_Rules_action->Name = L"comboBox_Rules_action";
			this->comboBox_Rules_action->Size = System::Drawing::Size(323, 31);
			this->comboBox_Rules_action->TabIndex = 6;
			// 
			// lbl_addRules_data
			// 
			this->lbl_addRules_data->AutoSize = true;
			this->lbl_addRules_data->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_addRules_data->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addRules_data->Location = System::Drawing::Point(21, 298);
			this->lbl_addRules_data->Name = L"lbl_addRules_data";
			this->lbl_addRules_data->Size = System::Drawing::Size(52, 25);
			this->lbl_addRules_data->TabIndex = 0;
			this->lbl_addRules_data->Text = L"Data:";
			// 
			// txtBox_Rules_data
			// 
			this->txtBox_Rules_data->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtBox_Rules_data->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBox_Rules_data->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBox_Rules_data->Location = System::Drawing::Point(161, 293);
			this->txtBox_Rules_data->Name = L"txtBox_Rules_data";
			this->txtBox_Rules_data->Size = System::Drawing::Size(323, 30);
			this->txtBox_Rules_data->TabIndex = 7;
			// 
			// comboBox_Rules_protocol
			// 
			this->comboBox_Rules_protocol->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->comboBox_Rules_protocol->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Rules_protocol->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F));
			this->comboBox_Rules_protocol->FormattingEnabled = true;
			this->comboBox_Rules_protocol->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"UDP", L"TCP", L"ICMP", L"FTP",
					L"SSH"
			});
			this->comboBox_Rules_protocol->Location = System::Drawing::Point(162, 203);
			this->comboBox_Rules_protocol->Name = L"comboBox_Rules_protocol";
			this->comboBox_Rules_protocol->Size = System::Drawing::Size(323, 31);
			this->comboBox_Rules_protocol->TabIndex = 5;
			// 
			// comboBox_Rules_dstPort
			// 
			this->comboBox_Rules_dstPort->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->comboBox_Rules_dstPort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Rules_dstPort->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F));
			this->comboBox_Rules_dstPort->FormattingEnabled = true;
			this->comboBox_Rules_dstPort->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"80", L"443", L"20", L"22", L"25",
					L"53"
			});
			this->comboBox_Rules_dstPort->Location = System::Drawing::Point(161, 159);
			this->comboBox_Rules_dstPort->Name = L"comboBox_Rules_dstPort";
			this->comboBox_Rules_dstPort->Size = System::Drawing::Size(323, 31);
			this->comboBox_Rules_dstPort->TabIndex = 4;
			// 
			// comboBox_Rules_srcPort
			// 
			this->comboBox_Rules_srcPort->BackColor = System::Drawing::Color::White;
			this->comboBox_Rules_srcPort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Rules_srcPort->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F));
			this->comboBox_Rules_srcPort->FormattingEnabled = true;
			this->comboBox_Rules_srcPort->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"80", L"443", L"20", L"22", L"25",
					L"53"
			});
			this->comboBox_Rules_srcPort->Location = System::Drawing::Point(161, 115);
			this->comboBox_Rules_srcPort->Name = L"comboBox_Rules_srcPort";
			this->comboBox_Rules_srcPort->Size = System::Drawing::Size(323, 31);
			this->comboBox_Rules_srcPort->TabIndex = 3;
			// 
			// txtBox_Rules_dst
			// 
			this->txtBox_Rules_dst->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtBox_Rules_dst->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBox_Rules_dst->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBox_Rules_dst->Location = System::Drawing::Point(161, 71);
			this->txtBox_Rules_dst->Name = L"txtBox_Rules_dst";
			this->txtBox_Rules_dst->Size = System::Drawing::Size(323, 30);
			this->txtBox_Rules_dst->TabIndex = 2;
			this->txtBox_Rules_dst->TextChanged += gcnew System::EventHandler(this, &AddRules::txtBox_Rules_dst_TextChanged);
			// 
			// txtBox_Ruels_src
			// 
			this->txtBox_Ruels_src->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtBox_Ruels_src->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBox_Ruels_src->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBox_Ruels_src->Location = System::Drawing::Point(162, 31);
			this->txtBox_Ruels_src->Name = L"txtBox_Ruels_src";
			this->txtBox_Ruels_src->Size = System::Drawing::Size(323, 30);
			this->txtBox_Ruels_src->TabIndex = 1;
			this->txtBox_Ruels_src->TextChanged += gcnew System::EventHandler(this, &AddRules::txtBox_Ruels_src_TextChanged);
			// 
			// lbl_addRules_action
			// 
			this->lbl_addRules_action->AutoSize = true;
			this->lbl_addRules_action->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_addRules_action->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addRules_action->Location = System::Drawing::Point(21, 253);
			this->lbl_addRules_action->Name = L"lbl_addRules_action";
			this->lbl_addRules_action->Size = System::Drawing::Size(65, 25);
			this->lbl_addRules_action->TabIndex = 0;
			this->lbl_addRules_action->Text = L"Action:";
			// 
			// lbl_addRules_protocol
			// 
			this->lbl_addRules_protocol->AutoSize = true;
			this->lbl_addRules_protocol->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_addRules_protocol->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addRules_protocol->Location = System::Drawing::Point(19, 209);
			this->lbl_addRules_protocol->Name = L"lbl_addRules_protocol";
			this->lbl_addRules_protocol->Size = System::Drawing::Size(80, 25);
			this->lbl_addRules_protocol->TabIndex = 0;
			this->lbl_addRules_protocol->Text = L"Protocol:";
			// 
			// lbl_addRules_dstPort
			// 
			this->lbl_addRules_dstPort->AutoSize = true;
			this->lbl_addRules_dstPort->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_addRules_dstPort->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addRules_dstPort->Location = System::Drawing::Point(16, 165);
			this->lbl_addRules_dstPort->Name = L"lbl_addRules_dstPort";
			this->lbl_addRules_dstPort->Size = System::Drawing::Size(140, 25);
			this->lbl_addRules_dstPort->TabIndex = 0;
			this->lbl_addRules_dstPort->Text = L"Destination Port:";
			// 
			// lbl_addRules_srcPort
			// 
			this->lbl_addRules_srcPort->AutoSize = true;
			this->lbl_addRules_srcPort->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_addRules_srcPort->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addRules_srcPort->Location = System::Drawing::Point(17, 121);
			this->lbl_addRules_srcPort->Name = L"lbl_addRules_srcPort";
			this->lbl_addRules_srcPort->Size = System::Drawing::Size(105, 25);
			this->lbl_addRules_srcPort->TabIndex = 0;
			this->lbl_addRules_srcPort->Text = L"Source Port:";
			// 
			// lbl_addRules_dst
			// 
			this->lbl_addRules_dst->AutoSize = true;
			this->lbl_addRules_dst->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_addRules_dst->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addRules_dst->Location = System::Drawing::Point(17, 76);
			this->lbl_addRules_dst->Name = L"lbl_addRules_dst";
			this->lbl_addRules_dst->Size = System::Drawing::Size(103, 25);
			this->lbl_addRules_dst->TabIndex = 0;
			this->lbl_addRules_dst->Text = L"Destination:";
			// 
			// lbl_addRules_src
			// 
			this->lbl_addRules_src->AutoSize = true;
			this->lbl_addRules_src->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_addRules_src->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addRules_src->Location = System::Drawing::Point(19, 31);
			this->lbl_addRules_src->Name = L"lbl_addRules_src";
			this->lbl_addRules_src->Size = System::Drawing::Size(68, 25);
			this->lbl_addRules_src->TabIndex = 0;
			this->lbl_addRules_src->Text = L"Source:";
			// 
			// lbl_info_firewall
			// 
			this->lbl_info_firewall->AutoSize = true;
			this->lbl_info_firewall->BackColor = System::Drawing::Color::Transparent;
			this->lbl_info_firewall->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold));
			this->lbl_info_firewall->ForeColor = System::Drawing::Color::White;
			this->lbl_info_firewall->Location = System::Drawing::Point(34, 2);
			this->lbl_info_firewall->Name = L"lbl_info_firewall";
			this->lbl_info_firewall->Size = System::Drawing::Size(113, 38);
			this->lbl_info_firewall->TabIndex = 0;
			this->lbl_info_firewall->Text = L"Firewall";
			// 
			// panel_black
			// 
			this->panel_black->BackColor = System::Drawing::Color::DarkMagenta;
			this->panel_black->Controls->Add(this->button_Close);
			this->panel_black->Controls->Add(this->lbl_icon);
			this->panel_black->Controls->Add(this->lbl_info_firewall);
			this->panel_black->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_black->Location = System::Drawing::Point(0, 0);
			this->panel_black->Name = L"panel_black";
			this->panel_black->Size = System::Drawing::Size(1295, 47);
			this->panel_black->TabIndex = 13;
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
			// button_Close
			// 
			this->button_Close->BackColor = System::Drawing::Color::DarkMagenta;
			this->button_Close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button_Close->FlatAppearance->BorderColor = System::Drawing::Color::DarkMagenta;
			this->button_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Close->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Close.Image")));
			this->button_Close->Location = System::Drawing::Point(1248, 4);
			this->button_Close->Name = L"button_Close";
			this->button_Close->Size = System::Drawing::Size(44, 37);
			this->button_Close->TabIndex = 0;
			this->button_Close->UseVisualStyleBackColor = false;
			this->button_Close->Click += gcnew System::EventHandler(this, &AddRules::button_Close_Click);
			// 
			// panel_Packets
			// 
			this->panel_Packets->Controls->Add(this->panel_compare);
			this->panel_Packets->Controls->Add(this->panel_addPackets);
			this->panel_Packets->Controls->Add(this->richTextBox_PacketsInfo);
			this->panel_Packets->Controls->Add(this->btn_browse_Packets);
			this->panel_Packets->Controls->Add(this->btn_addPacketsPanel);
			this->panel_Packets->Controls->Add(this->btn_Back_Packets);
			this->panel_Packets->Controls->Add(this->btn_Next_Compare);
			this->panel_Packets->Controls->Add(this->label_Packets);
			this->panel_Packets->Controls->Add(this->btn_clearPackets);
			this->panel_Packets->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_Packets->Location = System::Drawing::Point(0, 47);
			this->panel_Packets->Name = L"panel_Packets";
			this->panel_Packets->Size = System::Drawing::Size(1295, 648);
			this->panel_Packets->TabIndex = 0;
			this->panel_Packets->Hide();
			// 
			// panel_compare
			// 
			this->panel_compare->Controls->Add(this->btn_showRules);
			this->panel_compare->Controls->Add(this->label9);
			this->panel_compare->Controls->Add(this->label8);
			this->panel_compare->Controls->Add(this->label7);
			this->panel_compare->Controls->Add(this->label6);
			this->panel_compare->Controls->Add(this->label5);
			this->panel_compare->Controls->Add(this->label4);
			this->panel_compare->Controls->Add(this->label2);
			this->panel_compare->Controls->Add(this->label1);
			this->panel_compare->Controls->Add(this->btn_Compare);
			this->panel_compare->Controls->Add(this->btn_back_Compare);
			this->panel_compare->Controls->Add(this->richTextBox_Result);
			this->panel_compare->Controls->Add(this->label3);
			this->panel_compare->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_compare->Location = System::Drawing::Point(0, 0);
			this->panel_compare->Name = L"panel_compare";
			this->panel_compare->Size = System::Drawing::Size(1295, 648);
			this->panel_compare->TabIndex = 1;
			this->panel_compare->Hide();
			// 
			// btn_showRules
			// 
			this->btn_showRules->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_showRules->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_showRules->Location = System::Drawing::Point(12, 603);
			this->btn_showRules->Name = L"btn_showRules";
			this->btn_showRules->Size = System::Drawing::Size(114, 33);
			this->btn_showRules->TabIndex = 21;
			this->btn_showRules->Text = L"Show Rules";
			this->btn_showRules->UseVisualStyleBackColor = true;
			this->btn_showRules->Click += gcnew System::EventHandler(this, &AddRules::btn_showRules_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(701, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 23);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Protocol";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(975, 64);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 23);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Time";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(831, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 23);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Data";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(564, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 23);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Dst_Port";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(427, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 23);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Src_Port";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(264, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 23);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Destination";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(136, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Source";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Action";
			// 
			// btn_Compare
			// 
			this->btn_Compare->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Compare->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Compare->Location = System::Drawing::Point(1165, 603);
			this->btn_Compare->Name = L"btn_Compare";
			this->btn_Compare->Size = System::Drawing::Size(114, 33);
			this->btn_Compare->TabIndex = 20;
			this->btn_Compare->Text = L"Compare";
			this->btn_Compare->UseVisualStyleBackColor = true;
			this->btn_Compare->Click += gcnew System::EventHandler(this, &AddRules::btn_Compare_Click);
			// 
			// btn_back_Compare
			// 
			this->btn_back_Compare->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_back_Compare->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_back_Compare->Location = System::Drawing::Point(1045, 603);
			this->btn_back_Compare->Name = L"btn_back_Compare";
			this->btn_back_Compare->Size = System::Drawing::Size(114, 33);
			this->btn_back_Compare->TabIndex = 19;
			this->btn_back_Compare->Text = L"Back";
			this->btn_back_Compare->UseVisualStyleBackColor = true;
			this->btn_back_Compare->Click += gcnew System::EventHandler(this, &AddRules::btn_Back_Compare_Click);
			// 
			// richTextBox_Result
			// 
			this->richTextBox_Result->BackColor = System::Drawing::Color::White;
			this->richTextBox_Result->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox_Result->Location = System::Drawing::Point(12, 93);
			this->richTextBox_Result->Name = L"richTextBox_Result";
			this->richTextBox_Result->ReadOnly = true;
			this->richTextBox_Result->Size = System::Drawing::Size(1271, 489);
			this->richTextBox_Result->TabIndex = 0;
			this->richTextBox_Result->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 59);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Result";
			// 
			// panel_addPackets
			// 
			this->panel_addPackets->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_addPackets->Controls->Add(this->panel3);
			this->panel_addPackets->Controls->Add(this->btn_CancelPackets);
			this->panel_addPackets->Controls->Add(this->btn_addPackets);
			this->panel_addPackets->Controls->Add(this->panel4);
			this->panel_addPackets->Location = System::Drawing::Point(367, 51);
			this->panel_addPackets->Name = L"panel_addPackets";
			this->panel_addPackets->Size = System::Drawing::Size(561, 547);
			this->panel_addPackets->TabIndex = 17;
			this->panel_addPackets->Hide();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkMagenta;
			this->panel3->Controls->Add(this->lbl_addPackets);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(559, 41);
			this->panel3->TabIndex = 0;
			// 
			// lbl_addPackets
			// 
			this->lbl_addPackets->AutoSize = true;
			this->lbl_addPackets->BackColor = System::Drawing::Color::Transparent;
			this->lbl_addPackets->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_addPackets->ForeColor = System::Drawing::Color::White;
			this->lbl_addPackets->Location = System::Drawing::Point(3, 6);
			this->lbl_addPackets->Name = L"lbl_addPackets";
			this->lbl_addPackets->Size = System::Drawing::Size(142, 32);
			this->lbl_addPackets->TabIndex = 0;
			this->lbl_addPackets->Text = L"Add Packets";
			// 
			// btn_CancelPackets
			// 
			this->btn_CancelPackets->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CancelPackets->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_CancelPackets->Location = System::Drawing::Point(293, 508);
			this->btn_CancelPackets->Name = L"btn_CancelPackets";
			this->btn_CancelPackets->Size = System::Drawing::Size(114, 33);
			this->btn_CancelPackets->TabIndex = 2;
			this->btn_CancelPackets->Text = L" Cancel";
			this->btn_CancelPackets->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_CancelPackets->UseVisualStyleBackColor = true;
			this->btn_CancelPackets->Click += gcnew System::EventHandler(this, &AddRules::btn_CancelPackets_Click);
			// 
			// btn_addPackets
			// 
			this->btn_addPackets->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addPackets->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9));
			this->btn_addPackets->Location = System::Drawing::Point(424, 508);
			this->btn_addPackets->Name = L"btn_addPackets";
			this->btn_addPackets->Size = System::Drawing::Size(114, 33);
			this->btn_addPackets->TabIndex = 1;
			this->btn_addPackets->Text = L"Add";
			this->btn_addPackets->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_addPackets->UseVisualStyleBackColor = true;
			this->btn_addPackets->Click += gcnew System::EventHandler(this, &AddRules::btn_addPackets_Click);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->lbl_addPackets_data);
			this->panel4->Controls->Add(this->txtBox_Packets_data);
			this->panel4->Controls->Add(this->comboBox_Packets_Pro);
			this->panel4->Controls->Add(this->comboBox_Packets_dstPort);
			this->panel4->Controls->Add(this->comboBox_Packets_srcPort);
			this->panel4->Controls->Add(this->txtBox_Packets_dst);
			this->panel4->Controls->Add(this->txtBox_Packets_src);
			this->panel4->Controls->Add(this->lbl_addPackets_pro);
			this->panel4->Controls->Add(this->lbl_addPackets_dstPort);
			this->panel4->Controls->Add(this->lbl_addPackets_srcPort);
			this->panel4->Controls->Add(this->lbl_addPackets_dst);
			this->panel4->Controls->Add(this->lbl_addPackets_src);
			this->panel4->Location = System::Drawing::Point(13, 47);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(534, 452);
			this->panel4->TabIndex = 0;
			// 
			// lbl_addPackets_data
			// 
			this->lbl_addPackets_data->AutoSize = true;
			this->lbl_addPackets_data->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_addPackets_data->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addPackets_data->Location = System::Drawing::Point(19, 250);
			this->lbl_addPackets_data->Name = L"lbl_addPackets_data";
			this->lbl_addPackets_data->Size = System::Drawing::Size(52, 25);
			this->lbl_addPackets_data->TabIndex = 0;
			this->lbl_addPackets_data->Text = L"Data:";
			// 
			// txtBox_Packets_data
			// 
			this->txtBox_Packets_data->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtBox_Packets_data->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBox_Packets_data->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBox_Packets_data->Location = System::Drawing::Point(161, 247);
			this->txtBox_Packets_data->Name = L"txtBox_Packets_data";
			this->txtBox_Packets_data->Size = System::Drawing::Size(323, 30);
			this->txtBox_Packets_data->TabIndex = 6;
			// 
			// comboBox_Packets_Pro
			// 
			this->comboBox_Packets_Pro->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->comboBox_Packets_Pro->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Packets_Pro->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F));
			this->comboBox_Packets_Pro->FormattingEnabled = true;
			this->comboBox_Packets_Pro->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"UDP", L"TCP", L"ICMP", L"FTP", L"SSH" });
			this->comboBox_Packets_Pro->Location = System::Drawing::Point(162, 203);
			this->comboBox_Packets_Pro->Name = L"comboBox_Packets_Pro";
			this->comboBox_Packets_Pro->Size = System::Drawing::Size(323, 31);
			this->comboBox_Packets_Pro->TabIndex = 5;
			// 
			// comboBox_Packets_dstPort
			// 
			this->comboBox_Packets_dstPort->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->comboBox_Packets_dstPort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Packets_dstPort->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F));
			this->comboBox_Packets_dstPort->FormattingEnabled = true;
			this->comboBox_Packets_dstPort->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"80", L"443", L"20", L"22", L"25",
					L"53"
			});
			this->comboBox_Packets_dstPort->Location = System::Drawing::Point(161, 159);
			this->comboBox_Packets_dstPort->Name = L"comboBox_Packets_dstPort";
			this->comboBox_Packets_dstPort->Size = System::Drawing::Size(323, 31);
			this->comboBox_Packets_dstPort->TabIndex = 4;
			// 
			// comboBox_Packets_srcPort
			// 
			this->comboBox_Packets_srcPort->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->comboBox_Packets_srcPort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Packets_srcPort->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F));
			this->comboBox_Packets_srcPort->FormattingEnabled = true;
			this->comboBox_Packets_srcPort->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"80", L"443", L"20", L"22", L"25",
					L"53"
			});
			this->comboBox_Packets_srcPort->Location = System::Drawing::Point(161, 115);
			this->comboBox_Packets_srcPort->Name = L"comboBox_Packets_srcPort";
			this->comboBox_Packets_srcPort->Size = System::Drawing::Size(323, 31);
			this->comboBox_Packets_srcPort->TabIndex = 3;
			// 
			// txtBox_Packets_dst
			// 
			this->txtBox_Packets_dst->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtBox_Packets_dst->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBox_Packets_dst->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBox_Packets_dst->Location = System::Drawing::Point(161, 71);
			this->txtBox_Packets_dst->Name = L"txtBox_Packets_dst";
			this->txtBox_Packets_dst->Size = System::Drawing::Size(323, 30);
			this->txtBox_Packets_dst->TabIndex = 2;
			this->txtBox_Packets_dst->TextChanged += gcnew System::EventHandler(this, &AddRules::txtBox_Packets_dst_TextChanged);
			// 
			// txtBox_Packets_src
			// 
			this->txtBox_Packets_src->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtBox_Packets_src->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBox_Packets_src->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBox_Packets_src->Location = System::Drawing::Point(162, 31);
			this->txtBox_Packets_src->Name = L"txtBox_Packets_src";
			this->txtBox_Packets_src->Size = System::Drawing::Size(323, 30);
			this->txtBox_Packets_src->TabIndex = 1;
			this->txtBox_Packets_src->TextChanged += gcnew System::EventHandler(this, &AddRules::txtBox_Packets_src_TextChanged);
			// 
			// lbl_addPackets_pro
			// 
			this->lbl_addPackets_pro->AutoSize = true;
			this->lbl_addPackets_pro->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_addPackets_pro->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addPackets_pro->Location = System::Drawing::Point(19, 209);
			this->lbl_addPackets_pro->Name = L"lbl_addPackets_pro";
			this->lbl_addPackets_pro->Size = System::Drawing::Size(80, 25);
			this->lbl_addPackets_pro->TabIndex = 0;
			this->lbl_addPackets_pro->Text = L"Protocol:";
			// 
			// lbl_addPackets_dstPort
			// 
			this->lbl_addPackets_dstPort->AutoSize = true;
			this->lbl_addPackets_dstPort->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_addPackets_dstPort->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addPackets_dstPort->Location = System::Drawing::Point(16, 165);
			this->lbl_addPackets_dstPort->Name = L"lbl_addPackets_dstPort";
			this->lbl_addPackets_dstPort->Size = System::Drawing::Size(140, 25);
			this->lbl_addPackets_dstPort->TabIndex = 0;
			this->lbl_addPackets_dstPort->Text = L"Destination Port:";
			// 
			// lbl_addPackets_srcPort
			// 
			this->lbl_addPackets_srcPort->AutoSize = true;
			this->lbl_addPackets_srcPort->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_addPackets_srcPort->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addPackets_srcPort->Location = System::Drawing::Point(17, 121);
			this->lbl_addPackets_srcPort->Name = L"lbl_addPackets_srcPort";
			this->lbl_addPackets_srcPort->Size = System::Drawing::Size(105, 25);
			this->lbl_addPackets_srcPort->TabIndex = 0;
			this->lbl_addPackets_srcPort->Text = L"Source Port:";
			// 
			// lbl_addPackets_dst
			// 
			this->lbl_addPackets_dst->AutoSize = true;
			this->lbl_addPackets_dst->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_addPackets_dst->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addPackets_dst->Location = System::Drawing::Point(17, 76);
			this->lbl_addPackets_dst->Name = L"lbl_addPackets_dst";
			this->lbl_addPackets_dst->Size = System::Drawing::Size(103, 25);
			this->lbl_addPackets_dst->TabIndex = 0;
			this->lbl_addPackets_dst->Text = L"Destination:";
			// 
			// lbl_addPackets_src
			// 
			this->lbl_addPackets_src->AutoSize = true;
			this->lbl_addPackets_src->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_addPackets_src->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_addPackets_src->Location = System::Drawing::Point(19, 31);
			this->lbl_addPackets_src->Name = L"lbl_addPackets_src";
			this->lbl_addPackets_src->Size = System::Drawing::Size(68, 25);
			this->lbl_addPackets_src->TabIndex = 0;
			this->lbl_addPackets_src->Text = L"Source:";
			// 
			// richTextBox_PacketsInfo
			// 
			this->richTextBox_PacketsInfo->BackColor = System::Drawing::Color::White;
			this->richTextBox_PacketsInfo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox_PacketsInfo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox_PacketsInfo->Location = System::Drawing::Point(132, 67);
			this->richTextBox_PacketsInfo->Name = L"richTextBox_PacketsInfo";
			this->richTextBox_PacketsInfo->ReadOnly = true;
			this->richTextBox_PacketsInfo->Size = System::Drawing::Size(1148, 518);
			this->richTextBox_PacketsInfo->TabIndex = 0;
			this->richTextBox_PacketsInfo->TabStop = false;
			this->richTextBox_PacketsInfo->Text = L"";
			// 
			// btn_browse_Packets
			// 
			this->btn_browse_Packets->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_browse_Packets->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_browse_Packets->Location = System::Drawing::Point(12, 136);
			this->btn_browse_Packets->Name = L"btn_browse_Packets";
			this->btn_browse_Packets->Size = System::Drawing::Size(114, 33);
			this->btn_browse_Packets->TabIndex = 2;
			this->btn_browse_Packets->Text = L"Browse";
			this->btn_browse_Packets->UseVisualStyleBackColor = true;
			this->btn_browse_Packets->Click += gcnew System::EventHandler(this, &AddRules::btn_browse_Packets_Click);
			// 
			// btn_addPacketsPanel
			// 
			this->btn_addPacketsPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addPacketsPanel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_addPacketsPanel->Location = System::Drawing::Point(12, 97);
			this->btn_addPacketsPanel->Name = L"btn_addPacketsPanel";
			this->btn_addPacketsPanel->Size = System::Drawing::Size(114, 33);
			this->btn_addPacketsPanel->TabIndex = 1;
			this->btn_addPacketsPanel->Text = L"Add";
			this->btn_addPacketsPanel->UseVisualStyleBackColor = true;
			this->btn_addPacketsPanel->Click += gcnew System::EventHandler(this, &AddRules::btn_addPacketsPanel_Click);
			// 
			// btn_Back_Packets
			// 
			this->btn_Back_Packets->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Back_Packets->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back_Packets->Location = System::Drawing::Point(1023, 599);
			this->btn_Back_Packets->Name = L"btn_Back_Packets";
			this->btn_Back_Packets->Size = System::Drawing::Size(114, 33);
			this->btn_Back_Packets->TabIndex = 5;
			this->btn_Back_Packets->TabStop = false;
			this->btn_Back_Packets->Text = L"Back";
			this->btn_Back_Packets->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_Back_Packets->UseVisualStyleBackColor = true;
			this->btn_Back_Packets->Click += gcnew System::EventHandler(this, &AddRules::btn_Back_Packets_Click);
			// 
			// btn_Next_Compare
			// 
			this->btn_Next_Compare->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Next_Compare->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Next_Compare->Location = System::Drawing::Point(1140, 599);
			this->btn_Next_Compare->Name = L"btn_Next_Compare";
			this->btn_Next_Compare->Size = System::Drawing::Size(114, 33);
			this->btn_Next_Compare->TabIndex = 4;
			this->btn_Next_Compare->Text = L"Next";
			this->btn_Next_Compare->UseVisualStyleBackColor = true;
			this->btn_Next_Compare->Click += gcnew System::EventHandler(this, &AddRules::btn_Next_Compare_Click);
			// 
			// label_Packets
			// 
			this->label_Packets->AutoSize = true;
			this->label_Packets->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Packets->Location = System::Drawing::Point(135, 5);
			this->label_Packets->Name = L"label_Packets";
			this->label_Packets->Size = System::Drawing::Size(176, 59);
			this->label_Packets->TabIndex = 1;
			this->label_Packets->Text = L"Packets";
			// 
			// btn_clearPackets
			// 
			this->btn_clearPackets->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_clearPackets->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clearPackets->Location = System::Drawing::Point(12, 175);
			this->btn_clearPackets->Name = L"btn_clearPackets";
			this->btn_clearPackets->Size = System::Drawing::Size(114, 33);
			this->btn_clearPackets->TabIndex = 18;
			this->btn_clearPackets->Text = L"Clear";
			this->btn_clearPackets->UseVisualStyleBackColor = true;
			this->btn_clearPackets->Click += gcnew System::EventHandler(this, &AddRules::btn_clearPackets_Click);
			// 
			// btn_clearRules
			// 
			this->btn_clearRules->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_clearRules->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clearRules->Location = System::Drawing::Point(12, 222);
			this->btn_clearRules->Name = L"btn_clearRules";
			this->btn_clearRules->Size = System::Drawing::Size(114, 33);
			this->btn_clearRules->TabIndex = 14;
			this->btn_clearRules->Text = L"Clear";
			this->btn_clearRules->UseVisualStyleBackColor = true;
			this->btn_clearRules->Click += gcnew System::EventHandler(this, &AddRules::btn_clearRules_Click);
			// 
			// AddRules
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1295, 695);
			this->Controls->Add(this->panel_Packets);
			this->Controls->Add(this->panel_black);
			this->Controls->Add(this->panel_addRules);
			this->Controls->Add(this->richTextBox_rulesInfo);
			this->Controls->Add(this->btn_browse_rules);
			this->Controls->Add(this->btn_addRulesPanel);
			this->Controls->Add(this->btn_CloseRules);
			this->Controls->Add(this->btn_Next_ShowPackets);
			this->Controls->Add(this->lbl_info1);
			this->Controls->Add(this->btn_clearRules);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1295, 695);
			this->MinimumSize = System::Drawing::Size(1295, 695);
			this->Name = L"AddRules";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddRules";
			this->panel_addRules->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel_addRules2->ResumeLayout(false);
			this->panel_addRules2->PerformLayout();
			this->panel_black->ResumeLayout(false);
			this->panel_black->PerformLayout();
			this->panel_Packets->ResumeLayout(false);
			this->panel_Packets->PerformLayout();
			this->panel_compare->ResumeLayout(false);
			this->panel_compare->PerformLayout();
			this->panel_addPackets->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_Close_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
		//This Code is for adding rules
private: System::Void btn_CloseRules_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void btn_Next_ShowPackets_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_Packets->Show();
}
private: System::Void btn_addRulesPanel_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_addRules->Show();
} 
	   //This is code is for adding rules
private:
	int lastSerialNumber = 0; // Variable to store the last used serial number
	System::Void btn_browse_rules_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_addRules->Hide();
		Rules rules;//Instance of the Rules class

		//using stream to readfile.
		Stream^ mystream;
		//Using OpenFileDialog to get file
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->Filter = "Text Files (*.txt)|*.txt";
		openFileDialog1->Title = "Select a file";
		openFileDialog1->RestoreDirectory = true; //the dialog box will open in the previously selected directory.

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
				if ((mystream = openFileDialog1->OpenFile()) != nullptr) {
					String^ strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;

					// Read the contents of the file
					StreamReader^ reader = gcnew StreamReader(mystream);
					array<String^>^ lines = reader->ReadToEnd()->Split(Environment::NewLine->ToCharArray());
					reader->Close();

					// Validate each line of the file
					for each (String ^ line in lines) {
						try {
							if (!String::IsNullOrWhiteSpace(line)) {
								// Define the regular expression for each line pattern
								std::regex lineRegex("\\d+ (PRO|SRC|DST|DATA|SRC_PORT|DST_PORT) .+ (ALLOW|DENY)");

								if (!std::regex_match(msclr::interop::marshal_as<std::string>(line), lineRegex)) {
									MessageBox::Show("Invalid format detected in the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
									// Display guidelines for the format of rules
									MessageBox::Show("Rules should be structured as follows:\n\n"
										"Each rule should be represented on a separate line.\n"
										"Each rule consists of a rule number, one conditions, and an action.\n\n"
										"The rule number should be a unique identifier for each rule.\n\n"
										"Conditions can include the following:\n"
										"  - PROTOCOL <protocol> (e.g., PRO TCP or PRO UDP)\n"
										"  - SOURCE_IP <source IP or range> (e.g., SRC 192.168-255.1.1)\n"
										"  - DESTINATION_IP <destination IP or range> (e.g., DST 192.168.1.10)\n"
										"  - SOURCE_PORT <source port or range> (e.g., SRC_PORT 90)\n"
										"  - DESTINATION_PORT <destination port or range> (e.g., DST_PORT 443)\n"
										"  - DATA <data> (e.g., DATA KDSSLDFJSLKF)\n\n"
										"The action can be either ALLOW or DENY.\n\n"
										"Example Rules:\n"
										"  1 PROTOCOL UDP DENY\n"
										"  2 SOURCE_IP 192.168-255.1.1 ALLOW\n"
										"  3 DESTINATION_IP 192.168.1.10 ALLOW\n"
										"  4 DESTINATION_IP 192.168.255.255 ALLOW\n"
										"  5 PROTOCOL TCP DENY\n"
										"  6 DATA KDSSLDFJSLKF ALLOW\n"
										"  7 SOURCE_PORT 90 DENY\n"
										"  8 DESTINATION_PORT 443 ALLOW\n"
										"  9 SOURCE_PORT 22 DENY\n\n"
										"Each rule should start with a unique rule number followed by the conditions and action.",
										"Rule Format Guidelines",
										MessageBoxButtons::OK,
										MessageBoxIcon::Information);
									return;
								}
							}
						}
						catch (Exception^ ex) {
							MessageBox::Show("Error processing line: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						}
					}

					// Append the file contents to the RichTextBox
					richTextBox_rulesInfo->Font = gcnew System::Drawing::Font("Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
					richTextBox_rulesInfo->SelectionAlignment = HorizontalAlignment::Left;

					int ruleNumber = lastSerialNumber + 1; // Start from the last used serial number + 1
					for each (String ^ line in lines) {
						try {
							if (!String::IsNullOrWhiteSpace(line)) {
								array<String^>^ parts = line->Split(' ');
								if (parts->Length >= 4) {
									// Extract rule components from each line
									String^ ruleType = parts[1]->ToUpper();
									String^ ruleValue = parts[2];
									String^ action = parts[3]->ToUpper();

									String^ source = (ruleType == "SRC") ? ruleValue : "*";
									String^ destination = (ruleType == "DST") ? ruleValue : "*";
									String^ protocol = (ruleType == "PRO") ? ruleValue : "*";
									String^ data = (ruleType == "DATA") ? ruleValue : "*";
									String^ sourcePort = (ruleType == "SRC_PORT") ? ruleValue : "*";
									String^ destinationPort = (ruleType == "DST_PORT") ? ruleValue : "*";
									// Set rule properties
									rules.setRuleNo(ruleNumber);
									rules.setSrc(msclr::interop::marshal_as<std::string>(source));
									rules.setDst(msclr::interop::marshal_as<std::string>(destination));
									rules.setProtocol(msclr::interop::marshal_as<std::string>(protocol));
									rules.setData(msclr::interop::marshal_as<std::string>(data));
									rules.setSrcPort(msclr::interop::marshal_as<std::string>(sourcePort));
									rules.setDstPort(msclr::interop::marshal_as<std::string>(destinationPort));
									rules.setAction(msclr::interop::marshal_as<std::string>(action));
									rule_vec.push_back(rules);
									
									// Append rule information to RichTextBox
									String^ newRule = String::Format("-----------------------------------\nRule {0}:\n\n"
										"Source:                {1}\n"
										"Destination:           {2}\n"
										"Source Port:           {3}\n"
										"Destination Port:      {4}\n"
										"Protocol:              {5}\n"
										"Action:                {6}\n"
										"Data:                  {7}\n\n-----------------------------------\n",
										ruleNumber,
										source,
										destination,
										sourcePort,
										destinationPort,
										protocol,
										action,
										data);
									// Set color based on action (ALLOW/DENY)
									if (action == "ALLOW")
										richTextBox_rulesInfo->SelectionColor = System::Drawing::Color::Green;
									else if (action == "DENY")
										richTextBox_rulesInfo->SelectionColor = System::Drawing::Color::Red;
									else
										richTextBox_rulesInfo->SelectionColor = System::Drawing::Color::Black;

									richTextBox_rulesInfo->AppendText(newRule);
									richTextBox_rulesInfo->SelectionStart = richTextBox_rulesInfo->Text->Length; //The SelectionStart property is set to the end of the text to ensure that the next rule is appended at the end
									richTextBox_rulesInfo->ScrollToCaret();

									ruleNumber++;
								}
							}
						}
						catch (Exception^ ex) {
							MessageBox::Show("Error processing line: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}

					lastSerialNumber = ruleNumber - 1; // Update the lastSerialNumber with the last rule number from the file

					mystream->Close();
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error opening file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}



	System::Void btn_addRules_Click(System::Object^ sender, System::EventArgs^ e) {
		Rules rules;//instance of the Rules class
		// Check if the "Action" field is empty or all other fields are empty
		if (String::IsNullOrWhiteSpace(comboBox_Rules_action->Text) ||
			(String::IsNullOrWhiteSpace(txtBox_Ruels_src->Text) &&
				String::IsNullOrWhiteSpace(txtBox_Rules_dst->Text) &&
				String::IsNullOrWhiteSpace(comboBox_Rules_srcPort->Text) &&
				String::IsNullOrWhiteSpace(comboBox_Rules_dstPort->Text) &&
				String::IsNullOrWhiteSpace(comboBox_Rules_protocol->Text) &&
				String::IsNullOrWhiteSpace(txtBox_Rules_data->Text))) {

			MessageBox::Show("Please fill in the 'Action' field and at least one other field before adding a new rule.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Increment the serial number for the new rule
		lastSerialNumber++;

		try {
			// Set rule properties based on user input
			rules.setRuleNo(lastSerialNumber);
			rules.setSrc(msclr::interop::marshal_as<std::string>(txtBox_Ruels_src->Text->Length > 0 ? txtBox_Ruels_src->Text : "*"));
			rules.setDst(msclr::interop::marshal_as<std::string>(txtBox_Rules_dst->Text->Length > 0 ? txtBox_Rules_dst->Text : "*"));
			rules.setSrcPort(msclr::interop::marshal_as<std::string>(comboBox_Rules_srcPort->Text->Length > 0 ? comboBox_Rules_srcPort->Text : "*"));
			rules.setDstPort(msclr::interop::marshal_as<std::string>(comboBox_Rules_dstPort->Text->Length > 0 ? comboBox_Rules_dstPort->Text : "*"));
			rules.setProtocol(msclr::interop::marshal_as<std::string>(comboBox_Rules_protocol->Text->Length > 0 ? comboBox_Rules_protocol->Text : "*")); // Assuming there is a setProtocol method
			rules.setAction(msclr::interop::marshal_as<std::string>(comboBox_Rules_action->Text->ToUpper()));
			rules.setData(msclr::interop::marshal_as<std::string>(txtBox_Rules_data->Text->Length > 0 ? txtBox_Rules_data->Text : "*"));
			rule_vec.push_back(rules);

			// Append rule information to RichTextBox
			String^ newRule = String::Format("-----------------------------------\nRule {0}:\n\n"
				"Source:                {1}\n"
				"Destination:           {2}\n"
				"Source Port:           {3}\n"
				"Destination Port:      {4}\n"
				"Protocol:              {5}\n"
				"Action:                {6}\n"
				"Data:                  {7}\n\n-----------------------------------\n",
				rules.getRuleNo(),
				gcnew String(rules.getSrc().c_str()),
				gcnew String(rules.getDst().c_str()),
				gcnew String(rules.getSrcPort().c_str()),
				gcnew String(rules.getDstPort().c_str()),
				gcnew String(rules.getProtocol().c_str()),
				gcnew String(rules.getAction().c_str()),
				gcnew String(rules.getData().c_str()));

			// If RichTextBox is empty, append the header
			if (richTextBox_rulesInfo->Text->Length == 0) {
				newRule = "Rules:\n\n" + newRule;
			}

			richTextBox_rulesInfo->Font = gcnew System::Drawing::Font("Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point); // Use a fixed-width font
			richTextBox_rulesInfo->WordWrap = false;
			richTextBox_rulesInfo->SelectionAlignment = HorizontalAlignment::Left;

			// Set color based on action (ALLOW/DENY)
			if (comboBox_Rules_action->Text->ToLower() == "allow") {
				richTextBox_rulesInfo->SelectionColor = System::Drawing::Color::Green;
			}
			else if (comboBox_Rules_action->Text->ToLower() == "deny") {
				richTextBox_rulesInfo->SelectionColor = System::Drawing::Color::Red;
			}
			else {
				richTextBox_rulesInfo->SelectionColor = System::Drawing::Color::Black;
			}

			richTextBox_rulesInfo->AppendText(newRule); 
			richTextBox_rulesInfo->SelectionStart = richTextBox_rulesInfo->Text->Length;
			richTextBox_rulesInfo->ScrollToCaret();

			// Clear input fields after adding the rule
			txtBox_Ruels_src->Clear();
			txtBox_Rules_dst->Clear();
			comboBox_Rules_srcPort->SelectedIndex = -1;
			comboBox_Rules_dstPort->SelectedIndex = -1;
			comboBox_Rules_protocol->SelectedIndex = -1;
			comboBox_Rules_action->SelectedIndex = -1;
			txtBox_Rules_data->Clear();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error adding rule: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private: System::Void btn_CancelRules_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_addRules->Hide();

	// Reset the text of TextBox controls within the panel
	txtBox_Ruels_src->Text = "";
	txtBox_Rules_dst->Text = "";
	txtBox_Rules_data->Text = "";

	// Reset the selected index of ComboBox controls within the panel
	comboBox_Rules_srcPort->SelectedIndex = -1;
	comboBox_Rules_dstPort->SelectedIndex = -1;
	comboBox_Rules_protocol->SelectedIndex = -1;
	comboBox_Rules_action->SelectedIndex = -1;
}

private: System::Void txtBox_Ruels_src_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ inputText = txtBox_Ruels_src->Text;
	String^ filteredText = "";
	int cursorPosition = txtBox_Ruels_src->SelectionStart; // Store the current cursor position

	for (int i = 0; i < inputText->Length; i++) {
		if (Char::IsDigit(inputText[i]) || inputText[i] == '.' || inputText[i] == '-' || inputText[i] == '\b') {
			filteredText += inputText[i];
		}
	}

	txtBox_Ruels_src->Text = filteredText;
	txtBox_Ruels_src->SelectionStart = cursorPosition; // Restore the cursor position
	txtBox_Ruels_src->ScrollToCaret(); // Scroll to the caret position if needed
}

private: System::Void txtBox_Rules_dst_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ inputText = txtBox_Rules_dst->Text;
	String^ filteredText = "";
	int cursorPosition = txtBox_Rules_dst->SelectionStart; // Store the current cursor position

	for (int i = 0; i < inputText->Length; i++) {
		if (Char::IsDigit(inputText[i]) || inputText[i] == '.' || inputText[i] == '-' || inputText[i] == '\b') {
			filteredText += inputText[i];
		}
	}

	txtBox_Rules_dst->Text = filteredText;
	txtBox_Rules_dst->SelectionStart = cursorPosition; // Restore the cursor position
	txtBox_Rules_dst->ScrollToCaret(); // Scroll to the caret position if needed
}


	   //Packets
private: System::Void btn_addPacketsPanel_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_addPackets->Show();
}
private: System::Void btn_Back_Packets_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_Packets->Hide();
	panel_addPackets->Hide();
	panel_addRules->Hide();
}

private: System::Void btn_CancelPackets_Click(System::Object^ sender, System::EventArgs^ e) {
	// Hide the panel
	panel_addPackets->Hide();

	// Reset the text of TextBox controls within the panel
	txtBox_Packets_src->Text = "";
	txtBox_Packets_dst->Text = "";
	txtBox_Packets_data->Text = "";

	// Reset the selected index of ComboBox controls within the panel
	comboBox_Packets_srcPort->SelectedIndex = -1;
	comboBox_Packets_dstPort->SelectedIndex = -1;
	comboBox_Packets_Pro->SelectedIndex = -1;

}

	   //This code is for adding Packets
private:
	int lastSrNumber = 0; // Variable to store the last used serial number
	System::Void btn_browse_Packets_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_addPackets->Hide();
		// instance of the Packet class
		Packet packet;
		//using stream to read file.
		Stream^ mystream;
		//using OpenFileDialog to get file.
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;

		openFileDialog->Filter = "Text files (*.txt)|*.txt";
		openFileDialog->Title = "Select a file";
		openFileDialog->RestoreDirectory = true; //the dialog box will open in the previously selected directory.

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
				if ((mystream = openFileDialog->OpenFile()) != nullptr) {
					// Read the contents of the file
					StreamReader^ reader = gcnew StreamReader(mystream);
					String^ fileContents = reader->ReadToEnd();
					reader->Close();

					// Split the file contents by newline
					array<String^>^ lines = fileContents->Split(Environment::NewLine->ToCharArray());

					int packetNumber = lastSrNumber + 1; // Initialize packet number
					for each (String ^ line in lines) {
						try {
							if (!String::IsNullOrWhiteSpace(line)) {
								array<String^>^ parts = line->Split(';');
								if (parts->Length == 6) {
									// Extract packet components from each line
									String^ src = parts[0]->Substring(parts[0]->IndexOf("SRC ") + 4);
									String^ dst = parts[1]->Substring(parts[1]->IndexOf("DST ") + 4);
									String^ srcPort = parts[2]->Substring(parts[2]->IndexOf("SRC_PORT ") + 9);
									String^ dstPort = parts[3]->Substring(parts[3]->IndexOf("DST_PORT ") + 9);
									String^ pro = parts[4]->Substring(parts[4]->IndexOf("PRO ") + 4);
									String^ data = parts[5]->Substring(parts[5]->IndexOf("DATA ") + 5);

									// Validate IP address
									System::Net::IPAddress^ ipAddress;
									if (!System::Net::IPAddress::TryParse(src, ipAddress) || !System::Net::IPAddress::TryParse(dst, ipAddress)) {
										MessageBox::Show("Skipping line due to invalid IP address format.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
										continue; // Skip to the next line
									}

									// Validate port numbers
									int srcPortInt, dstPortInt;
									if (!Int32::TryParse(srcPort, srcPortInt) || !Int32::TryParse(dstPort, dstPortInt) || srcPortInt < 0 || srcPortInt > 65535 || dstPortInt < 0 || dstPortInt > 65535) {
										MessageBox::Show("Skipping line due to invalid port number.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
										continue; // Skip to the next line
									}

									// Create formatted packet string
									String^ formattedPacket = String::Format("-----------------------------------\nPacket {0}:\n\n"
										"Source:                {1}\n"
										"Destination:           {2}\n"
										"Source Port:           {3}\n"
										"Destination Port:      {4}\n"
										"Protocol:              {5}\n"
										"Data:                  {6}\n\n-----------------------------------\n",
										packetNumber++, src, dst, srcPort, dstPort, pro, data);
									// Convert System::String^ to std::string
									std::string strTime = msclr::interop::marshal_as<std::string>(DateTime::Now.ToString());

									// Add packet details to the vector
									packet.setTime(strTime);
									packet.setPacketNo(packetNumber);
									packet.setSrc(msclr::interop::marshal_as<std::string>(src));
									packet.setDst(msclr::interop::marshal_as<std::string>(dst));
									packet.setSrcPort(msclr::interop::marshal_as<std::string>(srcPort));
									packet.setDstPort(msclr::interop::marshal_as<std::string>(dstPort));
									packet.setProtocol(msclr::interop::marshal_as<std::string>(pro));
									packet.setData(msclr::interop::marshal_as<std::string>(data));
									// Add packet details to the vector
									packet_vec.push_back(packet);

									// Append packet information to RichTextBox
									richTextBox_PacketsInfo->AppendText(formattedPacket);
									richTextBox_PacketsInfo->ScrollToCaret();
								}
								else {
									MessageBox::Show("Invalid format detected in the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
									// Display guidelines for the format of packets
									MessageBox::Show("Packets should be structured as follows:\n\n"
										"Each packet should be represented on a separate line.\n"
										"Each packet consists of the following fields:\n"
										"  - Source IP address: SRC <source IP>\n"
										"  - Destination IP address: DST <destination IP>\n"
										"  - Source port number: SRC_PORT <source port>\n"
										"  - Destination port number: DST_PORT <destination port>\n"
										"  - Protocol (e.g., TCP or UDP): PRO <protocol>\n"
										"  - Data payload: DATA <data>\n\n"
										"Example Packet:\n"
										"  SRC 192.168.1.1; DST 10.0.0.1; SRC_PORT 12345; DST_PORT 80; PRO TCP; DATA Hello, World!\n\n"
										"Each field should be separated by a semicolon (;) and a space.",
										"Packet Format Guidelines",
										MessageBoxButtons::OK,
										MessageBoxIcon::Information);
									return;
								}
							}
						}
						catch (Exception^ ex) {
							MessageBox::Show("Error processing line: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						}
					}
					lastSrNumber = packetNumber - 1; // Update the last serial number with the last packet number from the file

					mystream->Close();
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error opening file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}


	System::Void btn_addPackets_Click(System::Object^ sender, System::EventArgs^ e) {
		Packet packet;
		// Check if any field is empty
		if (String::IsNullOrWhiteSpace(txtBox_Packets_src->Text) ||
			String::IsNullOrWhiteSpace(txtBox_Packets_dst->Text) ||
			String::IsNullOrWhiteSpace(comboBox_Packets_srcPort->Text) ||
			String::IsNullOrWhiteSpace(comboBox_Packets_dstPort->Text) ||
			String::IsNullOrWhiteSpace(comboBox_Packets_Pro->Text) ||
			String::IsNullOrWhiteSpace(txtBox_Packets_data->Text)) {

			MessageBox::Show("Please fill in all fields before adding a new packet.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Increment the serial number for the new Packet
		lastSrNumber++;

		// Convert System::String^ to std::string
		std::string strTime = msclr::interop::marshal_as<std::string>(DateTime::Now.ToString());

		// Call the setTime function with the converted std::string
		packet.setTime(strTime);
		packet.setPacketNo(lastSrNumber);
		packet.setSrc(msclr::interop::marshal_as<std::string>(txtBox_Packets_src->Text));
		packet.setDst(msclr::interop::marshal_as<std::string>(txtBox_Packets_dst->Text));
		packet.setSrcPort(msclr::interop::marshal_as<std::string>(comboBox_Packets_srcPort->Text));
		packet.setDstPort(msclr::interop::marshal_as<std::string>(comboBox_Packets_dstPort->Text));
		packet.setProtocol(msclr::interop::marshal_as<std::string>(comboBox_Packets_Pro->Text));
		packet.setData(msclr::interop::marshal_as<std::string>(txtBox_Packets_data->Text));

		try {
			// Add the packet to the vector
			packet_vec.push_back(packet);

			// Create a formatted packet string using the Packet object
			String^ newPacket = String::Format("-----------------------------------\nPacket {0}:\n\n"
				"Source:                {1}\n"
				"Destination:           {2}\n"
				"Source Port:           {3}\n"
				"Destination Port:      {4}\n"
				"Protocol:              {5}\n"
				"Data:                  {6}\n\n-----------------------------------\n",
				packet.getPacketNo(),
				gcnew String(packet.getSrc().c_str()),
				gcnew String(packet.getDst().c_str()),
				gcnew String(packet.getSrcPort().c_str()),
				gcnew String(packet.getDstPort().c_str()),
				gcnew String(packet.getProtocol().c_str()),
				gcnew String(packet.getData().c_str()));

			// If RichTextBox is empty, append the header
			if (richTextBox_PacketsInfo->Text->Length == 0) {
				newPacket = "Packets:\n\n" + newPacket;
			}

			richTextBox_PacketsInfo->Font = gcnew System::Drawing::Font("Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point); 
			richTextBox_PacketsInfo->WordWrap = false;
			richTextBox_PacketsInfo->SelectionAlignment = HorizontalAlignment::Left;

			richTextBox_PacketsInfo->AppendText(newPacket); 
			richTextBox_PacketsInfo->SelectionStart = richTextBox_PacketsInfo->Text->Length;
			richTextBox_PacketsInfo->ScrollToCaret();

			// Clear the text boxes and combo boxes after adding the packet
			txtBox_Packets_src->Clear();
			txtBox_Packets_dst->Clear();
			comboBox_Packets_srcPort->SelectedIndex = -1;
			comboBox_Packets_dstPort->SelectedIndex = -1;
			comboBox_Packets_Pro->SelectedIndex = -1;
			txtBox_Packets_data->Clear();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error adding packet: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}



private: System::Void txtBox_Packets_src_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ inputText = txtBox_Packets_src->Text;
	String^ filteredText = "";
	int cursorPosition = txtBox_Packets_src->SelectionStart; // Store the current cursor position

	for (int i = 0; i < inputText->Length; i++) {
		if (Char::IsDigit(inputText[i]) || inputText[i] == '.' || inputText[i] == '-' || inputText[i] == '\b') {
			filteredText += inputText[i];
		}
	}

	txtBox_Packets_src->Text = filteredText;
	txtBox_Packets_src->SelectionStart = cursorPosition; // Restore the cursor position
	txtBox_Packets_src->ScrollToCaret(); // Scroll to the caret position if needed
}
private: System::Void txtBox_Packets_dst_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ inputText = txtBox_Packets_dst->Text;
	String^ filteredText = "";
	int cursorPosition = txtBox_Packets_dst->SelectionStart; // Store the current cursor position

	for (int i = 0; i < inputText->Length; i++) {
		if (Char::IsDigit(inputText[i]) || inputText[i] == '.' || inputText[i] == '-' || inputText[i] == '\b') {
			filteredText += inputText[i];
		}
	}

	txtBox_Packets_dst->Text = filteredText;
	txtBox_Packets_dst->SelectionStart = cursorPosition; // Restore the cursor position
	txtBox_Packets_dst->ScrollToCaret(); // Scroll to the caret position if needed
}

private: System::Void btn_Next_Compare_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_addPackets->Hide();
	richTextBox_PacketsInfo->Hide();
	panel_compare->Show();
}

private: System::Void btn_Back_Compare_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox_Result->Clear();
	panel_compare->Hide();
	richTextBox_PacketsInfo->Show();
	panel_addPackets->Hide();
	panel_Packets->Show();

}
private: System::Void btn_Compare_Click(System::Object^ sender, System::EventArgs^ e) {
	//Calling compare fucnction to compare rules and packets
	Compare(packet_vec, rule_vec);
}
	   //fucnction to compare rules and packets
	   void Compare(std::vector<Packet>& Packet, std::vector<Rules>& Rules)
	   {
		   int i = 0; // Initialize packet counter
		   int packetCount = 0; // Initialize packet count
		   for (auto& packet : Packet) // Loop through each packet
		   {
			   std::string _rule; // Variable to store rule action
			   bool flag = false; // Flag to indicate if rule match is found
			   int j = 0; // Initialize rule counter
			   i++; // Increment packet counter
			   packetCount++; // Increment packet count
			   for (auto& rule : Rules) // Loop through each rule
			   {
				   j++; // Increment rule counter
				   _rule = rule.getAction(); // Get rule action

				   // Check if source IP range exists in rule
				   if (RangeExists(rule.getSrc()))
				   {
					   // Check if packet source IP matches rule source IP range
					   flag = Matchip(rule.getSrc(), packet.getSrc());
				   }
				   else
				   {
					   // Check if packet source IP matches rule source IP
					   flag = (packet.getSrc() == rule.getSrc());
				   }

				   // If source match is found, break out of loop
				   if (flag)
				   {
					   break;
				   }

				   // Check if destination IP range exists in rule
				   if (RangeExists(rule.getDst()))
				   {
					   // Check if packet destination IP matches rule destination IP range
					   flag = Matchip(rule.getDst(), packet.getDst());
				   }
				   else
				   {
					   // Check if packet destination IP matches rule destination IP
					   flag = packet.getDst() == rule.getDst();
				   }

				   // If destination match is found, break out of loop
				   if (flag) break;

				   // Check other rule conditions
				   else flag = packet.getSrcPort() == rule.getSrcPort();
				   if (flag) break;
				   else flag = packet.getDstPort() == rule.getDstPort();
				   if (flag) break;
				   else flag = packet.getProtocol() == rule.getProtocol();
				   if (flag) break;
				   else
				   {
					   // Check if rule applies based on packet data
					   if (rule.getData() != "") { // Check if rule has data to match against packet data
						   //Search for rule's data string in packet's data
						   size_t found = packet.getData().find(rule.getData());
						   if (found != std::string::npos) { // If the whole string is found in packet data
							   flag = true; // Set flag to indicate rule match
							   break; // Break out of loop as rule match is found
						   }
					   }
				   }
				   if (flag) break;
			   }
			   // If rule match is found
			   if (flag)
			   {
				   // Create result string with matched rule and packet details
				   std::string String = _rule + "   \t" + packet.getSrc() + "   \t" + packet.getDst() + "   \t" +
					   packet.getSrcPort() + "   \t" + packet.getDstPort() + "   \t" + packet.getProtocol()
					   + "   \t" + packet.getData() + "   \t" + packet.getTime() + "\r\n Rule No " + std::to_string(j)
					   + " On Packet No : " + std::to_string(i) + "\n";

				   // Convert result string to System::String for display
				   System::String^ textToShow = gcnew System::String(String.c_str());

				   // Display result in rich text box
				   richTextBox_Result->WordWrap = false;
				   richTextBox_Result->AppendText(textToShow + "\n");

				   // Apply bold formatting to rule number
				   int startIndex = richTextBox_Result->Text->LastIndexOf("Rule No ") + 8;
				   int endIndex = richTextBox_Result->Text->IndexOf(" On Packet No :", startIndex);
				   richTextBox_Result->SelectionStart = startIndex;
				   richTextBox_Result->SelectionLength = endIndex - startIndex;
				   richTextBox_Result->SelectionFont = gcnew System::Drawing::Font(richTextBox_Result->Font, System::Drawing::FontStyle::Bold);

				   // Apply bold formatting to packet number
				   startIndex = richTextBox_Result->Text->LastIndexOf(" On Packet No : ") + 13;
				   endIndex = richTextBox_Result->Text->Length;
				   richTextBox_Result->SelectionStart = startIndex;
				   richTextBox_Result->SelectionLength = endIndex - startIndex;
				   richTextBox_Result->SelectionFont = gcnew System::Drawing::Font(richTextBox_Result->Font, System::Drawing::FontStyle::Bold);

				   // Apply color formatting based on rule action
				   if (_rule == "ALLOW")
				   {
					   richTextBox_Result->SelectionColor = System::Drawing::Color::Blue;
				   }
				   else if (_rule == "DENY")
				   {
					   richTextBox_Result->SelectionColor = System::Drawing::Color::Red;
				   }
			   }
			   else {
				   // If no match is found, deny the packet as a default rule

				   // Create result string for default deny rule
				   std::string result = "DENY   \t" + packet.getSrc() + "   \t" + packet.getDst() + "   \t" +
					   packet.getSrcPort() + "   \t" + packet.getDstPort() + "   \t" + packet.getProtocol() +
					   "   \t" + packet.getData() + "   \t" + packet.getTime() + "\t\n Default Rule On " +
					   " Packet No : " + std::to_string(packetCount) + "\n";

				   // Convert result string to System::String for display
				   System::String^ textToShow = gcnew System::String(result.c_str());

				   // Display result in rich text box
				   richTextBox_Result->AppendText(textToShow + "\n");

				   // Apply bold formatting to packet number
				   int startIndex = richTextBox_Result->Text->LastIndexOf(" Packet No : ") + 13;
				   int endIndex = richTextBox_Result->Text->Length;
				   richTextBox_Result->SelectionStart = startIndex;
				   richTextBox_Result->SelectionLength = endIndex - startIndex;
				   richTextBox_Result->SelectionFont = gcnew System::Drawing::Font(richTextBox_Result->Font, System::Drawing::FontStyle::Bold);

				   // Apply color formatting for the default "DENY" rule
				   richTextBox_Result->SelectionColor = System::Drawing::Color::Red;
			   }

		   }
	   }

	   bool Matchip(const std::string& range, const std::string& ip) {
		   // Create input string streams for range and IP address
		   std::istringstream isRange(range);
		   std::istringstream isIp(ip);

		   std::string rOctet; // String to store each octet in the range
		   std::string iPOctet; // String to store each octet in the IP address
		   long long int ipNum; // Variable to store the integer representation of IP octet
		   int rangeStart, rangeEnd; // Variables to store the start and end values of the range

		   // Loop through each octet in the IP address and range
		   for (int i = 0; i < 4; ++i) {
			   // Extract octets from range and IP address
			   getline(isRange, rOctet, '.');
			   getline(isIp, iPOctet, '.');

			   try {
				   rangeStart = std::stoi(rOctet); // Convert range octet to integer
				   rangeEnd = rangeStart;  // Initialize rangeEnd with rangeStart

				   // Check if the range octet contains a hyphen (indicating a range)
				   size_t hyphenPos = rOctet.find('-');
				   if (hyphenPos != std::string::npos) {
					   // Extract the range start and end values
					   rangeEnd = std::stoi(rOctet.substr(hyphenPos + 1));
				   }

				   // Get the corresponding octet from the IP address and convert to integer
				   ipNum = std::stoi(iPOctet);

				   // Check if the IP octet is within the range
				   if (ipNum < rangeStart || ipNum > rangeEnd) {
					   return false;  // IP is outside the range
				   }
			   }
			   catch (const std::invalid_argument&) {
				   //if stoi fails
				   MessageBox::Show("Invalid input format, unable to convert to integer");
				   return false;
			   }
			   catch (const std::out_of_range&) {
				   //if stoi result is out of range
				   MessageBox::Show("Invalid input format, unable to convert to integer");
				   return false;
			   }
		   }

		   return true;  // IP is within the range
	   }



	   // Function to check if a range exists in the pattern segment
	   bool RangeExists(const std::string& patternSegment) {
		   // Check if the patternSegment string contains a dash ('-')
		   if (patternSegment.find('-') != std::string::npos) {
			   // If a dash is found, it indicates the presence of a range
			   return true;
		   }
		   // If no dash is found, it means the patternSegment does not represent
		   else return false;
	   }


private: System::Void btn_showRules_Click(System::Object^ sender, System::EventArgs^ e) {
	// Converting rule_vec to a System::String^
	System::String^ rulesString = gcnew System::String("");
	for (const auto& rule : rule_vec) {
		rulesString += gcnew System::String(rule.getRuleAsString().c_str());
		rulesString += "\r\n"; // Add a newline between rules
	}

	// Show the rules in a custom dialog box
	Project1::RulesDialogBox^ dialog = gcnew Project1::RulesDialogBox(rulesString);
	dialog->ShowDialog();
}
private: System::Void btn_clearRules_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox_rulesInfo->Clear();
	rule_vec.clear();
	lastSerialNumber = 0;
}
private: System::Void btn_clearPackets_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox_PacketsInfo->Clear();
	packet_vec.clear();
	lastSrNumber = 0;
}
};
}
