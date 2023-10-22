#include<iostream>
#include<cmath>
using namespace std;
//return remainders from the 2
int main (){
    int number1,number2;
    cout<<"ENTER NUMBER 1"<<endl;
    cin>>number1;
    cout<<"ENTER NUMBER 2"<<endl;
    cin>>number2;
    int remainder1 = number1%2;
    cout<<"NUMBER 1 REMAINDER = "<<remainder1<<endl;
    int remainder2 = number2%2;
    cout<<"NUMBER 2 REMAINDER = "<<remainder2<<endl;
    system("pause");
    return 0;
    }