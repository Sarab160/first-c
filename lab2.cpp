#include<iostream>
#include<math.h>
using namespace std;

int age(){
    int age1;
    cout<<"enter your age"<<endl;
    cin>>age1;
    if(age1<18){
        cout<<"your are minor"<<endl;
    }
    else{
        cout<<"you are adult"<<endl;
    }
    system("pause");
}
int leapyear(){
    int year;
    cout<<"enter  year"<<endl;
    cin>>year;
    if(year%4==0){
        cout<<"this year is leap year"<<endl;
    }
    else{
        cout<<"this year is not leap"<<endl;
    }
    system("pause");
}
int greaternumber(){
    int num,num1,num2;
    cout<<"enter three following numbers"<<endl;
    cin>>num>>num1>>num2;
    if(num>num1&&num>num2){
    cout<<num<<"is greater number"<<endl;
    }
     if(num1>num&&num1>num2){
        cout<<num1<<"is a greater number"<<endl;
    }
     if(num2>num&&num2>num1){
        cout<<num2<<"is a greater number"<<endl;
    }
    system("pause");
}
int checknumber(){
    int number;
    cout<<"enter the  numbers to check sign"<<endl;
 cin>>number;
    if(number>0){
        cout<<number <<"is poistive number"<<endl;
    }
    if(number<0){
        cout<<number <<"is a negative number"<<endl;
    }
    else{
        cout<<"this number is equal to zero"<<endl;
    }
    system("pause");
}
int absolutevalue(){
    int value;
    cout<<"enter the value"<<endl;
    cin>>value;
    if(value<0){
        value = -(value);
        cout<<"absolute value" << value;
    }
    else{
        cout<<"absolute value" <<value;
    }
}

int main(){
//age program is there
//age();
//leapyear function
//  leapyear();
//greater number
//greaternumber();
//check sign of number
// checknumber();
absolutevalue();
}