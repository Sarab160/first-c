#include<iostream>
using namespace std;
int main(){
    float length;
    cout<<"Enter the length in meter"<<endl;
    cin>>length;
    double lengthfeet = length * 3.28084;
    cout<<"Length in feet is : "<<lengthfeet<<endl;
    system("pause");
    return 0;
}