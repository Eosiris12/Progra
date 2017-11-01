#include "gridsizer.h"
#include <iostream>
using namespace std;

GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);
 
  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1050, wxT("Cls")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1016, wxT("Bck")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, 1017, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1018, wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1007, wxT("7")), 0, wxEXPAND); 
  gs->Add(new wxButton(this, 1008, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1009, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1016, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1004, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1006, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1015, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1001, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1002, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1003, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1012, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1010, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1013, wxT(".")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1014, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1011 , wxT("+")), 0, wxEXPAND);

  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}




//void GridSizer::onCls (wxCommandEvent& WXUNUSED (event)) {
	//nClicks += 1;
	//cout<<nClicks<<endl;
//}


void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	//cout<<nClicks<<endl;
	if (nClicks==1){
		valor1 = 1;
		cout<<valor1<<endl;
	}
	else{
	 if (nClicks==2){
		valor2 = 1;
		cout<<valor2<<endl;
	}
}
	
}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	//cout<<nClicks<<endl;
	if (nClicks==1){
		valor1 = 2;
		cout<<valor1<<endl;
	}
	else {
		if (nClicks==2){
			valor2 = 2;
			cout<<valor2<<endl;
		}
	}
	
}

void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)){
	nClicks +=1;
	//cout<<nClicks<<endl;
	if (nClicks==1){
		valor1 = 3;
		cout<<valor1<<endl;
	}

	else {
		if (nClicks==2){
			valor2 = 3;
			cout<<valor2<<endl;
		}
	}
}

void GridSizer::onBt4 (wxCommandEvent& WXUNUSED (event)){
        nClicks +=1;
        //cout<<nClicks<<endl;
        if (nClicks==1){
                 valor1 = 4;
                 cout<<valor1<<endl;
         } 
         else {
               if (nClicks==2){
                          valor2 = 4;
                          cout<<valor2<<endl;
                }
             }
} 

void GridSizer::onBt5 (wxCommandEvent& WXUNUSED (event)){
	nClicks +=1;
	if (nClicks==1){
		valor1 = 5;
		cout<<valor1<<endl;
	}
	else{
		if (nClicks==2){
			valor2 = 5;
			cout<<valor2<<endl;
		}
	}
}

void GridSizer::onBt6 (wxCommandEvent& WXUNUSED (event){
	nClicks +=1;
	if (nClicks==1){
		valor1 = 6;
		cout<<valor1<<endl;
	}
	else{
		if (nClicks==1){
			valor2 = 6;
			cout<<valor2<<endl;
		}
	}
}


void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	int total = valor1 + valor2;
	cout << "Resultado suma " << total << endl;
}

void GridSizer::onBtPrd (wxCommandEvent& WXUNUSED (event)){
	int total = valor1 * valor2;
	cout << "Resultado Producto " << total << endl;
}

void GridSizer::onBtRst (wxCommandEvent& WXUNUSED (event)){
	int total = valor1 - valor2;
	cout << "Resultado Resta " << total << endl;
}

void GridSizer::onBtDiv (wxCommandEvent& WXUNUSED (event)){
	 float total = valor1/valor2;
	cout << "Resultado Division " << total << endl;
}
BEGIN_EVENT_TABLE(GridSizer, wxFrame)
   // EVT_BUTTON(1050,  GridSizer::onCls)
    EVT_BUTTON(1001,  GridSizer::onBt1)
    EVT_BUTTON(1002,  GridSizer::onBt2)
    EVT_BUTTON(1011,  GridSizer::onBtSum)
    EVT_BUTTON(1015,  GridSizer::onBtPrd)
    EVT_BUTTON(1012,  GridSizer::onBtRst)
    EVT_BUTTON(1016,  GridSizer::onBtDiv)
    EVT_BUTTON(1003,  GridSizer::onBt3)
    EVT_BUTTON(1004,  GridSizer::onBt4)
    EVT_BUTTON(1005,  GridSizer::onBt5)
    EVT_BUTTON(1006,  GridSizer::onBt6)
END_EVENT_TABLE()
