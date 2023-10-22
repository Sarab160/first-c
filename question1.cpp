#include<iostream>
#include<math.h>
using namespace std;
//program to sum multiply and differnce between the two values
int main(){
    float num1,num2;
    cout<<"Enter first numner"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"divison :"<<endl;
    float divison = num1 / num2;
    cout<<divison<<endl;
    cout<<"multiply:"<<endl;
    float multiply = num1 * num2;
    cout<<multiply<<endl;
    cout<<"differnce :"<<endl;
    float differnce =  num1 - num2;
    cout<<differnce<<endl;
    system("pause");
    return 0;
    

}