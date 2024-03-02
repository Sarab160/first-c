#include<iostream>
using namespace std;
int main(){
 int cocacolaprice = 150;
 int dairymilkorice  = 100;
 int peanutcookies = 30;
 int wafer = 20;
 int kurkure = 50;
 cout<<"Enter the quantity of cocacole : "<<endl;
 int quancoccalo ;
 cin>>quancoccalo;
 cout<<"Enter the quantity of dairymilk : "<<endl;
 int quandairymilk;
 cin>>quandairymilk;
  cout<<"Enter the quantity of peanutcookies : "<<endl;
  int quanpeanutcookies;
  cin>>quanpeanutcookies;
  cout<<"Enter the quantity of wafer : "<<endl;
  int quanwafer;
  cin>>quanwafer;
    cout<<"Enter the quantity of kurkure : "<<endl;
    int quankurkure;
    cin>>quankurkure;
    float totalbill = quancoccalo*cocacolaprice + quandairymilk*dairymilkorice + quanpeanutcookies*peanutcookies + quankurkure*kurkure +quanwafer*wafer;
  cout<<"Total bill is : "<<totalbill<<endl;
  system("pause");
   return 0;
}