#include "Pencere.h"

Pencere::Pencere() : wxFrame(nullptr, wxID_ANY, L"Yazı Aktarımı", wxDefaultPosition, wxSize(400, 300))
{
	this->Center();
	wxPanel* levha = new wxPanel(this, wxID_ANY);
	ust = new wxTextCtrl(levha, wxID_ANY, "", wxPoint(130, 60));
	buton = new wxButton(levha, wxID_ANY, "Kopyala", wxPoint(150, 110));
	alt = new wxTextCtrl(levha, wxID_ANY, "", wxPoint(130, 160));

	buton->Bind(wxEVT_BUTTON, &Pencere::Kopyala, this);
}

void Pencere::Kopyala(wxCommandEvent& olay)
{
	wxString yazi = ust->GetValue();
	alt->SetValue(yazi);
}