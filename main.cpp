//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTForm2 *TForm2;
//---------------------------------------------------------------------------
__fastcall TTForm2::TTForm2(TComponent* Owner)
	: TForm(Owner)
{
	SirkaCary->Text = 1;
}
//---------------------------------------------------------------------------
void __fastcall TTForm2::Image1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
	kresli_image = true;
	Image1->Canvas->MoveTo(X,Y);
	Image1->Canvas->Pen->Color = ColorListBox1->Selected;
	Image1->Canvas->Pen->Width = StrToInt(SirkaCary->Text);
	Image1->Canvas->Pen->Style=psSolid;
}
//---------------------------------------------------------------------------

void __fastcall TTForm2::Image1MouseMove(TObject *Sender, TShiftState Shift, int X,
      int Y)
{
	if(kresli_image){
		Image1->Canvas->LineTo(X,Y);
	}
}
//---------------------------------------------------------------------------

void __fastcall TTForm2::Image1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
	kresli_image = false;
}
//---------------------------------------------------------------------------

void __fastcall TTForm2::PaintBox1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	kresli_paint = true;
	PaintBox1->Canvas->MoveTo(X,Y);
	PaintBox1->Canvas->Pen->Color = ColorListBox1->Selected;
	PaintBox1->Canvas->Pen->Width = StrToInt(SirkaCary->Text);
	PaintBox1->Canvas->Pen->Style=psSolid;
}
//---------------------------------------------------------------------------

void __fastcall TTForm2::PaintBox1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
	 if(kresli_paint){
		PaintBox1->Canvas->LineTo(X,Y);
	}
}
//---------------------------------------------------------------------------

void __fastcall TTForm2::PaintBox1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
     kresli_paint = false;
}
//---------------------------------------------------------------------------


