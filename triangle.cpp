#include<iostream>
using namespace std;
//AREA OF TRIANGLE FIND
int main(){
    cout<<"Area of triangle\n";
    float base,height;
    cout<<'enter the value of base\n';
    cin>>base;
    cout<<"enter the height\n";
    cin>>height;

    cout<<"FORMULA OF AREA OF TRIANGLE\n";
    float areaOftriangle = 0.5 * base * height;
    cout<<"area of triangle is = " <<areaOftriangle ;
    
        system("pause");
    return 0;
}
