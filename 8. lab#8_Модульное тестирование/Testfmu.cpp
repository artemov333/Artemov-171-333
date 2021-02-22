#include <System.hpp>
#pragma hdrstop

#include <TestFramework.hpp>

class TTestTfm : public TTestCase
{
public:
  __fastcall virtual TTestTfm(System::String name) : TTestCase(name) {}
  virtual void __fastcall SetUp();
  virtual void __fastcall TearDown();
  
__published:
  void __fastcall TestbuttonMainClick();
  void __fastcall TestbuttonChildGoMainClick();
  void __fastcall TestbuttonGoLookClick();
  void __fastcall TestbuttonGoSendMessageClick();
  void __fastcall TestbuttonGoCabinetChildClick();
  void __fastcall TestbuttonLookGoBackClick();
  void __fastcall TestbuttonSendMessageClick();
  void __fastcall TestFormCreate();
  void __fastcall TestClearUserForms();
  void __fastcall TestCheckUserPassword();
  void __fastcall TestCheckUserLogin();
};


void __fastcall TTestTfm::SetUp()
{
	Tfm fmTest;
}

void __fastcall TTestTfm::TearDown()
{
}

void __fastcall TTestTfm::TestbuttonMainClick()
{
  // void __fastcall buttonMainClick(TObject *Sender)

}
    
void __fastcall TTestTfm::TestbuttonChildGoMainClick()
{
  // void __fastcall buttonChildGoMainClick(TObject *Sender)
  buttonChildGoMainClick();
  activeTabIndex = tabControl->ActiveTab->Index;
  goToTabIndex = tabControl->tabMain->Index;
  bool success;
   if(activeTabIndex == goToTabIndex){
	   success = true;
   }
   //проверяет равенство двух значений и кидает исключение, если значения не равны
   CheckEquals(1, success, 'Открылась не та вкладка');
}
    
void __fastcall TTestTfm::TestbuttonGoLookClick()
{
  // void __fastcall buttonGoLookClick(TObject *Sender)
  buttonGoLookClick();
  activeTabIndex = tabControl->ActiveTab->Index;
  goToTabIndex = tabControl->tabCabinetChildLook->Index;
  bool success;
   if(activeTabIndex == goToTabIndex){
	   success = true;
   }
   //проверяет равенство двух значений и кидает исключение, если значения не равны
   CheckEquals(1, success, 'Открылась не та вкладка');
}
    
void __fastcall TTestTfm::TestbuttonGoSendMessageClick()
{
  // void __fastcall buttonGoSendMessageClick(TObject *Sender)
  buttonGoSendMessageClick();
  activeTabIndex = tabControl->ActiveTab->Index;
  goToTabIndex = tabControl->tabCabinetChildSend->Index;
  bool success;
   if(activeTabIndex == goToTabIndex){
	   success = true;
   }
   //проверяет равенство двух значений и кидает исключение, если значения не равны
   CheckEquals(1, success, 'Открылась не та вкладка');
}
    
void __fastcall TTestTfm::TestbuttonGoCabinetChildClick()
{
  // void __fastcall buttonGoCabinetChildClick(TObject *Sender)
  buttonGoCabinetChildClick();
  activeTabIndex = tabControl->ActiveTab->Index;
  goToTabIndex = tabControl->tabCabinetChild->Index;
  bool success;
   if(activeTabIndex == goToTabIndex){
	   success = true;
   }
   //проверяет равенство двух значений и кидает исключение, если значения не равны
   CheckEquals(1, success, 'Открылась не та вкладка');
}
    
void __fastcall TTestTfm::TestbuttonLookGoBackClick()
{
  // void __fastcall buttonLookGoBackClick(TObject *Sender)
  buttonLookGoBackClick();
  activeTabIndex = tabControl->ActiveTab->Index;
  goToTabIndex = tabControl->tabCabinetChild->Index;
  bool success;
   if(activeTabIndex == goToTabIndex){
	   success = true;
   }
   //проверяет равенство двух значений и кидает исключение, если значения не равны
   CheckEquals(1, success, 'Открылась не та вкладка');
}
    
void __fastcall TTestTfm::TestbuttonSendMessageClick()
{
  // void __fastcall buttonSendMessageClick(TObject *Sender)
}
    
void __fastcall TTestTfm::TestFormCreate()
{
  // void __fastcall FormCreate(TObject *Sender)
}
    
void __fastcall TTestTfm::TestClearUserForms()
{
  // void ClearUserForms()
  ClearUserForms();
  bool checkEmpty;
  if(loginMain->Text = "" && passwordMain->Text = ""){
	checkEmpty = true;
  }
  //проверяет равенство двух значений и кидает исключение, если значения не равны
  CheckEquals(1, checkEmpty, 'Значения не пустые');
}
    
void __fastcall TTestTfm::TestCheckUserPassword()
{
  // int CheckUserPassword(int passwordUser)
}
    
void __fastcall TTestTfm::TestCheckUserLogin()
{
  // int CheckUserLogin(int loginUser)
}
    


static void registerTests()
{
  Testframework::RegisterTest(TTestTfm::Suite());
}
#pragma startup registerTests 33
