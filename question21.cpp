#include<iostream>
#include<cmath>
using namespace std;
//find area by if else statement
int main(){
    string shapename;
    cout<<"Enter the shape which yu find area"<<endl;
    cin>>shapename;
    if(shapename=="circle"){
        cout<<"Area of circle"<<endl;
    float pi = 3.14159;
    cout<<"enter the radius of circle"<<endl;
    float radius;
    cin>>radius;
    cout<<"FORMULA OF AREA OF CIRCLE"<<endl;
    float areaOfcircle = pi * radius*radius;
    cout<<"area of circle is = " <<areaOfcircle<<endl;
    system("pause");
    }
    else if(shapename=="square"){
         cout<<"Area of square"<<endl;
    float length;
    cout<<"enter the length"<<endl;
    cin>>length;

    cout<<"FORMULA OF AREA OF SQUARE"<<endl;
    float areaOfsquare = length * length;
    cout<<"area of square is = " <<areaOfsquare<<endl;
    system("pause");
    }
    else if(shapename=="sphere"){
        float radius;
        cout<<"enter the radius"<<endl;
        cin>>radius;
        float pi = 3.14;
        float areaofsphere = 4 * pi * radius * radius;
        cout<<"Area of sphere = "<<areaofsphere<<endl;
        system("pause");
    }
    else{
        cout<<"enter correct name";
    }

}