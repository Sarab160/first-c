#include<iostream>
#include<math.h>
using namespace std;
//PYRAMID
int main(){
    cout<<"FIND AREA OF PYRAMID\n";
    float length;
    cout<<"enter the length\n";
    cin>>length;
    float width;
    cout<<"enter the width\n";
    cin>>width;
    float height;
    cout<<"enter the HEIGHT\n";
    cin>>height;
    cout<<"VOLUME OF PYRAMID";
    float volumeofpyramid = length*width*height/3;
    cout<<"VOLUME OF PYRAMID = "<<volumeofpyramid;

    system("pause");
    return 0;
}