#include<iostream>
using namespace std;
//AREA OF RHOMBUSE FIND
int main(){
    cout<<"Area of rhombus\n";
    float diagonal1;
    cout<<"enter the diagonal1:\n";
    cin>>diagonal1;
    float diagonal2;
    cout<<"enter value of diagonla2:\n";
    cin>>diagonal2;
    cout<<"FORMULA OF AREA OF RHOMBUS\n";
    float areaOfrhombus = diagonal1 * diagonal2 /2;
    cout<<"area of rhombus is = " <<areaOfrhombus,"\n";
    
    system("pause");
    return 0;
}