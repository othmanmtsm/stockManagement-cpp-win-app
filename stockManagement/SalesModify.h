#pragma once
#include <exception>

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
	/// Summary for SalesModify
	/// </summary>
	public ref class SalesModify : public System::Windows::Forms::Form
	{
	public: String^ saleID;
	public:
		SalesModify(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SalesModify(String^ id)
		{
			InitializeComponent();
			saleID = id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SalesModify()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ qteTx;
	protected:
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ cancelBtn;
	private: JTextBox::JText_Box^ jText_Box1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel1;
	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel6;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel5;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: System::Windows::Forms::ComboBox^ ProductComboBox;
	private: System::Windows::Forms::ComboBox^ supplierComboBox;
	private: System::Windows::Forms::Panel^ panel2;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ costTx;

	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesModify::typeid));
			this->qteTx = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->cancelBtn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->jText_Box1 = (gcnew JTextBox::JText_Box());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->bunifuCustomLabel6 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->ProductComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->supplierComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->costTx = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->SuspendLayout();
			// 
			// qteTx
			// 
			this->qteTx->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->qteTx->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->qteTx->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->qteTx->BorderThickness = 1;
			this->qteTx->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->qteTx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->qteTx->ForeColor = System::Drawing::Color::DimGray;
			this->qteTx->isPassword = false;
			this->qteTx->Location = System::Drawing::Point(94, 458);
			this->qteTx->Margin = System::Windows::Forms::Padding(0);
			this->qteTx->Name = L"qteTx";
			this->qteTx->Size = System::Drawing::Size(551, 43);
			this->qteTx->TabIndex = 143;
			this->qteTx->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Update";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = false;
			this->bunifuFlatButton1->IconZoom = 90;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(96, 631);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(5);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(331, 63);
			this->bunifuFlatButton1->TabIndex = 140;
			this->bunifuFlatButton1->Text = L"Update";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &SalesModify::bunifuFlatButton1_Click);
			// 
			// cancelBtn
			// 
			this->cancelBtn->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->cancelBtn->BackColor = System::Drawing::Color::White;
			this->cancelBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cancelBtn->BorderRadius = 0;
			this->cancelBtn->ButtonText = L"Cancel";
			this->cancelBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancelBtn->DisabledColor = System::Drawing::Color::Gray;
			this->cancelBtn->ForeColor = System::Drawing::Color::White;
			this->cancelBtn->Iconcolor = System::Drawing::Color::Transparent;
			this->cancelBtn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancelBtn.Iconimage")));
			this->cancelBtn->Iconimage_right = nullptr;
			this->cancelBtn->Iconimage_right_Selected = nullptr;
			this->cancelBtn->Iconimage_Selected = nullptr;
			this->cancelBtn->IconMarginLeft = 0;
			this->cancelBtn->IconMarginRight = 0;
			this->cancelBtn->IconRightVisible = false;
			this->cancelBtn->IconRightZoom = 0;
			this->cancelBtn->IconVisible = false;
			this->cancelBtn->IconZoom = 90;
			this->cancelBtn->IsTab = false;
			this->cancelBtn->Location = System::Drawing::Point(455, 631);
			this->cancelBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Normalcolor = System::Drawing::Color::White;
			this->cancelBtn->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->cancelBtn->OnHoverTextColor = System::Drawing::Color::White;
			this->cancelBtn->selected = false;
			this->cancelBtn->Size = System::Drawing::Size(192, 63);
			this->cancelBtn->TabIndex = 139;
			this->cancelBtn->Text = L"Cancel";
			this->cancelBtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cancelBtn->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->cancelBtn->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->cancelBtn->Click += gcnew System::EventHandler(this, &SalesModify::cancelBtn_Click);
			// 
			// jText_Box1
			// 
			this->jText_Box1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->jText_Box1->BorderThickness = 1;
			this->jText_Box1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->jText_Box1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jText_Box1->FontStyles = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jText_Box1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->jText_Box1->Location = System::Drawing::Point(452, 629);
			this->jText_Box1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->jText_Box1->MaxLength = 32767;
			this->jText_Box1->Name = L"jText_Box1";
			this->jText_Box1->onFocusBorderColor = System::Drawing::Color::Magenta;
			this->jText_Box1->PasswordChar = '\0';
			this->jText_Box1->RoundedBorder = 0;
			this->jText_Box1->Size = System::Drawing::Size(195, 65);
			this->jText_Box1->TabIndex = 138;
			this->jText_Box1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->jText_Box1->TextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->jText_Box1->TextInput = L"";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->panel4->Location = System::Drawing::Point(11, 817);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(719, 10);
			this->panel4->TabIndex = 137;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->ForeColor = System::Drawing::Color::Gainsboro;
			this->panel3->Location = System::Drawing::Point(730, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(11, 827);
			this->panel3->TabIndex = 136;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->ForeColor = System::Drawing::Color::Gainsboro;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(11, 827);
			this->panel1->TabIndex = 135;
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->bunifuSeparator1->LineThickness = 1;
			this->bunifuSeparator1->Location = System::Drawing::Point(37, 111);
			this->bunifuSeparator1->Margin = System::Windows::Forms::Padding(5);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(657, 43);
			this->bunifuSeparator1->TabIndex = 134;
			this->bunifuSeparator1->Transparency = 255;
			this->bunifuSeparator1->Vertical = false;
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel6->Location = System::Drawing::Point(252, 60);
			this->bunifuCustomLabel6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(241, 46);
			this->bunifuCustomLabel6->TabIndex = 130;
			this->bunifuCustomLabel6->Text = L"Modify a Sale";
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(94, 423);
			this->bunifuCustomLabel5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(88, 28);
			this->bunifuCustomLabel5->TabIndex = 133;
			this->bunifuCustomLabel5->Text = L"Quantity";
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel2->Location = System::Drawing::Point(95, 319);
			this->bunifuCustomLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(85, 28);
			this->bunifuCustomLabel2->TabIndex = 132;
			this->bunifuCustomLabel2->Text = L"Supplier";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(96, 201);
			this->bunifuCustomLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(81, 28);
			this->bunifuCustomLabel1->TabIndex = 131;
			this->bunifuCustomLabel1->Text = L"Product";
			// 
			// ProductComboBox
			// 
			this->ProductComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->ProductComboBox->ForeColor = System::Drawing::Color::DimGray;
			this->ProductComboBox->FormattingEnabled = true;
			this->ProductComboBox->Location = System::Drawing::Point(96, 244);
			this->ProductComboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProductComboBox->Name = L"ProductComboBox";
			this->ProductComboBox->Size = System::Drawing::Size(549, 37);
			this->ProductComboBox->TabIndex = 141;
			// 
			// supplierComboBox
			// 
			this->supplierComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->supplierComboBox->ForeColor = System::Drawing::Color::DimGray;
			this->supplierComboBox->FormattingEnabled = true;
			this->supplierComboBox->Location = System::Drawing::Point(96, 357);
			this->supplierComboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->supplierComboBox->Name = L"supplierComboBox";
			this->supplierComboBox->Size = System::Drawing::Size(549, 37);
			this->supplierComboBox->TabIndex = 142;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Location = System::Drawing::Point(11, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(719, 10);
			this->panel2->TabIndex = 144;
			// 
			// costTx
			// 
			this->costTx->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->costTx->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->costTx->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->costTx->BorderThickness = 1;
			this->costTx->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->costTx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->costTx->ForeColor = System::Drawing::Color::DimGray;
			this->costTx->isPassword = false;
			this->costTx->Location = System::Drawing::Point(94, 561);
			this->costTx->Margin = System::Windows::Forms::Padding(0);
			this->costTx->Name = L"costTx";
			this->costTx->Size = System::Drawing::Size(551, 43);
			this->costTx->TabIndex = 146;
			this->costTx->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(94, 526);
			this->bunifuCustomLabel3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(96, 28);
			this->bunifuCustomLabel3->TabIndex = 145;
			this->bunifuCustomLabel3->Text = L"Unit Price";
			// 
			// SalesModify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(741, 827);
			this->Controls->Add(this->costTx);
			this->Controls->Add(this->bunifuCustomLabel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->qteTx);
			this->Controls->Add(this->bunifuFlatButton1);
			this->Controls->Add(this->cancelBtn);
			this->Controls->Add(this->jText_Box1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->bunifuSeparator1);
			this->Controls->Add(this->bunifuCustomLabel6);
			this->Controls->Add(this->bunifuCustomLabel5);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->ProductComboBox);
			this->Controls->Add(this->supplierComboBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SalesModify";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SalesModify";
			this->Load += gcnew System::EventHandler(this, &SalesModify::SalesModify_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
SqlConnection^ cnx = gcnew SqlConnection("Data Source = .; Initial Catalog = DB_A61B88_storemgmnt; Integrated Security = true");
private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void SalesModify_Load(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		cnx->Open();
		SqlDataAdapter^ da = gcnew SqlDataAdapter("select idP, libel from Produit", cnx);
		DataTable^ dt = gcnew DataTable;
		da->Fill(dt);
		ProductComboBox->DataSource = dt;
		ProductComboBox->ValueMember = "idP";
		ProductComboBox->DisplayMember = "libel";
	}
	catch (const std::exception&)
	{
		MessageBox::Show("An error has occured !!");
		cnx->Close();
	}
	finally {
		cnx->Close();
	}

	try
	{
		cnx->Open();
		SqlDataAdapter^ da = gcnew SqlDataAdapter("select idC, name from Client", cnx);
		DataTable^ dt = gcnew DataTable;
		da->Fill(dt);
		supplierComboBox->DataSource = dt;
		supplierComboBox->ValueMember = "idC";
		supplierComboBox->DisplayMember = "name";
	}
	catch (const std::exception&)
	{
		MessageBox::Show("An error has occured !!");
		cnx->Close();
	}
	finally {
		cnx->Close();
	}
	try
	{
		cnx->Open();
		SqlCommand^ cmd1 = gcnew SqlCommand("select * from Vente where idV = @id", cnx);
		cmd1->Parameters->AddWithValue("id", saleID);
		SqlDataReader^ dr = cmd1->ExecuteReader();
		if (dr->Read())
		{
			ProductComboBox->SelectedValue = dr->GetValue(dr->GetOrdinal("idProduit"));
			supplierComboBox->SelectedValue = dr->GetValue(dr->GetOrdinal("idClient"));
			costTx->Text = dr->GetValue(dr->GetOrdinal("CoutU"))->ToString();
			qteTx->Text = dr->GetValue(dr->GetOrdinal("quantity"))->ToString();
		}
	}
	catch (const std::exception&)
	{
		MessageBox::Show("An error has occured !!");
		cnx->Close();
	}
	finally {
		cnx->Close();
	}
}
private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	cnx->Open();
	SqlCommand^ cmd = gcnew SqlCommand("update Vente set idProduit=@p,idClient=@f,CoutU=@c,quantity=@q where idV = @id", cnx);
	cmd->Parameters->AddWithValue("id", saleID);
	cmd->Parameters->AddWithValue("@p", ProductComboBox->SelectedValue);
	cmd->Parameters->AddWithValue("@f", supplierComboBox->SelectedValue);
	cmd->Parameters->AddWithValue("@c", costTx->Text);
	cmd->Parameters->AddWithValue("@q", qteTx->Text);
	cmd->ExecuteNonQuery();
	cnx->Close();
	MessageBox::Show("editted");
	this->Hide();
}
};
}
