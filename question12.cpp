#include<iostream>
#include<cmath>
using namespace std;
//area equal to that circle
int main(){
    float radius;
    cout<<"ENTER RADIUS OF CIRCLE"<<endl;
    cin>>radius;
    float areaofcircle = 3.14* radius*radius;
    float lengthofsquare = sqrt(areaofcircle);
    cout<<"LENGTH OF SIDE OF SQUARE = "<<lengthofsquare<<endl;
    system("pause");
    return 0;
}