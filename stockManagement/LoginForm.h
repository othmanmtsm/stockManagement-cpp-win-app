#pragma once

namespace stockManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
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
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox1;
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
			this->bunifuTextbox1 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->SuspendLayout();
			// 
			// bunifuTextbox1
			// 
			this->bunifuTextbox1->BackColor = System::Drawing::Color::White;
			this->bunifuTextbox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.BackgroundImage")));
			this->bunifuTextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox1->ForeColor = System::Drawing::Color::Firebrick;
			this->bunifuTextbox1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.Icon")));
			this->bunifuTextbox1->Location = System::Drawing::Point(268, 124);
			this->bunifuTextbox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bunifuTextbox1->Name = L"bunifuTextbox1";
			this->bunifuTextbox1->Size = System::Drawing::Size(333, 52);
			this->bunifuTextbox1->TabIndex = 0;
			this->bunifuTextbox1->text = L"";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 517);
			this->Controls->Add(this->bunifuTextbox1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		bunifuTextbox1->Icon->RemovePropertyItem;
	}
	};
}
