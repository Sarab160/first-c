#include<iostream>
#include<math.h>
using namespace std;
//CYLINDER
int main(){
    cout<<"FIND AREA OF CYLINDER\n";
    float radius;
    cout<<"enter the radius\n";
    cin>>radius;
    float height;
    cout<<"enter the height\n";
    cin>>height;
    float pi = 3.14159;
    cout<<"VOLUME OF cylinder";
    float volumeofcylinder = pi*radius*radius*height;
    cout<<"VOLUME OF CYLINDER = "<<volumeofcylinder;

    system("pause");
    return 0;
}