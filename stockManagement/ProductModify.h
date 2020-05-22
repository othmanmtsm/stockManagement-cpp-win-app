#pragma once

namespace stockManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Summary for ProductModify
	/// </summary>
	public ref class ProductModify : public System::Windows::Forms::Form
	{
	public:
		ProductModify(void)
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
		~ProductModify()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton3;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel6;
	private: JTextBox::JText_Box^ jText_Box2;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel5;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel4;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ StockTextbox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ PriceTextbox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ DiscreptionTextbox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ CategoryTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ NomTextBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductModify::typeid));
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuCustomLabel6 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->jText_Box2 = (gcnew JTextBox::JText_Box());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel4 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->StockTextbox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->PriceTextbox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->DiscreptionTextbox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->CategoryTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->NomTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->SuspendLayout();
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->bunifuSeparator1->LineThickness = 1;
			this->bunifuSeparator1->Location = System::Drawing::Point(16, 57);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(595, 35);
			this->bunifuSeparator1->TabIndex = 59;
			this->bunifuSeparator1->Transparency = 255;
			this->bunifuSeparator1->Vertical = false;
			// 
			// bunifuFlatButton3
			// 
			this->bunifuFlatButton3->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton3->BackColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton3->BorderRadius = 0;
			this->bunifuFlatButton3->ButtonText = L"Cancel";
			this->bunifuFlatButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton3->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton3->ForeColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton3.Iconimage")));
			this->bunifuFlatButton3->Iconimage_right = nullptr;
			this->bunifuFlatButton3->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton3->Iconimage_Selected = nullptr;
			this->bunifuFlatButton3->IconMarginLeft = 0;
			this->bunifuFlatButton3->IconMarginRight = 0;
			this->bunifuFlatButton3->IconRightVisible = true;
			this->bunifuFlatButton3->IconRightZoom = 0;
			this->bunifuFlatButton3->IconVisible = false;
			this->bunifuFlatButton3->IconZoom = 90;
			this->bunifuFlatButton3->IsTab = false;
			this->bunifuFlatButton3->Location = System::Drawing::Point(338, 524);
			this->bunifuFlatButton3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
			this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::White;
			this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->selected = false;
			this->bunifuFlatButton3->Size = System::Drawing::Size(239, 50);
			this->bunifuFlatButton3->TabIndex = 58;
			this->bunifuFlatButton3->Text = L"Cancel";
			this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton3->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton3->Click += gcnew System::EventHandler(this, &ProductModify::bunifuFlatButton3_Click);
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::Color::DarkGray;
			this->bunifuCustomLabel6->Location = System::Drawing::Point(198, 21);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(236, 37);
			this->bunifuCustomLabel6->TabIndex = 45;
			this->bunifuCustomLabel6->Text = L"Modify a Product";
			// 
			// jText_Box2
			// 
			this->jText_Box2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->jText_Box2->BorderThickness = 1;
			this->jText_Box2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->jText_Box2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jText_Box2->FontStyles = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jText_Box2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->jText_Box2->Location = System::Drawing::Point(336, 522);
			this->jText_Box2->Margin = System::Windows::Forms::Padding(5);
			this->jText_Box2->MaxLength = 32767;
			this->jText_Box2->Name = L"jText_Box2";
			this->jText_Box2->onFocusBorderColor = System::Drawing::Color::Magenta;
			this->jText_Box2->PasswordChar = '\0';
			this->jText_Box2->RoundedBorder = 0;
			this->jText_Box2->Size = System::Drawing::Size(241, 52);
			this->jText_Box2->TabIndex = 57;
			this->jText_Box2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->jText_Box2->TextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->jText_Box2->TextInput = L"";
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
			this->bunifuFlatButton1->ForeColor = System::Drawing::Color::White;
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
			this->bunifuFlatButton1->Location = System::Drawing::Point(72, 522);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(243, 52);
			this->bunifuFlatButton1->TabIndex = 56;
			this->bunifuFlatButton1->Text = L"Update";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(72, 411);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(89, 21);
			this->bunifuCustomLabel5->TabIndex = 55;
			this->bunifuCustomLabel5->Text = L"Discreption";
			// 
			// bunifuCustomLabel4
			// 
			this->bunifuCustomLabel4->AutoSize = true;
			this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel4->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel4->Location = System::Drawing::Point(311, 318);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(47, 21);
			this->bunifuCustomLabel4->TabIndex = 54;
			this->bunifuCustomLabel4->Text = L"Stock";
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(72, 317);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(44, 21);
			this->bunifuCustomLabel3->TabIndex = 53;
			this->bunifuCustomLabel3->Text = L"Price";
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel2->Location = System::Drawing::Point(72, 224);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(73, 21);
			this->bunifuCustomLabel2->TabIndex = 52;
			this->bunifuCustomLabel2->Text = L"Category";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(72, 136);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(52, 21);
			this->bunifuCustomLabel1->TabIndex = 51;
			this->bunifuCustomLabel1->Text = L"Name";
			// 
			// StockTextbox
			// 
			this->StockTextbox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->StockTextbox->BorderColorIdle = System::Drawing::Color::Silver;
			this->StockTextbox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->StockTextbox->BorderThickness = 1;
			this->StockTextbox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->StockTextbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->StockTextbox->ForeColor = System::Drawing::Color::DimGray;
			this->StockTextbox->isPassword = false;
			this->StockTextbox->Location = System::Drawing::Point(311, 343);
			this->StockTextbox->Margin = System::Windows::Forms::Padding(0);
			this->StockTextbox->Name = L"StockTextbox";
			this->StockTextbox->Size = System::Drawing::Size(266, 43);
			this->StockTextbox->TabIndex = 50;
			this->StockTextbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// PriceTextbox
			// 
			this->PriceTextbox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->PriceTextbox->BorderColorIdle = System::Drawing::Color::Silver;
			this->PriceTextbox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->PriceTextbox->BorderThickness = 1;
			this->PriceTextbox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->PriceTextbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->PriceTextbox->ForeColor = System::Drawing::Color::DimGray;
			this->PriceTextbox->isPassword = false;
			this->PriceTextbox->Location = System::Drawing::Point(72, 342);
			this->PriceTextbox->Margin = System::Windows::Forms::Padding(0);
			this->PriceTextbox->Name = L"PriceTextbox";
			this->PriceTextbox->Size = System::Drawing::Size(214, 43);
			this->PriceTextbox->TabIndex = 49;
			this->PriceTextbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// DiscreptionTextbox
			// 
			this->DiscreptionTextbox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->DiscreptionTextbox->BorderColorIdle = System::Drawing::Color::Silver;
			this->DiscreptionTextbox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->DiscreptionTextbox->BorderThickness = 1;
			this->DiscreptionTextbox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->DiscreptionTextbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->DiscreptionTextbox->ForeColor = System::Drawing::Color::DimGray;
			this->DiscreptionTextbox->isPassword = false;
			this->DiscreptionTextbox->Location = System::Drawing::Point(72, 437);
			this->DiscreptionTextbox->Margin = System::Windows::Forms::Padding(0);
			this->DiscreptionTextbox->Name = L"DiscreptionTextbox";
			this->DiscreptionTextbox->Size = System::Drawing::Size(505, 43);
			this->DiscreptionTextbox->TabIndex = 48;
			this->DiscreptionTextbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// CategoryTextBox
			// 
			this->CategoryTextBox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->CategoryTextBox->BorderColorIdle = System::Drawing::Color::Silver;
			this->CategoryTextBox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->CategoryTextBox->BorderThickness = 1;
			this->CategoryTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->CategoryTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->CategoryTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->CategoryTextBox->isPassword = false;
			this->CategoryTextBox->Location = System::Drawing::Point(72, 251);
			this->CategoryTextBox->Margin = System::Windows::Forms::Padding(0);
			this->CategoryTextBox->Name = L"CategoryTextBox";
			this->CategoryTextBox->Size = System::Drawing::Size(505, 43);
			this->CategoryTextBox->TabIndex = 47;
			this->CategoryTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// NomTextBox
			// 
			this->NomTextBox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->NomTextBox->BorderColorIdle = System::Drawing::Color::Silver;
			this->NomTextBox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->NomTextBox->BorderThickness = 1;
			this->NomTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->NomTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->NomTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->NomTextBox->isPassword = false;
			this->NomTextBox->Location = System::Drawing::Point(72, 162);
			this->NomTextBox->Margin = System::Windows::Forms::Padding(0);
			this->NomTextBox->Name = L"NomTextBox";
			this->NomTextBox->Size = System::Drawing::Size(505, 43);
			this->NomTextBox->TabIndex = 46;
			this->NomTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// ProductModify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(635, 704);
			this->Controls->Add(this->bunifuSeparator1);
			this->Controls->Add(this->bunifuFlatButton3);
			this->Controls->Add(this->bunifuCustomLabel6);
			this->Controls->Add(this->jText_Box2);
			this->Controls->Add(this->bunifuFlatButton1);
			this->Controls->Add(this->bunifuCustomLabel5);
			this->Controls->Add(this->bunifuCustomLabel4);
			this->Controls->Add(this->bunifuCustomLabel3);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->StockTextbox);
			this->Controls->Add(this->PriceTextbox);
			this->Controls->Add(this->DiscreptionTextbox);
			this->Controls->Add(this->CategoryTextBox);
			this->Controls->Add(this->NomTextBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ProductModify";
			this->Text = L"ProductModify";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void bunifuFlatButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
};
}
