#include<iostream>
#include<math.h>
using namespace std;
//find third angle of triangle
int main(){
    float angle1,angle2,angle3;
    cout<<"ENTER ANGLE 1"<<endl;
    cin>>angle1;
    cout<<"ENTER ANGLE 2"<<endl;
    cin>>angle2;
    angle3 = 180 -angle1-angle2;
    cout<<"THIRD ANGLE = "<<angle3<<endl;
    system("pause");
    return 0;
}
