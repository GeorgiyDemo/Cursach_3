#include "MainForm.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;

class StudentClass {

public:

	bool original, priority;
	std::string FIO, form_sudy, major, numbler, form_pay, date;
	double score;
};


[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DEMKA::MainForm form;
	Application::Run(%form);
}
