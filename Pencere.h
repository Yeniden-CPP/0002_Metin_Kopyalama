#pragma once
#include "wx/wx.h"

class Pencere : public wxFrame
{
	wxButton* buton;
	wxTextCtrl* ust;
	wxTextCtrl* alt;

public:
	Pencere();
	void Kopyala(wxCommandEvent& olay);
};

