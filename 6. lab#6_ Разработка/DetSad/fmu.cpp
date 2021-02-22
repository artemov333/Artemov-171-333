//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "fmu.h"
#include "dmu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
Tfm *fm;
//---------------------------------------------------------------------------
__fastcall Tfm::Tfm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfm::buttonMainClick(TObject *Sender)
{
	if (loginMain->Text == "IvanovII" && passwordMain->Text == "123456") {
	   tabControl->GotoVisibleTab(tabCabinetChild->Index);
	   loginMain->Text = "";
	   passwordMain->Text = "";
	}else{
        ShowMessage("wrong login/password");
    }

}
//---------------------------------------------------------------------------

void __fastcall Tfm::buttonChildGoMainClick(TObject *Sender)
{
	tabControl->GotoVisibleTab(tabMain->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buttonGoLookClick(TObject *Sender)
{
	tabControl->GotoVisibleTab(tabCabinetChildLook->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buttonGoSendMessageClick(TObject *Sender)
{
	tabControl->GotoVisibleTab(tabCabinetChildSend->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buttonGoCabinetChildClick(TObject *Sender)
{
    tabControl->GotoVisibleTab(tabCabinetChild->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buttonLookGoBackClick(TObject *Sender)
{
    tabControl->GotoVisibleTab(tabCabinetChild->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buttonSendMessageClick(TObject *Sender)
{
	dm->SendMessage(Memo1->Text, Label1->Text, Label2->Text, Label2->Text);
	ShowMessage("message was sent");
    tabControl->GotoVisibleTab(tabCabinetChild->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::FormCreate(TObject *Sender)
{
    tabControl->First();
	tabControl->TabPosition = TTabPosition::None;
}
//---------------------------------------------------------------------------

