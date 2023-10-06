#include<iostream>
#include<math.h>
using namespace std;
//CONE
int main(){
    cout<<"FIND AREA OF CONE\n";
    float radius;
    cout<<"enter the radius\n";
    cin>>radius;
    float pi = 3.14159;
    float height;
    cout<<"enter the HEIGHT\n";
    cin>>height;
    float squareofradius = radius * radius ;
    cout<<"VOLUME OF CONE";
    float volumeofcone = pi * squareofradius * height/3;
    cout<<"VOLUME OF CONE = "<<volumeofcone;

    system("pause");
    return 0;
}