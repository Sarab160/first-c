#include<iostream>
using namespace std;
//AREA OF SEMICIRCLE FIND
int main(){
    cout<<"Area of semicircle\n";
    float pi = 3.14159;
    cout<<"enter value of radius\n ";
    float radius;
    cin>>radius;
    cout<<"FORMULA OF AREA OF SEMICIRCLE\n";
    //formula of area of semicircle
    float areaOfsemicircle = pi * radius*radius/2;
    cout<<"area of semicircle is = " <<areaOfsemicircle,"\n";
    system("pause");
    return 0;
}