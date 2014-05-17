/*
 Copyright (C) 2002-2014 Rob Versluis, Rocrail.net

 

 */
#ifndef __fxdlg__
#define __fxdlg__

/**
@file
Subclass of fxdlggen, which is generated by wxFormBuilder.
*/

#include "fxdlggen.h"

#include "wx/spinctrl.h"

/** Implementing fxdlggen */
class FxDlg : public fxdlggen
{
protected:
  int m_FX;
  wxSpinCtrl* m_CVnr;
  void initLabels();
  void initValues();
	// Handlers for fxdlggen events.
	void onCancel( wxCommandEvent& event );
	void onOK( wxCommandEvent& event );
  void onFunction( wxCommandEvent& event );
  void onGeneration( wxCommandEvent& event );
  void onActivation( wxCommandEvent& event );
  void onHelp( wxCommandEvent& event );

public:
	/** Constructor */
  FxDlg( wxWindow* parent, int p_FX, wxSpinCtrl* p_CVnr );
  int getConfig(int* cvnr);


};

#endif // __fxdlg__
