#include "StafLoginForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DEMKA::StafLoginForm form;
	Application::Run(%form);
}
