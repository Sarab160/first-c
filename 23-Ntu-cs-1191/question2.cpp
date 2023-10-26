#include<iostream>
using namespace std;
int main(){
    cout<<"=============================================="<<endl;
    float mass ,height;
    cout<<"| Enter the mass of the object(Kg):         |"<<endl;
    cin>>mass;
    cout<<"| > "<<mass<<"                                      |"<<endl;
    cout<<"| Enter the height (m):                     |"<<endl;
    cin>>height;
    cout<<"| > "<<height<<"                                      |"<<endl;
    float height1 = height*height*height;
    float potentialenergy = mass*height1*9.8;
    cout<<"| calculated potential Energy: "<<potentialenergy<<"J |"<<endl;
    cout<<"=============================================="<<endl;
    return 0;
    } 