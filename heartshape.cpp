#include<iostream>
#include<math.h>
using namespace std;
//AREA OF HEARTSHAPE FIND
int main(){
    cout<<"Area of heartshape\n";
    float pi = 3.14159;
    cout<<"enter the radius\n";
    float radius;
    cin>>radius;
    cout<<"enter the value of side\n";
    float side;
    cin>>side;
    float square = radius * radius;
    float data1 = pi * square * 1/2;
    float data2 = side * side;
    float data3 = (data1 *2)+ data2;

    cout<<"area of heart shape = "<< data3;
    system("pause");
    return 0;
}