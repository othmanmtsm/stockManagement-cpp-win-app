#pragma once
#include "mainForm.h"


namespace stockManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::Sql;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: FlatButton::JFlatButton^ loginBtn;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ loginTxt;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ passwdTxt;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->loginBtn = (gcnew FlatButton::JFlatButton());
			this->loginTxt = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->passwdTxt = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::DodgerBlue;
			this->loginBtn->BackgroundColor = System::Drawing::Color::DodgerBlue;
			this->loginBtn->ButtonText = L"Login";
			this->loginBtn->CausesValidation = false;
			this->loginBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginBtn->ErrorImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginBtn.ErrorImageLeft")));
			this->loginBtn->ErrorImageRight = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginBtn.ErrorImageRight")));
			this->loginBtn->FocusBackground = System::Drawing::Color::Empty;
			this->loginBtn->FocusFontColor = System::Drawing::Color::Empty;
			this->loginBtn->ForeColors = System::Drawing::Color::White;
			this->loginBtn->HoverBackground = System::Drawing::Color::DodgerBlue;
			this->loginBtn->HoverFontColor = System::Drawing::Color::Empty;
			this->loginBtn->ImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginBtn.ImageLeft")));
			this->loginBtn->ImageRight = nullptr;
			this->loginBtn->LeftPictureColor = System::Drawing::Color::Transparent;
			this->loginBtn->Location = System::Drawing::Point(250, 310);
			this->loginBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->PaddingLeftPicture = System::Windows::Forms::Padding(0);
			this->loginBtn->PaddingRightPicture = System::Windows::Forms::Padding(0);
			this->loginBtn->RightPictureColor = System::Drawing::Color::Transparent;
			this->loginBtn->Size = System::Drawing::Size(325, 53);
			this->loginBtn->SizeModeLeft = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->loginBtn->SizeModeRight = System::Windows::Forms::PictureBoxSizeMode::Normal;
			this->loginBtn->TabIndex = 6;
			this->loginBtn->Click += gcnew System::EventHandler(this, &LoginForm::loginBtn_Click);
			// 
			// loginTxt
			// 
			this->loginTxt->BorderColor = System::Drawing::Color::SeaGreen;
			this->loginTxt->Location = System::Drawing::Point(250, 185);
			this->loginTxt->Name = L"loginTxt";
			this->loginTxt->Size = System::Drawing::Size(325, 22);
			this->loginTxt->TabIndex = 7;
			// 
			// passwdTxt
			// 
			this->passwdTxt->BorderColor = System::Drawing::Color::SeaGreen;
			this->passwdTxt->Location = System::Drawing::Point(250, 257);
			this->passwdTxt->Name = L"passwdTxt";
			this->passwdTxt->PasswordChar = '*';
			this->passwdTxt->Size = System::Drawing::Size(325, 22);
			this->passwdTxt->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(250, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(250, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Password";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(836, 543);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->passwdTxt);
			this->Controls->Add(this->loginTxt);
			this->Controls->Add(this->loginBtn);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		
	}
private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = loginTxt->Text;
		String^ password = passwdTxt->Text;
		SqlConnection^ cnx = gcnew SqlConnection("Data Source=.;Initial Catalog=DB_A61B88_storemgmnt; Integrated Security=True");
		cnx->Open();
		SqlCommand^ cmd = gcnew SqlCommand("select * from users where login=@login and password=@password",cnx);
		cmd->Parameters->AddWithValue("login", loginTxt->Text);
		cmd->Parameters->AddWithValue("password", passwdTxt->Text);
		SqlDataReader^ dr = cmd->ExecuteReader();
		if (dr->Read()){
			this->Hide();
			mainForm^ main = gcnew mainForm();
			main->ShowDialog();
		}else{
			MessageBox::Show(login);
		}
		cnx->Close();
}
};
}
