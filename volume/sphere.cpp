#include<iostream>
#include<math.h>
using namespace std;
//SPHERE
int main(){
    cout<<"FIND AREA OF SPHERE\n";
    float radius;
    cout<<"enter the radius\n";
    cin>>radius;
    float pi = 3.14159;
    cout<<"VOLUME OF SPHERE";
    float cubeofradius = radius*radius*radius;
    float volumeofsphere = pi * cubeofradius * 4/3;
    cout<<"VOLUME OF SPHERE = "<<volumeofsphere;

    system("pause");
    return 0;
}