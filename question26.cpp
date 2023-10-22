#include<iostream>
#include<cmath>
using namespace std;
//equal number
int main(){
    int num1,num2;
    cout<<"enter num1"<<endl;
    cin>>num1;
    cout<<"enter num2"<<endl;
    cin>>num2;
    if(num1==num2){
        int number = num1+num2;
        number = number*number;
        cout<<"sum of square of two integers "<<number<<endl;
    }
    else{
        int number = num1+num2;
        number = number*number*number;
        cout<<"sum of cube "<<number<<endl;
    }
    system ("pause");
    return 0 ;
}