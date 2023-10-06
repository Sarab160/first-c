#include<iostream>
#include<math.h>
using namespace std;
// fin volume of cube
int main(){
    cout<<"FIND VOLUME OF CUBE\n";
    float length;
    cout<<"enter the length\n";
    cin>>length;
    float volumeofcube = length * length * length;
    cout<<"volume of cube = "<<volumeofcube;

    system("pause");
    return 0;
}