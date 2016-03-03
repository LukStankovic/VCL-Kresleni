//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TTForm2 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TPaintBox *PaintBox1;
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TLabel *Label1;
	TLabel *Label2;
	TLabeledEdit *SirkaCary;
	TLabel *Barva;
	TColorListBox *ColorListBox1;
	TUpDown *UpDown1;
	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall Image1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall PaintBox1MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall PaintBox1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall PaintBox1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
private:	// User declarations
	bool kresli_image, kresli_paint;
public:		// User declarations
	__fastcall TTForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTForm2 *TForm2;
//---------------------------------------------------------------------------
#endif
