#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Replace "AppifiTest" with your project namespace
    AppifiTest::MyForm form;
    Application::Run(% form);
    return 0;
}


