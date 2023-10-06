#include<iostream>
#include<math.h>
using namespace std;
//AREA OF CONE FIND
int main(){
    cout<<"Area of cone\n";
    float pi = 3.14159;
    cout<<"enter the value of height\n";
    float height;
    cin>>height;
    cout<<"enter the value of radius\n";
    float radius;
    cin>>radius;
    float slantheight = sqrt(radius * radius + height*height);
     float surfaceArea = pi * radius * (radius + slantheight);
     cout<<"THE AREA OF CONE = " <<surfaceArea;
    
    system("pause");

    return 0;
}
//
//πr 2+πr×slant height