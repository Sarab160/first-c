#include<iostream>
using namespace std;
int main(){
float unitsconsumed;
cout<<"Enter number electricity units consumed"<<endl;
cin>>unitsconsumed;
float unitprice;
cout<<"Enter the unit price :"<<endl;
cin>>unitprice;
double bill = unitsconsumed * unitprice;
cout<<"your bill is : "<<bill;
system("pause");
return 0;

}