#pragma once
#include"Firewall_Info.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// Summary for Authenticate
	/// </summary>
	public ref class Authenticate : public System::Windows::Forms::Form
	{
	public:
		Authenticate(void)
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
		~Authenticate()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ btn_Authenticate;
	private: System::Windows::Forms::Button^ btn_CancelAuthen;

	private: System::Windows::Forms::Label^ lbl_Password;
	private: System::Windows::Forms::Label^ lbl_info1;
	private: System::Windows::Forms::Label^ lbl_info2;
	private: System::Windows::Forms::TextBox^ txtBox_password;
	private: System::Windows::Forms::Label^ lbl_icon;






	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Authenticate::typeid));
			this->btn_Authenticate = (gcnew System::Windows::Forms::Button());
			this->btn_CancelAuthen = (gcnew System::Windows::Forms::Button());
			this->lbl_Password = (gcnew System::Windows::Forms::Label());
			this->lbl_info1 = (gcnew System::Windows::Forms::Label());
			this->lbl_info2 = (gcnew System::Windows::Forms::Label());
			this->txtBox_password = (gcnew System::Windows::Forms::TextBox());
			this->lbl_icon = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_Authenticate
			// 
			this->btn_Authenticate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Authenticate->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Authenticate->Location = System::Drawing::Point(461, 248);
			this->btn_Authenticate->Name = L"btn_Authenticate";
			this->btn_Authenticate->Size = System::Drawing::Size(114, 33);
			this->btn_Authenticate->TabIndex = 2;
			this->btn_Authenticate->Text = L"Authenticate";
			this->btn_Authenticate->UseVisualStyleBackColor = true;
			this->btn_Authenticate->Click += gcnew System::EventHandler(this, &Authenticate::btn_Authenticate_Click);
			// 
			// btn_CancelAuthen
			// 
			this->btn_CancelAuthen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CancelAuthen->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_CancelAuthen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_CancelAuthen.Image")));
			this->btn_CancelAuthen->Location = System::Drawing::Point(344, 248);
			this->btn_CancelAuthen->Name = L"btn_CancelAuthen";
			this->btn_CancelAuthen->Size = System::Drawing::Size(114, 33);
			this->btn_CancelAuthen->TabIndex = 3;
			this->btn_CancelAuthen->Text = L" Cancel";
			this->btn_CancelAuthen->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_CancelAuthen->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_CancelAuthen->UseVisualStyleBackColor = true;
			this->btn_CancelAuthen->Click += gcnew System::EventHandler(this, &Authenticate::btn_CancelAuthen_Click);
			// 
			// lbl_Password
			// 
			this->lbl_Password->AutoSize = true;
			this->lbl_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Password->Location = System::Drawing::Point(62, 200);
			this->lbl_Password->Name = L"lbl_Password";
			this->lbl_Password->Size = System::Drawing::Size(97, 28);
			this->lbl_Password->TabIndex = 0;
			this->lbl_Password->Text = L"Password:";
			// 
			// lbl_info1
			// 
			this->lbl_info1->AutoSize = true;
			this->lbl_info1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_info1->ForeColor = System::Drawing::Color::Black;
			this->lbl_info1->Location = System::Drawing::Point(61, 43);
			this->lbl_info1->Name = L"lbl_info1";
			this->lbl_info1->Size = System::Drawing::Size(463, 60);
			this->lbl_info1->TabIndex = 0;
			this->lbl_info1->Text = L"Authentication is required to run the Firewall\r\nConfiguration";
			this->lbl_info1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl_info2
			// 
			this->lbl_info2->AutoSize = true;
			this->lbl_info2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_info2->Location = System::Drawing::Point(63, 112);
			this->lbl_info2->Name = L"lbl_info2";
			this->lbl_info2->Size = System::Drawing::Size(482, 75);
			this->lbl_info2->TabIndex = 0;
			this->lbl_info2->Text = L"An application is attempting to perform an action that\r\nrequires privileges. Auth"
				L"entications is required to perform this\r\naction.";
			this->lbl_info2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtBox_password
			// 
			this->txtBox_password->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBox_password->Location = System::Drawing::Point(163, 202);
			this->txtBox_password->Name = L"txtBox_password";
			this->txtBox_password->PasswordChar = '*';
			this->txtBox_password->Size = System::Drawing::Size(367, 26);
			this->txtBox_password->TabIndex = 1;
			// 
			// lbl_icon
			// 
			this->lbl_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbl_icon.Image")));
			this->lbl_icon->Location = System::Drawing::Point(7, 38);
			this->lbl_icon->Name = L"lbl_icon";
			this->lbl_icon->Size = System::Drawing::Size(48, 57);
			this->lbl_icon->TabIndex = 0;
			// 
			// Authenticate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(600, 300);
			this->Controls->Add(this->lbl_icon);
			this->Controls->Add(this->txtBox_password);
			this->Controls->Add(this->lbl_info2);
			this->Controls->Add(this->lbl_info1);
			this->Controls->Add(this->lbl_Password);
			this->Controls->Add(this->btn_CancelAuthen);
			this->Controls->Add(this->btn_Authenticate);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(600, 300);
			this->MinimumSize = System::Drawing::Size(600, 300);
			this->Name = L"Authenticate";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Authenticate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btn_CancelAuthen_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void btn_Authenticate_Click(System::Object^ sender, System::EventArgs^ e) {
	//Check password for login
	if (txtBox_password->Text == "admin")
	{
		this->Hide();
		Firewall_Info^ firewall = gcnew Firewall_Info;
		firewall->ShowDialog();
		this->Close();
	}
	else
	{
		MessageBox::Show("Incorrect Password");
	}
}
};
}
