#include "mainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    stockManagement::mainForm mainForm;
    Application::Run(% mainForm);



    return 0;
}