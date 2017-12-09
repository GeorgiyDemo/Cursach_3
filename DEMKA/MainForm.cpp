#include "MainForm.h"
#include "InputForm.h"
#include "RatingForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DEMKA::MainForm form;
	Application::Run(%form);
}
