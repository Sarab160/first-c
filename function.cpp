#include<iostream>
#include<iomanip>
using namespace std;
int shape(){
cout<<"    *     ";
cout<<"   ***    ";
cout<<"  *****   ";
cout<<"    *     ";
cout<<"    *     ";
cout<<"    *     ";
cout<<"    *     ";
cout<<"    *     ";
}
int sum(){
    int num;
    cin>>num;
    int num1;
    cin>>num1;
    int result = num + num1;
    cout<<result;
    return 0;
}
int function(int num3,int num4){
  int result1 = num3 + num4;
  return result1;
}
int main(){
    // int callfunction = function(3,4);
    // cout<<callfunction<<endl;

    // // while(true){
    // // sum();};
    // int a = 3;
    // int *point = &a;
    // cout<<point<<endl; 
    // string name,father;
    // cout<<"enter your name\n";
    // cin>>name;
    // cout<<"enter yur father name\n";
    // cin>>father;
    // cout<<"your data is here\n";
    //cout<<name <<" son of "<<father;
// cout<<"hello world\ttoyou";
// cout<<"\\hello world";
//  cout<<"hello world\rto you";    
//  cout<<"\hello world to you";
// cout<<"""hello world to you \""";
float a,b,c;
a=5;
b=3;
c=a/b;
cout<<setprecision(1)<<c<<endl;
cout<<setprecision(2)<<c<<endl;
cout<<setprecision(3)<<c<<endl;
cout<<setprecision(4)<<c<<endl;
cout<<setprecision(5)<<c<<endl; 
}