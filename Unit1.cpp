// ---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <cstdlib>
#include <ctime>
#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
int getRand(int a, int b);

int getRand(int a, int b) {
	srand(time(NULL));
	return a + rand() % ((b + 1) - a);
}

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::StartGameClick(TObject *Sender) {

	MenuBox->Visible = false;
	BackButtonBg->Visible = true;
	BackButton->Visible = true;
	BgPanel->Size->Height = 360;
	BgPanel->Size->Width = 350;
	BgPanel->Position->X = 40;
	BgPanel->Position->Y = 40;
	GameBox->Visible = true;
	randomson->Text = IntToStr(getRand(1, 9));

}

// ---------------------------------------------------------------------------
void __fastcall TForm1::BackButtonClick(TObject *Sender) {
	MenuBox->Visible = true;
	BackButtonBg->Visible = false;
	BackButton->Visible = false;
	BgPanel->Size->Height = 217;
	BgPanel->Size->Width = 209;
	BgPanel->Position->X = 112;
	BgPanel->Position->Y = 152;
	GameBox->Visible = false;
    GameInfo->Visible = false;
	Info->Visible = false;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::InfoButtonClick(TObject *Sender) {
	MenuBox->Visible = false;
	BackButtonBg->Visible = true;
	BackButton->Visible = true;
	// BgPanel->Size->Height = 360;
	// BgPanel->Size->Width = 350;
	// BgPanel->Position->X = 40;
	// BgPanel->Position->Y = 40;
	Info->Visible = true;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {
	if (StrToInt(randomson->Text) == 1) {
		GameInfo->Text =
			"Siz to'g'ri topdingiz,omadingizni sinashda davom eting";
		randomson->Text = IntToStr(getRand(1, 9));
		GameInfo->Visible = true;
	}
	else {

		GameInfo->Text = "Siz noto'g'ri topdingiz,qaytadan urinib ko'ring";
		GameInfo->Visible = true;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender) {
	if (StrToInt(randomson->Text) == 2) {
		GameInfo->Text =
			"Siz to'g'ri topdingiz,omadingizni sinashda davom eting";
		randomson->Text = IntToStr(getRand(1, 9));
		GameInfo->Visible = true;
	}
	else {

		GameInfo->Text = "Siz noto'g'ri topdingiz,qaytadan urinib ko'ring";
		GameInfo->Visible = true;
	}

}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender) {
	if (StrToInt(randomson->Text) == 3) {
		GameInfo->Text =
			"Siz to'g'ri topdingiz,omadingizni sinashda davom eting";
		randomson->Text = IntToStr(getRand(1, 9));
		GameInfo->Visible = true;
	}
	else {

		GameInfo->Text = "Siz noto'g'ri topdingiz,qaytadan urinib ko'ring";
		GameInfo->Visible = true;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender) {
	if (StrToInt(randomson->Text) == 4) {
		GameInfo->Text =
			"Siz to'g'ri topdingiz,omadingizni sinashda davom eting";
		randomson->Text = IntToStr(getRand(1, 9));
		GameInfo->Visible = true;
	}
	else {

		GameInfo->Text = "Siz noto'g'ri topdingiz,qaytadan urinib ko'ring";
		GameInfo->Visible = true;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender) {
	if (StrToInt(randomson->Text) == 5) {
		GameInfo->Text =
			"Siz to'g'ri topdingiz,omadingizni sinashda davom eting";
		randomson->Text = IntToStr(getRand(1, 9));
		GameInfo->Visible = true;
	}
	else {

		GameInfo->Text = "Siz noto'g'ri topdingiz,qaytadan urinib ko'ring";
		GameInfo->Visible = true;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender) {
	if (StrToInt(randomson->Text) == 6) {
		GameInfo->Text =
			"Siz to'g'ri topdingiz,omadingizni sinashda davom eting";
		randomson->Text = IntToStr(getRand(1, 9));
		GameInfo->Visible = true;
	}
	else {

		GameInfo->Text = "Siz noto'g'ri topdingiz,qaytadan urinib ko'ring";
		GameInfo->Visible = true;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender) {
	if (StrToInt(randomson->Text) == 7) {
		GameInfo->Text =
			"Siz to'g'ri topdingiz,omadingizni sinashda davom eting";
		randomson->Text = IntToStr(getRand(1, 9));
		GameInfo->Visible = true;
	}
	else {

		GameInfo->Text = "Siz noto'g'ri topdingiz,qaytadan urinib ko'ring";
		GameInfo->Visible = true;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender) {
	if (StrToInt(randomson->Text) == 8) {
		GameInfo->Text =
			"Siz to'g'ri topdingiz,omadingizni sinashda davom eting";
		randomson->Text = IntToStr(getRand(1, 9));
		GameInfo->Visible = true;
	}
	else {

		GameInfo->Text = "Siz noto'g'ri topdingiz,qaytadan urinib ko'ring";
		GameInfo->Visible = true;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender) {
	if (StrToInt(randomson->Text) == 9) {
		GameInfo->Text =
			"Siz to'g'ri topdingiz,omadingizni sinashda davom eting";
		randomson->Text = IntToStr(getRand(1, 9));
		GameInfo->Visible = true;
	}
	else {

		GameInfo->Text = "Siz noto'g'ri topdingiz,qaytadan urinib ko'ring";
		GameInfo->Visible = true;
	}
}
// ---------------------------------------------------------------------------
