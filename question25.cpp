#include<iostream>
#include<cmath>
using namespace std;
//interset data of bank
int main(){
    char accounttype;
   float minimumbalance,currentbalance,intersetrate;
    int accountnumber,service_charges;
    cout<<"enter your account type"<<endl;
    cin>>accounttype;
    cout<<"minimum balance"<<endl;
    cin>>minimumbalance;
    cout<<"current balance"<<endl;
    cin>>currentbalance;
    cout<<"enter your account number"<<endl;
    cin>>accountnumber;
   if(currentbalance<minimumbalance){
 if( accounttype=='S'||accounttype=='s'){
 service_charges=10;
 currentbalance = currentbalance-service_charges;
 }
 else{
    service_charges=25;
    currentbalance= currentbalance-service_charges;
 }
   }
    if(currentbalance==minimumbalance){
   if(accounttype=='S'||accounttype=='s'){
    intersetrate = (currentbalance/100)*4;
    currentbalance = currentbalance+intersetrate;
   }
   else if(currentbalance<=minimumbalance+5000){
     intersetrate = (currentbalance/100)*3;
    currentbalance = currentbalance+intersetrate;
   }
   else{
     intersetrate = (currentbalance/100)*5;
    currentbalance = currentbalance+intersetrate;
   }
   }
   cout<<"YOUR ACCOUNT NUMBER : "<<accountnumber<<endl;
   cout<<"your accout type : " <<accounttype<<endl;
   cout<<"YOUR BALANCE IS : " <<currentbalance<<endl;
   system("pause");
   return 0;
}