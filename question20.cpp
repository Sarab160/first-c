#include<iostream>
#include<cmath>
using namespace std;
//SPHERE
int main(){
    cout<<"FIND AREA OF SPHERE\n";
    float radius;
    cout<<"enter the radius\n";
    cin>>radius;
    float pi = 3.14159;
    float cubeofradius = radius*radius*radius;
    float volumeofsphere = pi * cubeofradius * 4/3;
    cout<<"VOLUME OF SPHERE = "<<volumeofsphere<<endl;
    system("pause");
    return 0;
}