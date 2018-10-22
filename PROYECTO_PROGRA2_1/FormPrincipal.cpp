#include "FormPrincipal.h"
#include "FormN1.h"
#include "FormN2.h"
#include "FormN3.h"
#include "FormN4.h"
#include "FormN5.h"

using namespace System;
using namespace System::Windows::Forms;[STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	Application::Run(gcnew PROYECTO_PROGRA2_1::FormN5()); //Project 1 es el nombre del proyecto
}
