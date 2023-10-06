#include<iostream>
#include<math.h>
using namespace std;
//RECTANGULAR PRISM
int main(){
    cout<<"FIND AREA OF RECTANGULAR PRISM\n";
    float length;
    cout<<"enter the length\n";
    cin>>length;
    float width;
    cout<<"enter the width\n";
    cin>>width;
    float height;
    cout<<"enter the HEIGHT\n";
    cin>>height;
    cout<<"VOLUME OF RECTANGULAR PRISM";
    float volumeofprism = length*width*height;
    cout<<"VOLUME OF RECTANGULAR PRISM = "<<volumeofprism;

    system("pause");
    return 0;
}