#include "main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void  Main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::main form;
	Application::Run(%form);
}