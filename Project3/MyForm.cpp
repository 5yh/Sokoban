#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MyForm form;
	Application::Run(% form);
	
}

//���������ȡ��������
void Project3::MyForm::OnKeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	/*System::Collections::Queue*/

	//priority_queue <int, vector<int>, greater<int> > q;
	mapArray[2, 2] = 10;
	MessageBox^ nmsl2;
	nmsl2->Show(Convert::ToString(mapArray[2, 2]));
	if(e->KeyCode==Keys::A)
		nmsl2->Show("A����");
}


//arrayList��removeat��add���Ե�������
