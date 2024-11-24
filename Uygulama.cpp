#include "Uygulama.h"
#include "Pencere.h"

bool Uygulama::OnInit()
{
	Pencere* pen = new Pencere();
	pen->Show();
	return true;
}

wxIMPLEMENT_APP(Uygulama);